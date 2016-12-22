// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "QMMMFF.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/booleanproperty.h"

#include "SireError/errors.h"

#include "SireFF/energytable.h"

#include "SireFF/errors.h"

#include "SireFF/fieldtable.h"

#include "SireFF/forcetable.h"

#include "SireFF/potentialtable.h"

#include "SireMM/cljprobe.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "qmmmff.h"

#include "qmprogram.h"

#include <QDebug>

#include "qmmmff.h"

Squire::QMMMFF __copy__(const Squire::QMMMFF &other){ return Squire::QMMMFF(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_QMMMFF_class(){

    { //::Squire::QMMMFF
        typedef bp::class_< Squire::QMMMFF, bp::bases< SireFF::FF3D, SireFF::G2FF, SireFF::FF, SireMol::MolGroupsBase, SireBase::Property > > QMMMFF_exposer_t;
        QMMMFF_exposer_t QMMMFF_exposer = QMMMFF_exposer_t( "QMMMFF", "This is a forcefield that implements QMMM using electrostatic\nembedding. This forcefield calculates the energy of a QM molecule\nthat is surrounded by a collection of MM point charges\n\nAuthor: Christopher Woods\n", bp::init< >("Construct an empty, unnamed QMMM forcefield") );
        bp::scope QMMMFF_scope( QMMMFF_exposer );
        QMMMFF_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "Construct an empty, named QMMM forcefield") );
        QMMMFF_exposer.def( bp::init< Squire::QMMMFF const & >(( bp::arg("other") ), "Copy constructor") );
        { //::Squire::QMMMFF::chargeScalingFactor
        
            typedef double ( ::Squire::QMMMFF::*chargeScalingFactor_function_type)(  ) const;
            chargeScalingFactor_function_type chargeScalingFactor_function_value( &::Squire::QMMMFF::chargeScalingFactor );
            
            QMMMFF_exposer.def( 
                "chargeScalingFactor"
                , chargeScalingFactor_function_value
                , "Return the amount by which the MM charges are scaled in the QMMM interaction" );
        
        }
        { //::Squire::QMMMFF::components
        
            typedef ::Squire::QMMMFF::Components const & ( ::Squire::QMMMFF::*components_function_type)(  ) const;
            components_function_type components_function_value( &::Squire::QMMMFF::components );
            
            QMMMFF_exposer.def( 
                "components"
                , components_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the symbols representing the energy components of this forcefield" );
        
        }
        { //::Squire::QMMMFF::containsProperty
        
            typedef bool ( ::Squire::QMMMFF::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::Squire::QMMMFF::containsProperty );
            
            QMMMFF_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") )
                , "Return whether or not this forcefield contains a property\ncalled name" );
        
        }
        { //::Squire::QMMMFF::energy
        
            typedef void ( ::Squire::QMMMFF::*energy_function_type)( ::SireFF::EnergyTable &,double ) ;
            energy_function_type energy_function_value( &::Squire::QMMMFF::energy );
            
            QMMMFF_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("energytable"), bp::arg("scale_energy")=1 )
                , "" );
        
        }
        { //::Squire::QMMMFF::energy
        
            typedef void ( ::Squire::QMMMFF::*energy_function_type)( ::SireFF::EnergyTable &,::SireCAS::Symbol const &,double ) ;
            energy_function_type energy_function_value( &::Squire::QMMMFF::energy );
            
            QMMMFF_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("energytable"), bp::arg("symbol"), bp::arg("scale_energy")=1 )
                , "" );
        
        }
        { //::Squire::QMMMFF::energyCommandFile
        
            typedef ::QString ( ::Squire::QMMMFF::*energyCommandFile_function_type)(  ) const;
            energyCommandFile_function_type energyCommandFile_function_value( &::Squire::QMMMFF::energyCommandFile );
            
            QMMMFF_exposer.def( 
                "energyCommandFile"
                , energyCommandFile_function_value
                , "Return the command file that would be used to calculate the energy\nof the molecules in this forcefield" );
        
        }
        { //::Squire::QMMMFF::field
        
            typedef void ( ::Squire::QMMMFF::*field_function_type)( ::SireFF::FieldTable &,double ) ;
            field_function_type field_function_value( &::Squire::QMMMFF::field );
            
            QMMMFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("scale_field")=1 )
                , "Calculate the field from this forcefield in the passed fieldtable" );
        
        }
        { //::Squire::QMMMFF::field
        
            typedef void ( ::Squire::QMMMFF::*field_function_type)( ::SireFF::FieldTable &,::SireCAS::Symbol const &,double ) ;
            field_function_type field_function_value( &::Squire::QMMMFF::field );
            
            QMMMFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("component"), bp::arg("scale_field")=1 )
                , "Calculate the field from this forcefield in the passed fieldtable" );
        
        }
        { //::Squire::QMMMFF::field
        
            typedef void ( ::Squire::QMMMFF::*field_function_type)( ::SireFF::FieldTable &,::SireFF::Probe const &,double ) ;
            field_function_type field_function_value( &::Squire::QMMMFF::field );
            
            QMMMFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("probe"), bp::arg("scale_field")=1 )
                , "Calculate the field from this forcefield in the passed fieldtable" );
        
        }
        { //::Squire::QMMMFF::field
        
            typedef void ( ::Squire::QMMMFF::*field_function_type)( ::SireFF::FieldTable &,::SireCAS::Symbol const &,::SireFF::Probe const &,double ) ;
            field_function_type field_function_value( &::Squire::QMMMFF::field );
            
            QMMMFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("component"), bp::arg("probe"), bp::arg("scale_field")=1 )
                , "Calculate the field from this forcefield in the passed fieldtable" );
        
        }
        { //::Squire::QMMMFF::fieldCommandFile
        
            typedef ::QString ( ::Squire::QMMMFF::*fieldCommandFile_function_type)( ::SireFF::FieldTable const & ) const;
            fieldCommandFile_function_type fieldCommandFile_function_value( &::Squire::QMMMFF::fieldCommandFile );
            
            QMMMFF_exposer.def( 
                "fieldCommandFile"
                , fieldCommandFile_function_value
                , ( bp::arg("fieldtable") )
                , "Return the command file that would be used to calculate the fields\nof the molecules in this forcefield" );
        
        }
        { //::Squire::QMMMFF::fieldCommandFile
        
            typedef ::QString ( ::Squire::QMMMFF::*fieldCommandFile_function_type)( ::SireFF::FieldTable const &,::SireFF::Probe const & ) const;
            fieldCommandFile_function_type fieldCommandFile_function_value( &::Squire::QMMMFF::fieldCommandFile );
            
            QMMMFF_exposer.def( 
                "fieldCommandFile"
                , fieldCommandFile_function_value
                , ( bp::arg("fieldtable"), bp::arg("probe") )
                , "Return the command file that would be used to calculate the fields\nof the molecules in this forcefield" );
        
        }
        { //::Squire::QMMMFF::force
        
            typedef void ( ::Squire::QMMMFF::*force_function_type)( ::SireFF::ForceTable &,double ) ;
            force_function_type force_function_value( &::Squire::QMMMFF::force );
            
            QMMMFF_exposer.def( 
                "force"
                , force_function_value
                , ( bp::arg("forcetable"), bp::arg("scale_force")=1 )
                , "Calculate the QMMM forces on the molecules in this forcefield\nand add the results to the forces for the molecules contained\nin the table forcetable - this scales the forces by\nthe optional scale_force" );
        
        }
        { //::Squire::QMMMFF::force
        
            typedef void ( ::Squire::QMMMFF::*force_function_type)( ::SireFF::ForceTable &,::SireCAS::Symbol const &,double ) ;
            force_function_type force_function_value( &::Squire::QMMMFF::force );
            
            QMMMFF_exposer.def( 
                "force"
                , force_function_value
                , ( bp::arg("forcetable"), bp::arg("symbol"), bp::arg("scale_force")=1 )
                , "Calculate the QMMM forces on the molecules in this forcefield\nand add the results to the forces for the molecules contained\nin the table forcetable - this scales the forces by\nthe optional scale_force" );
        
        }
        { //::Squire::QMMMFF::forceCommandFile
        
            typedef ::QString ( ::Squire::QMMMFF::*forceCommandFile_function_type)( ::SireFF::ForceTable const & ) const;
            forceCommandFile_function_type forceCommandFile_function_value( &::Squire::QMMMFF::forceCommandFile );
            
            QMMMFF_exposer.def( 
                "forceCommandFile"
                , forceCommandFile_function_value
                , ( bp::arg("forcetable") )
                , "Return the command file that would be used to calculate the forces\non the molecules in this forcefield" );
        
        }
        { //::Squire::QMMMFF::isIntermolecularOnly
        
            typedef bool ( ::Squire::QMMMFF::*isIntermolecularOnly_function_type)(  ) const;
            isIntermolecularOnly_function_type isIntermolecularOnly_function_value( &::Squire::QMMMFF::isIntermolecularOnly );
            
            QMMMFF_exposer.def( 
                "isIntermolecularOnly"
                , isIntermolecularOnly_function_value
                , "Return whether or not we only calculate the intermolecular energy\n(energy between the QM and MM atoms)" );
        
        }
        { //::Squire::QMMMFF::mustNowRecalculateFromScratch
        
            typedef void ( ::Squire::QMMMFF::*mustNowRecalculateFromScratch_function_type)(  ) ;
            mustNowRecalculateFromScratch_function_type mustNowRecalculateFromScratch_function_value( &::Squire::QMMMFF::mustNowRecalculateFromScratch );
            
            QMMMFF_exposer.def( 
                "mustNowRecalculateFromScratch"
                , mustNowRecalculateFromScratch_function_value
                , "Signal that this forcefield must recalculate the energy from scratch" );
        
        }
        QMMMFF_exposer.def( bp::self != bp::self );
        { //::Squire::QMMMFF::operator=
        
            typedef ::Squire::QMMMFF & ( ::Squire::QMMMFF::*assign_function_type)( ::Squire::QMMMFF const & ) ;
            assign_function_type assign_function_value( &::Squire::QMMMFF::operator= );
            
            QMMMFF_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        QMMMFF_exposer.def( bp::self == bp::self );
        { //::Squire::QMMMFF::parameters
        
            typedef ::Squire::QMMMFF::Parameters ( ::Squire::QMMMFF::*parameters_function_type)(  ) const;
            parameters_function_type parameters_function_value( &::Squire::QMMMFF::parameters );
            
            QMMMFF_exposer.def( 
                "parameters"
                , parameters_function_value
                , "" );
        
        }
        { //::Squire::QMMMFF::potential
        
            typedef void ( ::Squire::QMMMFF::*potential_function_type)( ::SireFF::PotentialTable &,double ) ;
            potential_function_type potential_function_value( &::Squire::QMMMFF::potential );
            
            QMMMFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("scale_potential")=1 )
                , "Calculate the potential from this forcefield in the passed potentialtable" );
        
        }
        { //::Squire::QMMMFF::potential
        
            typedef void ( ::Squire::QMMMFF::*potential_function_type)( ::SireFF::PotentialTable &,::SireCAS::Symbol const &,double ) ;
            potential_function_type potential_function_value( &::Squire::QMMMFF::potential );
            
            QMMMFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("component"), bp::arg("scale_potential")=1 )
                , "Calculate the potential from this forcefield in the passed potentialtable" );
        
        }
        { //::Squire::QMMMFF::potential
        
            typedef void ( ::Squire::QMMMFF::*potential_function_type)( ::SireFF::PotentialTable &,::SireFF::Probe const &,double ) ;
            potential_function_type potential_function_value( &::Squire::QMMMFF::potential );
            
            QMMMFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("probe"), bp::arg("scale_potential")=1 )
                , "Calculate the potential from this forcefield in the passed potentialtable" );
        
        }
        { //::Squire::QMMMFF::potential
        
            typedef void ( ::Squire::QMMMFF::*potential_function_type)( ::SireFF::PotentialTable &,::SireCAS::Symbol const &,::SireFF::Probe const &,double ) ;
            potential_function_type potential_function_value( &::Squire::QMMMFF::potential );
            
            QMMMFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("component"), bp::arg("probe"), bp::arg("scale_potential")=1 )
                , "Calculate the potential from this forcefield in the passed potentialtable" );
        
        }
        { //::Squire::QMMMFF::potentialCommandFile
        
            typedef ::QString ( ::Squire::QMMMFF::*potentialCommandFile_function_type)( ::SireFF::PotentialTable const & ) const;
            potentialCommandFile_function_type potentialCommandFile_function_value( &::Squire::QMMMFF::potentialCommandFile );
            
            QMMMFF_exposer.def( 
                "potentialCommandFile"
                , potentialCommandFile_function_value
                , ( bp::arg("pottable") )
                , "Return the command file that would be used to calculate the potential\nof the molecules in this forcefield" );
        
        }
        { //::Squire::QMMMFF::potentialCommandFile
        
            typedef ::QString ( ::Squire::QMMMFF::*potentialCommandFile_function_type)( ::SireFF::PotentialTable const &,::SireFF::Probe const & ) const;
            potentialCommandFile_function_type potentialCommandFile_function_value( &::Squire::QMMMFF::potentialCommandFile );
            
            QMMMFF_exposer.def( 
                "potentialCommandFile"
                , potentialCommandFile_function_value
                , ( bp::arg("pottable"), bp::arg("probe") )
                , "Return the command file that would be used to calculate the potential\nof the molecules in this forcefield" );
        
        }
        { //::Squire::QMMMFF::properties
        
            typedef ::SireBase::Properties const & ( ::Squire::QMMMFF::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::Squire::QMMMFF::properties );
            
            QMMMFF_exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the properties available in this forcefield (and their values)" );
        
        }
        { //::Squire::QMMMFF::property
        
            typedef ::SireBase::Property const & ( ::Squire::QMMMFF::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::Squire::QMMMFF::property );
            
            QMMMFF_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the value of the property with name name\nThrow: SireBase::missing_property\n" );
        
        }
        { //::Squire::QMMMFF::quantumProgram
        
            typedef ::Squire::QMProgram const & ( ::Squire::QMMMFF::*quantumProgram_function_type)(  ) const;
            quantumProgram_function_type quantumProgram_function_value( &::Squire::QMMMFF::quantumProgram );
            
            QMMMFF_exposer.def( 
                "quantumProgram"
                , quantumProgram_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the QM program that will be used to calculate the\nenergies and forces on the molecules" );
        
        }
        { //::Squire::QMMMFF::setChargeScalingFactor
        
            typedef bool ( ::Squire::QMMMFF::*setChargeScalingFactor_function_type)( double ) ;
            setChargeScalingFactor_function_type setChargeScalingFactor_function_value( &::Squire::QMMMFF::setChargeScalingFactor );
            
            QMMMFF_exposer.def( 
                "setChargeScalingFactor"
                , setChargeScalingFactor_function_value
                , ( bp::arg("scale_factor") )
                , "Set the scaling factor for the MM charges in the QMMM interaction" );
        
        }
        { //::Squire::QMMMFF::setIntermolecularOnly
        
            typedef bool ( ::Squire::QMMMFF::*setIntermolecularOnly_function_type)( bool ) ;
            setIntermolecularOnly_function_type setIntermolecularOnly_function_value( &::Squire::QMMMFF::setIntermolecularOnly );
            
            QMMMFF_exposer.def( 
                "setIntermolecularOnly"
                , setIntermolecularOnly_function_value
                , ( bp::arg("on") )
                , "Set whether or not we only calculate the intermolecular energy\n(energy between the QM and MM atoms)" );
        
        }
        { //::Squire::QMMMFF::setProperty
        
            typedef bool ( ::Squire::QMMMFF::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::Squire::QMMMFF::setProperty );
            
            QMMMFF_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("property") )
                , "Set the property name to the value value\nThrow: SireBase::missing_property\nThrow: SireError::invalid_cast\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::Squire::QMMMFF::setQuantumProgram
        
            typedef bool ( ::Squire::QMMMFF::*setQuantumProgram_function_type)( ::Squire::QMProgram const & ) ;
            setQuantumProgram_function_type setQuantumProgram_function_value( &::Squire::QMMMFF::setQuantumProgram );
            
            QMMMFF_exposer.def( 
                "setQuantumProgram"
                , setQuantumProgram_function_value
                , ( bp::arg("qmprog") )
                , "Set the QM program that will be used to calculate the\nenergies and forces" );
        
        }
        { //::Squire::QMMMFF::setSpace
        
            typedef bool ( ::Squire::QMMMFF::*setSpace_function_type)( ::SireVol::Space const & ) ;
            setSpace_function_type setSpace_function_value( &::Squire::QMMMFF::setSpace );
            
            QMMMFF_exposer.def( 
                "setSpace"
                , setSpace_function_value
                , ( bp::arg("space") )
                , "Set the space within which the QM molecules exist" );
        
        }
        { //::Squire::QMMMFF::setSwitchingFunction
        
            typedef bool ( ::Squire::QMMMFF::*setSwitchingFunction_function_type)( ::SireMM::SwitchingFunction const & ) ;
            setSwitchingFunction_function_type setSwitchingFunction_function_value( &::Squire::QMMMFF::setSwitchingFunction );
            
            QMMMFF_exposer.def( 
                "setSwitchingFunction"
                , setSwitchingFunction_function_value
                , ( bp::arg("switchfunc") )
                , "Set the switching function used to provide the\ncutoff between the QM and MM regions" );
        
        }
        { //::Squire::QMMMFF::setZeroEnergy
        
            typedef bool ( ::Squire::QMMMFF::*setZeroEnergy_function_type)( ::SireUnits::Dimension::MolarEnergy ) ;
            setZeroEnergy_function_type setZeroEnergy_function_value( &::Squire::QMMMFF::setZeroEnergy );
            
            QMMMFF_exposer.def( 
                "setZeroEnergy"
                , setZeroEnergy_function_value
                , ( bp::arg("zero_energy") )
                , "Set the absolute value of the energy which is considered\nas zero (on the relative energy scale used by this potential).\nA relative scale is used so that the QM energy can be shifted\nso that it is comparable to an MM energy" );
        
        }
        { //::Squire::QMMMFF::space
        
            typedef ::SireVol::Space const & ( ::Squire::QMMMFF::*space_function_type)(  ) const;
            space_function_type space_function_value( &::Squire::QMMMFF::space );
            
            QMMMFF_exposer.def( 
                "space"
                , space_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the space within which the QM molecules exist" );
        
        }
        { //::Squire::QMMMFF::switchingFunction
        
            typedef ::SireMM::SwitchingFunction const & ( ::Squire::QMMMFF::*switchingFunction_function_type)(  ) const;
            switchingFunction_function_type switchingFunction_function_value( &::Squire::QMMMFF::switchingFunction );
            
            QMMMFF_exposer.def( 
                "switchingFunction"
                , switchingFunction_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the switching function used to provide the nonbonded cutoff\nbetween the QM and MM regions" );
        
        }
        { //::Squire::QMMMFF::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::Squire::QMMMFF::typeName );
            
            QMMMFF_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::Squire::QMMMFF::what
        
            typedef char const * ( ::Squire::QMMMFF::*what_function_type)(  ) const;
            what_function_type what_function_value( &::Squire::QMMMFF::what );
            
            QMMMFF_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        { //::Squire::QMMMFF::zeroEnergy
        
            typedef ::SireUnits::Dimension::MolarEnergy ( ::Squire::QMMMFF::*zeroEnergy_function_type)(  ) const;
            zeroEnergy_function_type zeroEnergy_function_value( &::Squire::QMMMFF::zeroEnergy );
            
            QMMMFF_exposer.def( 
                "zeroEnergy"
                , zeroEnergy_function_value
                , "Return the absolute value of the energy which is considered\nas zero (on the relative energy scale used by this potential).\nA relative scale is used so that the QM energy can be shifted\nso that it is comparable to an MM energy" );
        
        }
        QMMMFF_exposer.staticmethod( "typeName" );
        QMMMFF_exposer.def( "__copy__", &__copy__);
        QMMMFF_exposer.def( "__deepcopy__", &__copy__);
        QMMMFF_exposer.def( "clone", &__copy__);
        QMMMFF_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::Squire::QMMMFF >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        QMMMFF_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::Squire::QMMMFF >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        QMMMFF_exposer.def( "__str__", &__str__< ::Squire::QMMMFF > );
        QMMMFF_exposer.def( "__repr__", &__str__< ::Squire::QMMMFF > );
        QMMMFF_exposer.def( "__len__", &__len_count< ::Squire::QMMMFF > );
    }

}
