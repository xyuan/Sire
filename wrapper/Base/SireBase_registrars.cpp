//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireBase_registrars.h"

#include "stringmangler.h"
#include "propertymap.h"
#include "propertylist.h"
#include "majorminorversion.h"
#include "linktoproperty.h"
#include "numberproperty.h"
#include "property.h"
#include "stringproperty.h"
#include "properties.h"
#include "lengthproperty.h"
#include "booleanproperty.h"
#include "cpuid.h"

#include "Helpers/objectregistry.hpp"

void register_SireBase_objects()
{

    ObjectRegistry::registerConverterFor< SireBase::NoMangling >();
    ObjectRegistry::registerConverterFor< SireBase::TrimString >();
    ObjectRegistry::registerConverterFor< SireBase::UpperCaseString >();
    ObjectRegistry::registerConverterFor< SireBase::LowerCaseString >();
    ObjectRegistry::registerConverterFor< SireBase::PropertyName >();
    ObjectRegistry::registerConverterFor< SireBase::PropertyMap >();
    ObjectRegistry::registerConverterFor< SireBase::DoubleArrayProperty >();
    ObjectRegistry::registerConverterFor< SireBase::IntegerArrayProperty >();
    ObjectRegistry::registerConverterFor< SireBase::StringArrayProperty >();
    ObjectRegistry::registerConverterFor< SireBase::PropertyList >();
    ObjectRegistry::registerConverterFor< SireBase::MajorMinorVersion >();
    ObjectRegistry::registerConverterFor< SireBase::Version >();
    ObjectRegistry::registerConverterFor< SireBase::LinkToProperty >();
    ObjectRegistry::registerConverterFor< SireBase::NumberProperty >();
    ObjectRegistry::registerConverterFor< SireBase::NullProperty >();
    ObjectRegistry::registerConverterFor< SireBase::VariantProperty >();
    ObjectRegistry::registerConverterFor< SireBase::StringProperty >();
    ObjectRegistry::registerConverterFor< SireBase::Properties >();
    ObjectRegistry::registerConverterFor< SireBase::LengthProperty >();
    ObjectRegistry::registerConverterFor< SireBase::BooleanProperty >();
    ObjectRegistry::registerConverterFor< SireBase::CPUID >();

}

