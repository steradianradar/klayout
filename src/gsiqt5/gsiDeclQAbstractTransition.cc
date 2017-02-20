/**
*  @file gsiDeclQAbstractTransition.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractTransition>
#include <QAbstractAnimation>
#include <QAbstractState>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractTransition

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAbstractTransition::staticMetaObject);
}


// void QAbstractTransition::addAnimation(QAbstractAnimation *animation)


static void _init_f_addAnimation_2451 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("animation");
  decl->add_arg<QAbstractAnimation * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_addAnimation_2451 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractAnimation *arg1 = args.read<QAbstractAnimation * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractTransition *)cls)->addAnimation (arg1);
}


// QList<QAbstractAnimation*> QAbstractTransition::animations()


static void _init_f_animations_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAbstractAnimation*> > ();
}

static void _call_f_animations_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAbstractAnimation*> > ((QList<QAbstractAnimation*>)((QAbstractTransition *)cls)->animations ());
}


// QStateMachine *QAbstractTransition::machine()


static void _init_f_machine_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStateMachine * > ();
}

static void _call_f_machine_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStateMachine * > ((QStateMachine *)((QAbstractTransition *)cls)->machine ());
}


// void QAbstractTransition::removeAnimation(QAbstractAnimation *animation)


static void _init_f_removeAnimation_2451 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("animation");
  decl->add_arg<QAbstractAnimation * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeAnimation_2451 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractAnimation *arg1 = args.read<QAbstractAnimation * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractTransition *)cls)->removeAnimation (arg1);
}


// void QAbstractTransition::setTargetState(QAbstractState *target)


static void _init_f_setTargetState_2036 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("target");
  decl->add_arg<QAbstractState * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTargetState_2036 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractState *arg1 = args.read<QAbstractState * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractTransition *)cls)->setTargetState (arg1);
}


// void QAbstractTransition::setTargetStates(const QList<QAbstractState*> &targets)


static void _init_f_setTargetStates_3384 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("targets");
  decl->add_arg<const QList<QAbstractState*> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTargetStates_3384 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QAbstractState*> &arg1 = args.read<const QList<QAbstractState*> & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractTransition *)cls)->setTargetStates (arg1);
}


// void QAbstractTransition::setTransitionType(QAbstractTransition::TransitionType type)


static void _init_f_setTransitionType_4005 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QAbstractTransition::TransitionType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTransitionType_4005 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAbstractTransition::TransitionType>::target_type & arg1 = args.read<const qt_gsi::Converter<QAbstractTransition::TransitionType>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractTransition *)cls)->setTransitionType (qt_gsi::QtToCppAdaptor<QAbstractTransition::TransitionType>(arg1).cref());
}


// QState *QAbstractTransition::sourceState()


static void _init_f_sourceState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QState * > ();
}

static void _call_f_sourceState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QState * > ((QState *)((QAbstractTransition *)cls)->sourceState ());
}


// QAbstractState *QAbstractTransition::targetState()


static void _init_f_targetState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAbstractState * > ();
}

static void _call_f_targetState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractState * > ((QAbstractState *)((QAbstractTransition *)cls)->targetState ());
}


// QList<QAbstractState*> QAbstractTransition::targetStates()


static void _init_f_targetStates_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAbstractState*> > ();
}

static void _call_f_targetStates_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAbstractState*> > ((QList<QAbstractState*>)((QAbstractTransition *)cls)->targetStates ());
}


// QAbstractTransition::TransitionType QAbstractTransition::transitionType()


static void _init_f_transitionType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAbstractTransition::TransitionType>::target_type > ();
}

static void _call_f_transitionType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAbstractTransition::TransitionType>::target_type > ((qt_gsi::Converter<QAbstractTransition::TransitionType>::target_type)qt_gsi::CppToQtAdaptor<QAbstractTransition::TransitionType>(((QAbstractTransition *)cls)->transitionType ()));
}


// static QString QAbstractTransition::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QAbstractTransition::tr (arg1, arg2, arg3));
}


// static QString QAbstractTransition::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QAbstractTransition::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAbstractTransition () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("addAnimation", "@brief Method void QAbstractTransition::addAnimation(QAbstractAnimation *animation)\n", false, &_init_f_addAnimation_2451, &_call_f_addAnimation_2451);
  methods += new qt_gsi::GenericMethod ("animations", "@brief Method QList<QAbstractAnimation*> QAbstractTransition::animations()\n", true, &_init_f_animations_c0, &_call_f_animations_c0);
  methods += new qt_gsi::GenericMethod ("machine", "@brief Method QStateMachine *QAbstractTransition::machine()\n", true, &_init_f_machine_c0, &_call_f_machine_c0);
  methods += new qt_gsi::GenericMethod ("removeAnimation", "@brief Method void QAbstractTransition::removeAnimation(QAbstractAnimation *animation)\n", false, &_init_f_removeAnimation_2451, &_call_f_removeAnimation_2451);
  methods += new qt_gsi::GenericMethod ("setTargetState|targetState=", "@brief Method void QAbstractTransition::setTargetState(QAbstractState *target)\n", false, &_init_f_setTargetState_2036, &_call_f_setTargetState_2036);
  methods += new qt_gsi::GenericMethod ("setTargetStates|targetStates=", "@brief Method void QAbstractTransition::setTargetStates(const QList<QAbstractState*> &targets)\n", false, &_init_f_setTargetStates_3384, &_call_f_setTargetStates_3384);
  methods += new qt_gsi::GenericMethod ("setTransitionType|transitionType=", "@brief Method void QAbstractTransition::setTransitionType(QAbstractTransition::TransitionType type)\n", false, &_init_f_setTransitionType_4005, &_call_f_setTransitionType_4005);
  methods += new qt_gsi::GenericMethod (":sourceState", "@brief Method QState *QAbstractTransition::sourceState()\n", true, &_init_f_sourceState_c0, &_call_f_sourceState_c0);
  methods += new qt_gsi::GenericMethod (":targetState", "@brief Method QAbstractState *QAbstractTransition::targetState()\n", true, &_init_f_targetState_c0, &_call_f_targetState_c0);
  methods += new qt_gsi::GenericMethod (":targetStates", "@brief Method QList<QAbstractState*> QAbstractTransition::targetStates()\n", true, &_init_f_targetStates_c0, &_call_f_targetStates_c0);
  methods += new qt_gsi::GenericMethod (":transitionType", "@brief Method QAbstractTransition::TransitionType QAbstractTransition::transitionType()\n", true, &_init_f_transitionType_c0, &_call_f_transitionType_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QAbstractTransition::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAbstractTransition::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAbstractTransition::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QAbstractTransition> decl_QAbstractTransition (qtdecl_QObject (), "QAbstractTransition_Native",
  methods_QAbstractTransition (),
  "@hide\n@alias QAbstractTransition");

GSIQT_PUBLIC gsi::Class<QAbstractTransition> &qtdecl_QAbstractTransition () { return decl_QAbstractTransition; }

}


class QAbstractTransition_Adaptor : public QAbstractTransition, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAbstractTransition_Adaptor();

  //  [adaptor ctor] QAbstractTransition::QAbstractTransition(QState *sourceState)
  QAbstractTransition_Adaptor() : QAbstractTransition()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAbstractTransition::QAbstractTransition(QState *sourceState)
  QAbstractTransition_Adaptor(QState *sourceState) : QAbstractTransition(sourceState)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAbstractTransition::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAbstractTransition_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAbstractTransition::isSignalConnected(signal);
  }

  //  [expose] int QAbstractTransition::receivers(const char *signal)
  int fp_QAbstractTransition_receivers_c1731 (const char *signal) const {
    return QAbstractTransition::receivers(signal);
  }

  //  [expose] QObject *QAbstractTransition::sender()
  QObject * fp_QAbstractTransition_sender_c0 () const {
    return QAbstractTransition::sender();
  }

  //  [expose] int QAbstractTransition::senderSignalIndex()
  int fp_QAbstractTransition_senderSignalIndex_c0 () const {
    return QAbstractTransition::senderSignalIndex();
  }

  //  [emitter impl] void QAbstractTransition::destroyed(QObject *)
  void emitter_QAbstractTransition_destroyed_1302(QObject *arg1)
  {
    emit QAbstractTransition::destroyed(arg1);
  }

  //  [adaptor impl] bool QAbstractTransition::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QAbstractTransition::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAbstractTransition_Adaptor, bool, QObject *, QEvent *>(&QAbstractTransition_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QAbstractTransition::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QAbstractTransition::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QAbstractTransition::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAbstractTransition_Adaptor, QChildEvent *>(&QAbstractTransition_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QAbstractTransition::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QAbstractTransition::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QAbstractTransition::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAbstractTransition_Adaptor, QEvent *>(&QAbstractTransition_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QAbstractTransition::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QAbstractTransition::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAbstractTransition::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAbstractTransition_Adaptor, const QMetaMethod &>(&QAbstractTransition_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAbstractTransition::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QAbstractTransition::event(QEvent *e)
  bool cbs_event_1217_0(QEvent *e)
  {
    return QAbstractTransition::event(e);
  }

  virtual bool event(QEvent *e)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAbstractTransition_Adaptor, bool, QEvent *>(&QAbstractTransition_Adaptor::cbs_event_1217_0, e);
    } else {
      return QAbstractTransition::event(e);
    }
  }

  //  [adaptor impl] bool QAbstractTransition::eventTest(QEvent *event)
  bool cbs_eventTest_1217_0(QEvent *event)
  {
    __SUPPRESS_UNUSED_WARNING (event);
    throw qt_gsi::AbstractMethodCalledException("eventTest");
  }

  virtual bool eventTest(QEvent *event)
  {
    if (cb_eventTest_1217_0.can_issue()) {
      return cb_eventTest_1217_0.issue<QAbstractTransition_Adaptor, bool, QEvent *>(&QAbstractTransition_Adaptor::cbs_eventTest_1217_0, event);
    } else {
      throw qt_gsi::AbstractMethodCalledException("eventTest");
    }
  }

  //  [adaptor impl] void QAbstractTransition::onTransition(QEvent *event)
  void cbs_onTransition_1217_0(QEvent *event)
  {
    __SUPPRESS_UNUSED_WARNING (event);
    throw qt_gsi::AbstractMethodCalledException("onTransition");
  }

  virtual void onTransition(QEvent *event)
  {
    if (cb_onTransition_1217_0.can_issue()) {
      cb_onTransition_1217_0.issue<QAbstractTransition_Adaptor, QEvent *>(&QAbstractTransition_Adaptor::cbs_onTransition_1217_0, event);
    } else {
      throw qt_gsi::AbstractMethodCalledException("onTransition");
    }
  }

  //  [adaptor impl] void QAbstractTransition::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QAbstractTransition::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAbstractTransition_Adaptor, QTimerEvent *>(&QAbstractTransition_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QAbstractTransition::timerEvent(arg1);
    }
  }

  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventTest_1217_0;
  gsi::Callback cb_onTransition_1217_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAbstractTransition_Adaptor::~QAbstractTransition_Adaptor() { }

//  Constructor QAbstractTransition::QAbstractTransition(QState *sourceState) (adaptor class)

static void _init_ctor_QAbstractTransition_Adaptor_1216 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sourceState", true, "0");
  decl->add_arg<QState * > (argspec_0);
  decl->set_return_new<QAbstractTransition_Adaptor> ();
}

static void _call_ctor_QAbstractTransition_Adaptor_1216 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QState *arg1 = args ? args.read<QState * > (heap) : (QState *)(0);
  ret.write<QAbstractTransition_Adaptor *> (new QAbstractTransition_Adaptor (arg1));
}


// void QAbstractTransition::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractTransition_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractTransition_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAbstractTransition::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractTransition_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractTransition_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QAbstractTransition::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ((QAbstractTransition_Adaptor *)cls)->emitter_QAbstractTransition_destroyed_1302 (arg1);
}


// void QAbstractTransition::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractTransition_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractTransition_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAbstractTransition::event(QEvent *e)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAbstractTransition_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractTransition_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAbstractTransition::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAbstractTransition_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractTransition_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// bool QAbstractTransition::eventTest(QEvent *event)

static void _init_cbs_eventTest_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_eventTest_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAbstractTransition_Adaptor *)cls)->cbs_eventTest_1217_0 (arg1));
}

static void _set_callback_cbs_eventTest_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractTransition_Adaptor *)cls)->cb_eventTest_1217_0 = cb;
}


// exposed bool QAbstractTransition::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  ret.write<bool > ((bool)((QAbstractTransition_Adaptor *)cls)->fp_QAbstractTransition_isSignalConnected_c2394 (arg1));
}


// void QAbstractTransition::onTransition(QEvent *event)

static void _init_cbs_onTransition_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_onTransition_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractTransition_Adaptor *)cls)->cbs_onTransition_1217_0 (arg1);
}

static void _set_callback_cbs_onTransition_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractTransition_Adaptor *)cls)->cb_onTransition_1217_0 = cb;
}


// exposed int QAbstractTransition::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<int > ((int)((QAbstractTransition_Adaptor *)cls)->fp_QAbstractTransition_receivers_c1731 (arg1));
}


// exposed QObject *QAbstractTransition::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAbstractTransition_Adaptor *)cls)->fp_QAbstractTransition_sender_c0 ());
}


// exposed int QAbstractTransition::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAbstractTransition_Adaptor *)cls)->fp_QAbstractTransition_senderSignalIndex_c0 ());
}


// void QAbstractTransition::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractTransition_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractTransition_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAbstractTransition> &qtdecl_QAbstractTransition ();

static gsi::Methods methods_QAbstractTransition_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractTransition::QAbstractTransition(QState *sourceState)\nThis method creates an object of class QAbstractTransition.", &_init_ctor_QAbstractTransition_Adaptor_1216, &_call_ctor_QAbstractTransition_Adaptor_1216);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAbstractTransition::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAbstractTransition::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QAbstractTransition::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAbstractTransition::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*event", "@brief Virtual method bool QAbstractTransition::event(QEvent *e)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAbstractTransition::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*eventTest", "@hide", false, &_init_cbs_eventTest_1217_0, &_call_cbs_eventTest_1217_0);
  methods += new qt_gsi::GenericMethod ("*eventTest", "@brief Virtual method bool QAbstractTransition::eventTest(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventTest_1217_0, &_call_cbs_eventTest_1217_0, &_set_callback_cbs_eventTest_1217_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAbstractTransition::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*onTransition", "@hide", false, &_init_cbs_onTransition_1217_0, &_call_cbs_onTransition_1217_0);
  methods += new qt_gsi::GenericMethod ("*onTransition", "@brief Virtual method void QAbstractTransition::onTransition(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_onTransition_1217_0, &_call_cbs_onTransition_1217_0, &_set_callback_cbs_onTransition_1217_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAbstractTransition::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAbstractTransition::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAbstractTransition::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAbstractTransition::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAbstractTransition_Adaptor> decl_QAbstractTransition_Adaptor (qtdecl_QAbstractTransition (), "QAbstractTransition",
  methods_QAbstractTransition_Adaptor (),
  "@qt\n@brief Binding of QAbstractTransition");

}


//  Implementation of the enum wrapper class for QAbstractTransition::TransitionType
namespace qt_gsi
{

static gsi::Enum<QAbstractTransition::TransitionType> decl_QAbstractTransition_TransitionType_Enum ("QAbstractTransition_TransitionType",
    gsi::enum_const ("ExternalTransition", QAbstractTransition::ExternalTransition, "@brief Enum constant QAbstractTransition::ExternalTransition") +
    gsi::enum_const ("InternalTransition", QAbstractTransition::InternalTransition, "@brief Enum constant QAbstractTransition::InternalTransition"),
  "@qt\n@brief This class represents the QAbstractTransition::TransitionType enum");

static gsi::QFlagsClass<QAbstractTransition::TransitionType > decl_QAbstractTransition_TransitionType_Enums ("QAbstractTransition_QFlags_TransitionType",
  "@qt\n@brief This class represents the QFlags<QAbstractTransition::TransitionType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAbstractTransition> inject_QAbstractTransition_TransitionType_Enum_in_parent (decl_QAbstractTransition_TransitionType_Enum.defs ());
static gsi::ClassExt<QAbstractTransition> decl_QAbstractTransition_TransitionType_Enum_as_child (decl_QAbstractTransition_TransitionType_Enum, "TransitionType");
static gsi::ClassExt<QAbstractTransition> decl_QAbstractTransition_TransitionType_Enums_as_child (decl_QAbstractTransition_TransitionType_Enums, "QFlags_TransitionType");

}

