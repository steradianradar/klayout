/**
*  @file gsiDeclQAccessibleInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleInterface>
#include <QAccessibleTableCellInterface>
#include <QColor>
#include <QObject>
#include <QRect>
#include <QWindow>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleInterface

// QColor QAccessibleInterface::backgroundColor()


static void _init_f_backgroundColor_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QColor > ();
}

static void _call_f_backgroundColor_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QColor > ((QColor)((QAccessibleInterface *)cls)->backgroundColor ());
}


// QAccessibleInterface *QAccessibleInterface::child(int index)


static void _init_f_child_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_f_child_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleInterface *)cls)->child (arg1));
}


// QAccessibleInterface *QAccessibleInterface::childAt(int x, int y)


static void _init_f_childAt_c1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_f_childAt_c1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleInterface *)cls)->childAt (arg1, arg2));
}


// int QAccessibleInterface::childCount()


static void _init_f_childCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_childCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleInterface *)cls)->childCount ());
}


// QAccessibleInterface *QAccessibleInterface::focusChild()


static void _init_f_focusChild_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_f_focusChild_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleInterface *)cls)->focusChild ());
}


// QColor QAccessibleInterface::foregroundColor()


static void _init_f_foregroundColor_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QColor > ();
}

static void _call_f_foregroundColor_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QColor > ((QColor)((QAccessibleInterface *)cls)->foregroundColor ());
}


// int QAccessibleInterface::indexOfChild(const QAccessibleInterface *)


static void _init_f_indexOfChild_c3317 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QAccessibleInterface * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOfChild_c3317 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAccessibleInterface *arg1 = args.read<const QAccessibleInterface * > (heap);
  ret.write<int > ((int)((QAccessibleInterface *)cls)->indexOfChild (arg1));
}


// void *QAccessibleInterface::interface_cast(QAccessible::InterfaceType)


static void _init_f_interface_cast_2970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QAccessible::InterfaceType>::target_type & > (argspec_0);
  decl->set_return<void * > ();
}

static void _call_f_interface_cast_2970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::InterfaceType>::target_type & arg1 = args.read<const qt_gsi::Converter<QAccessible::InterfaceType>::target_type & > (heap);
  ret.write<void * > ((void *)((QAccessibleInterface *)cls)->interface_cast (qt_gsi::QtToCppAdaptor<QAccessible::InterfaceType>(arg1).cref()));
}


// bool QAccessibleInterface::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAccessibleInterface *)cls)->isValid ());
}


// QObject *QAccessibleInterface::object()


static void _init_f_object_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_object_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAccessibleInterface *)cls)->object ());
}


// QAccessibleInterface *QAccessibleInterface::parent()


static void _init_f_parent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_f_parent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleInterface *)cls)->parent ());
}


// QRect QAccessibleInterface::rect()


static void _init_f_rect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_rect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QAccessibleInterface *)cls)->rect ());
}


// QVector<QPair<QAccessibleInterface*, QAccessible::Relation> > QAccessibleInterface::relations(QFlags<QAccessible::RelationFlag> match)


static void _init_f_relations_c3543 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("match", true, "QAccessible::AllRelations");
  decl->add_arg<QFlags<QAccessible::RelationFlag> > (argspec_0);
  decl->set_return<QVector<QPair<QAccessibleInterface*, QAccessible::Relation> > > ();
}

static void _call_f_relations_c3543 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QAccessible::RelationFlag> arg1 = args ? args.read<QFlags<QAccessible::RelationFlag> > (heap) : (QFlags<QAccessible::RelationFlag>)(QAccessible::AllRelations);
  ret.write<QVector<QPair<QAccessibleInterface*, QAccessible::Relation> > > ((QVector<QPair<QAccessibleInterface*, QAccessible::Relation> >)((QAccessibleInterface *)cls)->relations (arg1));
}


// QAccessible::Role QAccessibleInterface::role()


static void _init_f_role_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAccessible::Role>::target_type > ();
}

static void _call_f_role_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAccessible::Role>::target_type > ((qt_gsi::Converter<QAccessible::Role>::target_type)qt_gsi::CppToQtAdaptor<QAccessible::Role>(((QAccessibleInterface *)cls)->role ()));
}


// void QAccessibleInterface::setText(QAccessible::Text t, const QString &text)


static void _init_f_setText_3977 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("text");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setText_3977 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg1 = args.read<const qt_gsi::Converter<QAccessible::Text>::target_type & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleInterface *)cls)->setText (qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg1).cref(), arg2);
}


// QAccessible::State QAccessibleInterface::state()


static void _init_f_state_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessible::State > ();
}

static void _call_f_state_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessible::State > ((QAccessible::State)((QAccessibleInterface *)cls)->state ());
}


// QAccessibleTableCellInterface *QAccessibleInterface::tableCellInterface()


static void _init_f_tableCellInterface_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleTableCellInterface * > ();
}

static void _call_f_tableCellInterface_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleTableCellInterface * > ((QAccessibleTableCellInterface *)((QAccessibleInterface *)cls)->tableCellInterface ());
}


// QString QAccessibleInterface::text(QAccessible::Text t)


static void _init_f_text_c2060 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_text_c2060 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg1 = args.read<const qt_gsi::Converter<QAccessible::Text>::target_type & > (heap);
  ret.write<QString > ((QString)((QAccessibleInterface *)cls)->text (qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg1).cref()));
}


// void QAccessibleInterface::virtual_hook(int id, void *data)


static void _init_f_virtual_hook_1715 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("data");
  decl->add_arg<void * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_virtual_hook_1715 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  void *arg2 = args.read<void * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleInterface *)cls)->virtual_hook (arg1, arg2);
}


// QWindow *QAccessibleInterface::window()


static void _init_f_window_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWindow * > ();
}

static void _call_f_window_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWindow * > ((QWindow *)((QAccessibleInterface *)cls)->window ());
}



namespace gsi
{

static gsi::Methods methods_QAccessibleInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("backgroundColor", "@brief Method QColor QAccessibleInterface::backgroundColor()\n", true, &_init_f_backgroundColor_c0, &_call_f_backgroundColor_c0);
  methods += new qt_gsi::GenericMethod ("child", "@brief Method QAccessibleInterface *QAccessibleInterface::child(int index)\n", true, &_init_f_child_c767, &_call_f_child_c767);
  methods += new qt_gsi::GenericMethod ("childAt", "@brief Method QAccessibleInterface *QAccessibleInterface::childAt(int x, int y)\n", true, &_init_f_childAt_c1426, &_call_f_childAt_c1426);
  methods += new qt_gsi::GenericMethod ("childCount", "@brief Method int QAccessibleInterface::childCount()\n", true, &_init_f_childCount_c0, &_call_f_childCount_c0);
  methods += new qt_gsi::GenericMethod ("focusChild", "@brief Method QAccessibleInterface *QAccessibleInterface::focusChild()\n", true, &_init_f_focusChild_c0, &_call_f_focusChild_c0);
  methods += new qt_gsi::GenericMethod ("foregroundColor", "@brief Method QColor QAccessibleInterface::foregroundColor()\n", true, &_init_f_foregroundColor_c0, &_call_f_foregroundColor_c0);
  methods += new qt_gsi::GenericMethod ("indexOfChild", "@brief Method int QAccessibleInterface::indexOfChild(const QAccessibleInterface *)\n", true, &_init_f_indexOfChild_c3317, &_call_f_indexOfChild_c3317);
  methods += new qt_gsi::GenericMethod ("interface_cast", "@brief Method void *QAccessibleInterface::interface_cast(QAccessible::InterfaceType)\n", false, &_init_f_interface_cast_2970, &_call_f_interface_cast_2970);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QAccessibleInterface::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("object", "@brief Method QObject *QAccessibleInterface::object()\n", true, &_init_f_object_c0, &_call_f_object_c0);
  methods += new qt_gsi::GenericMethod ("parent", "@brief Method QAccessibleInterface *QAccessibleInterface::parent()\n", true, &_init_f_parent_c0, &_call_f_parent_c0);
  methods += new qt_gsi::GenericMethod ("rect", "@brief Method QRect QAccessibleInterface::rect()\n", true, &_init_f_rect_c0, &_call_f_rect_c0);
  methods += new qt_gsi::GenericMethod ("relations", "@brief Method QVector<QPair<QAccessibleInterface*, QAccessible::Relation> > QAccessibleInterface::relations(QFlags<QAccessible::RelationFlag> match)\n", true, &_init_f_relations_c3543, &_call_f_relations_c3543);
  methods += new qt_gsi::GenericMethod ("role", "@brief Method QAccessible::Role QAccessibleInterface::role()\n", true, &_init_f_role_c0, &_call_f_role_c0);
  methods += new qt_gsi::GenericMethod ("setText", "@brief Method void QAccessibleInterface::setText(QAccessible::Text t, const QString &text)\n", false, &_init_f_setText_3977, &_call_f_setText_3977);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method QAccessible::State QAccessibleInterface::state()\n", true, &_init_f_state_c0, &_call_f_state_c0);
  methods += new qt_gsi::GenericMethod ("tableCellInterface", "@brief Method QAccessibleTableCellInterface *QAccessibleInterface::tableCellInterface()\n", false, &_init_f_tableCellInterface_0, &_call_f_tableCellInterface_0);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QAccessibleInterface::text(QAccessible::Text t)\n", true, &_init_f_text_c2060, &_call_f_text_c2060);
  methods += new qt_gsi::GenericMethod ("virtual_hook", "@brief Method void QAccessibleInterface::virtual_hook(int id, void *data)\n", false, &_init_f_virtual_hook_1715, &_call_f_virtual_hook_1715);
  methods += new qt_gsi::GenericMethod ("window", "@brief Method QWindow *QAccessibleInterface::window()\n", true, &_init_f_window_c0, &_call_f_window_c0);
  return methods;
}

gsi::Class<QAccessibleInterface> decl_QAccessibleInterface ("QAccessibleInterface",
  methods_QAccessibleInterface (),
  "@qt\n@brief Binding of QAccessibleInterface");


GSIQT_PUBLIC gsi::Class<QAccessibleInterface> &qtdecl_QAccessibleInterface () { return decl_QAccessibleInterface; }

}

