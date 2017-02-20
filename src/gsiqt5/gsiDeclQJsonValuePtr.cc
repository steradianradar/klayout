/**
*  @file gsiDeclQJsonValuePtr.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QJsonValuePtr>
#include <QJsonValue>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QJsonValuePtr

//  Constructor QJsonValuePtr::QJsonValuePtr(const QJsonValue &val)


static void _init_ctor_QJsonValuePtr_2313 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("val");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return_new<QJsonValuePtr> ();
}

static void _call_ctor_QJsonValuePtr_2313 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = args.read<const QJsonValue & > (heap);
  ret.write<QJsonValuePtr *> (new QJsonValuePtr (arg1));
}


// QJsonValue &QJsonValuePtr::operator*()


static void _init_f_operator_star__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValue & > ();
}

static void _call_f_operator_star__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValue & > ((QJsonValue &)((QJsonValuePtr *)cls)->operator* ());
}


// QJsonValue *QJsonValuePtr::operator->()


static void _init_f_operator_minus__gt__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValue * > ();
}

static void _call_f_operator_minus__gt__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValue * > ((QJsonValue *)((QJsonValuePtr *)cls)->operator-> ());
}



namespace gsi
{

static gsi::Methods methods_QJsonValuePtr () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValuePtr::QJsonValuePtr(const QJsonValue &val)\nThis method creates an object of class QJsonValuePtr.", &_init_ctor_QJsonValuePtr_2313, &_call_ctor_QJsonValuePtr_2313);
  methods += new qt_gsi::GenericMethod ("*", "@brief Method QJsonValue &QJsonValuePtr::operator*()\n", false, &_init_f_operator_star__0, &_call_f_operator_star__0);
  methods += new qt_gsi::GenericMethod ("->", "@brief Method QJsonValue *QJsonValuePtr::operator->()\n", false, &_init_f_operator_minus__gt__0, &_call_f_operator_minus__gt__0);
  return methods;
}

gsi::Class<QJsonValuePtr> decl_QJsonValuePtr ("QJsonValuePtr",
  methods_QJsonValuePtr (),
  "@qt\n@brief Binding of QJsonValuePtr");


GSIQT_PUBLIC gsi::Class<QJsonValuePtr> &qtdecl_QJsonValuePtr () { return decl_QJsonValuePtr; }

}

