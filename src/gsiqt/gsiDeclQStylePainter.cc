/**
*  @file gsiDeclQStylePainter.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStylePainter>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QImage>
#include <QLine>
#include <QLineF>
#include <QMatrix>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainterPath>
#include <QPalette>
#include <QPen>
#include <QPicture>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QPolygon>
#include <QPolygonF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QStyle>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QTextItem>
#include <QTextOption>
#include <QTransform>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStylePainter

//  Constructor QStylePainter::QStylePainter()


static void _init_ctor_QStylePainter_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStylePainter> ();
}

static void _call_ctor_QStylePainter_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStylePainter *> (new QStylePainter ());
}


//  Constructor QStylePainter::QStylePainter(QWidget *w)


static void _init_ctor_QStylePainter_1315 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return_new<QStylePainter> ();
}

static void _call_ctor_QStylePainter_1315 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = args.read<QWidget * > (heap);
  ret.write<QStylePainter *> (new QStylePainter (arg1));
}


//  Constructor QStylePainter::QStylePainter(QPaintDevice *pd, QWidget *w)


static void _init_ctor_QStylePainter_3010 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pd");
  decl->add_arg<QPaintDevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("w");
  decl->add_arg<QWidget * > (argspec_1);
  decl->set_return_new<QStylePainter> ();
}

static void _call_ctor_QStylePainter_3010 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPaintDevice *arg1 = args.read<QPaintDevice * > (heap);
  QWidget *arg2 = args.read<QWidget * > (heap);
  ret.write<QStylePainter *> (new QStylePainter (arg1, arg2));
}


// (QWidget *)


static void _init_f_begin_1315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_begin_1315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = args.read<QWidget * > (heap);
  ret.write<bool > ((bool)((QStylePainter *)cls)->begin (arg1));
}


// (QPaintDevice *, QWidget *)


static void _init_f_begin_3010 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pd");
  decl->add_arg<QPaintDevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("w");
  decl->add_arg<QWidget * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_begin_3010 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPaintDevice *arg1 = args.read<QPaintDevice * > (heap);
  QWidget *arg2 = args.read<QWidget * > (heap);
  ret.write<bool > ((bool)((QStylePainter *)cls)->begin (arg1, arg2));
}


// void QStylePainter::drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex &opt)


static void _init_f_drawComplexControl_5803 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cc");
  decl->add_arg<const qt_gsi::Converter<QStyle::ComplexControl>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("opt");
  decl->add_arg<const QStyleOptionComplex & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_drawComplexControl_5803 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QStyle::ComplexControl>::target_type & arg1 = args.read<const qt_gsi::Converter<QStyle::ComplexControl>::target_type & > (heap);
  const QStyleOptionComplex &arg2 = args.read<const QStyleOptionComplex & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStylePainter *)cls)->drawComplexControl (qt_gsi::QtToCppAdaptor<QStyle::ComplexControl>(arg1).cref(), arg2);
}


// void QStylePainter::drawControl(QStyle::ControlElement ce, const QStyleOption &opt)


static void _init_f_drawControl_5061 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ce");
  decl->add_arg<const qt_gsi::Converter<QStyle::ControlElement>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("opt");
  decl->add_arg<const QStyleOption & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_drawControl_5061 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QStyle::ControlElement>::target_type & arg1 = args.read<const qt_gsi::Converter<QStyle::ControlElement>::target_type & > (heap);
  const QStyleOption &arg2 = args.read<const QStyleOption & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStylePainter *)cls)->drawControl (qt_gsi::QtToCppAdaptor<QStyle::ControlElement>(arg1).cref(), arg2);
}


// void QStylePainter::drawItemPixmap(const QRect &r, int flags, const QPixmap &pixmap)


static void _init_f_drawItemPixmap_4360 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_drawItemPixmap_4360 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = args.read<const QRect & > (heap);
  int arg2 = args.read<int > (heap);
  const QPixmap &arg3 = args.read<const QPixmap & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStylePainter *)cls)->drawItemPixmap (arg1, arg2, arg3);
}


// void QStylePainter::drawItemText(const QRect &r, int flags, const QPalette &pal, bool enabled, const QString &text, QPalette::ColorRole textRole)


static void _init_f_drawItemText_9286 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("pal");
  decl->add_arg<const QPalette & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("enabled");
  decl->add_arg<bool > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("text");
  decl->add_arg<const QString & > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("textRole", true, "QPalette::NoRole");
  decl->add_arg<const qt_gsi::Converter<QPalette::ColorRole>::target_type & > (argspec_5);
  decl->set_return<void > ();
}

static void _call_f_drawItemText_9286 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = args.read<const QRect & > (heap);
  int arg2 = args.read<int > (heap);
  const QPalette &arg3 = args.read<const QPalette & > (heap);
  bool arg4 = args.read<bool > (heap);
  const QString &arg5 = args.read<const QString & > (heap);
  const qt_gsi::Converter<QPalette::ColorRole>::target_type & arg6 = args ? args.read<const qt_gsi::Converter<QPalette::ColorRole>::target_type & > (heap) : (const qt_gsi::Converter<QPalette::ColorRole>::target_type &)(qt_gsi::CppToQtReadAdaptor<QPalette::ColorRole>(heap, QPalette::NoRole));
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStylePainter *)cls)->drawItemText (arg1, arg2, arg3, arg4, arg5, qt_gsi::QtToCppAdaptor<QPalette::ColorRole>(arg6).cref());
}


// void QStylePainter::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption &opt)


static void _init_f_drawPrimitive_5277 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pe");
  decl->add_arg<const qt_gsi::Converter<QStyle::PrimitiveElement>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("opt");
  decl->add_arg<const QStyleOption & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_drawPrimitive_5277 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QStyle::PrimitiveElement>::target_type & arg1 = args.read<const qt_gsi::Converter<QStyle::PrimitiveElement>::target_type & > (heap);
  const QStyleOption &arg2 = args.read<const QStyleOption & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStylePainter *)cls)->drawPrimitive (qt_gsi::QtToCppAdaptor<QStyle::PrimitiveElement>(arg1).cref(), arg2);
}


// QStyle *QStylePainter::style()


static void _init_f_style_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStyle * > ();
}

static void _call_f_style_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyle * > ((QStyle *)((QStylePainter *)cls)->style ());
}



namespace gsi
{

static gsi::Methods methods_QStylePainter () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStylePainter::QStylePainter()\nThis method creates an object of class QStylePainter.", &_init_ctor_QStylePainter_0, &_call_ctor_QStylePainter_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStylePainter::QStylePainter(QWidget *w)\nThis method creates an object of class QStylePainter.", &_init_ctor_QStylePainter_1315, &_call_ctor_QStylePainter_1315);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStylePainter::QStylePainter(QPaintDevice *pd, QWidget *w)\nThis method creates an object of class QStylePainter.", &_init_ctor_QStylePainter_3010, &_call_ctor_QStylePainter_3010);
  methods += new qt_gsi::GenericMethod ("begin", "@brief Method (QWidget *)\n", false, &_init_f_begin_1315, &_call_f_begin_1315);
  methods += new qt_gsi::GenericMethod ("begin", "@brief Method (QPaintDevice *, QWidget *)\n", false, &_init_f_begin_3010, &_call_f_begin_3010);
  methods += new qt_gsi::GenericMethod ("drawComplexControl", "@brief Method void QStylePainter::drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex &opt)\n", false, &_init_f_drawComplexControl_5803, &_call_f_drawComplexControl_5803);
  methods += new qt_gsi::GenericMethod ("drawControl", "@brief Method void QStylePainter::drawControl(QStyle::ControlElement ce, const QStyleOption &opt)\n", false, &_init_f_drawControl_5061, &_call_f_drawControl_5061);
  methods += new qt_gsi::GenericMethod ("drawItemPixmap", "@brief Method void QStylePainter::drawItemPixmap(const QRect &r, int flags, const QPixmap &pixmap)\n", false, &_init_f_drawItemPixmap_4360, &_call_f_drawItemPixmap_4360);
  methods += new qt_gsi::GenericMethod ("drawItemText", "@brief Method void QStylePainter::drawItemText(const QRect &r, int flags, const QPalette &pal, bool enabled, const QString &text, QPalette::ColorRole textRole)\n", false, &_init_f_drawItemText_9286, &_call_f_drawItemText_9286);
  methods += new qt_gsi::GenericMethod ("drawPrimitive", "@brief Method void QStylePainter::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption &opt)\n", false, &_init_f_drawPrimitive_5277, &_call_f_drawPrimitive_5277);
  methods += new qt_gsi::GenericMethod ("style", "@brief Method QStyle *QStylePainter::style()\n", true, &_init_f_style_c0, &_call_f_style_c0);
  return methods;
}

gsi::Class<QPainter> &qtdecl_QPainter ();

gsi::Class<QStylePainter> decl_QStylePainter (qtdecl_QPainter (), "QStylePainter",
  methods_QStylePainter (),
  "@qt\n@brief Binding of QStylePainter");


GSIQT_PUBLIC gsi::Class<QStylePainter> &qtdecl_QStylePainter () { return decl_QStylePainter; }

}

