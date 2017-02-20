/**
*  @file gsiDeclQRegularExpression.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QRegularExpression

//  Constructor QRegularExpression::QRegularExpression()


static void _init_ctor_QRegularExpression_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QRegularExpression> ();
}

static void _call_ctor_QRegularExpression_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRegularExpression *> (new QRegularExpression ());
}


//  Constructor QRegularExpression::QRegularExpression(const QString &pattern, QFlags<QRegularExpression::PatternOption> options)


static void _init_ctor_QRegularExpression_6407 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pattern");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("options", true, "QRegularExpression::NoPatternOption");
  decl->add_arg<QFlags<QRegularExpression::PatternOption> > (argspec_1);
  decl->set_return_new<QRegularExpression> ();
}

static void _call_ctor_QRegularExpression_6407 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  QFlags<QRegularExpression::PatternOption> arg2 = args ? args.read<QFlags<QRegularExpression::PatternOption> > (heap) : (QFlags<QRegularExpression::PatternOption>)(QRegularExpression::NoPatternOption);
  ret.write<QRegularExpression *> (new QRegularExpression (arg1, arg2));
}


//  Constructor QRegularExpression::QRegularExpression(const QRegularExpression &re)


static void _init_ctor_QRegularExpression_3188 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("re");
  decl->add_arg<const QRegularExpression & > (argspec_0);
  decl->set_return_new<QRegularExpression> ();
}

static void _call_ctor_QRegularExpression_3188 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegularExpression &arg1 = args.read<const QRegularExpression & > (heap);
  ret.write<QRegularExpression *> (new QRegularExpression (arg1));
}


// int QRegularExpression::captureCount()


static void _init_f_captureCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_captureCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QRegularExpression *)cls)->captureCount ());
}


// QString QRegularExpression::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QRegularExpression *)cls)->errorString ());
}


// QRegularExpressionMatchIterator QRegularExpression::globalMatch(const QString &subject, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)


static void _init_f_globalMatch_c10055 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subject");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("offset", true, "0");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("matchType", true, "QRegularExpression::NormalMatch");
  decl->add_arg<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("matchOptions", true, "QRegularExpression::NoMatchOption");
  decl->add_arg<QFlags<QRegularExpression::MatchOption> > (argspec_3);
  decl->set_return<QRegularExpressionMatchIterator > ();
}

static void _call_f_globalMatch_c10055 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  int arg2 = args ? args.read<int > (heap) : (int)(0);
  const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & arg3 = args ? args.read<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & > (heap) : (const qt_gsi::Converter<QRegularExpression::MatchType>::target_type &)(qt_gsi::CppToQtReadAdaptor<QRegularExpression::MatchType>(heap, QRegularExpression::NormalMatch));
  QFlags<QRegularExpression::MatchOption> arg4 = args ? args.read<QFlags<QRegularExpression::MatchOption> > (heap) : (QFlags<QRegularExpression::MatchOption>)(QRegularExpression::NoMatchOption);
  ret.write<QRegularExpressionMatchIterator > ((QRegularExpressionMatchIterator)((QRegularExpression *)cls)->globalMatch (arg1, arg2, qt_gsi::QtToCppAdaptor<QRegularExpression::MatchType>(arg3).cref(), arg4));
}


// QRegularExpressionMatchIterator QRegularExpression::globalMatch(const QStringRef &subjectRef, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)


static void _init_f_globalMatch_c10340 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subjectRef");
  decl->add_arg<const QStringRef & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("offset", true, "0");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("matchType", true, "QRegularExpression::NormalMatch");
  decl->add_arg<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("matchOptions", true, "QRegularExpression::NoMatchOption");
  decl->add_arg<QFlags<QRegularExpression::MatchOption> > (argspec_3);
  decl->set_return<QRegularExpressionMatchIterator > ();
}

static void _call_f_globalMatch_c10340 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = args.read<const QStringRef & > (heap);
  int arg2 = args ? args.read<int > (heap) : (int)(0);
  const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & arg3 = args ? args.read<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & > (heap) : (const qt_gsi::Converter<QRegularExpression::MatchType>::target_type &)(qt_gsi::CppToQtReadAdaptor<QRegularExpression::MatchType>(heap, QRegularExpression::NormalMatch));
  QFlags<QRegularExpression::MatchOption> arg4 = args ? args.read<QFlags<QRegularExpression::MatchOption> > (heap) : (QFlags<QRegularExpression::MatchOption>)(QRegularExpression::NoMatchOption);
  ret.write<QRegularExpressionMatchIterator > ((QRegularExpressionMatchIterator)((QRegularExpression *)cls)->globalMatch (arg1, arg2, qt_gsi::QtToCppAdaptor<QRegularExpression::MatchType>(arg3).cref(), arg4));
}


// bool QRegularExpression::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QRegularExpression *)cls)->isValid ());
}


// QRegularExpressionMatch QRegularExpression::match(const QString &subject, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)


static void _init_f_match_c10055 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subject");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("offset", true, "0");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("matchType", true, "QRegularExpression::NormalMatch");
  decl->add_arg<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("matchOptions", true, "QRegularExpression::NoMatchOption");
  decl->add_arg<QFlags<QRegularExpression::MatchOption> > (argspec_3);
  decl->set_return<QRegularExpressionMatch > ();
}

static void _call_f_match_c10055 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  int arg2 = args ? args.read<int > (heap) : (int)(0);
  const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & arg3 = args ? args.read<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & > (heap) : (const qt_gsi::Converter<QRegularExpression::MatchType>::target_type &)(qt_gsi::CppToQtReadAdaptor<QRegularExpression::MatchType>(heap, QRegularExpression::NormalMatch));
  QFlags<QRegularExpression::MatchOption> arg4 = args ? args.read<QFlags<QRegularExpression::MatchOption> > (heap) : (QFlags<QRegularExpression::MatchOption>)(QRegularExpression::NoMatchOption);
  ret.write<QRegularExpressionMatch > ((QRegularExpressionMatch)((QRegularExpression *)cls)->match (arg1, arg2, qt_gsi::QtToCppAdaptor<QRegularExpression::MatchType>(arg3).cref(), arg4));
}


// QRegularExpressionMatch QRegularExpression::match(const QStringRef &subjectRef, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)


static void _init_f_match_c10340 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subjectRef");
  decl->add_arg<const QStringRef & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("offset", true, "0");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("matchType", true, "QRegularExpression::NormalMatch");
  decl->add_arg<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("matchOptions", true, "QRegularExpression::NoMatchOption");
  decl->add_arg<QFlags<QRegularExpression::MatchOption> > (argspec_3);
  decl->set_return<QRegularExpressionMatch > ();
}

static void _call_f_match_c10340 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = args.read<const QStringRef & > (heap);
  int arg2 = args ? args.read<int > (heap) : (int)(0);
  const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & arg3 = args ? args.read<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & > (heap) : (const qt_gsi::Converter<QRegularExpression::MatchType>::target_type &)(qt_gsi::CppToQtReadAdaptor<QRegularExpression::MatchType>(heap, QRegularExpression::NormalMatch));
  QFlags<QRegularExpression::MatchOption> arg4 = args ? args.read<QFlags<QRegularExpression::MatchOption> > (heap) : (QFlags<QRegularExpression::MatchOption>)(QRegularExpression::NoMatchOption);
  ret.write<QRegularExpressionMatch > ((QRegularExpressionMatch)((QRegularExpression *)cls)->match (arg1, arg2, qt_gsi::QtToCppAdaptor<QRegularExpression::MatchType>(arg3).cref(), arg4));
}


// QStringList QRegularExpression::namedCaptureGroups()


static void _init_f_namedCaptureGroups_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_namedCaptureGroups_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QRegularExpression *)cls)->namedCaptureGroups ());
}


// bool QRegularExpression::operator!=(const QRegularExpression &re)


static void _init_f_operator_excl__eq__c3188 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("re");
  decl->add_arg<const QRegularExpression & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3188 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegularExpression &arg1 = args.read<const QRegularExpression & > (heap);
  ret.write<bool > ((bool)((QRegularExpression *)cls)->operator!= (arg1));
}


// QRegularExpression &QRegularExpression::operator=(const QRegularExpression &re)


static void _init_f_operator_eq__3188 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("re");
  decl->add_arg<const QRegularExpression & > (argspec_0);
  decl->set_return<QRegularExpression & > ();
}

static void _call_f_operator_eq__3188 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegularExpression &arg1 = args.read<const QRegularExpression & > (heap);
  ret.write<QRegularExpression & > ((QRegularExpression &)((QRegularExpression *)cls)->operator= (arg1));
}


// bool QRegularExpression::operator==(const QRegularExpression &re)


static void _init_f_operator_eq__eq__c3188 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("re");
  decl->add_arg<const QRegularExpression & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3188 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegularExpression &arg1 = args.read<const QRegularExpression & > (heap);
  ret.write<bool > ((bool)((QRegularExpression *)cls)->operator== (arg1));
}


// void QRegularExpression::optimize()


static void _init_f_optimize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_optimize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegularExpression *)cls)->optimize ();
}


// QString QRegularExpression::pattern()


static void _init_f_pattern_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_pattern_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QRegularExpression *)cls)->pattern ());
}


// int QRegularExpression::patternErrorOffset()


static void _init_f_patternErrorOffset_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_patternErrorOffset_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QRegularExpression *)cls)->patternErrorOffset ());
}


// QFlags<QRegularExpression::PatternOption> QRegularExpression::patternOptions()


static void _init_f_patternOptions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QRegularExpression::PatternOption> > ();
}

static void _call_f_patternOptions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QRegularExpression::PatternOption> > ((QFlags<QRegularExpression::PatternOption>)((QRegularExpression *)cls)->patternOptions ());
}


// void QRegularExpression::setPattern(const QString &pattern)


static void _init_f_setPattern_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pattern");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPattern_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegularExpression *)cls)->setPattern (arg1);
}


// void QRegularExpression::setPatternOptions(QFlags<QRegularExpression::PatternOption> options)


static void _init_f_setPatternOptions_4490 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("options");
  decl->add_arg<QFlags<QRegularExpression::PatternOption> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPatternOptions_4490 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QRegularExpression::PatternOption> arg1 = args.read<QFlags<QRegularExpression::PatternOption> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegularExpression *)cls)->setPatternOptions (arg1);
}


// void QRegularExpression::swap(QRegularExpression &other)


static void _init_f_swap_2493 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QRegularExpression & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2493 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QRegularExpression &arg1 = args.read<QRegularExpression & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegularExpression *)cls)->swap (arg1);
}


// static QString QRegularExpression::escape(const QString &str)


static void _init_f_escape_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("str");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_escape_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)QRegularExpression::escape (arg1));
}



namespace gsi
{

static gsi::Methods methods_QRegularExpression () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegularExpression::QRegularExpression()\nThis method creates an object of class QRegularExpression.", &_init_ctor_QRegularExpression_0, &_call_ctor_QRegularExpression_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegularExpression::QRegularExpression(const QString &pattern, QFlags<QRegularExpression::PatternOption> options)\nThis method creates an object of class QRegularExpression.", &_init_ctor_QRegularExpression_6407, &_call_ctor_QRegularExpression_6407);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegularExpression::QRegularExpression(const QRegularExpression &re)\nThis method creates an object of class QRegularExpression.", &_init_ctor_QRegularExpression_3188, &_call_ctor_QRegularExpression_3188);
  methods += new qt_gsi::GenericMethod ("captureCount", "@brief Method int QRegularExpression::captureCount()\n", true, &_init_f_captureCount_c0, &_call_f_captureCount_c0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QRegularExpression::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod ("globalMatch", "@brief Method QRegularExpressionMatchIterator QRegularExpression::globalMatch(const QString &subject, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)\n", true, &_init_f_globalMatch_c10055, &_call_f_globalMatch_c10055);
  methods += new qt_gsi::GenericMethod ("globalMatch", "@brief Method QRegularExpressionMatchIterator QRegularExpression::globalMatch(const QStringRef &subjectRef, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)\n", true, &_init_f_globalMatch_c10340, &_call_f_globalMatch_c10340);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QRegularExpression::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("match", "@brief Method QRegularExpressionMatch QRegularExpression::match(const QString &subject, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)\n", true, &_init_f_match_c10055, &_call_f_match_c10055);
  methods += new qt_gsi::GenericMethod ("match", "@brief Method QRegularExpressionMatch QRegularExpression::match(const QStringRef &subjectRef, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)\n", true, &_init_f_match_c10340, &_call_f_match_c10340);
  methods += new qt_gsi::GenericMethod ("namedCaptureGroups", "@brief Method QStringList QRegularExpression::namedCaptureGroups()\n", true, &_init_f_namedCaptureGroups_c0, &_call_f_namedCaptureGroups_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QRegularExpression::operator!=(const QRegularExpression &re)\n", true, &_init_f_operator_excl__eq__c3188, &_call_f_operator_excl__eq__c3188);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QRegularExpression &QRegularExpression::operator=(const QRegularExpression &re)\n", false, &_init_f_operator_eq__3188, &_call_f_operator_eq__3188);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QRegularExpression::operator==(const QRegularExpression &re)\n", true, &_init_f_operator_eq__eq__c3188, &_call_f_operator_eq__eq__c3188);
  methods += new qt_gsi::GenericMethod ("optimize", "@brief Method void QRegularExpression::optimize()\n", true, &_init_f_optimize_c0, &_call_f_optimize_c0);
  methods += new qt_gsi::GenericMethod (":pattern", "@brief Method QString QRegularExpression::pattern()\n", true, &_init_f_pattern_c0, &_call_f_pattern_c0);
  methods += new qt_gsi::GenericMethod ("patternErrorOffset", "@brief Method int QRegularExpression::patternErrorOffset()\n", true, &_init_f_patternErrorOffset_c0, &_call_f_patternErrorOffset_c0);
  methods += new qt_gsi::GenericMethod (":patternOptions", "@brief Method QFlags<QRegularExpression::PatternOption> QRegularExpression::patternOptions()\n", true, &_init_f_patternOptions_c0, &_call_f_patternOptions_c0);
  methods += new qt_gsi::GenericMethod ("setPattern|pattern=", "@brief Method void QRegularExpression::setPattern(const QString &pattern)\n", false, &_init_f_setPattern_2025, &_call_f_setPattern_2025);
  methods += new qt_gsi::GenericMethod ("setPatternOptions|patternOptions=", "@brief Method void QRegularExpression::setPatternOptions(QFlags<QRegularExpression::PatternOption> options)\n", false, &_init_f_setPatternOptions_4490, &_call_f_setPatternOptions_4490);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QRegularExpression::swap(QRegularExpression &other)\n", false, &_init_f_swap_2493, &_call_f_swap_2493);
  methods += new qt_gsi::GenericStaticMethod ("escape", "@brief Static method QString QRegularExpression::escape(const QString &str)\nThis method is static and can be called without an instance.", &_init_f_escape_2025, &_call_f_escape_2025);
  return methods;
}

gsi::Class<QRegularExpression> decl_QRegularExpression ("QRegularExpression",
  methods_QRegularExpression (),
  "@qt\n@brief Binding of QRegularExpression");


GSIQT_PUBLIC gsi::Class<QRegularExpression> &qtdecl_QRegularExpression () { return decl_QRegularExpression; }

}


//  Implementation of the enum wrapper class for QRegularExpression::MatchOption
namespace qt_gsi
{

static gsi::Enum<QRegularExpression::MatchOption> decl_QRegularExpression_MatchOption_Enum ("QRegularExpression_MatchOption",
    gsi::enum_const ("NoMatchOption", QRegularExpression::NoMatchOption, "@brief Enum constant QRegularExpression::NoMatchOption") +
    gsi::enum_const ("AnchoredMatchOption", QRegularExpression::AnchoredMatchOption, "@brief Enum constant QRegularExpression::AnchoredMatchOption") +
    gsi::enum_const ("DontCheckSubjectStringMatchOption", QRegularExpression::DontCheckSubjectStringMatchOption, "@brief Enum constant QRegularExpression::DontCheckSubjectStringMatchOption"),
  "@qt\n@brief This class represents the QRegularExpression::MatchOption enum");

static gsi::QFlagsClass<QRegularExpression::MatchOption > decl_QRegularExpression_MatchOption_Enums ("QRegularExpression_QFlags_MatchOption",
  "@qt\n@brief This class represents the QFlags<QRegularExpression::MatchOption> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QRegularExpression> inject_QRegularExpression_MatchOption_Enum_in_parent (decl_QRegularExpression_MatchOption_Enum.defs ());
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_MatchOption_Enum_as_child (decl_QRegularExpression_MatchOption_Enum, "MatchOption");
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_MatchOption_Enums_as_child (decl_QRegularExpression_MatchOption_Enums, "QFlags_MatchOption");

}


//  Implementation of the enum wrapper class for QRegularExpression::MatchType
namespace qt_gsi
{

static gsi::Enum<QRegularExpression::MatchType> decl_QRegularExpression_MatchType_Enum ("QRegularExpression_MatchType",
    gsi::enum_const ("NormalMatch", QRegularExpression::NormalMatch, "@brief Enum constant QRegularExpression::NormalMatch") +
    gsi::enum_const ("PartialPreferCompleteMatch", QRegularExpression::PartialPreferCompleteMatch, "@brief Enum constant QRegularExpression::PartialPreferCompleteMatch") +
    gsi::enum_const ("PartialPreferFirstMatch", QRegularExpression::PartialPreferFirstMatch, "@brief Enum constant QRegularExpression::PartialPreferFirstMatch") +
    gsi::enum_const ("NoMatch", QRegularExpression::NoMatch, "@brief Enum constant QRegularExpression::NoMatch"),
  "@qt\n@brief This class represents the QRegularExpression::MatchType enum");

static gsi::QFlagsClass<QRegularExpression::MatchType > decl_QRegularExpression_MatchType_Enums ("QRegularExpression_QFlags_MatchType",
  "@qt\n@brief This class represents the QFlags<QRegularExpression::MatchType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QRegularExpression> inject_QRegularExpression_MatchType_Enum_in_parent (decl_QRegularExpression_MatchType_Enum.defs ());
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_MatchType_Enum_as_child (decl_QRegularExpression_MatchType_Enum, "MatchType");
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_MatchType_Enums_as_child (decl_QRegularExpression_MatchType_Enums, "QFlags_MatchType");

}


//  Implementation of the enum wrapper class for QRegularExpression::PatternOption
namespace qt_gsi
{

static gsi::Enum<QRegularExpression::PatternOption> decl_QRegularExpression_PatternOption_Enum ("QRegularExpression_PatternOption",
    gsi::enum_const ("NoPatternOption", QRegularExpression::NoPatternOption, "@brief Enum constant QRegularExpression::NoPatternOption") +
    gsi::enum_const ("CaseInsensitiveOption", QRegularExpression::CaseInsensitiveOption, "@brief Enum constant QRegularExpression::CaseInsensitiveOption") +
    gsi::enum_const ("DotMatchesEverythingOption", QRegularExpression::DotMatchesEverythingOption, "@brief Enum constant QRegularExpression::DotMatchesEverythingOption") +
    gsi::enum_const ("MultilineOption", QRegularExpression::MultilineOption, "@brief Enum constant QRegularExpression::MultilineOption") +
    gsi::enum_const ("ExtendedPatternSyntaxOption", QRegularExpression::ExtendedPatternSyntaxOption, "@brief Enum constant QRegularExpression::ExtendedPatternSyntaxOption") +
    gsi::enum_const ("InvertedGreedinessOption", QRegularExpression::InvertedGreedinessOption, "@brief Enum constant QRegularExpression::InvertedGreedinessOption") +
    gsi::enum_const ("DontCaptureOption", QRegularExpression::DontCaptureOption, "@brief Enum constant QRegularExpression::DontCaptureOption") +
    gsi::enum_const ("UseUnicodePropertiesOption", QRegularExpression::UseUnicodePropertiesOption, "@brief Enum constant QRegularExpression::UseUnicodePropertiesOption") +
    gsi::enum_const ("OptimizeOnFirstUsageOption", QRegularExpression::OptimizeOnFirstUsageOption, "@brief Enum constant QRegularExpression::OptimizeOnFirstUsageOption") +
    gsi::enum_const ("DontAutomaticallyOptimizeOption", QRegularExpression::DontAutomaticallyOptimizeOption, "@brief Enum constant QRegularExpression::DontAutomaticallyOptimizeOption"),
  "@qt\n@brief This class represents the QRegularExpression::PatternOption enum");

static gsi::QFlagsClass<QRegularExpression::PatternOption > decl_QRegularExpression_PatternOption_Enums ("QRegularExpression_QFlags_PatternOption",
  "@qt\n@brief This class represents the QFlags<QRegularExpression::PatternOption> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QRegularExpression> inject_QRegularExpression_PatternOption_Enum_in_parent (decl_QRegularExpression_PatternOption_Enum.defs ());
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_PatternOption_Enum_as_child (decl_QRegularExpression_PatternOption_Enum, "PatternOption");
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_PatternOption_Enums_as_child (decl_QRegularExpression_PatternOption_Enums, "QFlags_PatternOption");

}

