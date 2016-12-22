// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ChainResID.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "chainresid.h"

#include <QSet>

#include "chainresid.h"

SireMol::ChainResID __copy__(const SireMol::ChainResID &other){ return SireMol::ChainResID(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_ChainResID_class(){

    { //::SireMol::ChainResID
        typedef bp::class_< SireMol::ChainResID, bp::bases< SireMol::ResID, SireID::ID > > ChainResID_exposer_t;
        ChainResID_exposer_t ChainResID_exposer = ChainResID_exposer_t( "ChainResID", "This class holds a combination of a ChainID with a ResID\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope ChainResID_scope( ChainResID_exposer );
        ChainResID_exposer.def( bp::init< SireMol::ChainID const &, SireMol::ResID const & >(( bp::arg("chainid"), bp::arg("resid") ), "") );
        ChainResID_exposer.def( bp::init< SireMol::ChainResID const & >(( bp::arg("other") ), "") );
        { //::SireMol::ChainResID::hash
        
            typedef ::uint ( ::SireMol::ChainResID::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMol::ChainResID::hash );
            
            ChainResID_exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireMol::ChainResID::isNull
        
            typedef bool ( ::SireMol::ChainResID::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::ChainResID::isNull );
            
            ChainResID_exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        { //::SireMol::ChainResID::map
        
            typedef ::QList< SireMol::ResIdx > ( ::SireMol::ChainResID::*map_function_type)( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::ChainResID::map );
            
            ChainResID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        ChainResID_exposer.def( bp::self != bp::self );
        ChainResID_exposer.def( bp::self == bp::self );
        ChainResID_exposer.def( bp::self == bp::other< SireID::ID >() );
        { //::SireMol::ChainResID::toString
        
            typedef ::QString ( ::SireMol::ChainResID::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::ChainResID::toString );
            
            ChainResID_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMol::ChainResID::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::ChainResID::typeName );
            
            ChainResID_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMol::ChainResID::what
        
            typedef char const * ( ::SireMol::ChainResID::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::ChainResID::what );
            
            ChainResID_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        ChainResID_exposer.staticmethod( "typeName" );
        ChainResID_exposer.def( "__copy__", &__copy__);
        ChainResID_exposer.def( "__deepcopy__", &__copy__);
        ChainResID_exposer.def( "clone", &__copy__);
        ChainResID_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::ChainResID >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ChainResID_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::ChainResID >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ChainResID_exposer.def( "__str__", &__str__< ::SireMol::ChainResID > );
        ChainResID_exposer.def( "__repr__", &__str__< ::SireMol::ChainResID > );
        ChainResID_exposer.def( "__hash__", &::SireMol::ChainResID::hash );
    }

}
