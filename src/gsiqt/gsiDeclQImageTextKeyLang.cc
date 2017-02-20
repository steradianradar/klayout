/**
*  @file gsiDeclQImageTextKeyLang.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QImageTextKeyLang>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QImageTextKeyLang

//  Constructor QImageTextKeyLang::QImageTextKeyLang(const char *k, const char *l)


static void _init_ctor_QImageTextKeyLang_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("k");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("l");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return_new<QImageTextKeyLang> ();
}

static void _call_ctor_QImageTextKeyLang_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  ret.write<QImageTextKeyLang *> (new QImageTextKeyLang (arg1, arg2));
}


//  Constructor QImageTextKeyLang::QImageTextKeyLang()


static void _init_ctor_QImageTextKeyLang_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QImageTextKeyLang> ();
}

static void _call_ctor_QImageTextKeyLang_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QImageTextKeyLang *> (new QImageTextKeyLang ());
}


// bool QImageTextKeyLang::operator!=(const QImageTextKeyLang &other)


static void _init_f_operator_excl__eq__c2981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QImageTextKeyLang & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageTextKeyLang &arg1 = args.read<const QImageTextKeyLang & > (heap);
  ret.write<bool > ((bool)((QImageTextKeyLang *)cls)->operator!= (arg1));
}


// bool QImageTextKeyLang::operator<(const QImageTextKeyLang &other)


static void _init_f_operator_lt__c2981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QImageTextKeyLang & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c2981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageTextKeyLang &arg1 = args.read<const QImageTextKeyLang & > (heap);
  ret.write<bool > ((bool)((QImageTextKeyLang *)cls)->operator< (arg1));
}


// bool QImageTextKeyLang::operator==(const QImageTextKeyLang &other)


static void _init_f_operator_eq__eq__c2981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QImageTextKeyLang & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageTextKeyLang &arg1 = args.read<const QImageTextKeyLang & > (heap);
  ret.write<bool > ((bool)((QImageTextKeyLang *)cls)->operator== (arg1));
}



namespace gsi
{

static gsi::Methods methods_QImageTextKeyLang () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageTextKeyLang::QImageTextKeyLang(const char *k, const char *l)\nThis method creates an object of class QImageTextKeyLang.", &_init_ctor_QImageTextKeyLang_3354, &_call_ctor_QImageTextKeyLang_3354);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageTextKeyLang::QImageTextKeyLang()\nThis method creates an object of class QImageTextKeyLang.", &_init_ctor_QImageTextKeyLang_0, &_call_ctor_QImageTextKeyLang_0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QImageTextKeyLang::operator!=(const QImageTextKeyLang &other)\n", true, &_init_f_operator_excl__eq__c2981, &_call_f_operator_excl__eq__c2981);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QImageTextKeyLang::operator<(const QImageTextKeyLang &other)\n", true, &_init_f_operator_lt__c2981, &_call_f_operator_lt__c2981);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QImageTextKeyLang::operator==(const QImageTextKeyLang &other)\n", true, &_init_f_operator_eq__eq__c2981, &_call_f_operator_eq__eq__c2981);
  return methods;
}

gsi::Class<QImageTextKeyLang> decl_QImageTextKeyLang ("QImageTextKeyLang",
  methods_QImageTextKeyLang (),
  "@qt\n@brief Binding of QImageTextKeyLang");


GSIQT_PUBLIC gsi::Class<QImageTextKeyLang> &qtdecl_QImageTextKeyLang () { return decl_QImageTextKeyLang; }

}

