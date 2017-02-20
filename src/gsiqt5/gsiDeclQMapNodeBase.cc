/**
*  @file gsiDeclQMapNodeBase.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMapNodeBase>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMapNodeBase

//  Constructor QMapNodeBase::QMapNodeBase()


static void _init_ctor_QMapNodeBase_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMapNodeBase> ();
}

static void _call_ctor_QMapNodeBase_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMapNodeBase *> (new QMapNodeBase ());
}


// QMapNodeBase::Color QMapNodeBase::color()


static void _init_f_color_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QMapNodeBase::Color>::target_type > ();
}

static void _call_f_color_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QMapNodeBase::Color>::target_type > ((qt_gsi::Converter<QMapNodeBase::Color>::target_type)qt_gsi::CppToQtAdaptor<QMapNodeBase::Color>(((QMapNodeBase *)cls)->color ()));
}


// const QMapNodeBase *QMapNodeBase::nextNode()


static void _init_f_nextNode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMapNodeBase * > ();
}

static void _call_f_nextNode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QMapNodeBase * > ((const QMapNodeBase *)((QMapNodeBase *)cls)->nextNode ());
}


// QMapNodeBase *QMapNodeBase::nextNode()


static void _init_f_nextNode_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMapNodeBase * > ();
}

static void _call_f_nextNode_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMapNodeBase * > ((QMapNodeBase *)((QMapNodeBase *)cls)->nextNode ());
}


// QMapNodeBase *QMapNodeBase::parent()


static void _init_f_parent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMapNodeBase * > ();
}

static void _call_f_parent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMapNodeBase * > ((QMapNodeBase *)((QMapNodeBase *)cls)->parent ());
}


// const QMapNodeBase *QMapNodeBase::previousNode()


static void _init_f_previousNode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMapNodeBase * > ();
}

static void _call_f_previousNode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QMapNodeBase * > ((const QMapNodeBase *)((QMapNodeBase *)cls)->previousNode ());
}


// QMapNodeBase *QMapNodeBase::previousNode()


static void _init_f_previousNode_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMapNodeBase * > ();
}

static void _call_f_previousNode_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMapNodeBase * > ((QMapNodeBase *)((QMapNodeBase *)cls)->previousNode ());
}


// void QMapNodeBase::setColor(QMapNodeBase::Color c)


static void _init_f_setColor_2199 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<const qt_gsi::Converter<QMapNodeBase::Color>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setColor_2199 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QMapNodeBase::Color>::target_type & arg1 = args.read<const qt_gsi::Converter<QMapNodeBase::Color>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMapNodeBase *)cls)->setColor (qt_gsi::QtToCppAdaptor<QMapNodeBase::Color>(arg1).cref());
}


// void QMapNodeBase::setParent(QMapNodeBase *pp)


static void _init_f_setParent_1758 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pp");
  decl->add_arg<QMapNodeBase * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setParent_1758 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMapNodeBase *arg1 = args.read<QMapNodeBase * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMapNodeBase *)cls)->setParent (arg1);
}



namespace gsi
{

static gsi::Methods methods_QMapNodeBase () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMapNodeBase::QMapNodeBase()\nThis method creates an object of class QMapNodeBase.", &_init_ctor_QMapNodeBase_0, &_call_ctor_QMapNodeBase_0);
  methods += new qt_gsi::GenericMethod (":color", "@brief Method QMapNodeBase::Color QMapNodeBase::color()\n", true, &_init_f_color_c0, &_call_f_color_c0);
  methods += new qt_gsi::GenericMethod ("nextNode", "@brief Method const QMapNodeBase *QMapNodeBase::nextNode()\n", true, &_init_f_nextNode_c0, &_call_f_nextNode_c0);
  methods += new qt_gsi::GenericMethod ("nextNode", "@brief Method QMapNodeBase *QMapNodeBase::nextNode()\n", false, &_init_f_nextNode_0, &_call_f_nextNode_0);
  methods += new qt_gsi::GenericMethod (":parent", "@brief Method QMapNodeBase *QMapNodeBase::parent()\n", true, &_init_f_parent_c0, &_call_f_parent_c0);
  methods += new qt_gsi::GenericMethod ("previousNode", "@brief Method const QMapNodeBase *QMapNodeBase::previousNode()\n", true, &_init_f_previousNode_c0, &_call_f_previousNode_c0);
  methods += new qt_gsi::GenericMethod ("previousNode", "@brief Method QMapNodeBase *QMapNodeBase::previousNode()\n", false, &_init_f_previousNode_0, &_call_f_previousNode_0);
  methods += new qt_gsi::GenericMethod ("setColor|color=", "@brief Method void QMapNodeBase::setColor(QMapNodeBase::Color c)\n", false, &_init_f_setColor_2199, &_call_f_setColor_2199);
  methods += new qt_gsi::GenericMethod ("setParent|parent=", "@brief Method void QMapNodeBase::setParent(QMapNodeBase *pp)\n", false, &_init_f_setParent_1758, &_call_f_setParent_1758);
  return methods;
}

gsi::Class<QMapNodeBase> decl_QMapNodeBase ("QMapNodeBase",
  methods_QMapNodeBase (),
  "@qt\n@brief Binding of QMapNodeBase");


GSIQT_PUBLIC gsi::Class<QMapNodeBase> &qtdecl_QMapNodeBase () { return decl_QMapNodeBase; }

}


//  Implementation of the enum wrapper class for QMapNodeBase::Color
namespace qt_gsi
{

static gsi::Enum<QMapNodeBase::Color> decl_QMapNodeBase_Color_Enum ("QMapNodeBase_Color",
    gsi::enum_const ("Red", QMapNodeBase::Red, "@brief Enum constant QMapNodeBase::Red") +
    gsi::enum_const ("Black", QMapNodeBase::Black, "@brief Enum constant QMapNodeBase::Black"),
  "@qt\n@brief This class represents the QMapNodeBase::Color enum");

static gsi::QFlagsClass<QMapNodeBase::Color > decl_QMapNodeBase_Color_Enums ("QMapNodeBase_QFlags_Color",
  "@qt\n@brief This class represents the QFlags<QMapNodeBase::Color> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMapNodeBase> inject_QMapNodeBase_Color_Enum_in_parent (decl_QMapNodeBase_Color_Enum.defs ());
static gsi::ClassExt<QMapNodeBase> decl_QMapNodeBase_Color_Enum_as_child (decl_QMapNodeBase_Color_Enum, "Color");
static gsi::ClassExt<QMapNodeBase> decl_QMapNodeBase_Color_Enums_as_child (decl_QMapNodeBase_Color_Enums, "QFlags_Color");

}

