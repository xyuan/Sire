// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "PDBHelix.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/parallel.h"

#include "SireError/errors.h"

#include "SireIO/errors.h"

#include "SireIO/pdb2.h"

#include "SireMM/pdbparams.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "pdb2.h"

#include <iostream>

#include "pdb2.h"

SireIO::PDBHelix __copy__(const SireIO::PDBHelix &other){ return SireIO::PDBHelix(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_PDBHelix_class(){

    { //::SireIO::PDBHelix
        typedef bp::class_< SireIO::PDBHelix > PDBHelix_exposer_t;
        PDBHelix_exposer_t PDBHelix_exposer = PDBHelix_exposer_t( "PDBHelix", "This class provides functionality for readingwriting\nProtein Data Bank (PDB) HELIX records.\n\nAuthor: Lester Hedges\n", bp::init< >("Default constructor.") );
        bp::scope PDBHelix_scope( PDBHelix_exposer );
        PDBHelix_exposer.def( bp::init< QString const &, QStringList & >(( bp::arg("line"), bp::arg("errors") ), "Constructor.") );
        { //::SireIO::PDBHelix::toPDBLine
        
            typedef ::QString ( ::SireIO::PDBHelix::*toPDBLine_function_type)(  ) const;
            toPDBLine_function_type toPDBLine_function_value( &::SireIO::PDBHelix::toPDBLine );
            
            PDBHelix_exposer.def( 
                "toPDBLine"
                , toPDBLine_function_value
                , "Generate a PDB record from the helix data." );
        
        }
        { //::SireIO::PDBHelix::toString
        
            typedef ::QString ( ::SireIO::PDBHelix::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireIO::PDBHelix::toString );
            
            PDBHelix_exposer.def( 
                "toString"
                , toString_function_value
                , "Generate a string representation of the object." );
        
        }
        { //::SireIO::PDBHelix::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::PDBHelix::typeName );
            
            PDBHelix_exposer.def( 
                "typeName"
                , typeName_function_value
                , "Return the C++ name for this class" );
        
        }
        PDBHelix_exposer.staticmethod( "typeName" );
        PDBHelix_exposer.def( "__copy__", &__copy__);
        PDBHelix_exposer.def( "__deepcopy__", &__copy__);
        PDBHelix_exposer.def( "clone", &__copy__);
        PDBHelix_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::PDBHelix >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PDBHelix_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::PDBHelix >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PDBHelix_exposer.def( "__str__", &__str__< ::SireIO::PDBHelix > );
        PDBHelix_exposer.def( "__repr__", &__str__< ::SireIO::PDBHelix > );
    }

}
