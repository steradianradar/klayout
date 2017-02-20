/**
*  @file gsiDeclQMediaServiceCameraInfoInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaServiceCameraInfoInterface>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaServiceCameraInfoInterface

// int QMediaServiceCameraInfoInterface::cameraOrientation(const QByteArray &device)


static void _init_f_cameraOrientation_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_cameraOrientation_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<int > ((int)((QMediaServiceCameraInfoInterface *)cls)->cameraOrientation (arg1));
}


// QCamera::Position QMediaServiceCameraInfoInterface::cameraPosition(const QByteArray &device)


static void _init_f_cameraPosition_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<qt_gsi::Converter<QCamera::Position>::target_type > ();
}

static void _call_f_cameraPosition_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<qt_gsi::Converter<QCamera::Position>::target_type > ((qt_gsi::Converter<QCamera::Position>::target_type)qt_gsi::CppToQtAdaptor<QCamera::Position>(((QMediaServiceCameraInfoInterface *)cls)->cameraPosition (arg1)));
}


namespace gsi
{

static gsi::Methods methods_QMediaServiceCameraInfoInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("cameraOrientation", "@brief Method int QMediaServiceCameraInfoInterface::cameraOrientation(const QByteArray &device)\n", true, &_init_f_cameraOrientation_c2309, &_call_f_cameraOrientation_c2309);
  methods += new qt_gsi::GenericMethod ("cameraPosition", "@brief Method QCamera::Position QMediaServiceCameraInfoInterface::cameraPosition(const QByteArray &device)\n", true, &_init_f_cameraPosition_c2309, &_call_f_cameraPosition_c2309);
  return methods;
}

gsi::Class<QMediaServiceCameraInfoInterface> decl_QMediaServiceCameraInfoInterface ("QMediaServiceCameraInfoInterface_Native",
  methods_QMediaServiceCameraInfoInterface (),
  "@hide\n@alias QMediaServiceCameraInfoInterface");

GSIQT_PUBLIC gsi::Class<QMediaServiceCameraInfoInterface> &qtdecl_QMediaServiceCameraInfoInterface () { return decl_QMediaServiceCameraInfoInterface; }

}


class QMediaServiceCameraInfoInterface_Adaptor : public QMediaServiceCameraInfoInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaServiceCameraInfoInterface_Adaptor();

  //  [adaptor ctor] QMediaServiceCameraInfoInterface::QMediaServiceCameraInfoInterface()
  QMediaServiceCameraInfoInterface_Adaptor() : QMediaServiceCameraInfoInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] int QMediaServiceCameraInfoInterface::cameraOrientation(const QByteArray &device)
  int cbs_cameraOrientation_c2309_0(const QByteArray &device) const
  {
    __SUPPRESS_UNUSED_WARNING (device);
    throw qt_gsi::AbstractMethodCalledException("cameraOrientation");
  }

  virtual int cameraOrientation(const QByteArray &device) const
  {
    if (cb_cameraOrientation_c2309_0.can_issue()) {
      return cb_cameraOrientation_c2309_0.issue<QMediaServiceCameraInfoInterface_Adaptor, int, const QByteArray &>(&QMediaServiceCameraInfoInterface_Adaptor::cbs_cameraOrientation_c2309_0, device);
    } else {
      throw qt_gsi::AbstractMethodCalledException("cameraOrientation");
    }
  }

  //  [adaptor impl] QCamera::Position QMediaServiceCameraInfoInterface::cameraPosition(const QByteArray &device)
  qt_gsi::Converter<QCamera::Position>::target_type cbs_cameraPosition_c2309_0(const QByteArray &device) const
  {
    __SUPPRESS_UNUSED_WARNING (device);
    throw qt_gsi::AbstractMethodCalledException("cameraPosition");
  }

  virtual QCamera::Position cameraPosition(const QByteArray &device) const
  {
    if (cb_cameraPosition_c2309_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QCamera::Position>(cb_cameraPosition_c2309_0.issue<QMediaServiceCameraInfoInterface_Adaptor, qt_gsi::Converter<QCamera::Position>::target_type, const QByteArray &>(&QMediaServiceCameraInfoInterface_Adaptor::cbs_cameraPosition_c2309_0, device)).cref();
    } else {
      throw qt_gsi::AbstractMethodCalledException("cameraPosition");
    }
  }

  gsi::Callback cb_cameraOrientation_c2309_0;
  gsi::Callback cb_cameraPosition_c2309_0;
};

QMediaServiceCameraInfoInterface_Adaptor::~QMediaServiceCameraInfoInterface_Adaptor() { }

//  Constructor QMediaServiceCameraInfoInterface::QMediaServiceCameraInfoInterface() (adaptor class)

static void _init_ctor_QMediaServiceCameraInfoInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaServiceCameraInfoInterface_Adaptor> ();
}

static void _call_ctor_QMediaServiceCameraInfoInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaServiceCameraInfoInterface_Adaptor *> (new QMediaServiceCameraInfoInterface_Adaptor ());
}


// int QMediaServiceCameraInfoInterface::cameraOrientation(const QByteArray &device)

static void _init_cbs_cameraOrientation_c2309_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_cameraOrientation_c2309_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<int > ((int)((QMediaServiceCameraInfoInterface_Adaptor *)cls)->cbs_cameraOrientation_c2309_0 (arg1));
}

static void _set_callback_cbs_cameraOrientation_c2309_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceCameraInfoInterface_Adaptor *)cls)->cb_cameraOrientation_c2309_0 = cb;
}


// QCamera::Position QMediaServiceCameraInfoInterface::cameraPosition(const QByteArray &device)

static void _init_cbs_cameraPosition_c2309_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<qt_gsi::Converter<QCamera::Position>::target_type > ();
}

static void _call_cbs_cameraPosition_c2309_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<qt_gsi::Converter<QCamera::Position>::target_type > ((qt_gsi::Converter<QCamera::Position>::target_type)((QMediaServiceCameraInfoInterface_Adaptor *)cls)->cbs_cameraPosition_c2309_0 (arg1));
}

static void _set_callback_cbs_cameraPosition_c2309_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceCameraInfoInterface_Adaptor *)cls)->cb_cameraPosition_c2309_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaServiceCameraInfoInterface> &qtdecl_QMediaServiceCameraInfoInterface ();

static gsi::Methods methods_QMediaServiceCameraInfoInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceCameraInfoInterface::QMediaServiceCameraInfoInterface()\nThis method creates an object of class QMediaServiceCameraInfoInterface.", &_init_ctor_QMediaServiceCameraInfoInterface_Adaptor_0, &_call_ctor_QMediaServiceCameraInfoInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("cameraOrientation", "@hide", true, &_init_cbs_cameraOrientation_c2309_0, &_call_cbs_cameraOrientation_c2309_0);
  methods += new qt_gsi::GenericMethod ("cameraOrientation", "@brief Virtual method int QMediaServiceCameraInfoInterface::cameraOrientation(const QByteArray &device)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_cameraOrientation_c2309_0, &_call_cbs_cameraOrientation_c2309_0, &_set_callback_cbs_cameraOrientation_c2309_0);
  methods += new qt_gsi::GenericMethod ("cameraPosition", "@hide", true, &_init_cbs_cameraPosition_c2309_0, &_call_cbs_cameraPosition_c2309_0);
  methods += new qt_gsi::GenericMethod ("cameraPosition", "@brief Virtual method QCamera::Position QMediaServiceCameraInfoInterface::cameraPosition(const QByteArray &device)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_cameraPosition_c2309_0, &_call_cbs_cameraPosition_c2309_0, &_set_callback_cbs_cameraPosition_c2309_0);
  return methods;
}

gsi::Class<QMediaServiceCameraInfoInterface_Adaptor> decl_QMediaServiceCameraInfoInterface_Adaptor (qtdecl_QMediaServiceCameraInfoInterface (), "QMediaServiceCameraInfoInterface",
  methods_QMediaServiceCameraInfoInterface_Adaptor (),
  "@qt\n@brief Binding of QMediaServiceCameraInfoInterface");

}

