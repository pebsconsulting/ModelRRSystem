/* 
 * ------------------------------------------------------------------
 * IntegerList.h - Integer List
 * Created by Robert Heller on Sat Sep 28 18:02:12 2002
 * ------------------------------------------------------------------
 * Modification History: $Log$
 * Modification History: Revision 1.1  2007/02/01 20:00:51  heller
 * Modification History: Lock down for Release 2.1.7
 * Modification History:
 * Modification History: Revision 1.2  2005/11/14 20:28:44  heller
 * Modification History: Nov 14, 2005 Lockdown
 * Modification History:
 * Modification History: Revision 1.1  2004/06/26 13:53:37  heller
 * Modification History: Add in additional files
 * Modification History:
 * Modification History: Revision 1.1  2002/07/28 14:03:50  heller
 * Modification History: Add it copyright notice headers
 * Modification History:
 * ------------------------------------------------------------------
 * Contents:
 * ------------------------------------------------------------------
 *  
 *     Model RR System, Version 2
 *     Copyright (C) 1994,1995,2002  Robert Heller D/B/A Deepwoods Software
 * 			51 Locke Hill Road
 * 			Wendell, MA 01379-9728
 * 
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 * 
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 * 
 *     You should have received a copy of the GNU General Public License
 *     along with this program; if not, write to the Free Software
 *     Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 * 
 *  
 */

#ifndef _INTEGERLIST_H_
#define _INTEGERLIST_H_

class TurnoutBodyElt;

/**  
  The {\bf IntegerList} class implements a linked list of integers,
  used for turnout route lists.
  */

class IntegerList {
private:
	///  The current element.
	int iElt;
	///  The pointer to the next element.
	IntegerList *next;
public:
	///  Base constructor.
	IntegerList(int car=0, IntegerList *cdr=NULL)
		{
			iElt = car;
			next = cdr;
		}
	///  Add an element to the {\em end} of the list.
	static inline IntegerList* IntAppend(IntegerList *head, int newTail)
		{
			IntegerList **prev;
			if (head == NULL) return new IntegerList(newTail,NULL);
			for (prev = &head->next; *prev != NULL; prev = &((*prev)->next) ) ;
			*prev =  new IntegerList(newTail,NULL);
			return head;
		}
	///  Free up used memory.
	static inline void CleanUpIntegerList(IntegerList *list)
		{
			IntegerList *ni;
			for (;list != NULL;list = ni) {
				ni = list->next;
				delete list;
			}
		}
	///  Output operator.
	friend inline ostream& operator << (ostream& stream,IntegerList *list)
		{
			stream << list->iElt;
			if (list->next != NULL) stream << " " << list->next;
			return stream;
		}
	///  Element accessor.
	int Element() const {return iElt;}
	///  Next pointer accessor.
	const IntegerList* Next() const {return next;}
	friend class TurnoutBodyElt;
};


#endif // _INTEGERLIST_H_

