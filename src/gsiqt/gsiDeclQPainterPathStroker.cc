/**
*  @file gsiDeclQPainterPathStroker.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPainterPathStroker>
#include <QPainterPath>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPainterPathStroker

//  Constructor QPainterPathStroker::QPainterPathStroker()


static void _init_ctor_QPainterPathStroker_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPainterPathStroker> ();
}

static void _call_ctor_QPainterPathStroker_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPainterPathStroker *> (new QPainterPathStroker ());
}


// Qt::PenCapStyle QPainterPathStroker::capStyle()


static void _init_f_capStyle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::PenCapStyle>::target_type > ();
}

static void _call_f_capStyle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::PenCapStyle>::target_type > ((qt_gsi::Converter<Qt::PenCapStyle>::target_type)qt_gsi::CppToQtAdaptor<Qt::PenCapStyle>(((QPainterPathStroker *)cls)->capStyle ()));
}


// QPainterPath QPainterPathStroker::createStroke(const QPainterPath &path)


static void _init_f_createStroke_c2514 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("path");
  decl->add_arg<const QPainterPath & > (argspec_0);
  decl->set_return<QPainterPath > ();
}

static void _call_f_createStroke_c2514 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPainterPath &arg1 = args.read<const QPainterPath & > (heap);
  ret.write<QPainterPath > ((QPainterPath)((QPainterPathStroker *)cls)->createStroke (arg1));
}


// double QPainterPathStroker::curveThreshold()


static void _init_f_curveThreshold_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_curveThreshold_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPainterPathStroker *)cls)->curveThreshold ());
}


// double QPainterPathStroker::dashOffset()


static void _init_f_dashOffset_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_dashOffset_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPainterPathStroker *)cls)->dashOffset ());
}


// QVector<qreal> QPainterPathStroker::dashPattern()


static void _init_f_dashPattern_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector<qreal> > ();
}

static void _call_f_dashPattern_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector<qreal> > ((QVector<qreal>)((QPainterPathStroker *)cls)->dashPattern ());
}


// Qt::PenJoinStyle QPainterPathStroker::joinStyle()


static void _init_f_joinStyle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::PenJoinStyle>::target_type > ();
}

static void _call_f_joinStyle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::PenJoinStyle>::target_type > ((qt_gsi::Converter<Qt::PenJoinStyle>::target_type)qt_gsi::CppToQtAdaptor<Qt::PenJoinStyle>(((QPainterPathStroker *)cls)->joinStyle ()));
}


// double QPainterPathStroker::miterLimit()


static void _init_f_miterLimit_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_miterLimit_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPainterPathStroker *)cls)->miterLimit ());
}


// void QPainterPathStroker::setCapStyle(Qt::PenCapStyle style)


static void _init_f_setCapStyle_1845 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("style");
  decl->add_arg<const qt_gsi::Converter<Qt::PenCapStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCapStyle_1845 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::PenCapStyle>::target_type & arg1 = args.read<const qt_gsi::Converter<Qt::PenCapStyle>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPainterPathStroker *)cls)->setCapStyle (qt_gsi::QtToCppAdaptor<Qt::PenCapStyle>(arg1).cref());
}


// void QPainterPathStroker::setCurveThreshold(double threshold)


static void _init_f_setCurveThreshold_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("threshold");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCurveThreshold_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPainterPathStroker *)cls)->setCurveThreshold (arg1);
}


// void QPainterPathStroker::setDashOffset(double offset)


static void _init_f_setDashOffset_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDashOffset_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPainterPathStroker *)cls)->setDashOffset (arg1);
}


// void QPainterPathStroker::setDashPattern(Qt::PenStyle)


static void _init_f_setDashPattern_1569 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<Qt::PenStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDashPattern_1569 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::PenStyle>::target_type & arg1 = args.read<const qt_gsi::Converter<Qt::PenStyle>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPainterPathStroker *)cls)->setDashPattern (qt_gsi::QtToCppAdaptor<Qt::PenStyle>(arg1).cref());
}


// void QPainterPathStroker::setDashPattern(const QVector<qreal> &dashPattern)


static void _init_f_setDashPattern_2676 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dashPattern");
  decl->add_arg<const QVector<qreal> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDashPattern_2676 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector<qreal> &arg1 = args.read<const QVector<qreal> & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPainterPathStroker *)cls)->setDashPattern (arg1);
}


// void QPainterPathStroker::setJoinStyle(Qt::PenJoinStyle style)


static void _init_f_setJoinStyle_1969 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("style");
  decl->add_arg<const qt_gsi::Converter<Qt::PenJoinStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setJoinStyle_1969 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::PenJoinStyle>::target_type & arg1 = args.read<const qt_gsi::Converter<Qt::PenJoinStyle>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPainterPathStroker *)cls)->setJoinStyle (qt_gsi::QtToCppAdaptor<Qt::PenJoinStyle>(arg1).cref());
}


// void QPainterPathStroker::setMiterLimit(double length)


static void _init_f_setMiterLimit_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("length");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMiterLimit_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPainterPathStroker *)cls)->setMiterLimit (arg1);
}


// void QPainterPathStroker::setWidth(double width)


static void _init_f_setWidth_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWidth_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPainterPathStroker *)cls)->setWidth (arg1);
}


// double QPainterPathStroker::width()


static void _init_f_width_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_width_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPainterPathStroker *)cls)->width ());
}



namespace gsi
{

static gsi::Methods methods_QPainterPathStroker () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPainterPathStroker::QPainterPathStroker()\nThis method creates an object of class QPainterPathStroker.", &_init_ctor_QPainterPathStroker_0, &_call_ctor_QPainterPathStroker_0);
  methods += new qt_gsi::GenericMethod (":capStyle", "@brief Method Qt::PenCapStyle QPainterPathStroker::capStyle()\n", true, &_init_f_capStyle_c0, &_call_f_capStyle_c0);
  methods += new qt_gsi::GenericMethod ("createStroke", "@brief Method QPainterPath QPainterPathStroker::createStroke(const QPainterPath &path)\n", true, &_init_f_createStroke_c2514, &_call_f_createStroke_c2514);
  methods += new qt_gsi::GenericMethod (":curveThreshold", "@brief Method double QPainterPathStroker::curveThreshold()\n", true, &_init_f_curveThreshold_c0, &_call_f_curveThreshold_c0);
  methods += new qt_gsi::GenericMethod (":dashOffset", "@brief Method double QPainterPathStroker::dashOffset()\n", true, &_init_f_dashOffset_c0, &_call_f_dashOffset_c0);
  methods += new qt_gsi::GenericMethod ("dashPattern", "@brief Method QVector<qreal> QPainterPathStroker::dashPattern()\n", true, &_init_f_dashPattern_c0, &_call_f_dashPattern_c0);
  methods += new qt_gsi::GenericMethod (":joinStyle", "@brief Method Qt::PenJoinStyle QPainterPathStroker::joinStyle()\n", true, &_init_f_joinStyle_c0, &_call_f_joinStyle_c0);
  methods += new qt_gsi::GenericMethod (":miterLimit", "@brief Method double QPainterPathStroker::miterLimit()\n", true, &_init_f_miterLimit_c0, &_call_f_miterLimit_c0);
  methods += new qt_gsi::GenericMethod ("setCapStyle|capStyle=", "@brief Method void QPainterPathStroker::setCapStyle(Qt::PenCapStyle style)\n", false, &_init_f_setCapStyle_1845, &_call_f_setCapStyle_1845);
  methods += new qt_gsi::GenericMethod ("setCurveThreshold|curveThreshold=", "@brief Method void QPainterPathStroker::setCurveThreshold(double threshold)\n", false, &_init_f_setCurveThreshold_1071, &_call_f_setCurveThreshold_1071);
  methods += new qt_gsi::GenericMethod ("setDashOffset|dashOffset=", "@brief Method void QPainterPathStroker::setDashOffset(double offset)\n", false, &_init_f_setDashOffset_1071, &_call_f_setDashOffset_1071);
  methods += new qt_gsi::GenericMethod ("setDashPattern", "@brief Method void QPainterPathStroker::setDashPattern(Qt::PenStyle)\n", false, &_init_f_setDashPattern_1569, &_call_f_setDashPattern_1569);
  methods += new qt_gsi::GenericMethod ("setDashPattern", "@brief Method void QPainterPathStroker::setDashPattern(const QVector<qreal> &dashPattern)\n", false, &_init_f_setDashPattern_2676, &_call_f_setDashPattern_2676);
  methods += new qt_gsi::GenericMethod ("setJoinStyle|joinStyle=", "@brief Method void QPainterPathStroker::setJoinStyle(Qt::PenJoinStyle style)\n", false, &_init_f_setJoinStyle_1969, &_call_f_setJoinStyle_1969);
  methods += new qt_gsi::GenericMethod ("setMiterLimit|miterLimit=", "@brief Method void QPainterPathStroker::setMiterLimit(double length)\n", false, &_init_f_setMiterLimit_1071, &_call_f_setMiterLimit_1071);
  methods += new qt_gsi::GenericMethod ("setWidth|width=", "@brief Method void QPainterPathStroker::setWidth(double width)\n", false, &_init_f_setWidth_1071, &_call_f_setWidth_1071);
  methods += new qt_gsi::GenericMethod (":width", "@brief Method double QPainterPathStroker::width()\n", true, &_init_f_width_c0, &_call_f_width_c0);
  return methods;
}

gsi::Class<QPainterPathStroker> decl_QPainterPathStroker ("QPainterPathStroker",
  methods_QPainterPathStroker (),
  "@qt\n@brief Binding of QPainterPathStroker");


GSIQT_PUBLIC gsi::Class<QPainterPathStroker> &qtdecl_QPainterPathStroker () { return decl_QPainterPathStroker; }

}

