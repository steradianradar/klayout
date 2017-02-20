/**
*  @file gsiDeclQDragMoveEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDragMoveEvent>
#include <QEvent>
#include <QMimeData>
#include <QObject>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDragMoveEvent

// ()


static void _init_f_accept_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_accept_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDragMoveEvent *)cls)->accept ();
}


// (const QRect &)


static void _init_f_accept_1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_accept_1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = args.read<const QRect & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDragMoveEvent *)cls)->accept (arg1);
}


// QRect QDragMoveEvent::answerRect()


static void _init_f_answerRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_answerRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QDragMoveEvent *)cls)->answerRect ());
}


// ()


static void _init_f_ignore_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_ignore_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDragMoveEvent *)cls)->ignore ();
}


// (const QRect &)


static void _init_f_ignore_1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_ignore_1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = args.read<const QRect & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDragMoveEvent *)cls)->ignore (arg1);
}


namespace gsi
{

static gsi::Methods methods_QDragMoveEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("accept", "@brief Method ()\n", false, &_init_f_accept_0, &_call_f_accept_0);
  methods += new qt_gsi::GenericMethod ("accept", "@brief Method (const QRect &)\n", false, &_init_f_accept_1792, &_call_f_accept_1792);
  methods += new qt_gsi::GenericMethod ("answerRect", "@brief Method QRect QDragMoveEvent::answerRect()\n", true, &_init_f_answerRect_c0, &_call_f_answerRect_c0);
  methods += new qt_gsi::GenericMethod ("ignore", "@brief Method ()\n", false, &_init_f_ignore_0, &_call_f_ignore_0);
  methods += new qt_gsi::GenericMethod ("ignore", "@brief Method (const QRect &)\n", false, &_init_f_ignore_1792, &_call_f_ignore_1792);
  return methods;
}

gsi::Class<QDropEvent> &qtdecl_QDropEvent ();

gsi::Class<QDragMoveEvent> decl_QDragMoveEvent (qtdecl_QDropEvent (), "QDragMoveEvent_Native",
  methods_QDragMoveEvent (),
  "@hide\n@alias QDragMoveEvent");

GSIQT_PUBLIC gsi::Class<QDragMoveEvent> &qtdecl_QDragMoveEvent () { return decl_QDragMoveEvent; }

}


class QDragMoveEvent_Adaptor : public QDragMoveEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDragMoveEvent_Adaptor();

  //  [adaptor ctor] QDragMoveEvent::QDragMoveEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)
  QDragMoveEvent_Adaptor(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QDragMoveEvent(pos, actions, data, buttons, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QDragMoveEvent::QDragMoveEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)
  QDragMoveEvent_Adaptor(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) : QDragMoveEvent(pos, actions, data, buttons, modifiers, type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QDragMoveEvent_Adaptor::~QDragMoveEvent_Adaptor() { }

//  Constructor QDragMoveEvent::QDragMoveEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) (adaptor class)

static void _init_ctor_QDragMoveEvent_Adaptor_13244 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("actions");
  decl->add_arg<QFlags<Qt::DropAction> > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("data");
  decl->add_arg<const QMimeData * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("type", true, "QEvent::DragMove");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_5);
  decl->set_return_new<QDragMoveEvent_Adaptor> ();
}

static void _call_ctor_QDragMoveEvent_Adaptor_13244 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = args.read<const QPoint & > (heap);
  QFlags<Qt::DropAction> arg2 = args.read<QFlags<Qt::DropAction> > (heap);
  const QMimeData *arg3 = args.read<const QMimeData * > (heap);
  QFlags<Qt::MouseButton> arg4 = args.read<QFlags<Qt::MouseButton> > (heap);
  QFlags<Qt::KeyboardModifier> arg5 = args.read<QFlags<Qt::KeyboardModifier> > (heap);
  const qt_gsi::Converter<QEvent::Type>::target_type & arg6 = args ? args.read<const qt_gsi::Converter<QEvent::Type>::target_type & > (heap) : (const qt_gsi::Converter<QEvent::Type>::target_type &)(qt_gsi::CppToQtReadAdaptor<QEvent::Type>(heap, QEvent::DragMove));
  ret.write<QDragMoveEvent_Adaptor *> (new QDragMoveEvent_Adaptor (arg1, arg2, arg3, arg4, arg5, qt_gsi::QtToCppAdaptor<QEvent::Type>(arg6).cref()));
}


namespace gsi
{

gsi::Class<QDragMoveEvent> &qtdecl_QDragMoveEvent ();

static gsi::Methods methods_QDragMoveEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDragMoveEvent::QDragMoveEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)\nThis method creates an object of class QDragMoveEvent.", &_init_ctor_QDragMoveEvent_Adaptor_13244, &_call_ctor_QDragMoveEvent_Adaptor_13244);
  return methods;
}

gsi::Class<QDragMoveEvent_Adaptor> decl_QDragMoveEvent_Adaptor (qtdecl_QDragMoveEvent (), "QDragMoveEvent",
  methods_QDragMoveEvent_Adaptor (),
  "@qt\n@brief Binding of QDragMoveEvent");

}

