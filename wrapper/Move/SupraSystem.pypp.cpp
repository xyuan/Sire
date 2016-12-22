// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "SupraSystem.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireSystem/systemmonitor.h"

#include "moves.h"

#include "simstore.h"

#include "suprasystem.h"

#include "suprasystem.h"

SireMove::SupraSystem __copy__(const SireMove::SupraSystem &other){ return SireMove::SupraSystem(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_SupraSystem_class(){

    { //::SireMove::SupraSystem
        typedef bp::class_< SireMove::SupraSystem, bp::bases< SireBase::Property > > SupraSystem_exposer_t;
        SupraSystem_exposer_t SupraSystem_exposer = SupraSystem_exposer_t( "SupraSystem", "This is the base class of all supra-systems. A supra-system is a\ncollection of systems, used to perform a simulation that\ninvolves making moves on lots of connected sub-systems. A good\nexample is a replica exchange simulation, where each replica\nis a sub-system, and the ensemble of systems is the supra-system.\n\nAuthor: Christopher Woods\n", bp::init< >("Null Constructor") );
        bp::scope SupraSystem_scope( SupraSystem_exposer );
        SupraSystem_exposer.def( bp::init< int >(( bp::arg("n") ), "Construct a supra-system consisting of n sub systems") );
        SupraSystem_exposer.def( bp::init< SireSystem::System const &, bp::optional< int > >(( bp::arg("system"), bp::arg("n")=(int)(1) ), "Construct a supra-system that consists of n sub systems,\nwhich are initially created to be equal to system") );
        SupraSystem_exposer.def( bp::init< QVector< SireSystem::System > const & >(( bp::arg("systems") ), "Construct a supra-system that consists of the sub systems\nthat are copies of those in systems") );
        SupraSystem_exposer.def( bp::init< SireMove::SupraSubSystem const &, bp::optional< int > >(( bp::arg("subsystem"), bp::arg("n")=(int)(1) ), "Construct a SupraSystem that consists of n copies of\nthe passed subsystem") );
        SupraSystem_exposer.def( bp::init< SireMove::SupraSystem const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::SupraSystem::add
        
            typedef void ( ::SireMove::SupraSystem::*add_function_type)( ::QString const &,::SireSystem::SystemMonitor const &,int ) ;
            add_function_type add_function_value( &::SireMove::SupraSystem::add );
            
            SupraSystem_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("name"), bp::arg("monitor"), bp::arg("frequency")=(int)(1) )
                , "Add the monitor monitor to all of the sub-systems, with the name name,\nset to update with a frequency frequency" );
        
        }
        { //::SireMove::SupraSystem::add
        
            typedef void ( ::SireMove::SupraSystem::*add_function_type)( int,::QString const &,::SireSystem::SystemMonitor const &,int ) ;
            add_function_type add_function_value( &::SireMove::SupraSystem::add );
            
            SupraSystem_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("i"), bp::arg("name"), bp::arg("monitor"), bp::arg("frequency")=(int)(1) )
                , "Add the monitor monitor to the ith sub-system, with the name name,\nset to update with a frequency of frequency\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::add
        
            typedef void ( ::SireMove::SupraSystem::*add_function_type)( ::SireSystem::SystemMonitors const &,int ) ;
            add_function_type add_function_value( &::SireMove::SupraSystem::add );
            
            SupraSystem_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("monitors"), bp::arg("frequency")=(int)(1) )
                , "Add the monitors monitors to all of the sub-systems, set to update\nwith a frequency of frequency" );
        
        }
        { //::SireMove::SupraSystem::add
        
            typedef void ( ::SireMove::SupraSystem::*add_function_type)( int,::SireSystem::SystemMonitors const &,int ) ;
            add_function_type add_function_value( &::SireMove::SupraSystem::add );
            
            SupraSystem_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("i"), bp::arg("monitors"), bp::arg("frequency")=(int)(1) )
                , "Add the monitors monitors to the ith system, set to update with\na frequency of frequency\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::anyPacked
        
            typedef bool ( ::SireMove::SupraSystem::*anyPacked_function_type)(  ) const;
            anyPacked_function_type anyPacked_function_value( &::SireMove::SupraSystem::anyPacked );
            
            SupraSystem_exposer.def( 
                "anyPacked"
                , anyPacked_function_value
                , "Return whether or not any of the sub-systems are packed" );
        
        }
        { //::SireMove::SupraSystem::anyPackedToDisk
        
            typedef bool ( ::SireMove::SupraSystem::*anyPackedToDisk_function_type)(  ) const;
            anyPackedToDisk_function_type anyPackedToDisk_function_value( &::SireMove::SupraSystem::anyPackedToDisk );
            
            SupraSystem_exposer.def( 
                "anyPackedToDisk"
                , anyPackedToDisk_function_value
                , "Return whether or not any of the sub-systems are packed to disk" );
        
        }
        { //::SireMove::SupraSystem::anyPackedToMemory
        
            typedef bool ( ::SireMove::SupraSystem::*anyPackedToMemory_function_type)(  ) const;
            anyPackedToMemory_function_type anyPackedToMemory_function_value( &::SireMove::SupraSystem::anyPackedToMemory );
            
            SupraSystem_exposer.def( 
                "anyPackedToMemory"
                , anyPackedToMemory_function_value
                , "Return whether or not any of the sub-systems are packed to memory" );
        
        }
        { //::SireMove::SupraSystem::at
        
            typedef ::SireMove::SupraSubSystem const & ( ::SireMove::SupraSystem::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMove::SupraSystem::at );
            
            SupraSystem_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the ith sub-system in this supra-system\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::clearAllStatistics
        
            typedef void ( ::SireMove::SupraSystem::*clearAllStatistics_function_type)(  ) ;
            clearAllStatistics_function_type clearAllStatistics_function_value( &::SireMove::SupraSystem::clearAllStatistics );
            
            SupraSystem_exposer.def( 
                "clearAllStatistics"
                , clearAllStatistics_function_value
                , "Clear all statistics collected during the moves" );
        
        }
        { //::SireMove::SupraSystem::clearStatistics
        
            typedef void ( ::SireMove::SupraSystem::*clearStatistics_function_type)(  ) ;
            clearStatistics_function_type clearStatistics_function_value( &::SireMove::SupraSystem::clearStatistics );
            
            SupraSystem_exposer.def( 
                "clearStatistics"
                , clearStatistics_function_value
                , "Clear the statistics that are collected between blocks of\nsub-system moves" );
        
        }
        { //::SireMove::SupraSystem::clearSubStatistics
        
            typedef void ( ::SireMove::SupraSystem::*clearSubStatistics_function_type)(  ) ;
            clearSubStatistics_function_type clearSubStatistics_function_value( &::SireMove::SupraSystem::clearSubStatistics );
            
            SupraSystem_exposer.def( 
                "clearSubStatistics"
                , clearSubStatistics_function_value
                , "Clear the statistics that are collected within blocks of\nsub-system moves" );
        
        }
        { //::SireMove::SupraSystem::collectSupraStats
        
            typedef void ( ::SireMove::SupraSystem::*collectSupraStats_function_type)(  ) ;
            collectSupraStats_function_type collectSupraStats_function_value( &::SireMove::SupraSystem::collectSupraStats );
            
            SupraSystem_exposer.def( 
                "collectSupraStats"
                , collectSupraStats_function_value
                , "This function is called after each SupraMove to collect any statistics\nabout the SupraSystem" );
        
        }
        { //::SireMove::SupraSystem::count
        
            typedef int ( ::SireMove::SupraSystem::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMove::SupraSystem::count );
            
            SupraSystem_exposer.def( 
                "count"
                , count_function_value
                , "Return the number of sub-systems in this supra-system" );
        
        }
        { //::SireMove::SupraSystem::isEmpty
        
            typedef bool ( ::SireMove::SupraSystem::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMove::SupraSystem::isEmpty );
            
            SupraSystem_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , "Return whether or not this SupraSystem contains no subsystems" );
        
        }
        { //::SireMove::SupraSystem::isPacked
        
            typedef bool ( ::SireMove::SupraSystem::*isPacked_function_type)(  ) const;
            isPacked_function_type isPacked_function_value( &::SireMove::SupraSystem::isPacked );
            
            SupraSystem_exposer.def( 
                "isPacked"
                , isPacked_function_value
                , "Return whether or not all sub-systems are packed" );
        
        }
        { //::SireMove::SupraSystem::isPackedToDisk
        
            typedef bool ( ::SireMove::SupraSystem::*isPackedToDisk_function_type)(  ) const;
            isPackedToDisk_function_type isPackedToDisk_function_value( &::SireMove::SupraSystem::isPackedToDisk );
            
            SupraSystem_exposer.def( 
                "isPackedToDisk"
                , isPackedToDisk_function_value
                , "Return whether or not all sub-systems are packed to disk" );
        
        }
        { //::SireMove::SupraSystem::isPackedToMemory
        
            typedef bool ( ::SireMove::SupraSystem::*isPackedToMemory_function_type)(  ) const;
            isPackedToMemory_function_type isPackedToMemory_function_value( &::SireMove::SupraSystem::isPackedToMemory );
            
            SupraSystem_exposer.def( 
                "isPackedToMemory"
                , isPackedToMemory_function_value
                , "Return whether or not all sub-systems are packed to memory" );
        
        }
        { //::SireMove::SupraSystem::mustNowRecalculateFromScratch
        
            typedef void ( ::SireMove::SupraSystem::*mustNowRecalculateFromScratch_function_type)(  ) ;
            mustNowRecalculateFromScratch_function_type mustNowRecalculateFromScratch_function_value( &::SireMove::SupraSystem::mustNowRecalculateFromScratch );
            
            SupraSystem_exposer.def( 
                "mustNowRecalculateFromScratch"
                , mustNowRecalculateFromScratch_function_value
                , "Tell all sub-systems that the next energy calculate must\nbe performed from scratch - this is useful for debugging" );
        
        }
        { //::SireMove::SupraSystem::nSubSystems
        
            typedef int ( ::SireMove::SupraSystem::*nSubSystems_function_type)(  ) const;
            nSubSystems_function_type nSubSystems_function_value( &::SireMove::SupraSystem::nSubSystems );
            
            SupraSystem_exposer.def( 
                "nSubSystems"
                , nSubSystems_function_value
                , "Return the number of sub-systems in this supra-system" );
        
        }
        { //::SireMove::SupraSystem::null
        
            typedef ::SireMove::SupraSystem const & ( *null_function_type )(  );
            null_function_type null_function_value( &::SireMove::SupraSystem::null );
            
            SupraSystem_exposer.def( 
                "null"
                , null_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the global null SupraSystem" );
        
        }
        SupraSystem_exposer.def( bp::self != bp::self );
        { //::SireMove::SupraSystem::operator=
        
            typedef ::SireMove::SupraSystem & ( ::SireMove::SupraSystem::*assign_function_type)( ::SireMove::SupraSystem const & ) ;
            assign_function_type assign_function_value( &::SireMove::SupraSystem::operator= );
            
            SupraSystem_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        SupraSystem_exposer.def( bp::self == bp::self );
        { //::SireMove::SupraSystem::operator[]
        
            typedef ::SireMove::SupraSubSystem const & ( ::SireMove::SupraSystem::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMove::SupraSystem::operator[] );
            
            SupraSystem_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        { //::SireMove::SupraSystem::pack
        
            typedef void ( ::SireMove::SupraSystem::*pack_function_type)(  ) ;
            pack_function_type pack_function_value( &::SireMove::SupraSystem::pack );
            
            SupraSystem_exposer.def( 
                "pack"
                , pack_function_value
                , "Pack all sub-systems" );
        
        }
        { //::SireMove::SupraSystem::pack
        
            typedef void ( ::SireMove::SupraSystem::*pack_function_type)( int ) ;
            pack_function_type pack_function_value( &::SireMove::SupraSystem::pack );
            
            SupraSystem_exposer.def( 
                "pack"
                , pack_function_value
                , ( bp::arg("i") )
                , "Pack the ith sub-system\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::packToDisk
        
            typedef void ( ::SireMove::SupraSystem::*packToDisk_function_type)(  ) ;
            packToDisk_function_type packToDisk_function_value( &::SireMove::SupraSystem::packToDisk );
            
            SupraSystem_exposer.def( 
                "packToDisk"
                , packToDisk_function_value
                , "Pack all sub-systems to disk" );
        
        }
        { //::SireMove::SupraSystem::packToDisk
        
            typedef void ( ::SireMove::SupraSystem::*packToDisk_function_type)( ::QString const & ) ;
            packToDisk_function_type packToDisk_function_value( &::SireMove::SupraSystem::packToDisk );
            
            SupraSystem_exposer.def( 
                "packToDisk"
                , packToDisk_function_value
                , ( bp::arg("tempdir") )
                , "Pack all sub-systems to disk, in the directory tempdir. Note\nthat this will not move sub-systems that are already packed into\na different directory" );
        
        }
        { //::SireMove::SupraSystem::packToDisk
        
            typedef void ( ::SireMove::SupraSystem::*packToDisk_function_type)( int ) ;
            packToDisk_function_type packToDisk_function_value( &::SireMove::SupraSystem::packToDisk );
            
            SupraSystem_exposer.def( 
                "packToDisk"
                , packToDisk_function_value
                , ( bp::arg("i") )
                , "Pack the ith sub-system to disk\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::packToDisk
        
            typedef void ( ::SireMove::SupraSystem::*packToDisk_function_type)( int,::QString const & ) ;
            packToDisk_function_type packToDisk_function_value( &::SireMove::SupraSystem::packToDisk );
            
            SupraSystem_exposer.def( 
                "packToDisk"
                , packToDisk_function_value
                , ( bp::arg("i"), bp::arg("tempdir") )
                , "Pack the ith sub-system to disk in the directory tempdir\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::packToMemory
        
            typedef void ( ::SireMove::SupraSystem::*packToMemory_function_type)(  ) ;
            packToMemory_function_type packToMemory_function_value( &::SireMove::SupraSystem::packToMemory );
            
            SupraSystem_exposer.def( 
                "packToMemory"
                , packToMemory_function_value
                , "Pack all sub-systems to memory" );
        
        }
        { //::SireMove::SupraSystem::packToMemory
        
            typedef void ( ::SireMove::SupraSystem::*packToMemory_function_type)( int ) ;
            packToMemory_function_type packToMemory_function_value( &::SireMove::SupraSystem::packToMemory );
            
            SupraSystem_exposer.def( 
                "packToMemory"
                , packToMemory_function_value
                , ( bp::arg("i") )
                , "Pack the ith sub-system to memory\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setNSubMoves
        
            typedef void ( ::SireMove::SupraSystem::*setNSubMoves_function_type)( int,int ) ;
            setNSubMoves_function_type setNSubMoves_function_value( &::SireMove::SupraSystem::setNSubMoves );
            
            SupraSystem_exposer.def( 
                "setNSubMoves"
                , setNSubMoves_function_value
                , ( bp::arg("i"), bp::arg("nmoves") )
                , "Set the number of moves to perform per block of sub-moves for\nthe ith sub-system\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setNSubMoves
        
            typedef void ( ::SireMove::SupraSystem::*setNSubMoves_function_type)( int ) ;
            setNSubMoves_function_type setNSubMoves_function_value( &::SireMove::SupraSystem::setNSubMoves );
            
            SupraSystem_exposer.def( 
                "setNSubMoves"
                , setNSubMoves_function_value
                , ( bp::arg("nmoves") )
                , "Set the number of moves to perform per block of sub-moves for\nevery sub-system in this supra-system" );
        
        }
        { //::SireMove::SupraSystem::setRecordAllStatistics
        
            typedef void ( ::SireMove::SupraSystem::*setRecordAllStatistics_function_type)( int,bool ) ;
            setRecordAllStatistics_function_type setRecordAllStatistics_function_value( &::SireMove::SupraSystem::setRecordAllStatistics );
            
            SupraSystem_exposer.def( 
                "setRecordAllStatistics"
                , setRecordAllStatistics_function_value
                , ( bp::arg("i"), bp::arg("record_stats") )
                , "Set whether or not to record all statistics (both within and\nbetween sub-moves) for the ith sub-system\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setRecordAllStatistics
        
            typedef void ( ::SireMove::SupraSystem::*setRecordAllStatistics_function_type)( bool ) ;
            setRecordAllStatistics_function_type setRecordAllStatistics_function_value( &::SireMove::SupraSystem::setRecordAllStatistics );
            
            SupraSystem_exposer.def( 
                "setRecordAllStatistics"
                , setRecordAllStatistics_function_value
                , ( bp::arg("record_stats") )
                , "Set whether or not to record all statistics (both within and\nbetween sub-moves) for all sub-systems" );
        
        }
        { //::SireMove::SupraSystem::setRecordStatistics
        
            typedef void ( ::SireMove::SupraSystem::*setRecordStatistics_function_type)( int,bool ) ;
            setRecordStatistics_function_type setRecordStatistics_function_value( &::SireMove::SupraSystem::setRecordStatistics );
            
            SupraSystem_exposer.def( 
                "setRecordStatistics"
                , setRecordStatistics_function_value
                , ( bp::arg("i"), bp::arg("record_stats") )
                , "Set whether or not to record statistics between blocks of sub-moves\nat the ith sub-system\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setRecordStatistics
        
            typedef void ( ::SireMove::SupraSystem::*setRecordStatistics_function_type)( bool ) ;
            setRecordStatistics_function_type setRecordStatistics_function_value( &::SireMove::SupraSystem::setRecordStatistics );
            
            SupraSystem_exposer.def( 
                "setRecordStatistics"
                , setRecordStatistics_function_value
                , ( bp::arg("record_stats") )
                , "Set whether or not to record statistics between blocks of sub-moves\nfor all sub-systems" );
        
        }
        { //::SireMove::SupraSystem::setRecordSubStatistics
        
            typedef void ( ::SireMove::SupraSystem::*setRecordSubStatistics_function_type)( int,bool ) ;
            setRecordSubStatistics_function_type setRecordSubStatistics_function_value( &::SireMove::SupraSystem::setRecordSubStatistics );
            
            SupraSystem_exposer.def( 
                "setRecordSubStatistics"
                , setRecordSubStatistics_function_value
                , ( bp::arg("i"), bp::arg("record_stats") )
                , "Set whether or not to record statistics within blocks of sub-moves\nfor the ith sub-system\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setRecordSubStatistics
        
            typedef void ( ::SireMove::SupraSystem::*setRecordSubStatistics_function_type)( bool ) ;
            setRecordSubStatistics_function_type setRecordSubStatistics_function_value( &::SireMove::SupraSystem::setRecordSubStatistics );
            
            SupraSystem_exposer.def( 
                "setRecordSubStatistics"
                , setRecordSubStatistics_function_value
                , ( bp::arg("record_stats") )
                , "Set whether or not to record statistics within blocks of sub-moves\nfor all sub-systems" );
        
        }
        { //::SireMove::SupraSystem::setSubMonitors
        
            typedef void ( ::SireMove::SupraSystem::*setSubMonitors_function_type)( ::SireSystem::SystemMonitors const &,int ) ;
            setSubMonitors_function_type setSubMonitors_function_value( &::SireMove::SupraSystem::setSubMonitors );
            
            SupraSystem_exposer.def( 
                "setSubMonitors"
                , setSubMonitors_function_value
                , ( bp::arg("monitors"), bp::arg("frequency")=(int)(1) )
                , "Set the monitors used for all sub-systems to monitors, and set\nthem all to update with a frequency of frequency" );
        
        }
        { //::SireMove::SupraSystem::setSubMonitors
        
            typedef void ( ::SireMove::SupraSystem::*setSubMonitors_function_type)( int,::SireSystem::SystemMonitors const &,int ) ;
            setSubMonitors_function_type setSubMonitors_function_value( &::SireMove::SupraSystem::setSubMonitors );
            
            SupraSystem_exposer.def( 
                "setSubMonitors"
                , setSubMonitors_function_value
                , ( bp::arg("i"), bp::arg("monitors"), bp::arg("frequency")=(int)(1) )
                , "Set the monitors used for the ith sub-system to monitors, and set\nthem to update with a frequency of frequency\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setSubMoves
        
            typedef void ( ::SireMove::SupraSystem::*setSubMoves_function_type)( int,::SireMove::Moves const & ) ;
            setSubMoves_function_type setSubMoves_function_value( &::SireMove::SupraSystem::setSubMoves );
            
            SupraSystem_exposer.def( 
                "setSubMoves"
                , setSubMoves_function_value
                , ( bp::arg("i"), bp::arg("moves") )
                , "Set the moves that will be applied to the ith sub-system during\neach sub-move\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setSubMoves
        
            typedef void ( ::SireMove::SupraSystem::*setSubMoves_function_type)( ::SireMove::Moves const & ) ;
            setSubMoves_function_type setSubMoves_function_value( &::SireMove::SupraSystem::setSubMoves );
            
            SupraSystem_exposer.def( 
                "setSubMoves"
                , setSubMoves_function_value
                , ( bp::arg("moves") )
                , "Set the moves that will be applied to all sub-systems during\neach sub-move\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setSubSystem
        
            typedef void ( ::SireMove::SupraSystem::*setSubSystem_function_type)( int,::SireMove::SupraSubSystem const & ) ;
            setSubSystem_function_type setSubSystem_function_value( &::SireMove::SupraSystem::setSubSystem );
            
            SupraSystem_exposer.def( 
                "setSubSystem"
                , setSubSystem_function_value
                , ( bp::arg("i"), bp::arg("subsystem") )
                , "Set the ith sub-system equal to subsystem\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setSubSystem
        
            typedef void ( ::SireMove::SupraSystem::*setSubSystem_function_type)( ::SireMove::SupraSubSystem const & ) ;
            setSubSystem_function_type setSubSystem_function_value( &::SireMove::SupraSystem::setSubSystem );
            
            SupraSystem_exposer.def( 
                "setSubSystem"
                , setSubSystem_function_value
                , ( bp::arg("subsystem") )
                , "Set all sub-systems equal to subsystem" );
        
        }
        { //::SireMove::SupraSystem::setSubSystem
        
            typedef void ( ::SireMove::SupraSystem::*setSubSystem_function_type)( int,::SireSystem::System const & ) ;
            setSubSystem_function_type setSubSystem_function_value( &::SireMove::SupraSystem::setSubSystem );
            
            SupraSystem_exposer.def( 
                "setSubSystem"
                , setSubSystem_function_value
                , ( bp::arg("i"), bp::arg("system") )
                , "Set the SireSystem::System used by the ith sub-system equal to system\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setSubSystem
        
            typedef void ( ::SireMove::SupraSystem::*setSubSystem_function_type)( ::SireSystem::System const & ) ;
            setSubSystem_function_type setSubSystem_function_value( &::SireMove::SupraSystem::setSubSystem );
            
            SupraSystem_exposer.def( 
                "setSubSystem"
                , setSubSystem_function_value
                , ( bp::arg("system") )
                , "Set the SireSystem::System used by all sub-systems equal to system" );
        
        }
        { //::SireMove::SupraSystem::setSubSystemAndMoves
        
            typedef void ( ::SireMove::SupraSystem::*setSubSystemAndMoves_function_type)( int,::SireSystem::System const &,::SireMove::Moves const & ) ;
            setSubSystemAndMoves_function_type setSubSystemAndMoves_function_value( &::SireMove::SupraSystem::setSubSystemAndMoves );
            
            SupraSystem_exposer.def( 
                "setSubSystemAndMoves"
                , setSubSystemAndMoves_function_value
                , ( bp::arg("i"), bp::arg("system"), bp::arg("moves") )
                , "Set the system and moves that will be applied to the ith sub-system\nto system and moves\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setSubSystemAndMoves
        
            typedef void ( ::SireMove::SupraSystem::*setSubSystemAndMoves_function_type)( ::SireSystem::System const &,::SireMove::Moves const & ) ;
            setSubSystemAndMoves_function_type setSubSystemAndMoves_function_value( &::SireMove::SupraSystem::setSubSystemAndMoves );
            
            SupraSystem_exposer.def( 
                "setSubSystemAndMoves"
                , setSubSystemAndMoves_function_value
                , ( bp::arg("system"), bp::arg("moves") )
                , "Set the system and moves used by all sub-systems to\nsystem and moves" );
        
        }
        { //::SireMove::SupraSystem::setSubSystemAndMoves
        
            typedef void ( ::SireMove::SupraSystem::*setSubSystemAndMoves_function_type)( int,::SireMove::SimStore const & ) ;
            setSubSystemAndMoves_function_type setSubSystemAndMoves_function_value( &::SireMove::SupraSystem::setSubSystemAndMoves );
            
            SupraSystem_exposer.def( 
                "setSubSystemAndMoves"
                , setSubSystemAndMoves_function_value
                , ( bp::arg("i"), bp::arg("simstore") )
                , "Set the system and moves used for the ith sub-system to those\ncontained in simstore\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMove::SupraSystem::setSubSystemAndMoves
        
            typedef void ( ::SireMove::SupraSystem::*setSubSystemAndMoves_function_type)( ::SireMove::SimStore const & ) ;
            setSubSystemAndMoves_function_type setSubSystemAndMoves_function_value( &::SireMove::SupraSystem::setSubSystemAndMoves );
            
            SupraSystem_exposer.def( 
                "setSubSystemAndMoves"
                , setSubSystemAndMoves_function_value
                , ( bp::arg("simstore") )
                , "Set the system and moves used for all sub-systems to those\ncontained in simstore" );
        
        }
        { //::SireMove::SupraSystem::setSubSystems
        
            typedef void ( ::SireMove::SupraSystem::*setSubSystems_function_type)( ::SireMove::SupraSystem const & ) ;
            setSubSystems_function_type setSubSystems_function_value( &::SireMove::SupraSystem::setSubSystems );
            
            SupraSystem_exposer.def( 
                "setSubSystems"
                , setSubSystems_function_value
                , ( bp::arg("system") )
                , "Set all sub-systems equal to a copy of those in system. Note\nthat both this SupraSystem and other must have the same\nnumber of sub-systems\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireMove::SupraSystem::size
        
            typedef int ( ::SireMove::SupraSystem::*size_function_type)(  ) ;
            size_function_type size_function_value( &::SireMove::SupraSystem::size );
            
            SupraSystem_exposer.def( 
                "size"
                , size_function_value
                , "Return the number of sub-systems in this supra-system" );
        
        }
        { //::SireMove::SupraSystem::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::SupraSystem::typeName );
            
            SupraSystem_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMove::SupraSystem::unpack
        
            typedef void ( ::SireMove::SupraSystem::*unpack_function_type)(  ) ;
            unpack_function_type unpack_function_value( &::SireMove::SupraSystem::unpack );
            
            SupraSystem_exposer.def( 
                "unpack"
                , unpack_function_value
                , "Unpack all sub-systems" );
        
        }
        { //::SireMove::SupraSystem::unpack
        
            typedef void ( ::SireMove::SupraSystem::*unpack_function_type)( int ) ;
            unpack_function_type unpack_function_value( &::SireMove::SupraSystem::unpack );
            
            SupraSystem_exposer.def( 
                "unpack"
                , unpack_function_value
                , ( bp::arg("i") )
                , "Unpack the ith sub-system\nThrow: SireError::invalid_index\n" );
        
        }
        SupraSystem_exposer.staticmethod( "null" );
        SupraSystem_exposer.staticmethod( "typeName" );
        SupraSystem_exposer.def( "__copy__", &__copy__);
        SupraSystem_exposer.def( "__deepcopy__", &__copy__);
        SupraSystem_exposer.def( "clone", &__copy__);
        SupraSystem_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::SupraSystem >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SupraSystem_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::SupraSystem >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SupraSystem_exposer.def( "__str__", &__str__< ::SireMove::SupraSystem > );
        SupraSystem_exposer.def( "__repr__", &__str__< ::SireMove::SupraSystem > );
        SupraSystem_exposer.def( "__len__", &__len_size< ::SireMove::SupraSystem > );
    }

}
