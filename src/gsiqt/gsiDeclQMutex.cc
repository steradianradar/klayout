/**
*  @file gsiDeclQMutex.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMutex>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMutex

//  Constructor QMutex::QMutex(QMutex::RecursionMode mode)


static void _init_ctor_QMutex_2507 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode", true, "QMutex::NonRecursive");
  decl->add_arg<const qt_gsi::Converter<QMutex::RecursionMode>::target_type & > (argspec_0);
  decl->set_return_new<QMutex> ();
}

static void _call_ctor_QMutex_2507 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QMutex::RecursionMode>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<QMutex::RecursionMode>::target_type & > (heap) : (const qt_gsi::Converter<QMutex::RecursionMode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QMutex::RecursionMode>(heap, QMutex::NonRecursive));
  ret.write<QMutex *> (new QMutex (qt_gsi::QtToCppAdaptor<QMutex::RecursionMode>(arg1).cref()));
}


// void QMutex::lock()


static void _init_f_lock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_lock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMutex *)cls)->lock ();
}


// bool QMutex::tryLock()


static void _init_f_tryLock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_tryLock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMutex *)cls)->tryLock ());
}


// bool QMutex::tryLock(int timeout)


static void _init_f_tryLock_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timeout");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_tryLock_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<bool > ((bool)((QMutex *)cls)->tryLock (arg1));
}


// void QMutex::unlock()


static void _init_f_unlock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_unlock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMutex *)cls)->unlock ();
}



namespace gsi
{

static gsi::Methods methods_QMutex () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMutex::QMutex(QMutex::RecursionMode mode)\nThis method creates an object of class QMutex.", &_init_ctor_QMutex_2507, &_call_ctor_QMutex_2507);
  methods += new qt_gsi::GenericMethod ("lock", "@brief Method void QMutex::lock()\n", false, &_init_f_lock_0, &_call_f_lock_0);
  methods += new qt_gsi::GenericMethod ("tryLock", "@brief Method bool QMutex::tryLock()\n", false, &_init_f_tryLock_0, &_call_f_tryLock_0);
  methods += new qt_gsi::GenericMethod ("tryLock", "@brief Method bool QMutex::tryLock(int timeout)\n", false, &_init_f_tryLock_767, &_call_f_tryLock_767);
  methods += new qt_gsi::GenericMethod ("unlock", "@brief Method void QMutex::unlock()\n", false, &_init_f_unlock_0, &_call_f_unlock_0);
  return methods;
}

gsi::Class<QMutex> decl_QMutex ("QMutex",
  methods_QMutex (),
  "@qt\n@brief Binding of QMutex");


GSIQT_PUBLIC gsi::Class<QMutex> &qtdecl_QMutex () { return decl_QMutex; }

}


//  Implementation of the enum wrapper class for QMutex::RecursionMode
namespace qt_gsi
{

static gsi::Enum<QMutex::RecursionMode> decl_QMutex_RecursionMode_Enum ("QMutex_RecursionMode",
    gsi::enum_const ("NonRecursive", QMutex::NonRecursive, "@brief Enum constant QMutex::NonRecursive") +
    gsi::enum_const ("Recursive", QMutex::Recursive, "@brief Enum constant QMutex::Recursive"),
  "@qt\n@brief This class represents the QMutex::RecursionMode enum");

static gsi::QFlagsClass<QMutex::RecursionMode > decl_QMutex_RecursionMode_Enums ("QMutex_QFlags_RecursionMode",
  "@qt\n@brief This class represents the QFlags<QMutex::RecursionMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMutex> inject_QMutex_RecursionMode_Enum_in_parent (decl_QMutex_RecursionMode_Enum.defs ());
static gsi::ClassExt<QMutex> decl_QMutex_RecursionMode_Enum_as_child (decl_QMutex_RecursionMode_Enum, "RecursionMode");
static gsi::ClassExt<QMutex> decl_QMutex_RecursionMode_Enums_as_child (decl_QMutex_RecursionMode_Enums, "QFlags_RecursionMode");

}

