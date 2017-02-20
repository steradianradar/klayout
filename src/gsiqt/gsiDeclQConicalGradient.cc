/**
*  @file gsiDeclQConicalGradient.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QConicalGradient>
#include <QColor>
#include <QGradient>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QConicalGradient

//  Constructor QConicalGradient::QConicalGradient()


static void _init_ctor_QConicalGradient_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QConicalGradient> ();
}

static void _call_ctor_QConicalGradient_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QConicalGradient *> (new QConicalGradient ());
}


//  Constructor QConicalGradient::QConicalGradient(const QPointF &center, double startAngle)


static void _init_ctor_QConicalGradient_2949 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("center");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("startAngle");
  decl->add_arg<double > (argspec_1);
  decl->set_return_new<QConicalGradient> ();
}

static void _call_ctor_QConicalGradient_2949 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  double arg2 = args.read<double > (heap);
  ret.write<QConicalGradient *> (new QConicalGradient (arg1, arg2));
}


//  Constructor QConicalGradient::QConicalGradient(double cx, double cy, double startAngle)


static void _init_ctor_QConicalGradient_2997 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cx");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("cy");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("startAngle");
  decl->add_arg<double > (argspec_2);
  decl->set_return_new<QConicalGradient> ();
}

static void _call_ctor_QConicalGradient_2997 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  double arg3 = args.read<double > (heap);
  ret.write<QConicalGradient *> (new QConicalGradient (arg1, arg2, arg3));
}


// double QConicalGradient::angle()


static void _init_f_angle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_angle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QConicalGradient *)cls)->angle ());
}


// QPointF QConicalGradient::center()


static void _init_f_center_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_center_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QConicalGradient *)cls)->center ());
}


// void QConicalGradient::setAngle(double angle)


static void _init_f_setAngle_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("angle");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAngle_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QConicalGradient *)cls)->setAngle (arg1);
}


// void QConicalGradient::setCenter(const QPointF &center)


static void _init_f_setCenter_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("center");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCenter_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QConicalGradient *)cls)->setCenter (arg1);
}


// void QConicalGradient::setCenter(double x, double y)


static void _init_f_setCenter_2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<double > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setCenter_2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QConicalGradient *)cls)->setCenter (arg1, arg2);
}



namespace gsi
{

static gsi::Methods methods_QConicalGradient () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QConicalGradient::QConicalGradient()\nThis method creates an object of class QConicalGradient.", &_init_ctor_QConicalGradient_0, &_call_ctor_QConicalGradient_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QConicalGradient::QConicalGradient(const QPointF &center, double startAngle)\nThis method creates an object of class QConicalGradient.", &_init_ctor_QConicalGradient_2949, &_call_ctor_QConicalGradient_2949);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QConicalGradient::QConicalGradient(double cx, double cy, double startAngle)\nThis method creates an object of class QConicalGradient.", &_init_ctor_QConicalGradient_2997, &_call_ctor_QConicalGradient_2997);
  methods += new qt_gsi::GenericMethod (":angle", "@brief Method double QConicalGradient::angle()\n", true, &_init_f_angle_c0, &_call_f_angle_c0);
  methods += new qt_gsi::GenericMethod (":center", "@brief Method QPointF QConicalGradient::center()\n", true, &_init_f_center_c0, &_call_f_center_c0);
  methods += new qt_gsi::GenericMethod ("setAngle|angle=", "@brief Method void QConicalGradient::setAngle(double angle)\n", false, &_init_f_setAngle_1071, &_call_f_setAngle_1071);
  methods += new qt_gsi::GenericMethod ("setCenter|center=", "@brief Method void QConicalGradient::setCenter(const QPointF &center)\n", false, &_init_f_setCenter_1986, &_call_f_setCenter_1986);
  methods += new qt_gsi::GenericMethod ("setCenter", "@brief Method void QConicalGradient::setCenter(double x, double y)\n", false, &_init_f_setCenter_2034, &_call_f_setCenter_2034);
  return methods;
}

gsi::Class<QGradient> &qtdecl_QGradient ();

gsi::Class<QConicalGradient> decl_QConicalGradient (qtdecl_QGradient (), "QConicalGradient",
  methods_QConicalGradient (),
  "@qt\n@brief Binding of QConicalGradient");


GSIQT_PUBLIC gsi::Class<QConicalGradient> &qtdecl_QConicalGradient () { return decl_QConicalGradient; }

}

