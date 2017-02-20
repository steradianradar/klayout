/**
*  @file gsiDeclQJsonArray.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QJsonArray>
#include <QJsonValue>
#include <QJsonValueRef>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QJsonArray

//  Constructor QJsonArray::QJsonArray()


static void _init_ctor_QJsonArray_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QJsonArray> ();
}

static void _call_ctor_QJsonArray_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray *> (new QJsonArray ());
}


//  Constructor QJsonArray::QJsonArray(const QJsonArray &other)


static void _init_ctor_QJsonArray_2315 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray & > (argspec_0);
  decl->set_return_new<QJsonArray> ();
}

static void _call_ctor_QJsonArray_2315 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray &arg1 = args.read<const QJsonArray & > (heap);
  ret.write<QJsonArray *> (new QJsonArray (arg1));
}


// void QJsonArray::append(const QJsonValue &value)


static void _init_f_append_2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_append_2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = args.read<const QJsonValue & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonArray *)cls)->append (arg1);
}


// QJsonValue QJsonArray::at(int i)


static void _init_f_at_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonValue > ();
}

static void _call_f_at_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonValue > ((QJsonValue)((QJsonArray *)cls)->at (arg1));
}


// QJsonArray::iterator QJsonArray::begin()


static void _init_f_begin_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray::iterator > ();
}

static void _call_f_begin_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::iterator > ((QJsonArray::iterator)((QJsonArray *)cls)->begin ());
}


// QJsonArray::const_iterator QJsonArray::begin()


static void _init_f_begin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray::const_iterator > ();
}

static void _call_f_begin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::const_iterator > ((QJsonArray::const_iterator)((QJsonArray *)cls)->begin ());
}


// QJsonArray::const_iterator QJsonArray::constBegin()


static void _init_f_constBegin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray::const_iterator > ();
}

static void _call_f_constBegin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::const_iterator > ((QJsonArray::const_iterator)((QJsonArray *)cls)->constBegin ());
}


// QJsonArray::const_iterator QJsonArray::constEnd()


static void _init_f_constEnd_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray::const_iterator > ();
}

static void _call_f_constEnd_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::const_iterator > ((QJsonArray::const_iterator)((QJsonArray *)cls)->constEnd ());
}


// bool QJsonArray::contains(const QJsonValue &element)


static void _init_f_contains_c2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("element");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = args.read<const QJsonValue & > (heap);
  ret.write<bool > ((bool)((QJsonArray *)cls)->contains (arg1));
}


// int QJsonArray::count()


static void _init_f_count_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_count_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QJsonArray *)cls)->count ());
}


// bool QJsonArray::empty()


static void _init_f_empty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_empty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonArray *)cls)->empty ());
}


// QJsonArray::iterator QJsonArray::end()


static void _init_f_end_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray::iterator > ();
}

static void _call_f_end_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::iterator > ((QJsonArray::iterator)((QJsonArray *)cls)->end ());
}


// QJsonArray::const_iterator QJsonArray::end()


static void _init_f_end_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray::const_iterator > ();
}

static void _call_f_end_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::const_iterator > ((QJsonArray::const_iterator)((QJsonArray *)cls)->end ());
}


// QJsonArray::iterator QJsonArray::erase(QJsonArray::iterator it)


static void _init_f_erase_2428 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("it");
  decl->add_arg<QJsonArray::iterator > (argspec_0);
  decl->set_return<QJsonArray::iterator > ();
}

static void _call_f_erase_2428 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonArray::iterator arg1 = args.read<QJsonArray::iterator > (heap);
  ret.write<QJsonArray::iterator > ((QJsonArray::iterator)((QJsonArray *)cls)->erase (arg1));
}


// QJsonValue QJsonArray::first()


static void _init_f_first_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValue > ();
}

static void _call_f_first_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValue > ((QJsonValue)((QJsonArray *)cls)->first ());
}


// void QJsonArray::insert(int i, const QJsonValue &value)


static void _init_f_insert_2972 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QJsonValue & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_insert_2972 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const QJsonValue &arg2 = args.read<const QJsonValue & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonArray *)cls)->insert (arg1, arg2);
}


// QJsonArray::iterator QJsonArray::insert(QJsonArray::iterator before, const QJsonValue &value)


static void _init_f_insert_4633 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("before");
  decl->add_arg<QJsonArray::iterator > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QJsonValue & > (argspec_1);
  decl->set_return<QJsonArray::iterator > ();
}

static void _call_f_insert_4633 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonArray::iterator arg1 = args.read<QJsonArray::iterator > (heap);
  const QJsonValue &arg2 = args.read<const QJsonValue & > (heap);
  ret.write<QJsonArray::iterator > ((QJsonArray::iterator)((QJsonArray *)cls)->insert (arg1, arg2));
}


// bool QJsonArray::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonArray *)cls)->isEmpty ());
}


// QJsonValue QJsonArray::last()


static void _init_f_last_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValue > ();
}

static void _call_f_last_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValue > ((QJsonValue)((QJsonArray *)cls)->last ());
}


// QJsonArray &QJsonArray::operator =(const QJsonArray &other)


static void _init_f_operator_eq__2315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray & > (argspec_0);
  decl->set_return<QJsonArray & > ();
}

static void _call_f_operator_eq__2315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray &arg1 = args.read<const QJsonArray & > (heap);
  ret.write<QJsonArray & > ((QJsonArray &)((QJsonArray *)cls)->operator = (arg1));
}


// bool QJsonArray::operator!=(const QJsonArray &other)


static void _init_f_operator_excl__eq__c2315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray &arg1 = args.read<const QJsonArray & > (heap);
  ret.write<bool > ((bool)((QJsonArray *)cls)->operator!= (arg1));
}


// QJsonArray QJsonArray::operator+(const QJsonValue &v)


static void _init_f_operator_plus__c2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<QJsonArray > ();
}

static void _call_f_operator_plus__c2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = args.read<const QJsonValue & > (heap);
  ret.write<QJsonArray > ((QJsonArray)((QJsonArray *)cls)->operator+ (arg1));
}


// QJsonArray &QJsonArray::operator+=(const QJsonValue &v)


static void _init_f_operator_plus__eq__2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<QJsonArray & > ();
}

static void _call_f_operator_plus__eq__2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = args.read<const QJsonValue & > (heap);
  ret.write<QJsonArray & > ((QJsonArray &)((QJsonArray *)cls)->operator+= (arg1));
}


// QJsonArray &QJsonArray::operator<<(const QJsonValue &v)


static void _init_f_operator_lt__lt__2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<QJsonArray & > ();
}

static void _call_f_operator_lt__lt__2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = args.read<const QJsonValue & > (heap);
  ret.write<QJsonArray & > ((QJsonArray &)((QJsonArray *)cls)->operator<< (arg1));
}


// bool QJsonArray::operator==(const QJsonArray &other)


static void _init_f_operator_eq__eq__c2315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray &arg1 = args.read<const QJsonArray & > (heap);
  ret.write<bool > ((bool)((QJsonArray *)cls)->operator== (arg1));
}


// QJsonValueRef QJsonArray::operator[](int i)


static void _init_f_operator_index__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonValueRef > ();
}

static void _call_f_operator_index__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonValueRef > ((QJsonValueRef)((QJsonArray *)cls)->operator[] (arg1));
}


// QJsonValue QJsonArray::operator[](int i)


static void _init_f_operator_index__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonValue > ();
}

static void _call_f_operator_index__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonValue > ((QJsonValue)((QJsonArray *)cls)->operator[] (arg1));
}


// void QJsonArray::pop_back()


static void _init_f_pop_back_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_pop_back_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonArray *)cls)->pop_back ();
}


// void QJsonArray::pop_front()


static void _init_f_pop_front_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_pop_front_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonArray *)cls)->pop_front ();
}


// void QJsonArray::prepend(const QJsonValue &value)


static void _init_f_prepend_2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_prepend_2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = args.read<const QJsonValue & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonArray *)cls)->prepend (arg1);
}


// void QJsonArray::push_back(const QJsonValue &t)


static void _init_f_push_back_2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_push_back_2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = args.read<const QJsonValue & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonArray *)cls)->push_back (arg1);
}


// void QJsonArray::push_front(const QJsonValue &t)


static void _init_f_push_front_2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_push_front_2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = args.read<const QJsonValue & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonArray *)cls)->push_front (arg1);
}


// void QJsonArray::removeAt(int i)


static void _init_f_removeAt_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeAt_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonArray *)cls)->removeAt (arg1);
}


// void QJsonArray::removeFirst()


static void _init_f_removeFirst_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_removeFirst_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonArray *)cls)->removeFirst ();
}


// void QJsonArray::removeLast()


static void _init_f_removeLast_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_removeLast_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonArray *)cls)->removeLast ();
}


// void QJsonArray::replace(int i, const QJsonValue &value)


static void _init_f_replace_2972 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QJsonValue & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_replace_2972 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const QJsonValue &arg2 = args.read<const QJsonValue & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonArray *)cls)->replace (arg1, arg2);
}


// int QJsonArray::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QJsonArray *)cls)->size ());
}


// QJsonValue QJsonArray::takeAt(int i)


static void _init_f_takeAt_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonValue > ();
}

static void _call_f_takeAt_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonValue > ((QJsonValue)((QJsonArray *)cls)->takeAt (arg1));
}


// QList<QVariant> QJsonArray::toVariantList()


static void _init_f_toVariantList_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QVariant> > ();
}

static void _call_f_toVariantList_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QVariant> > ((QList<QVariant>)((QJsonArray *)cls)->toVariantList ());
}


// static QJsonArray QJsonArray::fromStringList(const QStringList &list)


static void _init_f_fromStringList_2437 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("list");
  decl->add_arg<const QStringList & > (argspec_0);
  decl->set_return<QJsonArray > ();
}

static void _call_f_fromStringList_2437 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = args.read<const QStringList & > (heap);
  ret.write<QJsonArray > ((QJsonArray)QJsonArray::fromStringList (arg1));
}


// static QJsonArray QJsonArray::fromVariantList(const QList<QVariant> &list)


static void _init_f_fromVariantList_2734 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("list");
  decl->add_arg<const QList<QVariant> & > (argspec_0);
  decl->set_return<QJsonArray > ();
}

static void _call_f_fromVariantList_2734 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QVariant> &arg1 = args.read<const QList<QVariant> & > (heap);
  ret.write<QJsonArray > ((QJsonArray)QJsonArray::fromVariantList (arg1));
}



namespace gsi
{

static gsi::Methods methods_QJsonArray () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonArray::QJsonArray()\nThis method creates an object of class QJsonArray.", &_init_ctor_QJsonArray_0, &_call_ctor_QJsonArray_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonArray::QJsonArray(const QJsonArray &other)\nThis method creates an object of class QJsonArray.", &_init_ctor_QJsonArray_2315, &_call_ctor_QJsonArray_2315);
  methods += new qt_gsi::GenericMethod ("append", "@brief Method void QJsonArray::append(const QJsonValue &value)\n", false, &_init_f_append_2313, &_call_f_append_2313);
  methods += new qt_gsi::GenericMethod ("at", "@brief Method QJsonValue QJsonArray::at(int i)\n", true, &_init_f_at_c767, &_call_f_at_c767);
  methods += new qt_gsi::GenericMethod ("begin", "@brief Method QJsonArray::iterator QJsonArray::begin()\n", false, &_init_f_begin_0, &_call_f_begin_0);
  methods += new qt_gsi::GenericMethod ("begin", "@brief Method QJsonArray::const_iterator QJsonArray::begin()\n", true, &_init_f_begin_c0, &_call_f_begin_c0);
  methods += new qt_gsi::GenericMethod ("constBegin", "@brief Method QJsonArray::const_iterator QJsonArray::constBegin()\n", true, &_init_f_constBegin_c0, &_call_f_constBegin_c0);
  methods += new qt_gsi::GenericMethod ("constEnd", "@brief Method QJsonArray::const_iterator QJsonArray::constEnd()\n", true, &_init_f_constEnd_c0, &_call_f_constEnd_c0);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QJsonArray::contains(const QJsonValue &element)\n", true, &_init_f_contains_c2313, &_call_f_contains_c2313);
  methods += new qt_gsi::GenericMethod ("count", "@brief Method int QJsonArray::count()\n", true, &_init_f_count_c0, &_call_f_count_c0);
  methods += new qt_gsi::GenericMethod ("empty", "@brief Method bool QJsonArray::empty()\n", true, &_init_f_empty_c0, &_call_f_empty_c0);
  methods += new qt_gsi::GenericMethod ("end", "@brief Method QJsonArray::iterator QJsonArray::end()\n", false, &_init_f_end_0, &_call_f_end_0);
  methods += new qt_gsi::GenericMethod ("end", "@brief Method QJsonArray::const_iterator QJsonArray::end()\n", true, &_init_f_end_c0, &_call_f_end_c0);
  methods += new qt_gsi::GenericMethod ("erase", "@brief Method QJsonArray::iterator QJsonArray::erase(QJsonArray::iterator it)\n", false, &_init_f_erase_2428, &_call_f_erase_2428);
  methods += new qt_gsi::GenericMethod ("first", "@brief Method QJsonValue QJsonArray::first()\n", true, &_init_f_first_c0, &_call_f_first_c0);
  methods += new qt_gsi::GenericMethod ("insert", "@brief Method void QJsonArray::insert(int i, const QJsonValue &value)\n", false, &_init_f_insert_2972, &_call_f_insert_2972);
  methods += new qt_gsi::GenericMethod ("insert", "@brief Method QJsonArray::iterator QJsonArray::insert(QJsonArray::iterator before, const QJsonValue &value)\n", false, &_init_f_insert_4633, &_call_f_insert_4633);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QJsonArray::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("last", "@brief Method QJsonValue QJsonArray::last()\n", true, &_init_f_last_c0, &_call_f_last_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QJsonArray &QJsonArray::operator =(const QJsonArray &other)\n", false, &_init_f_operator_eq__2315, &_call_f_operator_eq__2315);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QJsonArray::operator!=(const QJsonArray &other)\n", true, &_init_f_operator_excl__eq__c2315, &_call_f_operator_excl__eq__c2315);
  methods += new qt_gsi::GenericMethod ("+", "@brief Method QJsonArray QJsonArray::operator+(const QJsonValue &v)\n", true, &_init_f_operator_plus__c2313, &_call_f_operator_plus__c2313);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QJsonArray &QJsonArray::operator+=(const QJsonValue &v)\n", false, &_init_f_operator_plus__eq__2313, &_call_f_operator_plus__eq__2313);
  methods += new qt_gsi::GenericMethod ("<<", "@brief Method QJsonArray &QJsonArray::operator<<(const QJsonValue &v)\n", false, &_init_f_operator_lt__lt__2313, &_call_f_operator_lt__lt__2313);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QJsonArray::operator==(const QJsonArray &other)\n", true, &_init_f_operator_eq__eq__c2315, &_call_f_operator_eq__eq__c2315);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method QJsonValueRef QJsonArray::operator[](int i)\n", false, &_init_f_operator_index__767, &_call_f_operator_index__767);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method QJsonValue QJsonArray::operator[](int i)\n", true, &_init_f_operator_index__c767, &_call_f_operator_index__c767);
  methods += new qt_gsi::GenericMethod ("pop_back", "@brief Method void QJsonArray::pop_back()\n", false, &_init_f_pop_back_0, &_call_f_pop_back_0);
  methods += new qt_gsi::GenericMethod ("pop_front", "@brief Method void QJsonArray::pop_front()\n", false, &_init_f_pop_front_0, &_call_f_pop_front_0);
  methods += new qt_gsi::GenericMethod ("prepend", "@brief Method void QJsonArray::prepend(const QJsonValue &value)\n", false, &_init_f_prepend_2313, &_call_f_prepend_2313);
  methods += new qt_gsi::GenericMethod ("push_back", "@brief Method void QJsonArray::push_back(const QJsonValue &t)\n", false, &_init_f_push_back_2313, &_call_f_push_back_2313);
  methods += new qt_gsi::GenericMethod ("push_front", "@brief Method void QJsonArray::push_front(const QJsonValue &t)\n", false, &_init_f_push_front_2313, &_call_f_push_front_2313);
  methods += new qt_gsi::GenericMethod ("removeAt", "@brief Method void QJsonArray::removeAt(int i)\n", false, &_init_f_removeAt_767, &_call_f_removeAt_767);
  methods += new qt_gsi::GenericMethod ("removeFirst", "@brief Method void QJsonArray::removeFirst()\n", false, &_init_f_removeFirst_0, &_call_f_removeFirst_0);
  methods += new qt_gsi::GenericMethod ("removeLast", "@brief Method void QJsonArray::removeLast()\n", false, &_init_f_removeLast_0, &_call_f_removeLast_0);
  methods += new qt_gsi::GenericMethod ("replace", "@brief Method void QJsonArray::replace(int i, const QJsonValue &value)\n", false, &_init_f_replace_2972, &_call_f_replace_2972);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method int QJsonArray::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("takeAt", "@brief Method QJsonValue QJsonArray::takeAt(int i)\n", false, &_init_f_takeAt_767, &_call_f_takeAt_767);
  methods += new qt_gsi::GenericMethod ("toVariantList", "@brief Method QList<QVariant> QJsonArray::toVariantList()\n", true, &_init_f_toVariantList_c0, &_call_f_toVariantList_c0);
  methods += new qt_gsi::GenericStaticMethod ("fromStringList", "@brief Static method QJsonArray QJsonArray::fromStringList(const QStringList &list)\nThis method is static and can be called without an instance.", &_init_f_fromStringList_2437, &_call_f_fromStringList_2437);
  methods += new qt_gsi::GenericStaticMethod ("fromVariantList", "@brief Static method QJsonArray QJsonArray::fromVariantList(const QList<QVariant> &list)\nThis method is static and can be called without an instance.", &_init_f_fromVariantList_2734, &_call_f_fromVariantList_2734);
  return methods;
}

gsi::Class<QJsonArray> decl_QJsonArray ("QJsonArray",
  methods_QJsonArray (),
  "@qt\n@brief Binding of QJsonArray");


GSIQT_PUBLIC gsi::Class<QJsonArray> &qtdecl_QJsonArray () { return decl_QJsonArray; }

}

