/**
*  @file gsiDeclQTreeWidgetItemIterator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTreeWidgetItemIterator>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTreeWidgetItemIterator

//  Constructor QTreeWidgetItemIterator::QTreeWidgetItemIterator(const QTreeWidgetItemIterator &it)


static void _init_ctor_QTreeWidgetItemIterator_3647 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("it");
  decl->add_arg<const QTreeWidgetItemIterator & > (argspec_0);
  decl->set_return_new<QTreeWidgetItemIterator> ();
}

static void _call_ctor_QTreeWidgetItemIterator_3647 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTreeWidgetItemIterator &arg1 = args.read<const QTreeWidgetItemIterator & > (heap);
  ret.write<QTreeWidgetItemIterator *> (new QTreeWidgetItemIterator (arg1));
}


//  Constructor QTreeWidgetItemIterator::QTreeWidgetItemIterator(QTreeWidget *widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags)


static void _init_ctor_QTreeWidgetItemIterator_6409 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("widget");
  decl->add_arg<QTreeWidget * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags", true, "QTreeWidgetItemIterator::All");
  decl->add_arg<QFlags<QTreeWidgetItemIterator::IteratorFlag> > (argspec_1);
  decl->set_return_new<QTreeWidgetItemIterator> ();
}

static void _call_ctor_QTreeWidgetItemIterator_6409 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTreeWidget *arg1 = args.read<QTreeWidget * > (heap);
  QFlags<QTreeWidgetItemIterator::IteratorFlag> arg2 = args ? args.read<QFlags<QTreeWidgetItemIterator::IteratorFlag> > (heap) : (QFlags<QTreeWidgetItemIterator::IteratorFlag>)(QTreeWidgetItemIterator::All);
  ret.write<QTreeWidgetItemIterator *> (new QTreeWidgetItemIterator (arg1, arg2));
}


//  Constructor QTreeWidgetItemIterator::QTreeWidgetItemIterator(QTreeWidgetItem *item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags)


static void _init_ctor_QTreeWidgetItemIterator_6808 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("item");
  decl->add_arg<QTreeWidgetItem * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags", true, "QTreeWidgetItemIterator::All");
  decl->add_arg<QFlags<QTreeWidgetItemIterator::IteratorFlag> > (argspec_1);
  decl->set_return_new<QTreeWidgetItemIterator> ();
}

static void _call_ctor_QTreeWidgetItemIterator_6808 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTreeWidgetItem *arg1 = args.read<QTreeWidgetItem * > (heap);
  QFlags<QTreeWidgetItemIterator::IteratorFlag> arg2 = args ? args.read<QFlags<QTreeWidgetItemIterator::IteratorFlag> > (heap) : (QFlags<QTreeWidgetItemIterator::IteratorFlag>)(QTreeWidgetItemIterator::All);
  ret.write<QTreeWidgetItemIterator *> (new QTreeWidgetItemIterator (arg1, arg2));
}


// QTreeWidgetItem *QTreeWidgetItemIterator::operator*()


static void _init_f_operator_star__c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTreeWidgetItem * > ();
}

static void _call_f_operator_star__c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTreeWidgetItem * > ((QTreeWidgetItem *)((QTreeWidgetItemIterator *)cls)->operator* ());
}


// QTreeWidgetItemIterator &QTreeWidgetItemIterator::operator++()


static void _init_f_operator_plus__plus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTreeWidgetItemIterator & > ();
}

static void _call_f_operator_plus__plus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTreeWidgetItemIterator & > ((QTreeWidgetItemIterator &)((QTreeWidgetItemIterator *)cls)->operator++ ());
}


// const QTreeWidgetItemIterator QTreeWidgetItemIterator::operator++(int)


static void _init_f_operator_plus__plus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<const QTreeWidgetItemIterator > ();
}

static void _call_f_operator_plus__plus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<const QTreeWidgetItemIterator > ((const QTreeWidgetItemIterator)((QTreeWidgetItemIterator *)cls)->operator++ (arg1));
}


// QTreeWidgetItemIterator &QTreeWidgetItemIterator::operator+=(int n)


static void _init_f_operator_plus__eq__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTreeWidgetItemIterator & > ();
}

static void _call_f_operator_plus__eq__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QTreeWidgetItemIterator & > ((QTreeWidgetItemIterator &)((QTreeWidgetItemIterator *)cls)->operator+= (arg1));
}


// QTreeWidgetItemIterator &QTreeWidgetItemIterator::operator--()


static void _init_f_operator_minus__minus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTreeWidgetItemIterator & > ();
}

static void _call_f_operator_minus__minus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTreeWidgetItemIterator & > ((QTreeWidgetItemIterator &)((QTreeWidgetItemIterator *)cls)->operator-- ());
}


// const QTreeWidgetItemIterator QTreeWidgetItemIterator::operator--(int)


static void _init_f_operator_minus__minus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<const QTreeWidgetItemIterator > ();
}

static void _call_f_operator_minus__minus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<const QTreeWidgetItemIterator > ((const QTreeWidgetItemIterator)((QTreeWidgetItemIterator *)cls)->operator-- (arg1));
}


// QTreeWidgetItemIterator &QTreeWidgetItemIterator::operator-=(int n)


static void _init_f_operator_minus__eq__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTreeWidgetItemIterator & > ();
}

static void _call_f_operator_minus__eq__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QTreeWidgetItemIterator & > ((QTreeWidgetItemIterator &)((QTreeWidgetItemIterator *)cls)->operator-= (arg1));
}


// QTreeWidgetItemIterator &QTreeWidgetItemIterator::operator=(const QTreeWidgetItemIterator &it)


static void _init_f_operator_eq__3647 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("it");
  decl->add_arg<const QTreeWidgetItemIterator & > (argspec_0);
  decl->set_return<QTreeWidgetItemIterator & > ();
}

static void _call_f_operator_eq__3647 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTreeWidgetItemIterator &arg1 = args.read<const QTreeWidgetItemIterator & > (heap);
  ret.write<QTreeWidgetItemIterator & > ((QTreeWidgetItemIterator &)((QTreeWidgetItemIterator *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QTreeWidgetItemIterator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTreeWidgetItemIterator::QTreeWidgetItemIterator(const QTreeWidgetItemIterator &it)\nThis method creates an object of class QTreeWidgetItemIterator.", &_init_ctor_QTreeWidgetItemIterator_3647, &_call_ctor_QTreeWidgetItemIterator_3647);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTreeWidgetItemIterator::QTreeWidgetItemIterator(QTreeWidget *widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags)\nThis method creates an object of class QTreeWidgetItemIterator.", &_init_ctor_QTreeWidgetItemIterator_6409, &_call_ctor_QTreeWidgetItemIterator_6409);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTreeWidgetItemIterator::QTreeWidgetItemIterator(QTreeWidgetItem *item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags)\nThis method creates an object of class QTreeWidgetItemIterator.", &_init_ctor_QTreeWidgetItemIterator_6808, &_call_ctor_QTreeWidgetItemIterator_6808);
  methods += new qt_gsi::GenericMethod ("*", "@brief Method QTreeWidgetItem *QTreeWidgetItemIterator::operator*()\n", true, &_init_f_operator_star__c0, &_call_f_operator_star__c0);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QTreeWidgetItemIterator &QTreeWidgetItemIterator::operator++()\n", false, &_init_f_operator_plus__plus__0, &_call_f_operator_plus__plus__0);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method const QTreeWidgetItemIterator QTreeWidgetItemIterator::operator++(int)\n", false, &_init_f_operator_plus__plus__767, &_call_f_operator_plus__plus__767);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QTreeWidgetItemIterator &QTreeWidgetItemIterator::operator+=(int n)\n", false, &_init_f_operator_plus__eq__767, &_call_f_operator_plus__eq__767);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QTreeWidgetItemIterator &QTreeWidgetItemIterator::operator--()\n", false, &_init_f_operator_minus__minus__0, &_call_f_operator_minus__minus__0);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method const QTreeWidgetItemIterator QTreeWidgetItemIterator::operator--(int)\n", false, &_init_f_operator_minus__minus__767, &_call_f_operator_minus__minus__767);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QTreeWidgetItemIterator &QTreeWidgetItemIterator::operator-=(int n)\n", false, &_init_f_operator_minus__eq__767, &_call_f_operator_minus__eq__767);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QTreeWidgetItemIterator &QTreeWidgetItemIterator::operator=(const QTreeWidgetItemIterator &it)\n", false, &_init_f_operator_eq__3647, &_call_f_operator_eq__3647);
  return methods;
}

gsi::Class<QTreeWidgetItemIterator> decl_QTreeWidgetItemIterator ("QTreeWidgetItemIterator",
  methods_QTreeWidgetItemIterator (),
  "@qt\n@brief Binding of QTreeWidgetItemIterator");


GSIQT_PUBLIC gsi::Class<QTreeWidgetItemIterator> &qtdecl_QTreeWidgetItemIterator () { return decl_QTreeWidgetItemIterator; }

}


//  Implementation of the enum wrapper class for QTreeWidgetItemIterator::IteratorFlag
namespace qt_gsi
{

static gsi::Enum<QTreeWidgetItemIterator::IteratorFlag> decl_QTreeWidgetItemIterator_IteratorFlag_Enum ("QTreeWidgetItemIterator_IteratorFlag",
    gsi::enum_const ("All", QTreeWidgetItemIterator::All, "@brief Enum constant QTreeWidgetItemIterator::All") +
    gsi::enum_const ("Hidden", QTreeWidgetItemIterator::Hidden, "@brief Enum constant QTreeWidgetItemIterator::Hidden") +
    gsi::enum_const ("NotHidden", QTreeWidgetItemIterator::NotHidden, "@brief Enum constant QTreeWidgetItemIterator::NotHidden") +
    gsi::enum_const ("Selected", QTreeWidgetItemIterator::Selected, "@brief Enum constant QTreeWidgetItemIterator::Selected") +
    gsi::enum_const ("Unselected", QTreeWidgetItemIterator::Unselected, "@brief Enum constant QTreeWidgetItemIterator::Unselected") +
    gsi::enum_const ("Selectable", QTreeWidgetItemIterator::Selectable, "@brief Enum constant QTreeWidgetItemIterator::Selectable") +
    gsi::enum_const ("NotSelectable", QTreeWidgetItemIterator::NotSelectable, "@brief Enum constant QTreeWidgetItemIterator::NotSelectable") +
    gsi::enum_const ("DragEnabled", QTreeWidgetItemIterator::DragEnabled, "@brief Enum constant QTreeWidgetItemIterator::DragEnabled") +
    gsi::enum_const ("DragDisabled", QTreeWidgetItemIterator::DragDisabled, "@brief Enum constant QTreeWidgetItemIterator::DragDisabled") +
    gsi::enum_const ("DropEnabled", QTreeWidgetItemIterator::DropEnabled, "@brief Enum constant QTreeWidgetItemIterator::DropEnabled") +
    gsi::enum_const ("DropDisabled", QTreeWidgetItemIterator::DropDisabled, "@brief Enum constant QTreeWidgetItemIterator::DropDisabled") +
    gsi::enum_const ("HasChildren", QTreeWidgetItemIterator::HasChildren, "@brief Enum constant QTreeWidgetItemIterator::HasChildren") +
    gsi::enum_const ("NoChildren", QTreeWidgetItemIterator::NoChildren, "@brief Enum constant QTreeWidgetItemIterator::NoChildren") +
    gsi::enum_const ("Checked", QTreeWidgetItemIterator::Checked, "@brief Enum constant QTreeWidgetItemIterator::Checked") +
    gsi::enum_const ("NotChecked", QTreeWidgetItemIterator::NotChecked, "@brief Enum constant QTreeWidgetItemIterator::NotChecked") +
    gsi::enum_const ("Enabled", QTreeWidgetItemIterator::Enabled, "@brief Enum constant QTreeWidgetItemIterator::Enabled") +
    gsi::enum_const ("Disabled", QTreeWidgetItemIterator::Disabled, "@brief Enum constant QTreeWidgetItemIterator::Disabled") +
    gsi::enum_const ("Editable", QTreeWidgetItemIterator::Editable, "@brief Enum constant QTreeWidgetItemIterator::Editable") +
    gsi::enum_const ("NotEditable", QTreeWidgetItemIterator::NotEditable, "@brief Enum constant QTreeWidgetItemIterator::NotEditable") +
    gsi::enum_const ("UserFlag", QTreeWidgetItemIterator::UserFlag, "@brief Enum constant QTreeWidgetItemIterator::UserFlag"),
  "@qt\n@brief This class represents the QTreeWidgetItemIterator::IteratorFlag enum");

static gsi::QFlagsClass<QTreeWidgetItemIterator::IteratorFlag > decl_QTreeWidgetItemIterator_IteratorFlag_Enums ("QTreeWidgetItemIterator_QFlags_IteratorFlag",
  "@qt\n@brief This class represents the QFlags<QTreeWidgetItemIterator::IteratorFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTreeWidgetItemIterator> inject_QTreeWidgetItemIterator_IteratorFlag_Enum_in_parent (decl_QTreeWidgetItemIterator_IteratorFlag_Enum.defs ());
static gsi::ClassExt<QTreeWidgetItemIterator> decl_QTreeWidgetItemIterator_IteratorFlag_Enum_as_child (decl_QTreeWidgetItemIterator_IteratorFlag_Enum, "IteratorFlag");
static gsi::ClassExt<QTreeWidgetItemIterator> decl_QTreeWidgetItemIterator_IteratorFlag_Enums_as_child (decl_QTreeWidgetItemIterator_IteratorFlag_Enums, "QFlags_IteratorFlag");

}

