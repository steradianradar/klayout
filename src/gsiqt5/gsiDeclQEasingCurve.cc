/**
*  @file gsiDeclQEasingCurve.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QEasingCurve>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QEasingCurve

//  Constructor QEasingCurve::QEasingCurve(QEasingCurve::Type type)


static void _init_ctor_QEasingCurve_2167 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type", true, "QEasingCurve::Linear");
  decl->add_arg<const qt_gsi::Converter<QEasingCurve::Type>::target_type & > (argspec_0);
  decl->set_return_new<QEasingCurve> ();
}

static void _call_ctor_QEasingCurve_2167 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEasingCurve::Type>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<QEasingCurve::Type>::target_type & > (heap) : (const qt_gsi::Converter<QEasingCurve::Type>::target_type &)(qt_gsi::CppToQtReadAdaptor<QEasingCurve::Type>(heap, QEasingCurve::Linear));
  ret.write<QEasingCurve *> (new QEasingCurve (qt_gsi::QtToCppAdaptor<QEasingCurve::Type>(arg1).cref()));
}


//  Constructor QEasingCurve::QEasingCurve(const QEasingCurve &other)


static void _init_ctor_QEasingCurve_2510 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QEasingCurve & > (argspec_0);
  decl->set_return_new<QEasingCurve> ();
}

static void _call_ctor_QEasingCurve_2510 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEasingCurve &arg1 = args.read<const QEasingCurve & > (heap);
  ret.write<QEasingCurve *> (new QEasingCurve (arg1));
}


// void QEasingCurve::addCubicBezierSegment(const QPointF &c1, const QPointF &c2, const QPointF &endPoint)


static void _init_f_addCubicBezierSegment_5742 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c1");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c2");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("endPoint");
  decl->add_arg<const QPointF & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_addCubicBezierSegment_5742 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  const QPointF &arg2 = args.read<const QPointF & > (heap);
  const QPointF &arg3 = args.read<const QPointF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEasingCurve *)cls)->addCubicBezierSegment (arg1, arg2, arg3);
}


// void QEasingCurve::addTCBSegment(const QPointF &nextPoint, double t, double c, double b)


static void _init_f_addTCBSegment_4875 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nextPoint");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("t");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("c");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("b");
  decl->add_arg<double > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_addTCBSegment_4875 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  double arg2 = args.read<double > (heap);
  double arg3 = args.read<double > (heap);
  double arg4 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEasingCurve *)cls)->addTCBSegment (arg1, arg2, arg3, arg4);
}


// double QEasingCurve::amplitude()


static void _init_f_amplitude_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_amplitude_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QEasingCurve *)cls)->amplitude ());
}


// bool QEasingCurve::operator!=(const QEasingCurve &other)


static void _init_f_operator_excl__eq__c2510 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QEasingCurve & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2510 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEasingCurve &arg1 = args.read<const QEasingCurve & > (heap);
  ret.write<bool > ((bool)((QEasingCurve *)cls)->operator!= (arg1));
}


// QEasingCurve &QEasingCurve::operator=(const QEasingCurve &other)


static void _init_f_operator_eq__2510 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QEasingCurve & > (argspec_0);
  decl->set_return<QEasingCurve & > ();
}

static void _call_f_operator_eq__2510 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEasingCurve &arg1 = args.read<const QEasingCurve & > (heap);
  ret.write<QEasingCurve & > ((QEasingCurve &)((QEasingCurve *)cls)->operator= (arg1));
}


// bool QEasingCurve::operator==(const QEasingCurve &other)


static void _init_f_operator_eq__eq__c2510 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QEasingCurve & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2510 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEasingCurve &arg1 = args.read<const QEasingCurve & > (heap);
  ret.write<bool > ((bool)((QEasingCurve *)cls)->operator== (arg1));
}


// double QEasingCurve::overshoot()


static void _init_f_overshoot_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_overshoot_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QEasingCurve *)cls)->overshoot ());
}


// double QEasingCurve::period()


static void _init_f_period_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_period_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QEasingCurve *)cls)->period ());
}


// void QEasingCurve::setAmplitude(double amplitude)


static void _init_f_setAmplitude_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("amplitude");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAmplitude_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEasingCurve *)cls)->setAmplitude (arg1);
}


// void QEasingCurve::setOvershoot(double overshoot)


static void _init_f_setOvershoot_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("overshoot");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOvershoot_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEasingCurve *)cls)->setOvershoot (arg1);
}


// void QEasingCurve::setPeriod(double period)


static void _init_f_setPeriod_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("period");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPeriod_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEasingCurve *)cls)->setPeriod (arg1);
}


// void QEasingCurve::setType(QEasingCurve::Type type)


static void _init_f_setType_2167 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEasingCurve::Type>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setType_2167 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEasingCurve::Type>::target_type & arg1 = args.read<const qt_gsi::Converter<QEasingCurve::Type>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEasingCurve *)cls)->setType (qt_gsi::QtToCppAdaptor<QEasingCurve::Type>(arg1).cref());
}


// void QEasingCurve::swap(QEasingCurve &other)


static void _init_f_swap_1815 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QEasingCurve & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1815 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEasingCurve &arg1 = args.read<QEasingCurve & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEasingCurve *)cls)->swap (arg1);
}


// QVector<QPointF> QEasingCurve::toCubicSpline()


static void _init_f_toCubicSpline_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector<QPointF> > ();
}

static void _call_f_toCubicSpline_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector<QPointF> > ((QVector<QPointF>)((QEasingCurve *)cls)->toCubicSpline ());
}


// QEasingCurve::Type QEasingCurve::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QEasingCurve::Type>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QEasingCurve::Type>::target_type > ((qt_gsi::Converter<QEasingCurve::Type>::target_type)qt_gsi::CppToQtAdaptor<QEasingCurve::Type>(((QEasingCurve *)cls)->type ()));
}


// double QEasingCurve::valueForProgress(double progress)


static void _init_f_valueForProgress_c1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("progress");
  decl->add_arg<double > (argspec_0);
  decl->set_return<double > ();
}

static void _call_f_valueForProgress_c1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  ret.write<double > ((double)((QEasingCurve *)cls)->valueForProgress (arg1));
}



namespace gsi
{

static gsi::Methods methods_QEasingCurve () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QEasingCurve::QEasingCurve(QEasingCurve::Type type)\nThis method creates an object of class QEasingCurve.", &_init_ctor_QEasingCurve_2167, &_call_ctor_QEasingCurve_2167);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QEasingCurve::QEasingCurve(const QEasingCurve &other)\nThis method creates an object of class QEasingCurve.", &_init_ctor_QEasingCurve_2510, &_call_ctor_QEasingCurve_2510);
  methods += new qt_gsi::GenericMethod ("addCubicBezierSegment", "@brief Method void QEasingCurve::addCubicBezierSegment(const QPointF &c1, const QPointF &c2, const QPointF &endPoint)\n", false, &_init_f_addCubicBezierSegment_5742, &_call_f_addCubicBezierSegment_5742);
  methods += new qt_gsi::GenericMethod ("addTCBSegment", "@brief Method void QEasingCurve::addTCBSegment(const QPointF &nextPoint, double t, double c, double b)\n", false, &_init_f_addTCBSegment_4875, &_call_f_addTCBSegment_4875);
  methods += new qt_gsi::GenericMethod (":amplitude", "@brief Method double QEasingCurve::amplitude()\n", true, &_init_f_amplitude_c0, &_call_f_amplitude_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QEasingCurve::operator!=(const QEasingCurve &other)\n", true, &_init_f_operator_excl__eq__c2510, &_call_f_operator_excl__eq__c2510);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QEasingCurve &QEasingCurve::operator=(const QEasingCurve &other)\n", false, &_init_f_operator_eq__2510, &_call_f_operator_eq__2510);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QEasingCurve::operator==(const QEasingCurve &other)\n", true, &_init_f_operator_eq__eq__c2510, &_call_f_operator_eq__eq__c2510);
  methods += new qt_gsi::GenericMethod (":overshoot", "@brief Method double QEasingCurve::overshoot()\n", true, &_init_f_overshoot_c0, &_call_f_overshoot_c0);
  methods += new qt_gsi::GenericMethod (":period", "@brief Method double QEasingCurve::period()\n", true, &_init_f_period_c0, &_call_f_period_c0);
  methods += new qt_gsi::GenericMethod ("setAmplitude|amplitude=", "@brief Method void QEasingCurve::setAmplitude(double amplitude)\n", false, &_init_f_setAmplitude_1071, &_call_f_setAmplitude_1071);
  methods += new qt_gsi::GenericMethod ("setOvershoot|overshoot=", "@brief Method void QEasingCurve::setOvershoot(double overshoot)\n", false, &_init_f_setOvershoot_1071, &_call_f_setOvershoot_1071);
  methods += new qt_gsi::GenericMethod ("setPeriod|period=", "@brief Method void QEasingCurve::setPeriod(double period)\n", false, &_init_f_setPeriod_1071, &_call_f_setPeriod_1071);
  methods += new qt_gsi::GenericMethod ("setType|type=", "@brief Method void QEasingCurve::setType(QEasingCurve::Type type)\n", false, &_init_f_setType_2167, &_call_f_setType_2167);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QEasingCurve::swap(QEasingCurve &other)\n", false, &_init_f_swap_1815, &_call_f_swap_1815);
  methods += new qt_gsi::GenericMethod ("toCubicSpline", "@brief Method QVector<QPointF> QEasingCurve::toCubicSpline()\n", true, &_init_f_toCubicSpline_c0, &_call_f_toCubicSpline_c0);
  methods += new qt_gsi::GenericMethod (":type", "@brief Method QEasingCurve::Type QEasingCurve::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  methods += new qt_gsi::GenericMethod ("valueForProgress", "@brief Method double QEasingCurve::valueForProgress(double progress)\n", true, &_init_f_valueForProgress_c1071, &_call_f_valueForProgress_c1071);
  return methods;
}

gsi::Class<QEasingCurve> decl_QEasingCurve ("QEasingCurve",
  methods_QEasingCurve (),
  "@qt\n@brief Binding of QEasingCurve");


GSIQT_PUBLIC gsi::Class<QEasingCurve> &qtdecl_QEasingCurve () { return decl_QEasingCurve; }

}


//  Implementation of the enum wrapper class for QEasingCurve::Type
namespace qt_gsi
{

static gsi::Enum<QEasingCurve::Type> decl_QEasingCurve_Type_Enum ("QEasingCurve_Type",
    gsi::enum_const ("Linear", QEasingCurve::Linear, "@brief Enum constant QEasingCurve::Linear") +
    gsi::enum_const ("InQuad", QEasingCurve::InQuad, "@brief Enum constant QEasingCurve::InQuad") +
    gsi::enum_const ("OutQuad", QEasingCurve::OutQuad, "@brief Enum constant QEasingCurve::OutQuad") +
    gsi::enum_const ("InOutQuad", QEasingCurve::InOutQuad, "@brief Enum constant QEasingCurve::InOutQuad") +
    gsi::enum_const ("OutInQuad", QEasingCurve::OutInQuad, "@brief Enum constant QEasingCurve::OutInQuad") +
    gsi::enum_const ("InCubic", QEasingCurve::InCubic, "@brief Enum constant QEasingCurve::InCubic") +
    gsi::enum_const ("OutCubic", QEasingCurve::OutCubic, "@brief Enum constant QEasingCurve::OutCubic") +
    gsi::enum_const ("InOutCubic", QEasingCurve::InOutCubic, "@brief Enum constant QEasingCurve::InOutCubic") +
    gsi::enum_const ("OutInCubic", QEasingCurve::OutInCubic, "@brief Enum constant QEasingCurve::OutInCubic") +
    gsi::enum_const ("InQuart", QEasingCurve::InQuart, "@brief Enum constant QEasingCurve::InQuart") +
    gsi::enum_const ("OutQuart", QEasingCurve::OutQuart, "@brief Enum constant QEasingCurve::OutQuart") +
    gsi::enum_const ("InOutQuart", QEasingCurve::InOutQuart, "@brief Enum constant QEasingCurve::InOutQuart") +
    gsi::enum_const ("OutInQuart", QEasingCurve::OutInQuart, "@brief Enum constant QEasingCurve::OutInQuart") +
    gsi::enum_const ("InQuint", QEasingCurve::InQuint, "@brief Enum constant QEasingCurve::InQuint") +
    gsi::enum_const ("OutQuint", QEasingCurve::OutQuint, "@brief Enum constant QEasingCurve::OutQuint") +
    gsi::enum_const ("InOutQuint", QEasingCurve::InOutQuint, "@brief Enum constant QEasingCurve::InOutQuint") +
    gsi::enum_const ("OutInQuint", QEasingCurve::OutInQuint, "@brief Enum constant QEasingCurve::OutInQuint") +
    gsi::enum_const ("InSine", QEasingCurve::InSine, "@brief Enum constant QEasingCurve::InSine") +
    gsi::enum_const ("OutSine", QEasingCurve::OutSine, "@brief Enum constant QEasingCurve::OutSine") +
    gsi::enum_const ("InOutSine", QEasingCurve::InOutSine, "@brief Enum constant QEasingCurve::InOutSine") +
    gsi::enum_const ("OutInSine", QEasingCurve::OutInSine, "@brief Enum constant QEasingCurve::OutInSine") +
    gsi::enum_const ("InExpo", QEasingCurve::InExpo, "@brief Enum constant QEasingCurve::InExpo") +
    gsi::enum_const ("OutExpo", QEasingCurve::OutExpo, "@brief Enum constant QEasingCurve::OutExpo") +
    gsi::enum_const ("InOutExpo", QEasingCurve::InOutExpo, "@brief Enum constant QEasingCurve::InOutExpo") +
    gsi::enum_const ("OutInExpo", QEasingCurve::OutInExpo, "@brief Enum constant QEasingCurve::OutInExpo") +
    gsi::enum_const ("InCirc", QEasingCurve::InCirc, "@brief Enum constant QEasingCurve::InCirc") +
    gsi::enum_const ("OutCirc", QEasingCurve::OutCirc, "@brief Enum constant QEasingCurve::OutCirc") +
    gsi::enum_const ("InOutCirc", QEasingCurve::InOutCirc, "@brief Enum constant QEasingCurve::InOutCirc") +
    gsi::enum_const ("OutInCirc", QEasingCurve::OutInCirc, "@brief Enum constant QEasingCurve::OutInCirc") +
    gsi::enum_const ("InElastic", QEasingCurve::InElastic, "@brief Enum constant QEasingCurve::InElastic") +
    gsi::enum_const ("OutElastic", QEasingCurve::OutElastic, "@brief Enum constant QEasingCurve::OutElastic") +
    gsi::enum_const ("InOutElastic", QEasingCurve::InOutElastic, "@brief Enum constant QEasingCurve::InOutElastic") +
    gsi::enum_const ("OutInElastic", QEasingCurve::OutInElastic, "@brief Enum constant QEasingCurve::OutInElastic") +
    gsi::enum_const ("InBack", QEasingCurve::InBack, "@brief Enum constant QEasingCurve::InBack") +
    gsi::enum_const ("OutBack", QEasingCurve::OutBack, "@brief Enum constant QEasingCurve::OutBack") +
    gsi::enum_const ("InOutBack", QEasingCurve::InOutBack, "@brief Enum constant QEasingCurve::InOutBack") +
    gsi::enum_const ("OutInBack", QEasingCurve::OutInBack, "@brief Enum constant QEasingCurve::OutInBack") +
    gsi::enum_const ("InBounce", QEasingCurve::InBounce, "@brief Enum constant QEasingCurve::InBounce") +
    gsi::enum_const ("OutBounce", QEasingCurve::OutBounce, "@brief Enum constant QEasingCurve::OutBounce") +
    gsi::enum_const ("InOutBounce", QEasingCurve::InOutBounce, "@brief Enum constant QEasingCurve::InOutBounce") +
    gsi::enum_const ("OutInBounce", QEasingCurve::OutInBounce, "@brief Enum constant QEasingCurve::OutInBounce") +
    gsi::enum_const ("InCurve", QEasingCurve::InCurve, "@brief Enum constant QEasingCurve::InCurve") +
    gsi::enum_const ("OutCurve", QEasingCurve::OutCurve, "@brief Enum constant QEasingCurve::OutCurve") +
    gsi::enum_const ("SineCurve", QEasingCurve::SineCurve, "@brief Enum constant QEasingCurve::SineCurve") +
    gsi::enum_const ("CosineCurve", QEasingCurve::CosineCurve, "@brief Enum constant QEasingCurve::CosineCurve") +
    gsi::enum_const ("BezierSpline", QEasingCurve::BezierSpline, "@brief Enum constant QEasingCurve::BezierSpline") +
    gsi::enum_const ("TCBSpline", QEasingCurve::TCBSpline, "@brief Enum constant QEasingCurve::TCBSpline") +
    gsi::enum_const ("Custom", QEasingCurve::Custom, "@brief Enum constant QEasingCurve::Custom") +
    gsi::enum_const ("NCurveTypes", QEasingCurve::NCurveTypes, "@brief Enum constant QEasingCurve::NCurveTypes"),
  "@qt\n@brief This class represents the QEasingCurve::Type enum");

static gsi::QFlagsClass<QEasingCurve::Type > decl_QEasingCurve_Type_Enums ("QEasingCurve_QFlags_Type",
  "@qt\n@brief This class represents the QFlags<QEasingCurve::Type> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QEasingCurve> inject_QEasingCurve_Type_Enum_in_parent (decl_QEasingCurve_Type_Enum.defs ());
static gsi::ClassExt<QEasingCurve> decl_QEasingCurve_Type_Enum_as_child (decl_QEasingCurve_Type_Enum, "Type");
static gsi::ClassExt<QEasingCurve> decl_QEasingCurve_Type_Enums_as_child (decl_QEasingCurve_Type_Enums, "QFlags_Type");

}

