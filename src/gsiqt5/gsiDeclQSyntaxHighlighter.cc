/**
*  @file gsiDeclQSyntaxHighlighter.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSyntaxHighlighter>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QMetaMethod>
#include <QObject>
#include <QTextBlock>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextDocument>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSyntaxHighlighter

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QSyntaxHighlighter::staticMetaObject);
}


// QTextDocument *QSyntaxHighlighter::document()


static void _init_f_document_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextDocument * > ();
}

static void _call_f_document_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextDocument * > ((QTextDocument *)((QSyntaxHighlighter *)cls)->document ());
}


// void QSyntaxHighlighter::rehighlight()


static void _init_f_rehighlight_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_rehighlight_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSyntaxHighlighter *)cls)->rehighlight ();
}


// void QSyntaxHighlighter::rehighlightBlock(const QTextBlock &block)


static void _init_f_rehighlightBlock_2306 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("block");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_rehighlightBlock_2306 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = args.read<const QTextBlock & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSyntaxHighlighter *)cls)->rehighlightBlock (arg1);
}


// void QSyntaxHighlighter::setDocument(QTextDocument *doc)


static void _init_f_setDocument_1955 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("doc");
  decl->add_arg<QTextDocument * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDocument_1955 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextDocument *arg1 = args.read<QTextDocument * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSyntaxHighlighter *)cls)->setDocument (arg1);
}


// static QString QSyntaxHighlighter::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QSyntaxHighlighter::tr (arg1, arg2, arg3));
}


// static QString QSyntaxHighlighter::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QSyntaxHighlighter::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QSyntaxHighlighter () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":document", "@brief Method QTextDocument *QSyntaxHighlighter::document()\n", true, &_init_f_document_c0, &_call_f_document_c0);
  methods += new qt_gsi::GenericMethod ("rehighlight", "@brief Method void QSyntaxHighlighter::rehighlight()\n", false, &_init_f_rehighlight_0, &_call_f_rehighlight_0);
  methods += new qt_gsi::GenericMethod ("rehighlightBlock", "@brief Method void QSyntaxHighlighter::rehighlightBlock(const QTextBlock &block)\n", false, &_init_f_rehighlightBlock_2306, &_call_f_rehighlightBlock_2306);
  methods += new qt_gsi::GenericMethod ("setDocument|document=", "@brief Method void QSyntaxHighlighter::setDocument(QTextDocument *doc)\n", false, &_init_f_setDocument_1955, &_call_f_setDocument_1955);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QSyntaxHighlighter::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QSyntaxHighlighter::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QSyntaxHighlighter::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QSyntaxHighlighter> decl_QSyntaxHighlighter (qtdecl_QObject (), "QSyntaxHighlighter_Native",
  methods_QSyntaxHighlighter (),
  "@hide\n@alias QSyntaxHighlighter");

GSIQT_PUBLIC gsi::Class<QSyntaxHighlighter> &qtdecl_QSyntaxHighlighter () { return decl_QSyntaxHighlighter; }

}


class QSyntaxHighlighter_Adaptor : public QSyntaxHighlighter, public qt_gsi::QtObjectBase
{
public:

  virtual ~QSyntaxHighlighter_Adaptor();

  //  [adaptor ctor] QSyntaxHighlighter::QSyntaxHighlighter(QObject *parent)
  QSyntaxHighlighter_Adaptor(QObject *parent) : QSyntaxHighlighter(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSyntaxHighlighter::QSyntaxHighlighter(QTextDocument *parent)
  QSyntaxHighlighter_Adaptor(QTextDocument *parent) : QSyntaxHighlighter(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] QTextBlock QSyntaxHighlighter::currentBlock()
  QTextBlock fp_QSyntaxHighlighter_currentBlock_c0 () const {
    return QSyntaxHighlighter::currentBlock();
  }

  //  [expose] int QSyntaxHighlighter::currentBlockState()
  int fp_QSyntaxHighlighter_currentBlockState_c0 () const {
    return QSyntaxHighlighter::currentBlockState();
  }

  //  [expose] QTextBlockUserData *QSyntaxHighlighter::currentBlockUserData()
  QTextBlockUserData * fp_QSyntaxHighlighter_currentBlockUserData_c0 () const {
    return QSyntaxHighlighter::currentBlockUserData();
  }

  //  [expose] QTextCharFormat QSyntaxHighlighter::format(int pos)
  QTextCharFormat fp_QSyntaxHighlighter_format_c767 (int pos) const {
    return QSyntaxHighlighter::format(pos);
  }

  //  [expose] bool QSyntaxHighlighter::isSignalConnected(const QMetaMethod &signal)
  bool fp_QSyntaxHighlighter_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QSyntaxHighlighter::isSignalConnected(signal);
  }

  //  [expose] int QSyntaxHighlighter::previousBlockState()
  int fp_QSyntaxHighlighter_previousBlockState_c0 () const {
    return QSyntaxHighlighter::previousBlockState();
  }

  //  [expose] int QSyntaxHighlighter::receivers(const char *signal)
  int fp_QSyntaxHighlighter_receivers_c1731 (const char *signal) const {
    return QSyntaxHighlighter::receivers(signal);
  }

  //  [expose] QObject *QSyntaxHighlighter::sender()
  QObject * fp_QSyntaxHighlighter_sender_c0 () const {
    return QSyntaxHighlighter::sender();
  }

  //  [expose] int QSyntaxHighlighter::senderSignalIndex()
  int fp_QSyntaxHighlighter_senderSignalIndex_c0 () const {
    return QSyntaxHighlighter::senderSignalIndex();
  }

  //  [expose] void QSyntaxHighlighter::setCurrentBlockState(int newState)
  void fp_QSyntaxHighlighter_setCurrentBlockState_767 (int newState) {
    QSyntaxHighlighter::setCurrentBlockState(newState);
  }

  //  [expose] void QSyntaxHighlighter::setCurrentBlockUserData(QTextBlockUserData *data)
  void fp_QSyntaxHighlighter_setCurrentBlockUserData_2408 (QTextBlockUserData *data) {
    QSyntaxHighlighter::setCurrentBlockUserData(data);
  }

  //  [expose] void QSyntaxHighlighter::setFormat(int start, int count, const QTextCharFormat &format)
  void fp_QSyntaxHighlighter_setFormat_4132 (int start, int count, const QTextCharFormat &format) {
    QSyntaxHighlighter::setFormat(start, count, format);
  }

  //  [expose] void QSyntaxHighlighter::setFormat(int start, int count, const QColor &color)
  void fp_QSyntaxHighlighter_setFormat_3223 (int start, int count, const QColor &color) {
    QSyntaxHighlighter::setFormat(start, count, color);
  }

  //  [expose] void QSyntaxHighlighter::setFormat(int start, int count, const QFont &font)
  void fp_QSyntaxHighlighter_setFormat_3119 (int start, int count, const QFont &font) {
    QSyntaxHighlighter::setFormat(start, count, font);
  }

  //  [emitter impl] void QSyntaxHighlighter::destroyed(QObject *)
  void emitter_QSyntaxHighlighter_destroyed_1302(QObject *arg1)
  {
    emit QSyntaxHighlighter::destroyed(arg1);
  }

  //  [adaptor impl] bool QSyntaxHighlighter::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QSyntaxHighlighter::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QSyntaxHighlighter_Adaptor, bool, QEvent *>(&QSyntaxHighlighter_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QSyntaxHighlighter::event(arg1);
    }
  }

  //  [adaptor impl] bool QSyntaxHighlighter::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QSyntaxHighlighter::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QSyntaxHighlighter_Adaptor, bool, QObject *, QEvent *>(&QSyntaxHighlighter_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QSyntaxHighlighter::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QSyntaxHighlighter::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QSyntaxHighlighter::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QSyntaxHighlighter_Adaptor, QChildEvent *>(&QSyntaxHighlighter_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QSyntaxHighlighter::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QSyntaxHighlighter::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QSyntaxHighlighter::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QSyntaxHighlighter_Adaptor, QEvent *>(&QSyntaxHighlighter_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QSyntaxHighlighter::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QSyntaxHighlighter::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QSyntaxHighlighter::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QSyntaxHighlighter_Adaptor, const QMetaMethod &>(&QSyntaxHighlighter_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QSyntaxHighlighter::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QSyntaxHighlighter::highlightBlock(const QString &text)
  void cbs_highlightBlock_2025_0(const QString &text)
  {
    __SUPPRESS_UNUSED_WARNING (text);
    throw qt_gsi::AbstractMethodCalledException("highlightBlock");
  }

  virtual void highlightBlock(const QString &text)
  {
    if (cb_highlightBlock_2025_0.can_issue()) {
      cb_highlightBlock_2025_0.issue<QSyntaxHighlighter_Adaptor, const QString &>(&QSyntaxHighlighter_Adaptor::cbs_highlightBlock_2025_0, text);
    } else {
      throw qt_gsi::AbstractMethodCalledException("highlightBlock");
    }
  }

  //  [adaptor impl] void QSyntaxHighlighter::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QSyntaxHighlighter::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QSyntaxHighlighter_Adaptor, QTimerEvent *>(&QSyntaxHighlighter_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QSyntaxHighlighter::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_highlightBlock_2025_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QSyntaxHighlighter_Adaptor::~QSyntaxHighlighter_Adaptor() { }

//  Constructor QSyntaxHighlighter::QSyntaxHighlighter(QObject *parent) (adaptor class)

static void _init_ctor_QSyntaxHighlighter_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QSyntaxHighlighter_Adaptor> ();
}

static void _call_ctor_QSyntaxHighlighter_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  ret.write<QSyntaxHighlighter_Adaptor *> (new QSyntaxHighlighter_Adaptor (arg1));
}


//  Constructor QSyntaxHighlighter::QSyntaxHighlighter(QTextDocument *parent) (adaptor class)

static void _init_ctor_QSyntaxHighlighter_Adaptor_1955 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QTextDocument * > (argspec_0);
  decl->set_return_new<QSyntaxHighlighter_Adaptor> ();
}

static void _call_ctor_QSyntaxHighlighter_Adaptor_1955 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextDocument *arg1 = args.read<QTextDocument * > (heap);
  ret.write<QSyntaxHighlighter_Adaptor *> (new QSyntaxHighlighter_Adaptor (arg1));
}


// void QSyntaxHighlighter::childEvent(QChildEvent *)

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
  ((QSyntaxHighlighter_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QSyntaxHighlighter_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// exposed QTextBlock QSyntaxHighlighter::currentBlock()

static void _init_fp_currentBlock_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlock > ();
}

static void _call_fp_currentBlock_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlock > ((QTextBlock)((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_currentBlock_c0 ());
}


// exposed int QSyntaxHighlighter::currentBlockState()

static void _init_fp_currentBlockState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_currentBlockState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_currentBlockState_c0 ());
}


// exposed QTextBlockUserData *QSyntaxHighlighter::currentBlockUserData()

static void _init_fp_currentBlockUserData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlockUserData * > ();
}

static void _call_fp_currentBlockUserData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlockUserData * > ((QTextBlockUserData *)((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_currentBlockUserData_c0 ());
}


// void QSyntaxHighlighter::customEvent(QEvent *)

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
  ((QSyntaxHighlighter_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSyntaxHighlighter_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QSyntaxHighlighter::destroyed(QObject *)

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
  ((QSyntaxHighlighter_Adaptor *)cls)->emitter_QSyntaxHighlighter_destroyed_1302 (arg1);
}


// void QSyntaxHighlighter::disconnectNotify(const QMetaMethod &signal)

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
  ((QSyntaxHighlighter_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QSyntaxHighlighter_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QSyntaxHighlighter::event(QEvent *)

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
  ret.write<bool > ((bool)((QSyntaxHighlighter_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSyntaxHighlighter_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QSyntaxHighlighter::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QSyntaxHighlighter_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QSyntaxHighlighter_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed QTextCharFormat QSyntaxHighlighter::format(int pos)

static void _init_fp_format_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTextCharFormat > ();
}

static void _call_fp_format_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QTextCharFormat > ((QTextCharFormat)((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_format_c767 (arg1));
}


// void QSyntaxHighlighter::highlightBlock(const QString &text)

static void _init_cbs_highlightBlock_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_highlightBlock_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSyntaxHighlighter_Adaptor *)cls)->cbs_highlightBlock_2025_0 (arg1);
}

static void _set_callback_cbs_highlightBlock_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QSyntaxHighlighter_Adaptor *)cls)->cb_highlightBlock_2025_0 = cb;
}


// exposed bool QSyntaxHighlighter::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_isSignalConnected_c2394 (arg1));
}


// exposed int QSyntaxHighlighter::previousBlockState()

static void _init_fp_previousBlockState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_previousBlockState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_previousBlockState_c0 ());
}


// exposed int QSyntaxHighlighter::receivers(const char *signal)

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
  ret.write<int > ((int)((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_receivers_c1731 (arg1));
}


// exposed QObject *QSyntaxHighlighter::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_sender_c0 ());
}


// exposed int QSyntaxHighlighter::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_senderSignalIndex_c0 ());
}


// exposed void QSyntaxHighlighter::setCurrentBlockState(int newState)

static void _init_fp_setCurrentBlockState_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newState");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_fp_setCurrentBlockState_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_setCurrentBlockState_767 (arg1);
}


// exposed void QSyntaxHighlighter::setCurrentBlockUserData(QTextBlockUserData *data)

static void _init_fp_setCurrentBlockUserData_2408 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<QTextBlockUserData * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_fp_setCurrentBlockUserData_2408 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextBlockUserData *arg1 = args.read<QTextBlockUserData * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_setCurrentBlockUserData_2408 (arg1);
}


// exposed void QSyntaxHighlighter::setFormat(int start, int count, const QTextCharFormat &format)

static void _init_fp_setFormat_4132 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("start");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("count");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("format");
  decl->add_arg<const QTextCharFormat & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_fp_setFormat_4132 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  const QTextCharFormat &arg3 = args.read<const QTextCharFormat & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_setFormat_4132 (arg1, arg2, arg3);
}


// exposed void QSyntaxHighlighter::setFormat(int start, int count, const QColor &color)

static void _init_fp_setFormat_3223 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("start");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("count");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("color");
  decl->add_arg<const QColor & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_fp_setFormat_3223 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  const QColor &arg3 = args.read<const QColor & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_setFormat_3223 (arg1, arg2, arg3);
}


// exposed void QSyntaxHighlighter::setFormat(int start, int count, const QFont &font)

static void _init_fp_setFormat_3119 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("start");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("count");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("font");
  decl->add_arg<const QFont & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_fp_setFormat_3119 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  const QFont &arg3 = args.read<const QFont & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSyntaxHighlighter_Adaptor *)cls)->fp_QSyntaxHighlighter_setFormat_3119 (arg1, arg2, arg3);
}


// void QSyntaxHighlighter::timerEvent(QTimerEvent *)

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
  ((QSyntaxHighlighter_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QSyntaxHighlighter_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QSyntaxHighlighter> &qtdecl_QSyntaxHighlighter ();

static gsi::Methods methods_QSyntaxHighlighter_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSyntaxHighlighter::QSyntaxHighlighter(QObject *parent)\nThis method creates an object of class QSyntaxHighlighter.", &_init_ctor_QSyntaxHighlighter_Adaptor_1302, &_call_ctor_QSyntaxHighlighter_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSyntaxHighlighter::QSyntaxHighlighter(QTextDocument *parent)\nThis method creates an object of class QSyntaxHighlighter.", &_init_ctor_QSyntaxHighlighter_Adaptor_1955, &_call_ctor_QSyntaxHighlighter_Adaptor_1955);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QSyntaxHighlighter::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*currentBlock", "@brief Method QTextBlock QSyntaxHighlighter::currentBlock()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_currentBlock_c0, &_call_fp_currentBlock_c0);
  methods += new qt_gsi::GenericMethod ("*currentBlockState", "@brief Method int QSyntaxHighlighter::currentBlockState()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_currentBlockState_c0, &_call_fp_currentBlockState_c0);
  methods += new qt_gsi::GenericMethod ("*currentBlockUserData", "@brief Method QTextBlockUserData *QSyntaxHighlighter::currentBlockUserData()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_currentBlockUserData_c0, &_call_fp_currentBlockUserData_c0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QSyntaxHighlighter::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QSyntaxHighlighter::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QSyntaxHighlighter::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QSyntaxHighlighter::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QSyntaxHighlighter::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*format", "@brief Method QTextCharFormat QSyntaxHighlighter::format(int pos)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_format_c767, &_call_fp_format_c767);
  methods += new qt_gsi::GenericMethod ("*highlightBlock", "@hide", false, &_init_cbs_highlightBlock_2025_0, &_call_cbs_highlightBlock_2025_0);
  methods += new qt_gsi::GenericMethod ("*highlightBlock", "@brief Virtual method void QSyntaxHighlighter::highlightBlock(const QString &text)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_highlightBlock_2025_0, &_call_cbs_highlightBlock_2025_0, &_set_callback_cbs_highlightBlock_2025_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QSyntaxHighlighter::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*previousBlockState", "@brief Method int QSyntaxHighlighter::previousBlockState()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_previousBlockState_c0, &_call_fp_previousBlockState_c0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QSyntaxHighlighter::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QSyntaxHighlighter::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QSyntaxHighlighter::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*setCurrentBlockState", "@brief Method void QSyntaxHighlighter::setCurrentBlockState(int newState)\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_setCurrentBlockState_767, &_call_fp_setCurrentBlockState_767);
  methods += new qt_gsi::GenericMethod ("*setCurrentBlockUserData", "@brief Method void QSyntaxHighlighter::setCurrentBlockUserData(QTextBlockUserData *data)\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_setCurrentBlockUserData_2408, &_call_fp_setCurrentBlockUserData_2408);
  methods += new qt_gsi::GenericMethod ("*setFormat", "@brief Method void QSyntaxHighlighter::setFormat(int start, int count, const QTextCharFormat &format)\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_setFormat_4132, &_call_fp_setFormat_4132);
  methods += new qt_gsi::GenericMethod ("*setFormat", "@brief Method void QSyntaxHighlighter::setFormat(int start, int count, const QColor &color)\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_setFormat_3223, &_call_fp_setFormat_3223);
  methods += new qt_gsi::GenericMethod ("*setFormat", "@brief Method void QSyntaxHighlighter::setFormat(int start, int count, const QFont &font)\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_setFormat_3119, &_call_fp_setFormat_3119);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QSyntaxHighlighter::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QSyntaxHighlighter_Adaptor> decl_QSyntaxHighlighter_Adaptor (qtdecl_QSyntaxHighlighter (), "QSyntaxHighlighter",
  methods_QSyntaxHighlighter_Adaptor (),
  "@qt\n@brief Binding of QSyntaxHighlighter");

}

