/**
*  @file gsiDeclQAbstractUriResolver.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractUriResolver>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractUriResolver

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAbstractUriResolver::staticMetaObject);
}


// QUrl QAbstractUriResolver::resolve(const QUrl &relative, const QUrl &baseURI)


static void _init_f_resolve_c3294 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("relative");
  decl->add_arg<const QUrl & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("baseURI");
  decl->add_arg<const QUrl & > (argspec_1);
  decl->set_return<QUrl > ();
}

static void _call_f_resolve_c3294 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = args.read<const QUrl & > (heap);
  const QUrl &arg2 = args.read<const QUrl & > (heap);
  ret.write<QUrl > ((QUrl)((QAbstractUriResolver *)cls)->resolve (arg1, arg2));
}


// static QString QAbstractUriResolver::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAbstractUriResolver::tr (arg1, arg2, arg3));
}


// static QString QAbstractUriResolver::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAbstractUriResolver::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAbstractUriResolver () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("resolve", "@brief Method QUrl QAbstractUriResolver::resolve(const QUrl &relative, const QUrl &baseURI)\n", true, &_init_f_resolve_c3294, &_call_f_resolve_c3294);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QAbstractUriResolver::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAbstractUriResolver::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAbstractUriResolver::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QAbstractUriResolver> decl_QAbstractUriResolver (qtdecl_QObject (), "QAbstractUriResolver_Native",
  methods_QAbstractUriResolver (),
  "@hide\n@alias QAbstractUriResolver");

GSIQT_PUBLIC gsi::Class<QAbstractUriResolver> &qtdecl_QAbstractUriResolver () { return decl_QAbstractUriResolver; }

}


class QAbstractUriResolver_Adaptor : public QAbstractUriResolver, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAbstractUriResolver_Adaptor();

  //  [adaptor ctor] QAbstractUriResolver::QAbstractUriResolver(QObject *parent)
  QAbstractUriResolver_Adaptor() : QAbstractUriResolver()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAbstractUriResolver::QAbstractUriResolver(QObject *parent)
  QAbstractUriResolver_Adaptor(QObject *parent) : QAbstractUriResolver(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAbstractUriResolver::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAbstractUriResolver_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAbstractUriResolver::isSignalConnected(signal);
  }

  //  [expose] int QAbstractUriResolver::receivers(const char *signal)
  int fp_QAbstractUriResolver_receivers_c1731 (const char *signal) const {
    return QAbstractUriResolver::receivers(signal);
  }

  //  [expose] QObject *QAbstractUriResolver::sender()
  QObject * fp_QAbstractUriResolver_sender_c0 () const {
    return QAbstractUriResolver::sender();
  }

  //  [expose] int QAbstractUriResolver::senderSignalIndex()
  int fp_QAbstractUriResolver_senderSignalIndex_c0 () const {
    return QAbstractUriResolver::senderSignalIndex();
  }

  //  [emitter impl] void QAbstractUriResolver::destroyed(QObject *)
  void emitter_QAbstractUriResolver_destroyed_1302(QObject *arg1)
  {
    emit QAbstractUriResolver::destroyed(arg1);
  }

  //  [adaptor impl] bool QAbstractUriResolver::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QAbstractUriResolver::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAbstractUriResolver_Adaptor, bool, QEvent *>(&QAbstractUriResolver_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QAbstractUriResolver::event(arg1);
    }
  }

  //  [adaptor impl] bool QAbstractUriResolver::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QAbstractUriResolver::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAbstractUriResolver_Adaptor, bool, QObject *, QEvent *>(&QAbstractUriResolver_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QAbstractUriResolver::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] QUrl QAbstractUriResolver::resolve(const QUrl &relative, const QUrl &baseURI)
  QUrl cbs_resolve_c3294_0(const QUrl &relative, const QUrl &baseURI) const
  {
    __SUPPRESS_UNUSED_WARNING (relative);
    __SUPPRESS_UNUSED_WARNING (baseURI);
    throw qt_gsi::AbstractMethodCalledException("resolve");
  }

  virtual QUrl resolve(const QUrl &relative, const QUrl &baseURI) const
  {
    if (cb_resolve_c3294_0.can_issue()) {
      return cb_resolve_c3294_0.issue<QAbstractUriResolver_Adaptor, QUrl, const QUrl &, const QUrl &>(&QAbstractUriResolver_Adaptor::cbs_resolve_c3294_0, relative, baseURI);
    } else {
      throw qt_gsi::AbstractMethodCalledException("resolve");
    }
  }

  //  [adaptor impl] void QAbstractUriResolver::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QAbstractUriResolver::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAbstractUriResolver_Adaptor, QChildEvent *>(&QAbstractUriResolver_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QAbstractUriResolver::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QAbstractUriResolver::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QAbstractUriResolver::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAbstractUriResolver_Adaptor, QEvent *>(&QAbstractUriResolver_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QAbstractUriResolver::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QAbstractUriResolver::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAbstractUriResolver::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAbstractUriResolver_Adaptor, const QMetaMethod &>(&QAbstractUriResolver_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAbstractUriResolver::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAbstractUriResolver::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QAbstractUriResolver::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAbstractUriResolver_Adaptor, QTimerEvent *>(&QAbstractUriResolver_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QAbstractUriResolver::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_resolve_c3294_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAbstractUriResolver_Adaptor::~QAbstractUriResolver_Adaptor() { }

//  Constructor QAbstractUriResolver::QAbstractUriResolver(QObject *parent) (adaptor class)

static void _init_ctor_QAbstractUriResolver_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QAbstractUriResolver_Adaptor> ();
}

static void _call_ctor_QAbstractUriResolver_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ret.write<QAbstractUriResolver_Adaptor *> (new QAbstractUriResolver_Adaptor (arg1));
}


// void QAbstractUriResolver::childEvent(QChildEvent *)

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
  ((QAbstractUriResolver_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractUriResolver_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAbstractUriResolver::customEvent(QEvent *)

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
  ((QAbstractUriResolver_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractUriResolver_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QAbstractUriResolver::destroyed(QObject *)

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
  ((QAbstractUriResolver_Adaptor *)cls)->emitter_QAbstractUriResolver_destroyed_1302 (arg1);
}


// void QAbstractUriResolver::disconnectNotify(const QMetaMethod &signal)

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
  ((QAbstractUriResolver_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractUriResolver_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAbstractUriResolver::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAbstractUriResolver_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractUriResolver_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAbstractUriResolver::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QAbstractUriResolver_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractUriResolver_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QAbstractUriResolver::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QAbstractUriResolver_Adaptor *)cls)->fp_QAbstractUriResolver_isSignalConnected_c2394 (arg1));
}


// exposed int QAbstractUriResolver::receivers(const char *signal)

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
  ret.write<int > ((int)((QAbstractUriResolver_Adaptor *)cls)->fp_QAbstractUriResolver_receivers_c1731 (arg1));
}


// QUrl QAbstractUriResolver::resolve(const QUrl &relative, const QUrl &baseURI)

static void _init_cbs_resolve_c3294_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("relative");
  decl->add_arg<const QUrl & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("baseURI");
  decl->add_arg<const QUrl & > (argspec_1);
  decl->set_return<QUrl > ();
}

static void _call_cbs_resolve_c3294_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = args.read<const QUrl & > (heap);
  const QUrl &arg2 = args.read<const QUrl & > (heap);
  ret.write<QUrl > ((QUrl)((QAbstractUriResolver_Adaptor *)cls)->cbs_resolve_c3294_0 (arg1, arg2));
}

static void _set_callback_cbs_resolve_c3294_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractUriResolver_Adaptor *)cls)->cb_resolve_c3294_0 = cb;
}


// exposed QObject *QAbstractUriResolver::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAbstractUriResolver_Adaptor *)cls)->fp_QAbstractUriResolver_sender_c0 ());
}


// exposed int QAbstractUriResolver::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAbstractUriResolver_Adaptor *)cls)->fp_QAbstractUriResolver_senderSignalIndex_c0 ());
}


// void QAbstractUriResolver::timerEvent(QTimerEvent *)

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
  ((QAbstractUriResolver_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractUriResolver_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAbstractUriResolver> &qtdecl_QAbstractUriResolver ();

static gsi::Methods methods_QAbstractUriResolver_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractUriResolver::QAbstractUriResolver(QObject *parent)\nThis method creates an object of class QAbstractUriResolver.", &_init_ctor_QAbstractUriResolver_Adaptor_1302, &_call_ctor_QAbstractUriResolver_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAbstractUriResolver::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAbstractUriResolver::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QAbstractUriResolver::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAbstractUriResolver::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAbstractUriResolver::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAbstractUriResolver::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAbstractUriResolver::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAbstractUriResolver::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("resolve", "@hide", true, &_init_cbs_resolve_c3294_0, &_call_cbs_resolve_c3294_0);
  methods += new qt_gsi::GenericMethod ("resolve", "@brief Virtual method QUrl QAbstractUriResolver::resolve(const QUrl &relative, const QUrl &baseURI)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_resolve_c3294_0, &_call_cbs_resolve_c3294_0, &_set_callback_cbs_resolve_c3294_0);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAbstractUriResolver::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAbstractUriResolver::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAbstractUriResolver::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAbstractUriResolver_Adaptor> decl_QAbstractUriResolver_Adaptor (qtdecl_QAbstractUriResolver (), "QAbstractUriResolver",
  methods_QAbstractUriResolver_Adaptor (),
  "@qt\n@brief Binding of QAbstractUriResolver");

}

