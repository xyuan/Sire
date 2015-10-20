// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CLJSoftIntraRFFunction.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/numberproperty.h"

#include "SireError/errors.h"

#include "SireMaths/multidouble.h"

#include "SireMaths/multifloat.h"

#include "SireMaths/multiint.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "SireVol/gridinfo.h"

#include "cljrffunction.h"

#include <QDebug>

#include <QElapsedTimer>

#include "cljrffunction.h"

SireMM::CLJSoftIntraRFFunction __copy__(const SireMM::CLJSoftIntraRFFunction &other){ return SireMM::CLJSoftIntraRFFunction(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CLJSoftIntraRFFunction_class(){

    { //::SireMM::CLJSoftIntraRFFunction
        typedef bp::class_< SireMM::CLJSoftIntraRFFunction, bp::bases< SireMM::CLJSoftIntraFunction, SireMM::CLJIntraFunction, SireMM::CLJCutoffFunction, SireMM::CLJFunction, SireBase::Property > > CLJSoftIntraRFFunction_exposer_t;
        CLJSoftIntraRFFunction_exposer_t CLJSoftIntraRFFunction_exposer = CLJSoftIntraRFFunction_exposer_t( "CLJSoftIntraRFFunction", bp::init< >() );
        bp::scope CLJSoftIntraRFFunction_scope( CLJSoftIntraRFFunction_exposer );
        CLJSoftIntraRFFunction_exposer.def( bp::init< SireUnits::Dimension::Length >(( bp::arg("cutoff") )) );
        CLJSoftIntraRFFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireUnits::Dimension::Length >(( bp::arg("coul_cutoff"), bp::arg("lj_cutoff") )) );
        CLJSoftIntraRFFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length >(( bp::arg("space"), bp::arg("cutoff") )) );
        CLJSoftIntraRFFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length, SireUnits::Dimension::Length >(( bp::arg("space"), bp::arg("coul_cutoff"), bp::arg("lj_cutoff") )) );
        CLJSoftIntraRFFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("cutoff"), bp::arg("combining_rules") )) );
        CLJSoftIntraRFFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("coul_cutoff"), bp::arg("lj_cutoff"), bp::arg("combining_rules") )) );
        CLJSoftIntraRFFunction_exposer.def( bp::init< SireVol::Space const &, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("space"), bp::arg("combining_rules") )) );
        CLJSoftIntraRFFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("space"), bp::arg("cutoff"), bp::arg("combining_rules") )) );
        CLJSoftIntraRFFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length, SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("space"), bp::arg("coul_cutoff"), bp::arg("lj_cutoff"), bp::arg("combining_rules") )) );
        CLJSoftIntraRFFunction_exposer.def( bp::init< SireMM::CLJSoftIntraRFFunction const & >(( bp::arg("other") )) );
        { //::SireMM::CLJSoftIntraRFFunction::containsProperty
        
            typedef bool ( ::SireMM::CLJSoftIntraRFFunction::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireMM::CLJSoftIntraRFFunction::containsProperty );
            
            CLJSoftIntraRFFunction_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMM::CLJSoftIntraRFFunction::defaultRFFunction
        
            typedef ::SireMM::CLJFunctionPtr ( *defaultRFFunction_function_type )(  );
            defaultRFFunction_function_type defaultRFFunction_function_value( &::SireMM::CLJSoftIntraRFFunction::defaultRFFunction );
            
            CLJSoftIntraRFFunction_exposer.def( 
                "defaultRFFunction"
                , defaultRFFunction_function_value );
        
        }
        { //::SireMM::CLJSoftIntraRFFunction::dielectric
        
            typedef float ( ::SireMM::CLJSoftIntraRFFunction::*dielectric_function_type)(  ) const;
            dielectric_function_type dielectric_function_value( &::SireMM::CLJSoftIntraRFFunction::dielectric );
            
            CLJSoftIntraRFFunction_exposer.def( 
                "dielectric"
                , dielectric_function_value );
        
        }
        CLJSoftIntraRFFunction_exposer.def( bp::self != bp::self );
        { //::SireMM::CLJSoftIntraRFFunction::operator=
        
            typedef ::SireMM::CLJSoftIntraRFFunction & ( ::SireMM::CLJSoftIntraRFFunction::*assign_function_type)( ::SireMM::CLJSoftIntraRFFunction const & ) ;
            assign_function_type assign_function_value( &::SireMM::CLJSoftIntraRFFunction::operator= );
            
            CLJSoftIntraRFFunction_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        CLJSoftIntraRFFunction_exposer.def( bp::self == bp::self );
        { //::SireMM::CLJSoftIntraRFFunction::properties
        
            typedef ::SireBase::Properties ( ::SireMM::CLJSoftIntraRFFunction::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMM::CLJSoftIntraRFFunction::properties );
            
            CLJSoftIntraRFFunction_exposer.def( 
                "properties"
                , properties_function_value );
        
        }
        { //::SireMM::CLJSoftIntraRFFunction::property
        
            typedef ::SireBase::PropertyPtr ( ::SireMM::CLJSoftIntraRFFunction::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireMM::CLJSoftIntraRFFunction::property );
            
            CLJSoftIntraRFFunction_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMM::CLJSoftIntraRFFunction::setDielectric
        
            typedef void ( ::SireMM::CLJSoftIntraRFFunction::*setDielectric_function_type)( float ) ;
            setDielectric_function_type setDielectric_function_value( &::SireMM::CLJSoftIntraRFFunction::setDielectric );
            
            CLJSoftIntraRFFunction_exposer.def( 
                "setDielectric"
                , setDielectric_function_value
                , ( bp::arg("dielectric") ) );
        
        }
        { //::SireMM::CLJSoftIntraRFFunction::setProperty
        
            typedef ::SireMM::CLJFunctionPtr ( ::SireMM::CLJSoftIntraRFFunction::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) const;
            setProperty_function_type setProperty_function_value( &::SireMM::CLJSoftIntraRFFunction::setProperty );
            
            CLJSoftIntraRFFunction_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::SireMM::CLJSoftIntraRFFunction::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJSoftIntraRFFunction::typeName );
            
            CLJSoftIntraRFFunction_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMM::CLJSoftIntraRFFunction::what
        
            typedef char const * ( ::SireMM::CLJSoftIntraRFFunction::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::CLJSoftIntraRFFunction::what );
            
            CLJSoftIntraRFFunction_exposer.def( 
                "what"
                , what_function_value );
        
        }
        CLJSoftIntraRFFunction_exposer.staticmethod( "defaultRFFunction" );
        CLJSoftIntraRFFunction_exposer.staticmethod( "typeName" );
        CLJSoftIntraRFFunction_exposer.def( "__copy__", &__copy__);
        CLJSoftIntraRFFunction_exposer.def( "__deepcopy__", &__copy__);
        CLJSoftIntraRFFunction_exposer.def( "clone", &__copy__);
        CLJSoftIntraRFFunction_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJSoftIntraRFFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJSoftIntraRFFunction_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJSoftIntraRFFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJSoftIntraRFFunction_exposer.def( "__str__", &__str__< ::SireMM::CLJSoftIntraRFFunction > );
        CLJSoftIntraRFFunction_exposer.def( "__repr__", &__str__< ::SireMM::CLJSoftIntraRFFunction > );
    }

}