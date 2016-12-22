// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ScaledChargeParameterNames3D.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/countflops.h"

#include "SireBase/errors.h"

#include "SireBase/sparsematrix.hpp"

#include "SireError/errors.h"

#include "SireFF/errors.h"

#include "SireMaths/maths.h"

#include "SireMol/atomcoords.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireUnits/units.h"

#include "SireVol/cartesian.h"

#include "coulombpotential.h"

#include "switchingfunction.h"

#include <QDebug>

#include "coulombpotential.h"

SireMM::ScaledChargeParameterNames3D __copy__(const SireMM::ScaledChargeParameterNames3D &other){ return SireMM::ScaledChargeParameterNames3D(other); }

const char* pvt_get_name(const SireMM::ScaledChargeParameterNames3D&){ return "SireMM::ScaledChargeParameterNames3D";}

void register_ScaledChargeParameterNames3D_class(){

    { //::SireMM::ScaledChargeParameterNames3D
        typedef bp::class_< SireMM::ScaledChargeParameterNames3D, bp::bases< SireMM::ChargeParameterName3D, SireMM::ChargeParameterName > > ScaledChargeParameterNames3D_exposer_t;
        ScaledChargeParameterNames3D_exposer_t ScaledChargeParameterNames3D_exposer = ScaledChargeParameterNames3D_exposer_t( "ScaledChargeParameterNames3D", "This class provides the default name of the properties\nthat contain the charge and intramolecular NB scale parameters and\n3D coordinates properties", bp::init< >("") );
        bp::scope ScaledChargeParameterNames3D_scope( ScaledChargeParameterNames3D_exposer );
        ScaledChargeParameterNames3D_exposer.def( "__copy__", &__copy__);
        ScaledChargeParameterNames3D_exposer.def( "__deepcopy__", &__copy__);
        ScaledChargeParameterNames3D_exposer.def( "clone", &__copy__);
        ScaledChargeParameterNames3D_exposer.def( "__str__", &pvt_get_name);
        ScaledChargeParameterNames3D_exposer.def( "__repr__", &pvt_get_name);
    }

}
