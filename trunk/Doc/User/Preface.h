// -!- c++ -!- //////////////////////////////////////////////////////////////
//
//  System        : 
//  Module        : 
//  Object Name   : $RCSfile$
//  Revision      : $Revision$
//  Date          : $Date$
//  Author        : $Author$
//  Created By    : Robert Heller
//  Created       : Thu Apr 10 15:29:56 2014
//  Last Modified : <140415.1057>
//
//  Description	
//
//  Notes
//
//  History
//	
/////////////////////////////////////////////////////////////////////////////
//
//  Copyright (c) 2014 Deepwoods Software.
// 
//  All Rights Reserved.
// 
// This  document  may  not, in  whole  or in  part, be  copied,  photocopied,
// reproduced,  translated,  or  reduced to any  electronic  medium or machine
// readable form without prior written consent from Deepwoods Software.
//
//////////////////////////////////////////////////////////////////////////////

#ifndef __PREFACE_H
#define __PREFACE_H

/** @mainpage Preface
 * This is the user manual for the Model Railroad system.  It is a ``work
 * in progress'' and I will be adding chapters as I write the various
 * self-contained ``main programs''.
 * @anchor toc
 * @htmlonly
 * <div class="contents">
 * <div class="textblock"><ol type="1">
 * <li><a class="el" href="Introduction.html">Introduction</a>
 * </li>
 * <li><a class="el" href="univtest.html">Universal Test Program Reference</a><ol type="1">
 * <li><a class="el" href="univtest.html#maingui">Main GUI Elements</a><ol type="1">
 * <li><a class="el" href="univtest.html#mainwindow">Main Window</a></li>
 * <li><a class="el" href="univtest.html#openport">Open New Port</a></li></ol></li>
 * <li><a class="el" href="univtest.html#tests">Tests</a><ol type="1">
 * <li><a class="el" href="univtest.html#testout">Test Output Card</a></li>
 * <li><a class="el" href="univtest.html#wraparound">Wraparound Test</a></li></ol></li></ol>
 * </li>
 * <li><a class="el" href="azatrax.html">Azatrax Test Programs Reference</a><ol type="1">
 * <li><a class="el" href="azatrax.html#mrdtest">MRD Test Program Reference</a><ol type="1">
 * <li><a class="el" href="azatrax.html#mrdtest_synopsis">Synopsis</a></li>
 * <li><a class="el" href="azatrax.html#mrdtest_gui">Main GUI Screen</a></li>
 * </ol></li>
 * <li><a class="el" href="azatrax.html#mrdsensorloop">MRD Sensor Loop Reference</a><ol type="1">
 * <li><a class="el" href="azatrax.html#mrdsensorloop_synopsis">Synopsis</a></li>
 * <li><a class="el" href="azatrax.html#mrdsensorloop_gui">Main GUI Screen</a></li>
 * </ol></li>
 * <li><a class="el" href="azatrax.html#sr4test">SR4 Test Program Reference</a><ol type="1">
 * <li><a class="el" href="azatrax.html#sr4test_synopsis">Synopsis</a></li>
 * <li><a class="el" href="azatrax.html#sr4test_gui">Main GUI Screen</a></li>
 * </ol></li>
 * <li><a class="el" href="azatrax.html#sl2test">SL2 Test Program Reference</a><ol type="1">
 * <li><a class="el" href="azatrax.html#sl2test_synopsis">Synopsis</a></li>
 * <li><a class="el" href="azatrax.html#sl2test_gui">Main GUI Screen</a></li>
 * </ol></li>
 * <li><a class="el" href="azatrax.html#azatraxdevicemap">Azatrax Device Map Reference</a><ol type="1">
 * <li><a class="el" href="azatrax.html#azatraxdevicemap_synopsis">Synopsis</a></li>
 * <li><a class="el" href="azatrax.html#azatraxdevicemap_gui">Main GUI Screen</a></li>
 * </ol></li>
 * </ol></li>
 * <li><a class="el" href="xpressnetthrot.html">XPressNet Throttle</a><ol type="1">
 * <li><a class="el" href="xpressnetthrot.html#xpressnetthrot_maingui">Main GUI</a></li>
 * <li><a class="el" href="xpressnetthrot.html#xpressnetthrot_progmode">Programming Mode</a></li>
 * <li><a class="el" href="xpressnetthrot.html#xpressnetthrot_openport">Open Port</a></li>
 * </ol></li>
 * <li><a class="el" href="genericthrot.html">Generic Throttle</a><ol type="1">
 * <li><a class="el" href="genericthrot.html#genericthrot_maingui">Main GUI</a></li>
 * <li><a class="el" href="genericthrot.html#genericthrot_progmode">Programming Mode</a></li>
 * </ol></li>
 * <li><a class="el" href="timetable_Tutorial.html">Time Table (V2) Tutorial</a><ol type="1">
 * <li><a class="el" href="timetable_Tutorial.html#timetable_tut_crenew">Creating a new time table</a><ol type="1">
 * <li><a class="el" href="timetable_Tutorial.html#timetable_tut_crestat">Creating stations</a></li>
 * <li><a class="el" href="timetable_Tutorial.html#timetable_tut_crecab">Creating cabs</a></li>
 * </ol></li>
 * <li><a class="el" href="timetable_Tutorial.html#timetable_tut_cretrain">Creating trains</a></li>
 * <li><a class="el" href="timetable_Tutorial.html#timetable_tut_print">Printing a time table</a></li>
 * </ol></li>
 * <li><a class="el" href="timetable_ref.html">Time Table (V2) Reference</a><ol type="1">
 * <li><a class="el" href="timetable_ref.html#timetable_ref_cli">Command Line Usage</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_maingui">Layout of the Main GUI</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_createnewtimetable">Creating a New Time Table</a><ol type="1">
 * <li><a class="el" href="timetable_ref.html#timetable_ref_CreateAllStationsDialog">Creating the station stops for a new time table</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_CreateAllCabsDialog">Create All Cabs Dialog</a></li>
 * </ol></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_loadexistingtimetable">Loading an Exiting Time Table File</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_savingatimetablefile">Saving a Time Table File</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_addingtrains">Adding Trains</a><ol type="1">
 * <li><a class="el" href="timetable_ref.html#timetable_ref_CreateNewTrainDialog">Create New Train Dialog</a></li>
 * </ol></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_DeletingTrains">Deleting Trains</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_LinkingUnlinkingDuplicate">Linking and Unlinking Duplicate Stations</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_AddingStationStorage">Adding Station Storage Tracks</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_AddingCabs">Adding Cabs</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_HandlingNotes">Handling Notes</a><ol type="1">
 * <li><a class="el" href="timetable_ref.html#timetable_ref_CreatingNewNotes">Creating New Notes and Editing Existing Notes</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_AddingRemovingNotes">Adding and Removing a Notes To Trains</a></li>
 * </ol></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_PrintingTimeTable">Printing a Time Table</a><ol type="1">
 * <li><a class="el" href="timetable_ref.html#timetable_ref_PrintDialog">Print Dialog</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_PrintConfigurationDialog">Print Configuration Dialog</a></li>
 * </ol></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_Exiting">Exiting From the Program</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_SelectOneTrainDialog">Select One Train Dialog</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_ViewMenu">The View Menu</a><ol type="1">
 * <li><a class="el" href="timetable_ref.html#timetable_ref_ViewingTrains">Trains</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_ViewingStations">Stations</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_ViewingNotes">Notes</a></li>
 * </ol></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_SystemConfiguration">System Configuration</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_AddCabDialog">Add Cab Dialog</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_AddRemoveNoteDialog">Add Remove Note Dialog</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_EditNoteDialog">Edit Note Dialog</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_EditSystemConfigurationDialog">Edit System Configuration</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_EditTrainDialog">Edit Train Dialog</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_SelectAStorageTrackName">Select A Storage Track Name</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_SelectOneNoteDialog">Select One Note Dialog</a></li>
 * <li><a class="el" href="timetable_ref.html#timetable_ref_SelectOneStationDialog">Select One Station Dialog</a></li>
 * </ol></li>
 * <li><a class="el" href="fcf_Tutorial.html">Freight Car Forwarder (V2) Tutorial</a>
 * </li>
 * <li><a class="el" href="fcf_Reference.html">Freight Car Forwarder (V2) Reference</a>
 * </li>
 * <li><a class="el" href="rest_Reference.html">Resistor Program Reference</a>
 * </li>
 * <li><a class="el" href="locopull_Reference.html">LocoPull Program Reference</a>
 * </li>
 * <li><a class="el" href="camera_Reference.html">Camera Programs Reference</a>
 * </li>
 * <li><a class="el" href="dispatcher_Tutorial.html">Dispatcher Tutorial</a>
 * </li>
 * <li><a class="el" href="dispatcher_Reference.html">Dispatcher Reference</a>
 * </li>
 * <li><a class="el" href="dispatcher_Examples.html">Dispatcher Examples</a>
 * </li>
 * <li><a class="el" href="help.html">Help</a>
 * </li>
 * <li><a class="el" href="Version.html">Version</a>
 * </li>
 * <li><a class="el" href="Copying.html">GNU GENERAL PUBLIC LICENSE</a>
 * </li>
 * </ol></div></div> 
 * @endhtmlonly
 */


#endif // __PREFACE_H

