/*----- PROTECTED REGION ID(VacuumGuage.h) ENABLED START -----*/
//=============================================================================
//
// file :        VacuumGuage.h
//
// description : Include file for the VacuumGuage class
//
// project :     Prevac training
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef VacuumGuage_H
#define VacuumGuage_H

#include <tango.h>


/*----- PROTECTED REGION END -----*/	//	VacuumGuage.h

/**
 *  VacuumGuage class description:
 *    
 */

namespace VacuumGuage_ns
{
/*----- PROTECTED REGION ID(VacuumGuage::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	VacuumGuage::Additional Class Declarations

class VacuumGuage : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(VacuumGuage::Data Members) ENABLED START -----*/

//	Add your own data members

/*----- PROTECTED REGION END -----*/	//	VacuumGuage::Data Members


//	Attribute data members
public:
	Tango::DevDouble	*attr_Pressure_read;
	Tango::DevDouble	*attr_SimulatedPressureValue_read;

//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	VacuumGuage(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	VacuumGuage(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	VacuumGuage(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */	
	~VacuumGuage() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : VacuumGuage::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);
	//--------------------------------------------------------
	/*
	 *	Method      : VacuumGuage::write_attr_hardware()
	 *	Description : Hardware writing for attributes.
	 */
	//--------------------------------------------------------
	virtual void write_attr_hardware(vector<long> &attr_list);

/**
 *	Attribute Pressure related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_Pressure(Tango::Attribute &attr);
	virtual bool is_Pressure_allowed(Tango::AttReqType type);
/**
 *	Attribute SimulatedPressureValue related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_SimulatedPressureValue(Tango::Attribute &attr);
	virtual void write_SimulatedPressureValue(Tango::WAttribute &attr);
	virtual bool is_SimulatedPressureValue_allowed(Tango::AttReqType type);


	//--------------------------------------------------------
	/**
	 *	Method      : VacuumGuage::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();



//	Command related methods
public:
	/**
	 *	Command On related method
	 *	Description: Switch the guage one
	 *
	 */
	virtual void on();
	virtual bool is_On_allowed(const CORBA::Any &any);
	/**
	 *	Command Off related method
	 *	Description: Switch the guage off
	 *
	 */
	virtual void off();
	virtual bool is_Off_allowed(const CORBA::Any &any);


/*----- PROTECTED REGION ID(VacuumGuage::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes

/*----- PROTECTED REGION END -----*/	//	VacuumGuage::Additional Method prototypes
};

/*----- PROTECTED REGION ID(VacuumGuage::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	VacuumGuage::Additional Classes Definitions

}	//	End of namespace

#endif   //	VacuumGuage_H