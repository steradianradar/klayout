/**
*  @file gsiDeclQDragLeaveEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDragLeaveEvent>
#include <QEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDragLeaveEvent

namespace gsi
{

static gsi::Methods methods_QDragLeaveEvent () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QDragLeaveEvent> decl_QDragLeaveEvent (qtdecl_QEvent (), "QDragLeaveEvent_Native",
  methods_QDragLeaveEvent (),
  "@hide\n@alias QDragLeaveEvent");

GSIQT_PUBLIC gsi::Class<QDragLeaveEvent> &qtdecl_QDragLeaveEvent () { return decl_QDragLeaveEvent; }

}


class QDragLeaveEvent_Adaptor : public QDragLeaveEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDragLeaveEvent_Adaptor();

  //  [adaptor ctor] QDragLeaveEvent::QDragLeaveEvent()
  QDragLeaveEvent_Adaptor() : QDragLeaveEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QDragLeaveEvent_Adaptor::~QDragLeaveEvent_Adaptor() { }

//  Constructor QDragLeaveEvent::QDragLeaveEvent() (adaptor class)

static void _init_ctor_QDragLeaveEvent_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDragLeaveEvent_Adaptor> ();
}

static void _call_ctor_QDragLeaveEvent_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDragLeaveEvent_Adaptor *> (new QDragLeaveEvent_Adaptor ());
}


namespace gsi
{

gsi::Class<QDragLeaveEvent> &qtdecl_QDragLeaveEvent ();

static gsi::Methods methods_QDragLeaveEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDragLeaveEvent::QDragLeaveEvent()\nThis method creates an object of class QDragLeaveEvent.", &_init_ctor_QDragLeaveEvent_Adaptor_0, &_call_ctor_QDragLeaveEvent_Adaptor_0);
  return methods;
}

gsi::Class<QDragLeaveEvent_Adaptor> decl_QDragLeaveEvent_Adaptor (qtdecl_QDragLeaveEvent (), "QDragLeaveEvent",
  methods_QDragLeaveEvent_Adaptor (),
  "@qt\n@brief Binding of QDragLeaveEvent");

}

