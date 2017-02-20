/**
*  @file gsiDeclQAccessibleTextRemoveEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleTextRemoveEvent>
#include <QAccessibleInterface>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleTextRemoveEvent

// int QAccessibleTextRemoveEvent::changePosition()


static void _init_f_changePosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_changePosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleTextRemoveEvent *)cls)->changePosition ());
}


// QString QAccessibleTextRemoveEvent::textRemoved()


static void _init_f_textRemoved_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_textRemoved_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAccessibleTextRemoveEvent *)cls)->textRemoved ());
}


namespace gsi
{

static gsi::Methods methods_QAccessibleTextRemoveEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("changePosition", "@brief Method int QAccessibleTextRemoveEvent::changePosition()\n", true, &_init_f_changePosition_c0, &_call_f_changePosition_c0);
  methods += new qt_gsi::GenericMethod ("textRemoved", "@brief Method QString QAccessibleTextRemoveEvent::textRemoved()\n", true, &_init_f_textRemoved_c0, &_call_f_textRemoved_c0);
  return methods;
}

gsi::Class<QAccessibleTextCursorEvent> &qtdecl_QAccessibleTextCursorEvent ();

gsi::Class<QAccessibleTextRemoveEvent> decl_QAccessibleTextRemoveEvent (qtdecl_QAccessibleTextCursorEvent (), "QAccessibleTextRemoveEvent_Native",
  methods_QAccessibleTextRemoveEvent (),
  "@hide\n@alias QAccessibleTextRemoveEvent");

GSIQT_PUBLIC gsi::Class<QAccessibleTextRemoveEvent> &qtdecl_QAccessibleTextRemoveEvent () { return decl_QAccessibleTextRemoveEvent; }

}


class QAccessibleTextRemoveEvent_Adaptor : public QAccessibleTextRemoveEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAccessibleTextRemoveEvent_Adaptor();

  //  [adaptor ctor] QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent(QObject *obj, int position, const QString &text)
  QAccessibleTextRemoveEvent_Adaptor(QObject *obj, int position, const QString &text) : QAccessibleTextRemoveEvent(obj, position, text)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent(QAccessibleInterface *iface, int position, const QString &text)
  QAccessibleTextRemoveEvent_Adaptor(QAccessibleInterface *iface, int position, const QString &text) : QAccessibleTextRemoveEvent(iface, position, text)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QAccessibleInterface *QAccessibleTextRemoveEvent::accessibleInterface()
  QAccessibleInterface * cbs_accessibleInterface_c0_0() const
  {
    return QAccessibleTextRemoveEvent::accessibleInterface();
  }

  virtual QAccessibleInterface * accessibleInterface() const
  {
    if (cb_accessibleInterface_c0_0.can_issue()) {
      return cb_accessibleInterface_c0_0.issue<QAccessibleTextRemoveEvent_Adaptor, QAccessibleInterface *>(&QAccessibleTextRemoveEvent_Adaptor::cbs_accessibleInterface_c0_0);
    } else {
      return QAccessibleTextRemoveEvent::accessibleInterface();
    }
  }

  gsi::Callback cb_accessibleInterface_c0_0;
};

QAccessibleTextRemoveEvent_Adaptor::~QAccessibleTextRemoveEvent_Adaptor() { }

//  Constructor QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent(QObject *obj, int position, const QString &text) (adaptor class)

static void _init_ctor_QAccessibleTextRemoveEvent_Adaptor_3878 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("position");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("text");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return_new<QAccessibleTextRemoveEvent_Adaptor> ();
}

static void _call_ctor_QAccessibleTextRemoveEvent_Adaptor_3878 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  int arg2 = args.read<int > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  ret.write<QAccessibleTextRemoveEvent_Adaptor *> (new QAccessibleTextRemoveEvent_Adaptor (arg1, arg2, arg3));
}


//  Constructor QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent(QAccessibleInterface *iface, int position, const QString &text) (adaptor class)

static void _init_ctor_QAccessibleTextRemoveEvent_Adaptor_5198 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("iface");
  decl->add_arg<QAccessibleInterface * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("position");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("text");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return_new<QAccessibleTextRemoveEvent_Adaptor> ();
}

static void _call_ctor_QAccessibleTextRemoveEvent_Adaptor_5198 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAccessibleInterface *arg1 = args.read<QAccessibleInterface * > (heap);
  int arg2 = args.read<int > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  ret.write<QAccessibleTextRemoveEvent_Adaptor *> (new QAccessibleTextRemoveEvent_Adaptor (arg1, arg2, arg3));
}


// QAccessibleInterface *QAccessibleTextRemoveEvent::accessibleInterface()

static void _init_cbs_accessibleInterface_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_cbs_accessibleInterface_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleTextRemoveEvent_Adaptor *)cls)->cbs_accessibleInterface_c0_0 ());
}

static void _set_callback_cbs_accessibleInterface_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleTextRemoveEvent_Adaptor *)cls)->cb_accessibleInterface_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QAccessibleTextRemoveEvent> &qtdecl_QAccessibleTextRemoveEvent ();

static gsi::Methods methods_QAccessibleTextRemoveEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent(QObject *obj, int position, const QString &text)\nThis method creates an object of class QAccessibleTextRemoveEvent.", &_init_ctor_QAccessibleTextRemoveEvent_Adaptor_3878, &_call_ctor_QAccessibleTextRemoveEvent_Adaptor_3878);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent(QAccessibleInterface *iface, int position, const QString &text)\nThis method creates an object of class QAccessibleTextRemoveEvent.", &_init_ctor_QAccessibleTextRemoveEvent_Adaptor_5198, &_call_ctor_QAccessibleTextRemoveEvent_Adaptor_5198);
  methods += new qt_gsi::GenericMethod ("accessibleInterface", "@hide", true, &_init_cbs_accessibleInterface_c0_0, &_call_cbs_accessibleInterface_c0_0);
  methods += new qt_gsi::GenericMethod ("accessibleInterface", "@brief Virtual method QAccessibleInterface *QAccessibleTextRemoveEvent::accessibleInterface()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_accessibleInterface_c0_0, &_call_cbs_accessibleInterface_c0_0, &_set_callback_cbs_accessibleInterface_c0_0);
  return methods;
}

gsi::Class<QAccessibleTextRemoveEvent_Adaptor> decl_QAccessibleTextRemoveEvent_Adaptor (qtdecl_QAccessibleTextRemoveEvent (), "QAccessibleTextRemoveEvent",
  methods_QAccessibleTextRemoveEvent_Adaptor (),
  "@qt\n@brief Binding of QAccessibleTextRemoveEvent");

}

