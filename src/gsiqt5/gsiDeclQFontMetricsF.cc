/**
*  @file gsiDeclQFontMetricsF.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFontMetricsF>
#include <QFont>
#include <QFontMetrics>
#include <QPaintDevice>
#include <QRectF>
#include <QSizeF>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFontMetricsF

//  Constructor QFontMetricsF::QFontMetricsF(const QFont &)


static void _init_ctor_QFontMetricsF_1801 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFont & > (argspec_0);
  decl->set_return_new<QFontMetricsF> ();
}

static void _call_ctor_QFontMetricsF_1801 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFont &arg1 = args.read<const QFont & > (heap);
  ret.write<QFontMetricsF *> (new QFontMetricsF (arg1));
}


//  Constructor QFontMetricsF::QFontMetricsF(const QFont &, QPaintDevice *pd)


static void _init_ctor_QFontMetricsF_3496 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFont & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pd");
  decl->add_arg<QPaintDevice * > (argspec_1);
  decl->set_return_new<QFontMetricsF> ();
}

static void _call_ctor_QFontMetricsF_3496 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFont &arg1 = args.read<const QFont & > (heap);
  QPaintDevice *arg2 = args.read<QPaintDevice * > (heap);
  ret.write<QFontMetricsF *> (new QFontMetricsF (arg1, arg2));
}


//  Constructor QFontMetricsF::QFontMetricsF(const QFontMetrics &)


static void _init_ctor_QFontMetricsF_2528 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFontMetrics & > (argspec_0);
  decl->set_return_new<QFontMetricsF> ();
}

static void _call_ctor_QFontMetricsF_2528 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontMetrics &arg1 = args.read<const QFontMetrics & > (heap);
  ret.write<QFontMetricsF *> (new QFontMetricsF (arg1));
}


//  Constructor QFontMetricsF::QFontMetricsF(const QFontMetricsF &)


static void _init_ctor_QFontMetricsF_2598 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFontMetricsF & > (argspec_0);
  decl->set_return_new<QFontMetricsF> ();
}

static void _call_ctor_QFontMetricsF_2598 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontMetricsF &arg1 = args.read<const QFontMetricsF & > (heap);
  ret.write<QFontMetricsF *> (new QFontMetricsF (arg1));
}


// double QFontMetricsF::ascent()


static void _init_f_ascent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_ascent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->ascent ());
}


// double QFontMetricsF::averageCharWidth()


static void _init_f_averageCharWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_averageCharWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->averageCharWidth ());
}


// QRectF QFontMetricsF::boundingRect(const QString &string)


static void _init_f_boundingRect_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("string");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QRectF > ();
}

static void _call_f_boundingRect_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QRectF > ((QRectF)((QFontMetricsF *)cls)->boundingRect (arg1));
}


// QRectF QFontMetricsF::boundingRect(QChar)


static void _init_f_boundingRect_c899 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return<QRectF > ();
}

static void _call_f_boundingRect_c899 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = args.read<const qt_gsi::Converter<QChar>::target_type & > (heap);
  ret.write<QRectF > ((QRectF)((QFontMetricsF *)cls)->boundingRect (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


// QRectF QFontMetricsF::boundingRect(const QRectF &r, int flags, const QString &string, int tabstops, int *tabarray)


static void _init_f_boundingRect_c5942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRectF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("string");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("tabstops", true, "0");
  decl->add_arg<int > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("tabarray", true, "0");
  decl->add_arg<int * > (argspec_4);
  decl->set_return<QRectF > ();
}

static void _call_f_boundingRect_c5942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRectF &arg1 = args.read<const QRectF & > (heap);
  int arg2 = args.read<int > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  int arg4 = args ? args.read<int > (heap) : (int)(0);
  int *arg5 = args ? args.read<int * > (heap) : (int *)(0);
  ret.write<QRectF > ((QRectF)((QFontMetricsF *)cls)->boundingRect (arg1, arg2, arg3, arg4, arg5));
}


// double QFontMetricsF::descent()


static void _init_f_descent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_descent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->descent ());
}


// QString QFontMetricsF::elidedText(const QString &text, Qt::TextElideMode mode, double width, int flags)


static void _init_f_elidedText_c5581 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<Qt::TextElideMode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("width");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("flags", true, "0");
  decl->add_arg<int > (argspec_3);
  decl->set_return<QString > ();
}

static void _call_f_elidedText_c5581 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const qt_gsi::Converter<Qt::TextElideMode>::target_type & arg2 = args.read<const qt_gsi::Converter<Qt::TextElideMode>::target_type & > (heap);
  double arg3 = args.read<double > (heap);
  int arg4 = args ? args.read<int > (heap) : (int)(0);
  ret.write<QString > ((QString)((QFontMetricsF *)cls)->elidedText (arg1, qt_gsi::QtToCppAdaptor<Qt::TextElideMode>(arg2).cref(), arg3, arg4));
}


// double QFontMetricsF::height()


static void _init_f_height_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_height_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->height ());
}


// bool QFontMetricsF::inFont(QChar)


static void _init_f_inFont_c899 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_inFont_c899 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = args.read<const qt_gsi::Converter<QChar>::target_type & > (heap);
  ret.write<bool > ((bool)((QFontMetricsF *)cls)->inFont (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


// bool QFontMetricsF::inFontUcs4(unsigned int ucs4)


static void _init_f_inFontUcs4_c1772 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ucs4");
  decl->add_arg<unsigned int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_inFontUcs4_c1772 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned int arg1 = args.read<unsigned int > (heap);
  ret.write<bool > ((bool)((QFontMetricsF *)cls)->inFontUcs4 (arg1));
}


// double QFontMetricsF::leading()


static void _init_f_leading_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_leading_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->leading ());
}


// double QFontMetricsF::leftBearing(QChar)


static void _init_f_leftBearing_c899 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return<double > ();
}

static void _call_f_leftBearing_c899 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = args.read<const qt_gsi::Converter<QChar>::target_type & > (heap);
  ret.write<double > ((double)((QFontMetricsF *)cls)->leftBearing (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


// double QFontMetricsF::lineSpacing()


static void _init_f_lineSpacing_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_lineSpacing_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->lineSpacing ());
}


// double QFontMetricsF::lineWidth()


static void _init_f_lineWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_lineWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->lineWidth ());
}


// double QFontMetricsF::maxWidth()


static void _init_f_maxWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_maxWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->maxWidth ());
}


// double QFontMetricsF::minLeftBearing()


static void _init_f_minLeftBearing_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_minLeftBearing_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->minLeftBearing ());
}


// double QFontMetricsF::minRightBearing()


static void _init_f_minRightBearing_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_minRightBearing_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->minRightBearing ());
}


// bool QFontMetricsF::operator !=(const QFontMetricsF &other)


static void _init_f_operator_excl__eq__c2598 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QFontMetricsF & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2598 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontMetricsF &arg1 = args.read<const QFontMetricsF & > (heap);
  ret.write<bool > ((bool)((QFontMetricsF *)cls)->operator != (arg1));
}


// QFontMetricsF &QFontMetricsF::operator=(const QFontMetricsF &)


static void _init_f_operator_eq__2598 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFontMetricsF & > (argspec_0);
  decl->set_return<QFontMetricsF & > ();
}

static void _call_f_operator_eq__2598 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontMetricsF &arg1 = args.read<const QFontMetricsF & > (heap);
  ret.write<QFontMetricsF & > ((QFontMetricsF &)((QFontMetricsF *)cls)->operator= (arg1));
}


// QFontMetricsF &QFontMetricsF::operator=(const QFontMetrics &)


static void _init_f_operator_eq__2528 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFontMetrics & > (argspec_0);
  decl->set_return<QFontMetricsF & > ();
}

static void _call_f_operator_eq__2528 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontMetrics &arg1 = args.read<const QFontMetrics & > (heap);
  ret.write<QFontMetricsF & > ((QFontMetricsF &)((QFontMetricsF *)cls)->operator= (arg1));
}


// bool QFontMetricsF::operator==(const QFontMetricsF &other)


static void _init_f_operator_eq__eq__c2598 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QFontMetricsF & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2598 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontMetricsF &arg1 = args.read<const QFontMetricsF & > (heap);
  ret.write<bool > ((bool)((QFontMetricsF *)cls)->operator== (arg1));
}


// double QFontMetricsF::overlinePos()


static void _init_f_overlinePos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_overlinePos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->overlinePos ());
}


// double QFontMetricsF::rightBearing(QChar)


static void _init_f_rightBearing_c899 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return<double > ();
}

static void _call_f_rightBearing_c899 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = args.read<const qt_gsi::Converter<QChar>::target_type & > (heap);
  ret.write<double > ((double)((QFontMetricsF *)cls)->rightBearing (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


// QSizeF QFontMetricsF::size(int flags, const QString &str, int tabstops, int *tabarray)


static void _init_f_size_c4188 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("str");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("tabstops", true, "0");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("tabarray", true, "0");
  decl->add_arg<int * > (argspec_3);
  decl->set_return<QSizeF > ();
}

static void _call_f_size_c4188 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  int arg3 = args ? args.read<int > (heap) : (int)(0);
  int *arg4 = args ? args.read<int * > (heap) : (int *)(0);
  ret.write<QSizeF > ((QSizeF)((QFontMetricsF *)cls)->size (arg1, arg2, arg3, arg4));
}


// double QFontMetricsF::strikeOutPos()


static void _init_f_strikeOutPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_strikeOutPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->strikeOutPos ());
}


// void QFontMetricsF::swap(QFontMetricsF &other)


static void _init_f_swap_1903 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QFontMetricsF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1903 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFontMetricsF &arg1 = args.read<QFontMetricsF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFontMetricsF *)cls)->swap (arg1);
}


// QRectF QFontMetricsF::tightBoundingRect(const QString &text)


static void _init_f_tightBoundingRect_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QRectF > ();
}

static void _call_f_tightBoundingRect_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QRectF > ((QRectF)((QFontMetricsF *)cls)->tightBoundingRect (arg1));
}


// double QFontMetricsF::underlinePos()


static void _init_f_underlinePos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_underlinePos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->underlinePos ());
}


// double QFontMetricsF::width(const QString &string)


static void _init_f_width_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("string");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<double > ();
}

static void _call_f_width_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<double > ((double)((QFontMetricsF *)cls)->width (arg1));
}


// double QFontMetricsF::width(QChar)


static void _init_f_width_c899 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return<double > ();
}

static void _call_f_width_c899 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = args.read<const qt_gsi::Converter<QChar>::target_type & > (heap);
  ret.write<double > ((double)((QFontMetricsF *)cls)->width (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


// double QFontMetricsF::xHeight()


static void _init_f_xHeight_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_xHeight_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetricsF *)cls)->xHeight ());
}



namespace gsi
{

static gsi::Methods methods_QFontMetricsF () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFontMetricsF::QFontMetricsF(const QFont &)\nThis method creates an object of class QFontMetricsF.", &_init_ctor_QFontMetricsF_1801, &_call_ctor_QFontMetricsF_1801);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFontMetricsF::QFontMetricsF(const QFont &, QPaintDevice *pd)\nThis method creates an object of class QFontMetricsF.", &_init_ctor_QFontMetricsF_3496, &_call_ctor_QFontMetricsF_3496);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFontMetricsF::QFontMetricsF(const QFontMetrics &)\nThis method creates an object of class QFontMetricsF.", &_init_ctor_QFontMetricsF_2528, &_call_ctor_QFontMetricsF_2528);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFontMetricsF::QFontMetricsF(const QFontMetricsF &)\nThis method creates an object of class QFontMetricsF.", &_init_ctor_QFontMetricsF_2598, &_call_ctor_QFontMetricsF_2598);
  methods += new qt_gsi::GenericMethod ("ascent", "@brief Method double QFontMetricsF::ascent()\n", true, &_init_f_ascent_c0, &_call_f_ascent_c0);
  methods += new qt_gsi::GenericMethod ("averageCharWidth", "@brief Method double QFontMetricsF::averageCharWidth()\n", true, &_init_f_averageCharWidth_c0, &_call_f_averageCharWidth_c0);
  methods += new qt_gsi::GenericMethod ("boundingRect", "@brief Method QRectF QFontMetricsF::boundingRect(const QString &string)\n", true, &_init_f_boundingRect_c2025, &_call_f_boundingRect_c2025);
  methods += new qt_gsi::GenericMethod ("boundingRect", "@brief Method QRectF QFontMetricsF::boundingRect(QChar)\n", true, &_init_f_boundingRect_c899, &_call_f_boundingRect_c899);
  methods += new qt_gsi::GenericMethod ("boundingRect", "@brief Method QRectF QFontMetricsF::boundingRect(const QRectF &r, int flags, const QString &string, int tabstops, int *tabarray)\n", true, &_init_f_boundingRect_c5942, &_call_f_boundingRect_c5942);
  methods += new qt_gsi::GenericMethod ("descent", "@brief Method double QFontMetricsF::descent()\n", true, &_init_f_descent_c0, &_call_f_descent_c0);
  methods += new qt_gsi::GenericMethod ("elidedText", "@brief Method QString QFontMetricsF::elidedText(const QString &text, Qt::TextElideMode mode, double width, int flags)\n", true, &_init_f_elidedText_c5581, &_call_f_elidedText_c5581);
  methods += new qt_gsi::GenericMethod ("height", "@brief Method double QFontMetricsF::height()\n", true, &_init_f_height_c0, &_call_f_height_c0);
  methods += new qt_gsi::GenericMethod ("inFont", "@brief Method bool QFontMetricsF::inFont(QChar)\n", true, &_init_f_inFont_c899, &_call_f_inFont_c899);
  methods += new qt_gsi::GenericMethod ("inFontUcs4", "@brief Method bool QFontMetricsF::inFontUcs4(unsigned int ucs4)\n", true, &_init_f_inFontUcs4_c1772, &_call_f_inFontUcs4_c1772);
  methods += new qt_gsi::GenericMethod ("leading", "@brief Method double QFontMetricsF::leading()\n", true, &_init_f_leading_c0, &_call_f_leading_c0);
  methods += new qt_gsi::GenericMethod ("leftBearing", "@brief Method double QFontMetricsF::leftBearing(QChar)\n", true, &_init_f_leftBearing_c899, &_call_f_leftBearing_c899);
  methods += new qt_gsi::GenericMethod ("lineSpacing", "@brief Method double QFontMetricsF::lineSpacing()\n", true, &_init_f_lineSpacing_c0, &_call_f_lineSpacing_c0);
  methods += new qt_gsi::GenericMethod ("lineWidth", "@brief Method double QFontMetricsF::lineWidth()\n", true, &_init_f_lineWidth_c0, &_call_f_lineWidth_c0);
  methods += new qt_gsi::GenericMethod ("maxWidth", "@brief Method double QFontMetricsF::maxWidth()\n", true, &_init_f_maxWidth_c0, &_call_f_maxWidth_c0);
  methods += new qt_gsi::GenericMethod ("minLeftBearing", "@brief Method double QFontMetricsF::minLeftBearing()\n", true, &_init_f_minLeftBearing_c0, &_call_f_minLeftBearing_c0);
  methods += new qt_gsi::GenericMethod ("minRightBearing", "@brief Method double QFontMetricsF::minRightBearing()\n", true, &_init_f_minRightBearing_c0, &_call_f_minRightBearing_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QFontMetricsF::operator !=(const QFontMetricsF &other)\n", true, &_init_f_operator_excl__eq__c2598, &_call_f_operator_excl__eq__c2598);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QFontMetricsF &QFontMetricsF::operator=(const QFontMetricsF &)\n", false, &_init_f_operator_eq__2598, &_call_f_operator_eq__2598);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QFontMetricsF &QFontMetricsF::operator=(const QFontMetrics &)\n", false, &_init_f_operator_eq__2528, &_call_f_operator_eq__2528);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QFontMetricsF::operator==(const QFontMetricsF &other)\n", true, &_init_f_operator_eq__eq__c2598, &_call_f_operator_eq__eq__c2598);
  methods += new qt_gsi::GenericMethod ("overlinePos", "@brief Method double QFontMetricsF::overlinePos()\n", true, &_init_f_overlinePos_c0, &_call_f_overlinePos_c0);
  methods += new qt_gsi::GenericMethod ("rightBearing", "@brief Method double QFontMetricsF::rightBearing(QChar)\n", true, &_init_f_rightBearing_c899, &_call_f_rightBearing_c899);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method QSizeF QFontMetricsF::size(int flags, const QString &str, int tabstops, int *tabarray)\n", true, &_init_f_size_c4188, &_call_f_size_c4188);
  methods += new qt_gsi::GenericMethod ("strikeOutPos", "@brief Method double QFontMetricsF::strikeOutPos()\n", true, &_init_f_strikeOutPos_c0, &_call_f_strikeOutPos_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QFontMetricsF::swap(QFontMetricsF &other)\n", false, &_init_f_swap_1903, &_call_f_swap_1903);
  methods += new qt_gsi::GenericMethod ("tightBoundingRect", "@brief Method QRectF QFontMetricsF::tightBoundingRect(const QString &text)\n", true, &_init_f_tightBoundingRect_c2025, &_call_f_tightBoundingRect_c2025);
  methods += new qt_gsi::GenericMethod ("underlinePos", "@brief Method double QFontMetricsF::underlinePos()\n", true, &_init_f_underlinePos_c0, &_call_f_underlinePos_c0);
  methods += new qt_gsi::GenericMethod ("width", "@brief Method double QFontMetricsF::width(const QString &string)\n", true, &_init_f_width_c2025, &_call_f_width_c2025);
  methods += new qt_gsi::GenericMethod ("width", "@brief Method double QFontMetricsF::width(QChar)\n", true, &_init_f_width_c899, &_call_f_width_c899);
  methods += new qt_gsi::GenericMethod ("xHeight", "@brief Method double QFontMetricsF::xHeight()\n", true, &_init_f_xHeight_c0, &_call_f_xHeight_c0);
  return methods;
}

gsi::Class<QFontMetricsF> decl_QFontMetricsF ("QFontMetricsF",
  methods_QFontMetricsF (),
  "@qt\n@brief Binding of QFontMetricsF");


GSIQT_PUBLIC gsi::Class<QFontMetricsF> &qtdecl_QFontMetricsF () { return decl_QFontMetricsF; }

}

