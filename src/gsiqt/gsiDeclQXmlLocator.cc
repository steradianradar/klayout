/**
*  @file gsiDeclQXmlLocator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlLocator>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlLocator

// int QXmlLocator::columnNumber()


static void _init_f_columnNumber_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_columnNumber_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QXmlLocator *)cls)->columnNumber ());
}


// int QXmlLocator::lineNumber()


static void _init_f_lineNumber_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lineNumber_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QXmlLocator *)cls)->lineNumber ());
}


namespace gsi
{

static gsi::Methods methods_QXmlLocator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("columnNumber", "@brief Method int QXmlLocator::columnNumber()\n", true, &_init_f_columnNumber_c0, &_call_f_columnNumber_c0);
  methods += new qt_gsi::GenericMethod ("lineNumber", "@brief Method int QXmlLocator::lineNumber()\n", true, &_init_f_lineNumber_c0, &_call_f_lineNumber_c0);
  return methods;
}

gsi::Class<QXmlLocator> decl_QXmlLocator ("QXmlLocator_Native",
  methods_QXmlLocator (),
  "@hide\n@alias QXmlLocator");

GSIQT_PUBLIC gsi::Class<QXmlLocator> &qtdecl_QXmlLocator () { return decl_QXmlLocator; }

}


class QXmlLocator_Adaptor : public QXmlLocator, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlLocator_Adaptor();

  //  [adaptor ctor] QXmlLocator::QXmlLocator()
  QXmlLocator_Adaptor() : QXmlLocator()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] int QXmlLocator::columnNumber()
  int cbs_columnNumber_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("columnNumber");
  }

  virtual int columnNumber() const
  {
    if (cb_columnNumber_c0_0.can_issue()) {
      return cb_columnNumber_c0_0.issue<QXmlLocator_Adaptor, int>(&QXmlLocator_Adaptor::cbs_columnNumber_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("columnNumber");
    }
  }

  //  [adaptor impl] int QXmlLocator::lineNumber()
  int cbs_lineNumber_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("lineNumber");
  }

  virtual int lineNumber() const
  {
    if (cb_lineNumber_c0_0.can_issue()) {
      return cb_lineNumber_c0_0.issue<QXmlLocator_Adaptor, int>(&QXmlLocator_Adaptor::cbs_lineNumber_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("lineNumber");
    }
  }

  gsi::Callback cb_columnNumber_c0_0;
  gsi::Callback cb_lineNumber_c0_0;
};

QXmlLocator_Adaptor::~QXmlLocator_Adaptor() { }

//  Constructor QXmlLocator::QXmlLocator() (adaptor class)

static void _init_ctor_QXmlLocator_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlLocator_Adaptor> ();
}

static void _call_ctor_QXmlLocator_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlLocator_Adaptor *> (new QXmlLocator_Adaptor ());
}


// int QXmlLocator::columnNumber()

static void _init_cbs_columnNumber_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_columnNumber_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QXmlLocator_Adaptor *)cls)->cbs_columnNumber_c0_0 ());
}

static void _set_callback_cbs_columnNumber_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlLocator_Adaptor *)cls)->cb_columnNumber_c0_0 = cb;
}


// int QXmlLocator::lineNumber()

static void _init_cbs_lineNumber_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_lineNumber_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QXmlLocator_Adaptor *)cls)->cbs_lineNumber_c0_0 ());
}

static void _set_callback_cbs_lineNumber_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlLocator_Adaptor *)cls)->cb_lineNumber_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QXmlLocator> &qtdecl_QXmlLocator ();

static gsi::Methods methods_QXmlLocator_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlLocator::QXmlLocator()\nThis method creates an object of class QXmlLocator.", &_init_ctor_QXmlLocator_Adaptor_0, &_call_ctor_QXmlLocator_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("columnNumber", "@hide", true, &_init_cbs_columnNumber_c0_0, &_call_cbs_columnNumber_c0_0);
  methods += new qt_gsi::GenericMethod ("columnNumber", "@brief Virtual method int QXmlLocator::columnNumber()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_columnNumber_c0_0, &_call_cbs_columnNumber_c0_0, &_set_callback_cbs_columnNumber_c0_0);
  methods += new qt_gsi::GenericMethod ("lineNumber", "@hide", true, &_init_cbs_lineNumber_c0_0, &_call_cbs_lineNumber_c0_0);
  methods += new qt_gsi::GenericMethod ("lineNumber", "@brief Virtual method int QXmlLocator::lineNumber()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_lineNumber_c0_0, &_call_cbs_lineNumber_c0_0, &_set_callback_cbs_lineNumber_c0_0);
  return methods;
}

gsi::Class<QXmlLocator_Adaptor> decl_QXmlLocator_Adaptor (qtdecl_QXmlLocator (), "QXmlLocator",
  methods_QXmlLocator_Adaptor (),
  "@qt\n@brief Binding of QXmlLocator");

}

