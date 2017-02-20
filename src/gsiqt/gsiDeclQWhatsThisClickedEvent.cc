/**
*  @file gsiDeclQWhatsThisClickedEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QWhatsThisClickedEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QWhatsThisClickedEvent

// QString QWhatsThisClickedEvent::href()


static void _init_f_href_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_href_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QWhatsThisClickedEvent *)cls)->href ());
}


namespace gsi
{

static gsi::Methods methods_QWhatsThisClickedEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("href", "@brief Method QString QWhatsThisClickedEvent::href()\n", true, &_init_f_href_c0, &_call_f_href_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QWhatsThisClickedEvent> decl_QWhatsThisClickedEvent (qtdecl_QEvent (), "QWhatsThisClickedEvent_Native",
  methods_QWhatsThisClickedEvent (),
  "@hide\n@alias QWhatsThisClickedEvent");

GSIQT_PUBLIC gsi::Class<QWhatsThisClickedEvent> &qtdecl_QWhatsThisClickedEvent () { return decl_QWhatsThisClickedEvent; }

}


class QWhatsThisClickedEvent_Adaptor : public QWhatsThisClickedEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QWhatsThisClickedEvent_Adaptor();

  //  [adaptor ctor] QWhatsThisClickedEvent::QWhatsThisClickedEvent(const QString &href)
  QWhatsThisClickedEvent_Adaptor(const QString &href) : QWhatsThisClickedEvent(href)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QWhatsThisClickedEvent_Adaptor::~QWhatsThisClickedEvent_Adaptor() { }

//  Constructor QWhatsThisClickedEvent::QWhatsThisClickedEvent(const QString &href) (adaptor class)

static void _init_ctor_QWhatsThisClickedEvent_Adaptor_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("href");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QWhatsThisClickedEvent_Adaptor> ();
}

static void _call_ctor_QWhatsThisClickedEvent_Adaptor_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QWhatsThisClickedEvent_Adaptor *> (new QWhatsThisClickedEvent_Adaptor (arg1));
}


namespace gsi
{

gsi::Class<QWhatsThisClickedEvent> &qtdecl_QWhatsThisClickedEvent ();

static gsi::Methods methods_QWhatsThisClickedEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWhatsThisClickedEvent::QWhatsThisClickedEvent(const QString &href)\nThis method creates an object of class QWhatsThisClickedEvent.", &_init_ctor_QWhatsThisClickedEvent_Adaptor_2025, &_call_ctor_QWhatsThisClickedEvent_Adaptor_2025);
  return methods;
}

gsi::Class<QWhatsThisClickedEvent_Adaptor> decl_QWhatsThisClickedEvent_Adaptor (qtdecl_QWhatsThisClickedEvent (), "QWhatsThisClickedEvent",
  methods_QWhatsThisClickedEvent_Adaptor (),
  "@qt\n@brief Binding of QWhatsThisClickedEvent");

}

