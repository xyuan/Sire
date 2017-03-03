// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MolViewProperty.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "atommatcher.h"

#include "atommatchers.h"

#include "moleculeinfodata.h"

#include "molviewproperty.h"

#include "mover.hpp"

#include "molviewproperty.h"

#include "Helpers/str.hpp"

void register_MolViewProperty_class(){

    { //::SireMol::MolViewProperty
        typedef bp::class_< SireMol::MolViewProperty, bp::bases< SireBase::Property >, boost::noncopyable > MolViewProperty_exposer_t;
        MolViewProperty_exposer_t MolViewProperty_exposer = MolViewProperty_exposer_t( "MolViewProperty", "This is the base class of all properties that are specifically\nattached to views of a molecule (e.g. AtomProperty, ResProperty,\nSegProperty etc.)\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope MolViewProperty_scope( MolViewProperty_exposer );
        { //::SireMol::MolViewProperty::assertCompatibleWith
        
            typedef void ( ::SireMol::MolViewProperty::*assertCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            assertCompatibleWith_function_type assertCompatibleWith_function_value( &::SireMol::MolViewProperty::assertCompatibleWith );
            
            MolViewProperty_exposer.def( 
                "assertCompatibleWith"
                , assertCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "Assert that this property is compatible with the MoleculeInfoData info\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireMol::MolViewProperty::assertCompatibleWith
        
            typedef void ( ::SireMol::MolViewProperty::*assertCompatibleWith_function_type)( ::SireMol::MoleculeInfo const & ) const;
            assertCompatibleWith_function_type assertCompatibleWith_function_value( &::SireMol::MolViewProperty::assertCompatibleWith );
            
            MolViewProperty_exposer.def( 
                "assertCompatibleWith"
                , assertCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "Assert that this property is compatible with the MoleculeInfoData info\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireMol::MolViewProperty::isCompatibleWith
        
            typedef bool ( ::SireMol::MolViewProperty::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::MolViewProperty::isCompatibleWith );
            
            MolViewProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::MolViewProperty::isCompatibleWith
        
            typedef bool ( ::SireMol::MolViewProperty::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfo const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::MolViewProperty::isCompatibleWith );
            
            MolViewProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::MolViewProperty::makeCompatibleWith
        
            typedef ::SireBase::PropertyPtr ( ::SireMol::MolViewProperty::*makeCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const &,::SireMol::AtomMatcher const & ) const;
            makeCompatibleWith_function_type makeCompatibleWith_function_value( &::SireMol::MolViewProperty::makeCompatibleWith );
            
            MolViewProperty_exposer.def( 
                "makeCompatibleWith"
                , makeCompatibleWith_function_value
                , ( bp::arg("molinfo"), bp::arg("atommatcher") )
                , "Do everything possible to make this property compatible with the\nMoleculeInfoData layout in info - otherwise raise an error\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireMol::MolViewProperty::makeCompatibleWith
        
            typedef ::SireBase::PropertyPtr ( ::SireMol::MolViewProperty::*makeCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            makeCompatibleWith_function_type makeCompatibleWith_function_value( &::SireMol::MolViewProperty::makeCompatibleWith );
            
            MolViewProperty_exposer.def( 
                "makeCompatibleWith"
                , makeCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "Do everything possible to make this property compatible with the molecule\nviewed in mol - otherwise raise an error\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireMol::MolViewProperty::makeCompatibleWith
        
            typedef ::SireBase::PropertyPtr ( ::SireMol::MolViewProperty::*makeCompatibleWith_function_type)( ::SireMol::MoleculeView const & ) const;
            makeCompatibleWith_function_type makeCompatibleWith_function_value( &::SireMol::MolViewProperty::makeCompatibleWith );
            
            MolViewProperty_exposer.def( 
                "makeCompatibleWith"
                , makeCompatibleWith_function_value
                , ( bp::arg("mol") )
                , "Do everything possible to make this property compatible with the molecule\nviewed in mol - otherwise raise an error\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireMol::MolViewProperty::makeCompatibleWith
        
            typedef ::SireBase::PropertyPtr ( ::SireMol::MolViewProperty::*makeCompatibleWith_function_type)( ::SireMol::MoleculeView const &,::SireMol::AtomMatcher const & ) const;
            makeCompatibleWith_function_type makeCompatibleWith_function_value( &::SireMol::MolViewProperty::makeCompatibleWith );
            
            MolViewProperty_exposer.def( 
                "makeCompatibleWith"
                , makeCompatibleWith_function_value
                , ( bp::arg("mol"), bp::arg("atommatcher") )
                , "Do everything possible to make this property compatible with the\nMoleculeInfoData layout in info - otherwise raise an error\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireMol::MolViewProperty::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::MolViewProperty::typeName );
            
            MolViewProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        MolViewProperty_exposer.staticmethod( "typeName" );
        MolViewProperty_exposer.def( "__str__", &__str__< ::SireMol::MolViewProperty > );
        MolViewProperty_exposer.def( "__repr__", &__str__< ::SireMol::MolViewProperty > );
    }

}
