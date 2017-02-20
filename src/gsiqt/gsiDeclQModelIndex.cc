/**
*  @file gsiDeclQModelIndex.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QModelIndex>
#include <QAbstractItemModel>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QModelIndex

//  Constructor QModelIndex::QModelIndex()


static void _init_ctor_QModelIndex_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QModelIndex> ();
}

static void _call_ctor_QModelIndex_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QModelIndex *> (new QModelIndex ());
}


//  Constructor QModelIndex::QModelIndex(const QModelIndex &other)


static void _init_ctor_QModelIndex_2395 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QModelIndex & > (argspec_0);
  decl->set_return_new<QModelIndex> ();
}

static void _call_ctor_QModelIndex_2395 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QModelIndex &arg1 = args.read<const QModelIndex & > (heap);
  ret.write<QModelIndex *> (new QModelIndex (arg1));
}


// QModelIndex QModelIndex::child(int row, int column)


static void _init_f_child_c1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("row");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("column");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QModelIndex > ();
}

static void _call_f_child_c1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<QModelIndex > ((QModelIndex)((QModelIndex *)cls)->child (arg1, arg2));
}


// int QModelIndex::column()


static void _init_f_column_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_column_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QModelIndex *)cls)->column ());
}


// QVariant QModelIndex::data(int role)


static void _init_f_data_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("role", true, "Qt::DisplayRole");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_data_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(Qt::DisplayRole);
  ret.write<QVariant > ((QVariant)((QModelIndex *)cls)->data (arg1));
}


// QFlags<Qt::ItemFlag> QModelIndex::flags()


static void _init_f_flags_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::ItemFlag> > ();
}

static void _call_f_flags_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::ItemFlag> > ((QFlags<Qt::ItemFlag>)((QModelIndex *)cls)->flags ());
}


// qint64 QModelIndex::internalId()


static void _init_f_internalId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_internalId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QModelIndex *)cls)->internalId ());
}


// void *QModelIndex::internalPointer()


static void _init_f_internalPointer_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void * > ();
}

static void _call_f_internalPointer_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<void * > ((void *)((QModelIndex *)cls)->internalPointer ());
}


// bool QModelIndex::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QModelIndex *)cls)->isValid ());
}


// const QAbstractItemModel *QModelIndex::model()


static void _init_f_model_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QAbstractItemModel * > ();
}

static void _call_f_model_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QAbstractItemModel * > ((const QAbstractItemModel *)((QModelIndex *)cls)->model ());
}


// bool QModelIndex::operator!=(const QModelIndex &other)


static void _init_f_operator_excl__eq__c2395 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QModelIndex & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2395 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QModelIndex &arg1 = args.read<const QModelIndex & > (heap);
  ret.write<bool > ((bool)((QModelIndex *)cls)->operator!= (arg1));
}


// bool QModelIndex::operator<(const QModelIndex &other)


static void _init_f_operator_lt__c2395 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QModelIndex & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c2395 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QModelIndex &arg1 = args.read<const QModelIndex & > (heap);
  ret.write<bool > ((bool)((QModelIndex *)cls)->operator< (arg1));
}


// bool QModelIndex::operator==(const QModelIndex &other)


static void _init_f_operator_eq__eq__c2395 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QModelIndex & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2395 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QModelIndex &arg1 = args.read<const QModelIndex & > (heap);
  ret.write<bool > ((bool)((QModelIndex *)cls)->operator== (arg1));
}


// QModelIndex QModelIndex::parent()


static void _init_f_parent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QModelIndex > ();
}

static void _call_f_parent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QModelIndex > ((QModelIndex)((QModelIndex *)cls)->parent ());
}


// int QModelIndex::row()


static void _init_f_row_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_row_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QModelIndex *)cls)->row ());
}


// QModelIndex QModelIndex::sibling(int row, int column)


static void _init_f_sibling_c1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("row");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("column");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QModelIndex > ();
}

static void _call_f_sibling_c1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<QModelIndex > ((QModelIndex)((QModelIndex *)cls)->sibling (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QModelIndex () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QModelIndex::QModelIndex()\nThis method creates an object of class QModelIndex.", &_init_ctor_QModelIndex_0, &_call_ctor_QModelIndex_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QModelIndex::QModelIndex(const QModelIndex &other)\nThis method creates an object of class QModelIndex.", &_init_ctor_QModelIndex_2395, &_call_ctor_QModelIndex_2395);
  methods += new qt_gsi::GenericMethod ("child", "@brief Method QModelIndex QModelIndex::child(int row, int column)\n", true, &_init_f_child_c1426, &_call_f_child_c1426);
  methods += new qt_gsi::GenericMethod ("column", "@brief Method int QModelIndex::column()\n", true, &_init_f_column_c0, &_call_f_column_c0);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method QVariant QModelIndex::data(int role)\n", true, &_init_f_data_c767, &_call_f_data_c767);
  methods += new qt_gsi::GenericMethod ("flags", "@brief Method QFlags<Qt::ItemFlag> QModelIndex::flags()\n", true, &_init_f_flags_c0, &_call_f_flags_c0);
  methods += new qt_gsi::GenericMethod ("internalId", "@brief Method qint64 QModelIndex::internalId()\n", true, &_init_f_internalId_c0, &_call_f_internalId_c0);
  methods += new qt_gsi::GenericMethod ("internalPointer", "@brief Method void *QModelIndex::internalPointer()\n", true, &_init_f_internalPointer_c0, &_call_f_internalPointer_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QModelIndex::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("model", "@brief Method const QAbstractItemModel *QModelIndex::model()\n", true, &_init_f_model_c0, &_call_f_model_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QModelIndex::operator!=(const QModelIndex &other)\n", true, &_init_f_operator_excl__eq__c2395, &_call_f_operator_excl__eq__c2395);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QModelIndex::operator<(const QModelIndex &other)\n", true, &_init_f_operator_lt__c2395, &_call_f_operator_lt__c2395);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QModelIndex::operator==(const QModelIndex &other)\n", true, &_init_f_operator_eq__eq__c2395, &_call_f_operator_eq__eq__c2395);
  methods += new qt_gsi::GenericMethod ("parent", "@brief Method QModelIndex QModelIndex::parent()\n", true, &_init_f_parent_c0, &_call_f_parent_c0);
  methods += new qt_gsi::GenericMethod ("row", "@brief Method int QModelIndex::row()\n", true, &_init_f_row_c0, &_call_f_row_c0);
  methods += new qt_gsi::GenericMethod ("sibling", "@brief Method QModelIndex QModelIndex::sibling(int row, int column)\n", true, &_init_f_sibling_c1426, &_call_f_sibling_c1426);
  return methods;
}

gsi::Class<QModelIndex> decl_QModelIndex ("QModelIndex",
  methods_QModelIndex (),
  "@qt\n@brief Binding of QModelIndex");


GSIQT_PUBLIC gsi::Class<QModelIndex> &qtdecl_QModelIndex () { return decl_QModelIndex; }

}

