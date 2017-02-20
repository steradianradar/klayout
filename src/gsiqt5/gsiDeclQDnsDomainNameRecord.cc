/**
*  @file gsiDeclQDnsDomainNameRecord.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDnsDomainNameRecord>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDnsDomainNameRecord

//  Constructor QDnsDomainNameRecord::QDnsDomainNameRecord()


static void _init_ctor_QDnsDomainNameRecord_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDnsDomainNameRecord> ();
}

static void _call_ctor_QDnsDomainNameRecord_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDnsDomainNameRecord *> (new QDnsDomainNameRecord ());
}


//  Constructor QDnsDomainNameRecord::QDnsDomainNameRecord(const QDnsDomainNameRecord &other)


static void _init_ctor_QDnsDomainNameRecord_3279 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDnsDomainNameRecord & > (argspec_0);
  decl->set_return_new<QDnsDomainNameRecord> ();
}

static void _call_ctor_QDnsDomainNameRecord_3279 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDnsDomainNameRecord &arg1 = args.read<const QDnsDomainNameRecord & > (heap);
  ret.write<QDnsDomainNameRecord *> (new QDnsDomainNameRecord (arg1));
}


// QString QDnsDomainNameRecord::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDnsDomainNameRecord *)cls)->name ());
}


// QDnsDomainNameRecord &QDnsDomainNameRecord::operator=(const QDnsDomainNameRecord &other)


static void _init_f_operator_eq__3279 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDnsDomainNameRecord & > (argspec_0);
  decl->set_return<QDnsDomainNameRecord & > ();
}

static void _call_f_operator_eq__3279 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDnsDomainNameRecord &arg1 = args.read<const QDnsDomainNameRecord & > (heap);
  ret.write<QDnsDomainNameRecord & > ((QDnsDomainNameRecord &)((QDnsDomainNameRecord *)cls)->operator= (arg1));
}


// void QDnsDomainNameRecord::swap(QDnsDomainNameRecord &other)


static void _init_f_swap_2584 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QDnsDomainNameRecord & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2584 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDnsDomainNameRecord &arg1 = args.read<QDnsDomainNameRecord & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDnsDomainNameRecord *)cls)->swap (arg1);
}


// quint32 QDnsDomainNameRecord::timeToLive()


static void _init_f_timeToLive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint32 > ();
}

static void _call_f_timeToLive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint32 > ((quint32)((QDnsDomainNameRecord *)cls)->timeToLive ());
}


// QString QDnsDomainNameRecord::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDnsDomainNameRecord *)cls)->value ());
}



namespace gsi
{

static gsi::Methods methods_QDnsDomainNameRecord () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDnsDomainNameRecord::QDnsDomainNameRecord()\nThis method creates an object of class QDnsDomainNameRecord.", &_init_ctor_QDnsDomainNameRecord_0, &_call_ctor_QDnsDomainNameRecord_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDnsDomainNameRecord::QDnsDomainNameRecord(const QDnsDomainNameRecord &other)\nThis method creates an object of class QDnsDomainNameRecord.", &_init_ctor_QDnsDomainNameRecord_3279, &_call_ctor_QDnsDomainNameRecord_3279);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QString QDnsDomainNameRecord::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDnsDomainNameRecord &QDnsDomainNameRecord::operator=(const QDnsDomainNameRecord &other)\n", false, &_init_f_operator_eq__3279, &_call_f_operator_eq__3279);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QDnsDomainNameRecord::swap(QDnsDomainNameRecord &other)\n", false, &_init_f_swap_2584, &_call_f_swap_2584);
  methods += new qt_gsi::GenericMethod ("timeToLive", "@brief Method quint32 QDnsDomainNameRecord::timeToLive()\n", true, &_init_f_timeToLive_c0, &_call_f_timeToLive_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QString QDnsDomainNameRecord::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  return methods;
}

gsi::Class<QDnsDomainNameRecord> decl_QDnsDomainNameRecord ("QDnsDomainNameRecord",
  methods_QDnsDomainNameRecord (),
  "@qt\n@brief Binding of QDnsDomainNameRecord");


GSIQT_PUBLIC gsi::Class<QDnsDomainNameRecord> &qtdecl_QDnsDomainNameRecord () { return decl_QDnsDomainNameRecord; }

}

