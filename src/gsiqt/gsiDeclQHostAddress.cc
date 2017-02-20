/**
*  @file gsiDeclQHostAddress.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHostAddress>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHostAddress

//  Constructor QHostAddress::QHostAddress()


static void _init_ctor_QHostAddress_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QHostAddress> ();
}

static void _call_ctor_QHostAddress_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QHostAddress *> (new QHostAddress ());
}


//  Constructor QHostAddress::QHostAddress(quint32 ip4Addr)


static void _init_ctor_QHostAddress_1098 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ip4Addr");
  decl->add_arg<quint32 > (argspec_0);
  decl->set_return_new<QHostAddress> ();
}

static void _call_ctor_QHostAddress_1098 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint32 arg1 = args.read<quint32 > (heap);
  ret.write<QHostAddress *> (new QHostAddress (arg1));
}


//  Constructor QHostAddress::QHostAddress(const QString &address)


static void _init_ctor_QHostAddress_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QHostAddress> ();
}

static void _call_ctor_QHostAddress_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QHostAddress *> (new QHostAddress (arg1));
}


//  Constructor QHostAddress::QHostAddress(const QHostAddress &copy)


static void _init_ctor_QHostAddress_2518 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("copy");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return_new<QHostAddress> ();
}

static void _call_ctor_QHostAddress_2518 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = args.read<const QHostAddress & > (heap);
  ret.write<QHostAddress *> (new QHostAddress (arg1));
}


//  Constructor QHostAddress::QHostAddress(QHostAddress::SpecialAddress address)


static void _init_ctor_QHostAddress_3172 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & > (argspec_0);
  decl->set_return_new<QHostAddress> ();
}

static void _call_ctor_QHostAddress_3172 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & arg1 = args.read<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & > (heap);
  ret.write<QHostAddress *> (new QHostAddress (qt_gsi::QtToCppAdaptor<QHostAddress::SpecialAddress>(arg1).cref()));
}


// void QHostAddress::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostAddress *)cls)->clear ();
}


// bool QHostAddress::isInSubnet(const QHostAddress &subnet, int netmask)


static void _init_f_isInSubnet_c3177 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subnet");
  decl->add_arg<const QHostAddress & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("netmask");
  decl->add_arg<int > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_isInSubnet_c3177 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = args.read<const QHostAddress & > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isInSubnet (arg1, arg2));
}


// bool QHostAddress::isInSubnet(const QPair<QHostAddress, int> &subnet)


static void _init_f_isInSubnet_c3636 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subnet");
  decl->add_arg<const QPair<QHostAddress, int> & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isInSubnet_c3636 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPair<QHostAddress, int> &arg1 = args.read<const QPair<QHostAddress, int> & > (heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isInSubnet (arg1));
}


// bool QHostAddress::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isNull ());
}


// bool QHostAddress::operator !=(const QHostAddress &address)


static void _init_f_operator_excl__eq__c2518 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2518 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = args.read<const QHostAddress & > (heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->operator != (arg1));
}


// bool QHostAddress::operator !=(QHostAddress::SpecialAddress address)


static void _init_f_operator_excl__eq__c3172 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3172 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & arg1 = args.read<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & > (heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->operator != (qt_gsi::QtToCppAdaptor<QHostAddress::SpecialAddress>(arg1).cref()));
}


// bool QHostAddress::operator ==(const QHostAddress &address)


static void _init_f_operator_eq__eq__c2518 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2518 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = args.read<const QHostAddress & > (heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->operator == (arg1));
}


// bool QHostAddress::operator ==(QHostAddress::SpecialAddress address)


static void _init_f_operator_eq__eq__c3172 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3172 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & arg1 = args.read<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & > (heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->operator == (qt_gsi::QtToCppAdaptor<QHostAddress::SpecialAddress>(arg1).cref()));
}


// QHostAddress &QHostAddress::operator=(const QHostAddress &other)


static void _init_f_operator_eq__2518 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return<QHostAddress & > ();
}

static void _call_f_operator_eq__2518 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = args.read<const QHostAddress & > (heap);
  ret.write<QHostAddress & > ((QHostAddress &)((QHostAddress *)cls)->operator= (arg1));
}


// QHostAddress &QHostAddress::operator=(const QString &address)


static void _init_f_operator_eq__2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QHostAddress & > ();
}

static void _call_f_operator_eq__2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QHostAddress & > ((QHostAddress &)((QHostAddress *)cls)->operator= (arg1));
}


// QAbstractSocket::NetworkLayerProtocol QHostAddress::protocol()


static void _init_f_protocol_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAbstractSocket::NetworkLayerProtocol>::target_type > ();
}

static void _call_f_protocol_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAbstractSocket::NetworkLayerProtocol>::target_type > ((qt_gsi::Converter<QAbstractSocket::NetworkLayerProtocol>::target_type)qt_gsi::CppToQtAdaptor<QAbstractSocket::NetworkLayerProtocol>(((QHostAddress *)cls)->protocol ()));
}


// QString QHostAddress::scopeId()


static void _init_f_scopeId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_scopeId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QHostAddress *)cls)->scopeId ());
}


// void QHostAddress::setAddress(quint32 ip4Addr)


static void _init_f_setAddress_1098 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ip4Addr");
  decl->add_arg<quint32 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAddress_1098 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint32 arg1 = args.read<quint32 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostAddress *)cls)->setAddress (arg1);
}


// bool QHostAddress::setAddress(const QString &address)


static void _init_f_setAddress_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setAddress_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->setAddress (arg1));
}


// void QHostAddress::setScopeId(const QString &id)


static void _init_f_setScopeId_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScopeId_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostAddress *)cls)->setScopeId (arg1);
}


// quint32 QHostAddress::toIPv4Address()


static void _init_f_toIPv4Address_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint32 > ();
}

static void _call_f_toIPv4Address_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint32 > ((quint32)((QHostAddress *)cls)->toIPv4Address ());
}


// QString QHostAddress::toString()


static void _init_f_toString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_toString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QHostAddress *)cls)->toString ());
}


// static QPair<QHostAddress, int> QHostAddress::parseSubnet(const QString &subnet)


static void _init_f_parseSubnet_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subnet");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QPair<QHostAddress, int> > ();
}

static void _call_f_parseSubnet_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QPair<QHostAddress, int> > ((QPair<QHostAddress, int>)QHostAddress::parseSubnet (arg1));
}



namespace gsi
{

static gsi::Methods methods_QHostAddress () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHostAddress::QHostAddress()\nThis method creates an object of class QHostAddress.", &_init_ctor_QHostAddress_0, &_call_ctor_QHostAddress_0);
  methods += new qt_gsi::GenericStaticMethod ("new_ip4", "@brief Constructor QHostAddress::QHostAddress(quint32 ip4Addr)\nThis method creates an object of class QHostAddress.", &_init_ctor_QHostAddress_1098, &_call_ctor_QHostAddress_1098);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHostAddress::QHostAddress(const QString &address)\nThis method creates an object of class QHostAddress.", &_init_ctor_QHostAddress_2025, &_call_ctor_QHostAddress_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHostAddress::QHostAddress(const QHostAddress &copy)\nThis method creates an object of class QHostAddress.", &_init_ctor_QHostAddress_2518, &_call_ctor_QHostAddress_2518);
  methods += new qt_gsi::GenericStaticMethod ("new_special", "@brief Constructor QHostAddress::QHostAddress(QHostAddress::SpecialAddress address)\nThis method creates an object of class QHostAddress.", &_init_ctor_QHostAddress_3172, &_call_ctor_QHostAddress_3172);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QHostAddress::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("isInSubnet?", "@brief Method bool QHostAddress::isInSubnet(const QHostAddress &subnet, int netmask)\n", true, &_init_f_isInSubnet_c3177, &_call_f_isInSubnet_c3177);
  methods += new qt_gsi::GenericMethod ("isInSubnet?", "@brief Method bool QHostAddress::isInSubnet(const QPair<QHostAddress, int> &subnet)\n", true, &_init_f_isInSubnet_c3636, &_call_f_isInSubnet_c3636);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QHostAddress::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QHostAddress::operator !=(const QHostAddress &address)\n", true, &_init_f_operator_excl__eq__c2518, &_call_f_operator_excl__eq__c2518);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QHostAddress::operator !=(QHostAddress::SpecialAddress address)\n", true, &_init_f_operator_excl__eq__c3172, &_call_f_operator_excl__eq__c3172);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QHostAddress::operator ==(const QHostAddress &address)\n", true, &_init_f_operator_eq__eq__c2518, &_call_f_operator_eq__eq__c2518);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QHostAddress::operator ==(QHostAddress::SpecialAddress address)\n", true, &_init_f_operator_eq__eq__c3172, &_call_f_operator_eq__eq__c3172);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QHostAddress &QHostAddress::operator=(const QHostAddress &other)\n", false, &_init_f_operator_eq__2518, &_call_f_operator_eq__2518);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QHostAddress &QHostAddress::operator=(const QString &address)\n", false, &_init_f_operator_eq__2025, &_call_f_operator_eq__2025);
  methods += new qt_gsi::GenericMethod ("protocol", "@brief Method QAbstractSocket::NetworkLayerProtocol QHostAddress::protocol()\n", true, &_init_f_protocol_c0, &_call_f_protocol_c0);
  methods += new qt_gsi::GenericMethod (":scopeId", "@brief Method QString QHostAddress::scopeId()\n", true, &_init_f_scopeId_c0, &_call_f_scopeId_c0);
  methods += new qt_gsi::GenericMethod ("setAddress", "@brief Method void QHostAddress::setAddress(quint32 ip4Addr)\n", false, &_init_f_setAddress_1098, &_call_f_setAddress_1098);
  methods += new qt_gsi::GenericMethod ("setAddress", "@brief Method bool QHostAddress::setAddress(const QString &address)\n", false, &_init_f_setAddress_2025, &_call_f_setAddress_2025);
  methods += new qt_gsi::GenericMethod ("setScopeId|scopeId=", "@brief Method void QHostAddress::setScopeId(const QString &id)\n", false, &_init_f_setScopeId_2025, &_call_f_setScopeId_2025);
  methods += new qt_gsi::GenericMethod ("toIPv4Address", "@brief Method quint32 QHostAddress::toIPv4Address()\n", true, &_init_f_toIPv4Address_c0, &_call_f_toIPv4Address_c0);
  methods += new qt_gsi::GenericMethod ("toString|to_s", "@brief Method QString QHostAddress::toString()\n", true, &_init_f_toString_c0, &_call_f_toString_c0);
  methods += new qt_gsi::GenericStaticMethod ("parseSubnet", "@brief Static method QPair<QHostAddress, int> QHostAddress::parseSubnet(const QString &subnet)\nThis method is static and can be called without an instance.", &_init_f_parseSubnet_2025, &_call_f_parseSubnet_2025);
  return methods;
}

gsi::Class<QHostAddress> decl_QHostAddress ("QHostAddress",
  methods_QHostAddress (),
  "@qt\n@brief Binding of QHostAddress");


GSIQT_PUBLIC gsi::Class<QHostAddress> &qtdecl_QHostAddress () { return decl_QHostAddress; }

}


//  Implementation of the enum wrapper class for QHostAddress::SpecialAddress
namespace qt_gsi
{

static gsi::Enum<QHostAddress::SpecialAddress> decl_QHostAddress_SpecialAddress_Enum ("QHostAddress_SpecialAddress",
    gsi::enum_const ("Null", QHostAddress::Null, "@brief Enum constant QHostAddress::Null") +
    gsi::enum_const ("Broadcast", QHostAddress::Broadcast, "@brief Enum constant QHostAddress::Broadcast") +
    gsi::enum_const ("LocalHost", QHostAddress::LocalHost, "@brief Enum constant QHostAddress::LocalHost") +
    gsi::enum_const ("LocalHostIPv6", QHostAddress::LocalHostIPv6, "@brief Enum constant QHostAddress::LocalHostIPv6") +
    gsi::enum_const ("Any", QHostAddress::Any, "@brief Enum constant QHostAddress::Any") +
    gsi::enum_const ("AnyIPv6", QHostAddress::AnyIPv6, "@brief Enum constant QHostAddress::AnyIPv6"),
  "@qt\n@brief This class represents the QHostAddress::SpecialAddress enum");

static gsi::QFlagsClass<QHostAddress::SpecialAddress > decl_QHostAddress_SpecialAddress_Enums ("QHostAddress_QFlags_SpecialAddress",
  "@qt\n@brief This class represents the QFlags<QHostAddress::SpecialAddress> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QHostAddress> inject_QHostAddress_SpecialAddress_Enum_in_parent (decl_QHostAddress_SpecialAddress_Enum.defs ());
static gsi::ClassExt<QHostAddress> decl_QHostAddress_SpecialAddress_Enum_as_child (decl_QHostAddress_SpecialAddress_Enum, "SpecialAddress");
static gsi::ClassExt<QHostAddress> decl_QHostAddress_SpecialAddress_Enums_as_child (decl_QHostAddress_SpecialAddress_Enums, "QFlags_SpecialAddress");

}

