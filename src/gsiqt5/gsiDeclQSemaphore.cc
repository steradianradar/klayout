/**
*  @file gsiDeclQSemaphore.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSemaphore>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSemaphore

//  Constructor QSemaphore::QSemaphore(int n)


static void _init_ctor_QSemaphore_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return_new<QSemaphore> ();
}

static void _call_ctor_QSemaphore_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(0);
  ret.write<QSemaphore *> (new QSemaphore (arg1));
}


// void QSemaphore::acquire(int n)


static void _init_f_acquire_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n", true, "1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_acquire_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(1);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSemaphore *)cls)->acquire (arg1);
}


// int QSemaphore::available()


static void _init_f_available_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_available_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSemaphore *)cls)->available ());
}


// void QSemaphore::release(int n)


static void _init_f_release_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n", true, "1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_release_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(1);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSemaphore *)cls)->release (arg1);
}


// bool QSemaphore::tryAcquire(int n)


static void _init_f_tryAcquire_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n", true, "1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_tryAcquire_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(1);
  ret.write<bool > ((bool)((QSemaphore *)cls)->tryAcquire (arg1));
}


// bool QSemaphore::tryAcquire(int n, int timeout)


static void _init_f_tryAcquire_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("timeout");
  decl->add_arg<int > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_tryAcquire_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<bool > ((bool)((QSemaphore *)cls)->tryAcquire (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QSemaphore () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSemaphore::QSemaphore(int n)\nThis method creates an object of class QSemaphore.", &_init_ctor_QSemaphore_767, &_call_ctor_QSemaphore_767);
  methods += new qt_gsi::GenericMethod ("acquire", "@brief Method void QSemaphore::acquire(int n)\n", false, &_init_f_acquire_767, &_call_f_acquire_767);
  methods += new qt_gsi::GenericMethod ("available", "@brief Method int QSemaphore::available()\n", true, &_init_f_available_c0, &_call_f_available_c0);
  methods += new qt_gsi::GenericMethod ("release", "@brief Method void QSemaphore::release(int n)\n", false, &_init_f_release_767, &_call_f_release_767);
  methods += new qt_gsi::GenericMethod ("tryAcquire", "@brief Method bool QSemaphore::tryAcquire(int n)\n", false, &_init_f_tryAcquire_767, &_call_f_tryAcquire_767);
  methods += new qt_gsi::GenericMethod ("tryAcquire", "@brief Method bool QSemaphore::tryAcquire(int n, int timeout)\n", false, &_init_f_tryAcquire_1426, &_call_f_tryAcquire_1426);
  return methods;
}

gsi::Class<QSemaphore> decl_QSemaphore ("QSemaphore",
  methods_QSemaphore (),
  "@qt\n@brief Binding of QSemaphore");


GSIQT_PUBLIC gsi::Class<QSemaphore> &qtdecl_QSemaphore () { return decl_QSemaphore; }

}

