/**
*  @file gsiDeclQAccessibleObject.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleObject>
#include <QAccessibleInterface>
#include <QColor>
#include <QObject>
#include <QRect>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleObject

// (int, QAccessible::Text, int) const


static void _init_f_actionText_c3378 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("child");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_actionText_c3378 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg2 = args.read<const qt_gsi::Converter<QAccessible::Text>::target_type & > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)((QAccessibleObject *)cls)->actionText (arg1, qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg2).cref(), arg3));
}


// (int, int, const QList<QVariant> &)


static void _init_f_doAction_4052 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("params");
  decl->add_arg<const QList<QVariant> & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_doAction_4052 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  const QList<QVariant> &arg3 = args.read<const QList<QVariant> & > (heap);
  ret.write<bool > ((bool)((QAccessibleObject *)cls)->doAction (arg1, arg2, arg3));
}


// () const


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAccessibleObject *)cls)->isValid ());
}


// () const


static void _init_f_object_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_object_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAccessibleObject *)cls)->object ());
}


// (int) const


static void _init_f_rect_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QRect > ();
}

static void _call_f_rect_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QRect > ((QRect)((QAccessibleObject *)cls)->rect (arg1));
}


// (QAccessible::Text, int, const QString &)


static void _init_f_setText_4636 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("text");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setText_4636 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg1 = args.read<const qt_gsi::Converter<QAccessible::Text>::target_type & > (heap);
  int arg2 = args.read<int > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleObject *)cls)->setText (qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg1).cref(), arg2, arg3);
}


// (int) const


static void _init_f_userActionCount_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_userActionCount_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<int > ((int)((QAccessibleObject *)cls)->userActionCount (arg1));
}



namespace gsi
{

static gsi::Methods methods_QAccessibleObject () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("actionText", "@brief Method (int, QAccessible::Text, int) const\nThis is a reimplementation of QAccessibleInterface::actionText", true, &_init_f_actionText_c3378, &_call_f_actionText_c3378);
  methods += new qt_gsi::GenericMethod ("doAction", "@brief Method (int, int, const QList<QVariant> &)\nThis is a reimplementation of QAccessibleInterface::doAction", false, &_init_f_doAction_4052, &_call_f_doAction_4052);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method () const\nThis is a reimplementation of QAccessibleInterface::isValid", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("object", "@brief Method () const\nThis is a reimplementation of QAccessibleInterface::object", true, &_init_f_object_c0, &_call_f_object_c0);
  methods += new qt_gsi::GenericMethod ("rect", "@brief Method (int) const\nThis is a reimplementation of QAccessibleInterface::rect", true, &_init_f_rect_c767, &_call_f_rect_c767);
  methods += new qt_gsi::GenericMethod ("setText", "@brief Method (QAccessible::Text, int, const QString &)\nThis is a reimplementation of QAccessibleInterface::setText", false, &_init_f_setText_4636, &_call_f_setText_4636);
  methods += new qt_gsi::GenericMethod ("userActionCount", "@brief Method (int) const\nThis is a reimplementation of QAccessibleInterface::userActionCount", true, &_init_f_userActionCount_c767, &_call_f_userActionCount_c767);
  return methods;
}

gsi::Class<QAccessibleInterface> &qtdecl_QAccessibleInterface ();

gsi::Class<QAccessibleObject> decl_QAccessibleObject (qtdecl_QAccessibleInterface (), "QAccessibleObject",
  methods_QAccessibleObject (),
  "@qt\n@brief Binding of QAccessibleObject");


GSIQT_PUBLIC gsi::Class<QAccessibleObject> &qtdecl_QAccessibleObject () { return decl_QAccessibleObject; }

}

