/**
*  @file gsiDeclQScreenOrientationChangeEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QScreenOrientationChangeEvent>
#include <QScreen>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QScreenOrientationChangeEvent

// Qt::ScreenOrientation QScreenOrientationChangeEvent::orientation()


static void _init_f_orientation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::ScreenOrientation>::target_type > ();
}

static void _call_f_orientation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::ScreenOrientation>::target_type > ((qt_gsi::Converter<Qt::ScreenOrientation>::target_type)qt_gsi::CppToQtAdaptor<Qt::ScreenOrientation>(((QScreenOrientationChangeEvent *)cls)->orientation ()));
}


// QScreen *QScreenOrientationChangeEvent::screen()


static void _init_f_screen_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QScreen * > ();
}

static void _call_f_screen_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QScreen * > ((QScreen *)((QScreenOrientationChangeEvent *)cls)->screen ());
}


namespace gsi
{

static gsi::Methods methods_QScreenOrientationChangeEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("orientation", "@brief Method Qt::ScreenOrientation QScreenOrientationChangeEvent::orientation()\n", true, &_init_f_orientation_c0, &_call_f_orientation_c0);
  methods += new qt_gsi::GenericMethod ("screen", "@brief Method QScreen *QScreenOrientationChangeEvent::screen()\n", true, &_init_f_screen_c0, &_call_f_screen_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QScreenOrientationChangeEvent> decl_QScreenOrientationChangeEvent (qtdecl_QEvent (), "QScreenOrientationChangeEvent_Native",
  methods_QScreenOrientationChangeEvent (),
  "@hide\n@alias QScreenOrientationChangeEvent");

GSIQT_PUBLIC gsi::Class<QScreenOrientationChangeEvent> &qtdecl_QScreenOrientationChangeEvent () { return decl_QScreenOrientationChangeEvent; }

}


class QScreenOrientationChangeEvent_Adaptor : public QScreenOrientationChangeEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QScreenOrientationChangeEvent_Adaptor();

  //  [adaptor ctor] QScreenOrientationChangeEvent::QScreenOrientationChangeEvent(QScreen *screen, Qt::ScreenOrientation orientation)
  QScreenOrientationChangeEvent_Adaptor(QScreen *screen, Qt::ScreenOrientation orientation) : QScreenOrientationChangeEvent(screen, orientation)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QScreenOrientationChangeEvent_Adaptor::~QScreenOrientationChangeEvent_Adaptor() { }

//  Constructor QScreenOrientationChangeEvent::QScreenOrientationChangeEvent(QScreen *screen, Qt::ScreenOrientation orientation) (adaptor class)

static void _init_ctor_QScreenOrientationChangeEvent_Adaptor_3724 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("screen");
  decl->add_arg<QScreen * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("orientation");
  decl->add_arg<const qt_gsi::Converter<Qt::ScreenOrientation>::target_type & > (argspec_1);
  decl->set_return_new<QScreenOrientationChangeEvent_Adaptor> ();
}

static void _call_ctor_QScreenOrientationChangeEvent_Adaptor_3724 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QScreen *arg1 = args.read<QScreen * > (heap);
  const qt_gsi::Converter<Qt::ScreenOrientation>::target_type & arg2 = args.read<const qt_gsi::Converter<Qt::ScreenOrientation>::target_type & > (heap);
  ret.write<QScreenOrientationChangeEvent_Adaptor *> (new QScreenOrientationChangeEvent_Adaptor (arg1, qt_gsi::QtToCppAdaptor<Qt::ScreenOrientation>(arg2).cref()));
}


namespace gsi
{

gsi::Class<QScreenOrientationChangeEvent> &qtdecl_QScreenOrientationChangeEvent ();

static gsi::Methods methods_QScreenOrientationChangeEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QScreenOrientationChangeEvent::QScreenOrientationChangeEvent(QScreen *screen, Qt::ScreenOrientation orientation)\nThis method creates an object of class QScreenOrientationChangeEvent.", &_init_ctor_QScreenOrientationChangeEvent_Adaptor_3724, &_call_ctor_QScreenOrientationChangeEvent_Adaptor_3724);
  return methods;
}

gsi::Class<QScreenOrientationChangeEvent_Adaptor> decl_QScreenOrientationChangeEvent_Adaptor (qtdecl_QScreenOrientationChangeEvent (), "QScreenOrientationChangeEvent",
  methods_QScreenOrientationChangeEvent_Adaptor (),
  "@qt\n@brief Binding of QScreenOrientationChangeEvent");

}

