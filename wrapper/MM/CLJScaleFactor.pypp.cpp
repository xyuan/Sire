// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CLJScaleFactor.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "cljnbpairs.h"

#include "cljnbpairs.h"

SireMM::CLJScaleFactor __copy__(const SireMM::CLJScaleFactor &other){ return SireMM::CLJScaleFactor(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireMM::CLJScaleFactor&){ return "SireMM::CLJScaleFactor";}

void register_CLJScaleFactor_class(){

    { //::SireMM::CLJScaleFactor
        typedef bp::class_< SireMM::CLJScaleFactor, bp::bases< SireMM::LJScaleFactor, SireMM::CoulombScaleFactor > > CLJScaleFactor_exposer_t;
        CLJScaleFactor_exposer_t CLJScaleFactor_exposer = CLJScaleFactor_exposer_t( "CLJScaleFactor", "This is the interatomic scale factor for the coulomb and\nLJ parameters for the intramolecular energy.", bp::init< bp::optional< double > >(( bp::arg("scl")=0 ), "Construct with both the Coulomb and LJ scale factors equal to scl") );
        bp::scope CLJScaleFactor_scope( CLJScaleFactor_exposer );
        CLJScaleFactor_exposer.def( bp::init< double, double >(( bp::arg("scale_coul"), bp::arg("scale_lj") ), "Construct with scale_coul Coulomb scaling, and scale_lj\nLJ scaling.") );
        CLJScaleFactor_exposer.def( bp::init< SireMM::CLJScaleFactor const & >(( bp::arg("other") ), "Copy constructor") );
        CLJScaleFactor_exposer.def( bp::self != bp::self );
        { //::SireMM::CLJScaleFactor::operator=
        
            typedef ::SireMM::CLJScaleFactor & ( ::SireMM::CLJScaleFactor::*assign_function_type)( ::SireMM::CLJScaleFactor const & ) ;
            assign_function_type assign_function_value( &::SireMM::CLJScaleFactor::operator= );
            
            CLJScaleFactor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        CLJScaleFactor_exposer.def( bp::self == bp::self );
        { //::SireMM::CLJScaleFactor::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJScaleFactor::typeName );
            
            CLJScaleFactor_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::CLJScaleFactor::what
        
            typedef char const * ( ::SireMM::CLJScaleFactor::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::CLJScaleFactor::what );
            
            CLJScaleFactor_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        CLJScaleFactor_exposer.staticmethod( "typeName" );
        CLJScaleFactor_exposer.def( "__copy__", &__copy__);
        CLJScaleFactor_exposer.def( "__deepcopy__", &__copy__);
        CLJScaleFactor_exposer.def( "clone", &__copy__);
        CLJScaleFactor_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJScaleFactor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJScaleFactor_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJScaleFactor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJScaleFactor_exposer.def( "__str__", &pvt_get_name);
        CLJScaleFactor_exposer.def( "__repr__", &pvt_get_name);
    }

}
