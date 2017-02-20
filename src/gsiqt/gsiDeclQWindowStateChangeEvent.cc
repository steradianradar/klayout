/**
*  @file gsiDeclQWindowStateChangeEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QWindowStateChangeEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QWindowStateChangeEvent

// bool QWindowStateChangeEvent::isOverride()


static void _init_f_isOverride_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isOverride_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWindowStateChangeEvent *)cls)->isOverride ());
}


// QFlags<Qt::WindowState> QWindowStateChangeEvent::oldState()


static void _init_f_oldState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::WindowState> > ();
}

static void _call_f_oldState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::WindowState> > ((QFlags<Qt::WindowState>)((QWindowStateChangeEvent *)cls)->oldState ());
}


namespace gsi
{

static gsi::Methods methods_QWindowStateChangeEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("isOverride?", "@brief Method bool QWindowStateChangeEvent::isOverride()\n", true, &_init_f_isOverride_c0, &_call_f_isOverride_c0);
  methods += new qt_gsi::GenericMethod ("oldState", "@brief Method QFlags<Qt::WindowState> QWindowStateChangeEvent::oldState()\n", true, &_init_f_oldState_c0, &_call_f_oldState_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QWindowStateChangeEvent> decl_QWindowStateChangeEvent (qtdecl_QEvent (), "QWindowStateChangeEvent_Native",
  methods_QWindowStateChangeEvent (),
  "@hide\n@alias QWindowStateChangeEvent");

GSIQT_PUBLIC gsi::Class<QWindowStateChangeEvent> &qtdecl_QWindowStateChangeEvent () { return decl_QWindowStateChangeEvent; }

}


class QWindowStateChangeEvent_Adaptor : public QWindowStateChangeEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QWindowStateChangeEvent_Adaptor();

  //  [adaptor ctor] QWindowStateChangeEvent::QWindowStateChangeEvent(QFlags<Qt::WindowState> aOldState)
  QWindowStateChangeEvent_Adaptor(QFlags<Qt::WindowState> aOldState) : QWindowStateChangeEvent(aOldState)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QWindowStateChangeEvent::QWindowStateChangeEvent(QFlags<Qt::WindowState> aOldState, bool isOverride)
  QWindowStateChangeEvent_Adaptor(QFlags<Qt::WindowState> aOldState, bool isOverride) : QWindowStateChangeEvent(aOldState, isOverride)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QWindowStateChangeEvent_Adaptor::~QWindowStateChangeEvent_Adaptor() { }

//  Constructor QWindowStateChangeEvent::QWindowStateChangeEvent(QFlags<Qt::WindowState> aOldState) (adaptor class)

static void _init_ctor_QWindowStateChangeEvent_Adaptor_2590 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("aOldState");
  decl->add_arg<QFlags<Qt::WindowState> > (argspec_0);
  decl->set_return_new<QWindowStateChangeEvent_Adaptor> ();
}

static void _call_ctor_QWindowStateChangeEvent_Adaptor_2590 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::WindowState> arg1 = args.read<QFlags<Qt::WindowState> > (heap);
  ret.write<QWindowStateChangeEvent_Adaptor *> (new QWindowStateChangeEvent_Adaptor (arg1));
}


//  Constructor QWindowStateChangeEvent::QWindowStateChangeEvent(QFlags<Qt::WindowState> aOldState, bool isOverride) (adaptor class)

static void _init_ctor_QWindowStateChangeEvent_Adaptor_3346 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("aOldState");
  decl->add_arg<QFlags<Qt::WindowState> > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("isOverride");
  decl->add_arg<bool > (argspec_1);
  decl->set_return_new<QWindowStateChangeEvent_Adaptor> ();
}

static void _call_ctor_QWindowStateChangeEvent_Adaptor_3346 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::WindowState> arg1 = args.read<QFlags<Qt::WindowState> > (heap);
  bool arg2 = args.read<bool > (heap);
  ret.write<QWindowStateChangeEvent_Adaptor *> (new QWindowStateChangeEvent_Adaptor (arg1, arg2));
}


namespace gsi
{

gsi::Class<QWindowStateChangeEvent> &qtdecl_QWindowStateChangeEvent ();

static gsi::Methods methods_QWindowStateChangeEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWindowStateChangeEvent::QWindowStateChangeEvent(QFlags<Qt::WindowState> aOldState)\nThis method creates an object of class QWindowStateChangeEvent.", &_init_ctor_QWindowStateChangeEvent_Adaptor_2590, &_call_ctor_QWindowStateChangeEvent_Adaptor_2590);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWindowStateChangeEvent::QWindowStateChangeEvent(QFlags<Qt::WindowState> aOldState, bool isOverride)\nThis method creates an object of class QWindowStateChangeEvent.", &_init_ctor_QWindowStateChangeEvent_Adaptor_3346, &_call_ctor_QWindowStateChangeEvent_Adaptor_3346);
  return methods;
}

gsi::Class<QWindowStateChangeEvent_Adaptor> decl_QWindowStateChangeEvent_Adaptor (qtdecl_QWindowStateChangeEvent (), "QWindowStateChangeEvent",
  methods_QWindowStateChangeEvent_Adaptor (),
  "@qt\n@brief Binding of QWindowStateChangeEvent");

}

