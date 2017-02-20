/**
*  @file gsiDeclQStatusTipEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStatusTipEvent>
#include <QEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStatusTipEvent

// QString QStatusTipEvent::tip()


static void _init_f_tip_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_tip_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QStatusTipEvent *)cls)->tip ());
}


namespace gsi
{

static gsi::Methods methods_QStatusTipEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("tip", "@brief Method QString QStatusTipEvent::tip()\n", true, &_init_f_tip_c0, &_call_f_tip_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QStatusTipEvent> decl_QStatusTipEvent (qtdecl_QEvent (), "QStatusTipEvent_Native",
  methods_QStatusTipEvent (),
  "@hide\n@alias QStatusTipEvent");

GSIQT_PUBLIC gsi::Class<QStatusTipEvent> &qtdecl_QStatusTipEvent () { return decl_QStatusTipEvent; }

}


class QStatusTipEvent_Adaptor : public QStatusTipEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QStatusTipEvent_Adaptor();

  //  [adaptor ctor] QStatusTipEvent::QStatusTipEvent(const QString &tip)
  QStatusTipEvent_Adaptor(const QString &tip) : QStatusTipEvent(tip)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QStatusTipEvent_Adaptor::~QStatusTipEvent_Adaptor() { }

//  Constructor QStatusTipEvent::QStatusTipEvent(const QString &tip) (adaptor class)

static void _init_ctor_QStatusTipEvent_Adaptor_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tip");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QStatusTipEvent_Adaptor> ();
}

static void _call_ctor_QStatusTipEvent_Adaptor_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QStatusTipEvent_Adaptor *> (new QStatusTipEvent_Adaptor (arg1));
}


namespace gsi
{

gsi::Class<QStatusTipEvent> &qtdecl_QStatusTipEvent ();

static gsi::Methods methods_QStatusTipEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStatusTipEvent::QStatusTipEvent(const QString &tip)\nThis method creates an object of class QStatusTipEvent.", &_init_ctor_QStatusTipEvent_Adaptor_2025, &_call_ctor_QStatusTipEvent_Adaptor_2025);
  return methods;
}

gsi::Class<QStatusTipEvent_Adaptor> decl_QStatusTipEvent_Adaptor (qtdecl_QStatusTipEvent (), "QStatusTipEvent",
  methods_QStatusTipEvent_Adaptor (),
  "@qt\n@brief Binding of QStatusTipEvent");

}

