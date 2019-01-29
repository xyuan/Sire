//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireSystem_registrars.h"

#include "Helpers/version_error_impl.h"

#include "monitorname.h"
#include "monitoridentifier.h"
#include "distancecomponent.h"
#include "closemols.h"
#include "constraints.h"
#include "freeenergymonitor.h"
#include "system.h"
#include "systemmonitor.h"
#include "constraint.h"
#include "anglecomponent.h"
#include "monitoridx.h"
#include "sysname.h"
#include "spacewrapper.h"
#include "monitorproperty.h"
#include "energymonitor.h"
#include "systemmonitors.h"
#include "monitormonitor.h"
#include "monitorcomponent.h"
#include "dihedralcomponent.h"
#include "perturbationconstraint.h"
#include "idassigner.h"
#include "sysidx.h"
#include "checkpoint.h"
#include "sysidentifier.h"
#include "monitorcomponents.h"
#include "polarisecharges.h"
#include "identityconstraint.h"
#include "volmapmonitor.h"

#include "Helpers/objectregistry.hpp"

void register_SireSystem_objects()
{

    ObjectRegistry::registerConverterFor< SireSystem::MonitorName >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireSystem::MonitorID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireSystem::MonitorID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireSystem::MonitorID> >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorIdentifier >();
    ObjectRegistry::registerConverterFor< SireSystem::DistanceComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::DoubleDistanceComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::TripleDistanceComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::CloseMols >();
    ObjectRegistry::registerConverterFor< SireSystem::Constraints >();
    ObjectRegistry::registerConverterFor< SireSystem::FreeEnergyMonitor >();
    ObjectRegistry::registerConverterFor< SireSystem::AssignerGroup >();
    ObjectRegistry::registerConverterFor< SireSystem::System >();
    ObjectRegistry::registerConverterFor< SireSystem::NullMonitor >();
    ObjectRegistry::registerConverterFor< SireSystem::NullConstraint >();
    ObjectRegistry::registerConverterFor< SireSystem::PropertyConstraint >();
    ObjectRegistry::registerConverterFor< SireSystem::ComponentConstraint >();
    ObjectRegistry::registerConverterFor< SireSystem::WindowedComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::AngleComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorIdx >();
    ObjectRegistry::registerConverterFor< SireSystem::SysName >();
    ObjectRegistry::registerConverterFor< SireSystem::SpaceWrapper >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorProperty >();
    ObjectRegistry::registerConverterFor< SireSystem::EnergyMonitor >();
    ObjectRegistry::registerConverterFor< SireSystem::SystemMonitors >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorMonitor >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::DihedralComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::PerturbationConstraint >();
    ObjectRegistry::registerConverterFor< SireSystem::IDAssigner >();
    ObjectRegistry::registerConverterFor< SireSystem::SysIdx >();
    ObjectRegistry::registerConverterFor< SireSystem::CheckPoint >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireSystem::SysID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireSystem::SysID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireSystem::SysID> >();
    ObjectRegistry::registerConverterFor< SireSystem::SysIdentifier >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorComponents >();
    ObjectRegistry::registerConverterFor< SireSystem::PolariseCharges >();
    ObjectRegistry::registerConverterFor< SireSystem::PolariseChargesFF >();
    ObjectRegistry::registerConverterFor< SireSystem::IdentityConstraint >();
    ObjectRegistry::registerConverterFor< SireSystem::VolMapMonitor >();

}

