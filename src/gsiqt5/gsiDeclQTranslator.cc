/**
*  @file gsiDeclQTranslator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTranslator>
#include <QChildEvent>
#include <QEvent>
#include <QLocale>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTranslator

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QTranslator::staticMetaObject);
}


// bool QTranslator::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTranslator *)cls)->isEmpty ());
}


// bool QTranslator::load(const QString &filename, const QString &directory, const QString &search_delimiters, const QString &suffix)


static void _init_f_load_7776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("filename");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("directory", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("search_delimiters", true, "QString()");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("suffix", true, "QString()");
  decl->add_arg<const QString & > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_f_load_7776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  const QString &arg3 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  const QString &arg4 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  ret.write<bool > ((bool)((QTranslator *)cls)->load (arg1, arg2, arg3, arg4));
}


// bool QTranslator::load(const QLocale &locale, const QString &filename, const QString &prefix, const QString &directory, const QString &suffix)


static void _init_f_load_9654 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("locale");
  decl->add_arg<const QLocale & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("filename");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("prefix", true, "QString()");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("directory", true, "QString()");
  decl->add_arg<const QString & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("suffix", true, "QString()");
  decl->add_arg<const QString & > (argspec_4);
  decl->set_return<bool > ();
}

static void _call_f_load_9654 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLocale &arg1 = args.read<const QLocale & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  const QString &arg4 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  const QString &arg5 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  ret.write<bool > ((bool)((QTranslator *)cls)->load (arg1, arg2, arg3, arg4, arg5));
}


// bool QTranslator::load(const unsigned char *data, int len, const QString &directory)


static void _init_f_load_5312 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const unsigned char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("len");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("directory", true, "QString()");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_load_5312 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const unsigned char *arg1 = args.read<const unsigned char * > (heap);
  int arg2 = args.read<int > (heap);
  const QString &arg3 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  ret.write<bool > ((bool)((QTranslator *)cls)->load (arg1, arg2, arg3));
}


// QString QTranslator::translate(const char *context, const char *sourceText, const char *disambiguation, int n)


static void _init_f_translate_c5636 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("context");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("sourceText");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("disambiguation", true, "0");
  decl->add_arg<const char * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("n", true, "-1");
  decl->add_arg<int > (argspec_3);
  decl->set_return<QString > ();
}

static void _call_f_translate_c5636 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  const char *arg3 = args ? args.read<const char * > (heap) : (const char *)(0);
  int arg4 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)((QTranslator *)cls)->translate (arg1, arg2, arg3, arg4));
}


// static QString QTranslator::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QTranslator::tr (arg1, arg2, arg3));
}


// static QString QTranslator::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QTranslator::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QTranslator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QTranslator::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("load", "@brief Method bool QTranslator::load(const QString &filename, const QString &directory, const QString &search_delimiters, const QString &suffix)\n", false, &_init_f_load_7776, &_call_f_load_7776);
  methods += new qt_gsi::GenericMethod ("load", "@brief Method bool QTranslator::load(const QLocale &locale, const QString &filename, const QString &prefix, const QString &directory, const QString &suffix)\n", false, &_init_f_load_9654, &_call_f_load_9654);
  methods += new qt_gsi::GenericMethod ("load", "@brief Method bool QTranslator::load(const unsigned char *data, int len, const QString &directory)\n", false, &_init_f_load_5312, &_call_f_load_5312);
  methods += new qt_gsi::GenericMethod ("translate", "@brief Method QString QTranslator::translate(const char *context, const char *sourceText, const char *disambiguation, int n)\n", true, &_init_f_translate_c5636, &_call_f_translate_c5636);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QTranslator::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QTranslator::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QTranslator::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QTranslator> decl_QTranslator (qtdecl_QObject (), "QTranslator_Native",
  methods_QTranslator (),
  "@hide\n@alias QTranslator");

GSIQT_PUBLIC gsi::Class<QTranslator> &qtdecl_QTranslator () { return decl_QTranslator; }

}


class QTranslator_Adaptor : public QTranslator, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTranslator_Adaptor();

  //  [adaptor ctor] QTranslator::QTranslator(QObject *parent)
  QTranslator_Adaptor() : QTranslator()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QTranslator::QTranslator(QObject *parent)
  QTranslator_Adaptor(QObject *parent) : QTranslator(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QTranslator::isSignalConnected(const QMetaMethod &signal)
  bool fp_QTranslator_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QTranslator::isSignalConnected(signal);
  }

  //  [expose] int QTranslator::receivers(const char *signal)
  int fp_QTranslator_receivers_c1731 (const char *signal) const {
    return QTranslator::receivers(signal);
  }

  //  [expose] QObject *QTranslator::sender()
  QObject * fp_QTranslator_sender_c0 () const {
    return QTranslator::sender();
  }

  //  [expose] int QTranslator::senderSignalIndex()
  int fp_QTranslator_senderSignalIndex_c0 () const {
    return QTranslator::senderSignalIndex();
  }

  //  [emitter impl] void QTranslator::destroyed(QObject *)
  void emitter_QTranslator_destroyed_1302(QObject *arg1)
  {
    emit QTranslator::destroyed(arg1);
  }

  //  [adaptor impl] bool QTranslator::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QTranslator::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QTranslator_Adaptor, bool, QEvent *>(&QTranslator_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QTranslator::event(arg1);
    }
  }

  //  [adaptor impl] bool QTranslator::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QTranslator::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QTranslator_Adaptor, bool, QObject *, QEvent *>(&QTranslator_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QTranslator::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] bool QTranslator::isEmpty()
  bool cbs_isEmpty_c0_0() const
  {
    return QTranslator::isEmpty();
  }

  virtual bool isEmpty() const
  {
    if (cb_isEmpty_c0_0.can_issue()) {
      return cb_isEmpty_c0_0.issue<QTranslator_Adaptor, bool>(&QTranslator_Adaptor::cbs_isEmpty_c0_0);
    } else {
      return QTranslator::isEmpty();
    }
  }

  //  [adaptor impl] QString QTranslator::translate(const char *context, const char *sourceText, const char *disambiguation, int n)
  QString cbs_translate_c5636_2(const char *context, const char *sourceText, const char *disambiguation, int n) const
  {
    return QTranslator::translate(context, sourceText, disambiguation, n);
  }

  virtual QString translate(const char *context, const char *sourceText, const char *disambiguation, int n) const
  {
    if (cb_translate_c5636_2.can_issue()) {
      return cb_translate_c5636_2.issue<QTranslator_Adaptor, QString, const char *, const char *, const char *, int>(&QTranslator_Adaptor::cbs_translate_c5636_2, context, sourceText, disambiguation, n);
    } else {
      return QTranslator::translate(context, sourceText, disambiguation, n);
    }
  }

  //  [adaptor impl] void QTranslator::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QTranslator::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QTranslator_Adaptor, QChildEvent *>(&QTranslator_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QTranslator::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QTranslator::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QTranslator::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QTranslator_Adaptor, QEvent *>(&QTranslator_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QTranslator::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QTranslator::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QTranslator::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QTranslator_Adaptor, const QMetaMethod &>(&QTranslator_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QTranslator::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QTranslator::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QTranslator::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QTranslator_Adaptor, QTimerEvent *>(&QTranslator_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QTranslator::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_isEmpty_c0_0;
  gsi::Callback cb_translate_c5636_2;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QTranslator_Adaptor::~QTranslator_Adaptor() { }

//  Constructor QTranslator::QTranslator(QObject *parent) (adaptor class)

static void _init_ctor_QTranslator_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QTranslator_Adaptor> ();
}

static void _call_ctor_QTranslator_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ret.write<QTranslator_Adaptor *> (new QTranslator_Adaptor (arg1));
}


// void QTranslator::childEvent(QChildEvent *)

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
  ((QTranslator_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QTranslator_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QTranslator::customEvent(QEvent *)

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
  ((QTranslator_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QTranslator_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QTranslator::destroyed(QObject *)

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
  ((QTranslator_Adaptor *)cls)->emitter_QTranslator_destroyed_1302 (arg1);
}


// void QTranslator::disconnectNotify(const QMetaMethod &signal)

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
  ((QTranslator_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QTranslator_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QTranslator::event(QEvent *)

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
  ret.write<bool > ((bool)((QTranslator_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QTranslator_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QTranslator::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QTranslator_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QTranslator_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// bool QTranslator::isEmpty()

static void _init_cbs_isEmpty_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isEmpty_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTranslator_Adaptor *)cls)->cbs_isEmpty_c0_0 ());
}

static void _set_callback_cbs_isEmpty_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QTranslator_Adaptor *)cls)->cb_isEmpty_c0_0 = cb;
}


// exposed bool QTranslator::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QTranslator_Adaptor *)cls)->fp_QTranslator_isSignalConnected_c2394 (arg1));
}


// exposed int QTranslator::receivers(const char *signal)

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
  ret.write<int > ((int)((QTranslator_Adaptor *)cls)->fp_QTranslator_receivers_c1731 (arg1));
}


// exposed QObject *QTranslator::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QTranslator_Adaptor *)cls)->fp_QTranslator_sender_c0 ());
}


// exposed int QTranslator::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTranslator_Adaptor *)cls)->fp_QTranslator_senderSignalIndex_c0 ());
}


// void QTranslator::timerEvent(QTimerEvent *)

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
  ((QTranslator_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QTranslator_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// QString QTranslator::translate(const char *context, const char *sourceText, const char *disambiguation, int n)

static void _init_cbs_translate_c5636_2 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("context");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("sourceText");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("disambiguation");
  decl->add_arg<const char * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("n");
  decl->add_arg<int > (argspec_3);
  decl->set_return<QString > ();
}

static void _call_cbs_translate_c5636_2 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  const char *arg3 = args.read<const char * > (heap);
  int arg4 = args.read<int > (heap);
  ret.write<QString > ((QString)((QTranslator_Adaptor *)cls)->cbs_translate_c5636_2 (arg1, arg2, arg3, arg4));
}

static void _set_callback_cbs_translate_c5636_2 (void *cls, const gsi::Callback &cb)
{
  ((QTranslator_Adaptor *)cls)->cb_translate_c5636_2 = cb;
}


namespace gsi
{

gsi::Class<QTranslator> &qtdecl_QTranslator ();

static gsi::Methods methods_QTranslator_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTranslator::QTranslator(QObject *parent)\nThis method creates an object of class QTranslator.", &_init_ctor_QTranslator_Adaptor_1302, &_call_ctor_QTranslator_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QTranslator::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QTranslator::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QTranslator::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QTranslator::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QTranslator::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QTranslator::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("isEmpty", "@hide", true, &_init_cbs_isEmpty_c0_0, &_call_cbs_isEmpty_c0_0);
  methods += new qt_gsi::GenericMethod ("isEmpty", "@brief Virtual method bool QTranslator::isEmpty()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isEmpty_c0_0, &_call_cbs_isEmpty_c0_0, &_set_callback_cbs_isEmpty_c0_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QTranslator::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QTranslator::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QTranslator::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QTranslator::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QTranslator::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("translate", "@hide", true, &_init_cbs_translate_c5636_2, &_call_cbs_translate_c5636_2);
  methods += new qt_gsi::GenericMethod ("translate", "@brief Virtual method QString QTranslator::translate(const char *context, const char *sourceText, const char *disambiguation, int n)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_translate_c5636_2, &_call_cbs_translate_c5636_2, &_set_callback_cbs_translate_c5636_2);
  return methods;
}

gsi::Class<QTranslator_Adaptor> decl_QTranslator_Adaptor (qtdecl_QTranslator (), "QTranslator",
  methods_QTranslator_Adaptor (),
  "@qt\n@brief Binding of QTranslator");

}

