/**
*  @file gsiDeclQAccessibleApplication.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleApplication>
#include <QAccessibleInterface>
#include <QColor>
#include <QObject>
#include <QRect>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleApplication

// (int, QAccessible::Text, int) const


static void _init_f_actionText_c3378 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("child");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_actionText_c3378 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg2 = args.read<const qt_gsi::Converter<QAccessible::Text>::target_type & > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)((QAccessibleApplication *)cls)->actionText (arg1, qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg2).cref(), arg3));
}


// (int, int) const


static void _init_f_childAt_c1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<int > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_childAt_c1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<int > ((int)((QAccessibleApplication *)cls)->childAt (arg1, arg2));
}


// () const


static void _init_f_childCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_childCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleApplication *)cls)->childCount ());
}


// (int, int, const QList<QVariant> &)


static void _init_f_doAction_4052 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("params");
  decl->add_arg<const QList<QVariant> & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_doAction_4052 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  const QList<QVariant> &arg3 = args.read<const QList<QVariant> & > (heap);
  ret.write<bool > ((bool)((QAccessibleApplication *)cls)->doAction (arg1, arg2, arg3));
}


// (const QAccessibleInterface *) const


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
  ret.write<int > ((int)((QAccessibleApplication *)cls)->indexOfChild (arg1));
}


// (int, const QAccessibleInterface *, int) const


static void _init_f_relationTo_c4635 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<const QAccessibleInterface * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("arg3");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QFlags<QAccessible::RelationFlag> > ();
}

static void _call_f_relationTo_c4635 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const QAccessibleInterface *arg2 = args.read<const QAccessibleInterface * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QFlags<QAccessible::RelationFlag> > ((QFlags<QAccessible::RelationFlag>)((QAccessibleApplication *)cls)->relationTo (arg1, arg2, arg3));
}


// (int) const


static void _init_f_role_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<qt_gsi::Converter<QAccessible::Role>::target_type > ();
}

static void _call_f_role_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<qt_gsi::Converter<QAccessible::Role>::target_type > ((qt_gsi::Converter<QAccessible::Role>::target_type)qt_gsi::CppToQtAdaptor<QAccessible::Role>(((QAccessibleApplication *)cls)->role (arg1)));
}


// (int) const


static void _init_f_state_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QFlags<QAccessible::StateFlag> > ();
}

static void _call_f_state_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QFlags<QAccessible::StateFlag> > ((QFlags<QAccessible::StateFlag>)((QAccessibleApplication *)cls)->state (arg1));
}


// (QAccessible::Text, int) const


static void _init_f_text_c2719 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_text_c2719 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg1 = args.read<const qt_gsi::Converter<QAccessible::Text>::target_type & > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<QString > ((QString)((QAccessibleApplication *)cls)->text (qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg1).cref(), arg2));
}


// (int) const


static void _init_f_userActionCount_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_userActionCount_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<int > ((int)((QAccessibleApplication *)cls)->userActionCount (arg1));
}


namespace gsi
{

static gsi::Methods methods_QAccessibleApplication () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("actionText", "@brief Method (int, QAccessible::Text, int) const\nThis is a reimplementation of QAccessibleObject::actionText", true, &_init_f_actionText_c3378, &_call_f_actionText_c3378);
  methods += new qt_gsi::GenericMethod ("childAt", "@brief Method (int, int) const\nThis is a reimplementation of QAccessibleInterface::childAt", true, &_init_f_childAt_c1426, &_call_f_childAt_c1426);
  methods += new qt_gsi::GenericMethod ("childCount", "@brief Method () const\nThis is a reimplementation of QAccessibleInterface::childCount", true, &_init_f_childCount_c0, &_call_f_childCount_c0);
  methods += new qt_gsi::GenericMethod ("doAction", "@brief Method (int, int, const QList<QVariant> &)\nThis is a reimplementation of QAccessibleObject::doAction", false, &_init_f_doAction_4052, &_call_f_doAction_4052);
  methods += new qt_gsi::GenericMethod ("indexOfChild", "@brief Method (const QAccessibleInterface *) const\nThis is a reimplementation of QAccessibleInterface::indexOfChild", true, &_init_f_indexOfChild_c3317, &_call_f_indexOfChild_c3317);
  methods += new qt_gsi::GenericMethod ("relationTo", "@brief Method (int, const QAccessibleInterface *, int) const\nThis is a reimplementation of QAccessibleInterface::relationTo", true, &_init_f_relationTo_c4635, &_call_f_relationTo_c4635);
  methods += new qt_gsi::GenericMethod ("role", "@brief Method (int) const\nThis is a reimplementation of QAccessibleInterface::role", true, &_init_f_role_c767, &_call_f_role_c767);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method (int) const\nThis is a reimplementation of QAccessibleInterface::state", true, &_init_f_state_c767, &_call_f_state_c767);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method (QAccessible::Text, int) const\nThis is a reimplementation of QAccessibleInterface::text", true, &_init_f_text_c2719, &_call_f_text_c2719);
  methods += new qt_gsi::GenericMethod ("userActionCount", "@brief Method (int) const\nThis is a reimplementation of QAccessibleObject::userActionCount", true, &_init_f_userActionCount_c767, &_call_f_userActionCount_c767);
  return methods;
}

gsi::Class<QAccessibleObject> &qtdecl_QAccessibleObject ();

gsi::Class<QAccessibleApplication> decl_QAccessibleApplication (qtdecl_QAccessibleObject (), "QAccessibleApplication_Native",
  methods_QAccessibleApplication (),
  "@hide\n@alias QAccessibleApplication");

GSIQT_PUBLIC gsi::Class<QAccessibleApplication> &qtdecl_QAccessibleApplication () { return decl_QAccessibleApplication; }

}


class QAccessibleApplication_Adaptor : public QAccessibleApplication, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAccessibleApplication_Adaptor();

  //  [adaptor ctor] QAccessibleApplication::QAccessibleApplication()
  QAccessibleApplication_Adaptor() : QAccessibleApplication()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QString QAccessibleApplication::actionText(int action, QAccessible::Text t, int child)
  QString cbs_actionText_c3378_0(int action, const qt_gsi::Converter<QAccessible::Text>::target_type & t, int child) const
  {
    return QAccessibleApplication::actionText(action, qt_gsi::QtToCppAdaptor<QAccessible::Text>(t).cref(), child);
  }

  virtual QString actionText(int action, QAccessible::Text t, int child) const
  {
    if (cb_actionText_c3378_0.can_issue()) {
      return cb_actionText_c3378_0.issue<QAccessibleApplication_Adaptor, QString, int, const qt_gsi::Converter<QAccessible::Text>::target_type &, int>(&QAccessibleApplication_Adaptor::cbs_actionText_c3378_0, action, qt_gsi::CppToQtAdaptor<QAccessible::Text>(t), child);
    } else {
      return QAccessibleApplication::actionText(action, t, child);
    }
  }

  //  [adaptor impl] int QAccessibleApplication::childAt(int x, int y)
  int cbs_childAt_c1426_0(int x, int y) const
  {
    return QAccessibleApplication::childAt(x, y);
  }

  virtual int childAt(int x, int y) const
  {
    if (cb_childAt_c1426_0.can_issue()) {
      return cb_childAt_c1426_0.issue<QAccessibleApplication_Adaptor, int, int, int>(&QAccessibleApplication_Adaptor::cbs_childAt_c1426_0, x, y);
    } else {
      return QAccessibleApplication::childAt(x, y);
    }
  }

  //  [adaptor impl] int QAccessibleApplication::childCount()
  int cbs_childCount_c0_0() const
  {
    return QAccessibleApplication::childCount();
  }

  virtual int childCount() const
  {
    if (cb_childCount_c0_0.can_issue()) {
      return cb_childCount_c0_0.issue<QAccessibleApplication_Adaptor, int>(&QAccessibleApplication_Adaptor::cbs_childCount_c0_0);
    } else {
      return QAccessibleApplication::childCount();
    }
  }

  //  [adaptor impl] bool QAccessibleApplication::doAction(int action, int child, const QList<QVariant> &params)
  bool cbs_doAction_4052_0(int action, int child, const QList<QVariant> &params)
  {
    return QAccessibleApplication::doAction(action, child, params);
  }

  virtual bool doAction(int action, int child, const QList<QVariant> &params)
  {
    if (cb_doAction_4052_0.can_issue()) {
      return cb_doAction_4052_0.issue<QAccessibleApplication_Adaptor, bool, int, int, const QList<QVariant> &>(&QAccessibleApplication_Adaptor::cbs_doAction_4052_0, action, child, params);
    } else {
      return QAccessibleApplication::doAction(action, child, params);
    }
  }

  //  [adaptor impl] int QAccessibleApplication::indexOfChild(const QAccessibleInterface *)
  int cbs_indexOfChild_c3317_0(const QAccessibleInterface *arg1) const
  {
    return QAccessibleApplication::indexOfChild(arg1);
  }

  virtual int indexOfChild(const QAccessibleInterface *arg1) const
  {
    if (cb_indexOfChild_c3317_0.can_issue()) {
      return cb_indexOfChild_c3317_0.issue<QAccessibleApplication_Adaptor, int, const QAccessibleInterface *>(&QAccessibleApplication_Adaptor::cbs_indexOfChild_c3317_0, arg1);
    } else {
      return QAccessibleApplication::indexOfChild(arg1);
    }
  }

  //  [adaptor impl] bool QAccessibleApplication::isValid()
  bool cbs_isValid_c0_0() const
  {
    return QAccessibleApplication::isValid();
  }

  virtual bool isValid() const
  {
    if (cb_isValid_c0_0.can_issue()) {
      return cb_isValid_c0_0.issue<QAccessibleApplication_Adaptor, bool>(&QAccessibleApplication_Adaptor::cbs_isValid_c0_0);
    } else {
      return QAccessibleApplication::isValid();
    }
  }

  //  [adaptor impl] QObject *QAccessibleApplication::object()
  QObject * cbs_object_c0_0() const
  {
    return QAccessibleApplication::object();
  }

  virtual QObject * object() const
  {
    if (cb_object_c0_0.can_issue()) {
      return cb_object_c0_0.issue<QAccessibleApplication_Adaptor, QObject *>(&QAccessibleApplication_Adaptor::cbs_object_c0_0);
    } else {
      return QAccessibleApplication::object();
    }
  }

  //  [adaptor impl] QRect QAccessibleApplication::rect(int child)
  QRect cbs_rect_c767_0(int child) const
  {
    return QAccessibleApplication::rect(child);
  }

  virtual QRect rect(int child) const
  {
    if (cb_rect_c767_0.can_issue()) {
      return cb_rect_c767_0.issue<QAccessibleApplication_Adaptor, QRect, int>(&QAccessibleApplication_Adaptor::cbs_rect_c767_0, child);
    } else {
      return QAccessibleApplication::rect(child);
    }
  }

  //  [adaptor impl] QFlags<QAccessible::RelationFlag> QAccessibleApplication::relationTo(int, const QAccessibleInterface *, int)
  QFlags<QAccessible::RelationFlag> cbs_relationTo_c4635_0(int arg1, const QAccessibleInterface *arg2, int arg3) const
  {
    return QAccessibleApplication::relationTo(arg1, arg2, arg3);
  }

  virtual QFlags<QAccessible::RelationFlag> relationTo(int arg1, const QAccessibleInterface *arg2, int arg3) const
  {
    if (cb_relationTo_c4635_0.can_issue()) {
      return cb_relationTo_c4635_0.issue<QAccessibleApplication_Adaptor, QFlags<QAccessible::RelationFlag>, int, const QAccessibleInterface *, int>(&QAccessibleApplication_Adaptor::cbs_relationTo_c4635_0, arg1, arg2, arg3);
    } else {
      return QAccessibleApplication::relationTo(arg1, arg2, arg3);
    }
  }

  //  [adaptor impl] QAccessible::Role QAccessibleApplication::role(int child)
  qt_gsi::Converter<QAccessible::Role>::target_type cbs_role_c767_0(int child) const
  {
    return qt_gsi::CppToQtAdaptor<QAccessible::Role>(QAccessibleApplication::role(child));
  }

  virtual QAccessible::Role role(int child) const
  {
    if (cb_role_c767_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QAccessible::Role>(cb_role_c767_0.issue<QAccessibleApplication_Adaptor, qt_gsi::Converter<QAccessible::Role>::target_type, int>(&QAccessibleApplication_Adaptor::cbs_role_c767_0, child)).cref();
    } else {
      return QAccessibleApplication::role(child);
    }
  }

  //  [adaptor impl] void QAccessibleApplication::setText(QAccessible::Text t, int child, const QString &text)
  void cbs_setText_4636_0(const qt_gsi::Converter<QAccessible::Text>::target_type & t, int child, const QString &text)
  {
    QAccessibleApplication::setText(qt_gsi::QtToCppAdaptor<QAccessible::Text>(t).cref(), child, text);
  }

  virtual void setText(QAccessible::Text t, int child, const QString &text)
  {
    if (cb_setText_4636_0.can_issue()) {
      cb_setText_4636_0.issue<QAccessibleApplication_Adaptor, const qt_gsi::Converter<QAccessible::Text>::target_type &, int, const QString &>(&QAccessibleApplication_Adaptor::cbs_setText_4636_0, qt_gsi::CppToQtAdaptor<QAccessible::Text>(t), child, text);
    } else {
      QAccessibleApplication::setText(t, child, text);
    }
  }

  //  [adaptor impl] QFlags<QAccessible::StateFlag> QAccessibleApplication::state(int child)
  QFlags<QAccessible::StateFlag> cbs_state_c767_0(int child) const
  {
    return QAccessibleApplication::state(child);
  }

  virtual QFlags<QAccessible::StateFlag> state(int child) const
  {
    if (cb_state_c767_0.can_issue()) {
      return cb_state_c767_0.issue<QAccessibleApplication_Adaptor, QFlags<QAccessible::StateFlag>, int>(&QAccessibleApplication_Adaptor::cbs_state_c767_0, child);
    } else {
      return QAccessibleApplication::state(child);
    }
  }

  //  [adaptor impl] QString QAccessibleApplication::text(QAccessible::Text t, int child)
  QString cbs_text_c2719_0(const qt_gsi::Converter<QAccessible::Text>::target_type & t, int child) const
  {
    return QAccessibleApplication::text(qt_gsi::QtToCppAdaptor<QAccessible::Text>(t).cref(), child);
  }

  virtual QString text(QAccessible::Text t, int child) const
  {
    if (cb_text_c2719_0.can_issue()) {
      return cb_text_c2719_0.issue<QAccessibleApplication_Adaptor, QString, const qt_gsi::Converter<QAccessible::Text>::target_type &, int>(&QAccessibleApplication_Adaptor::cbs_text_c2719_0, qt_gsi::CppToQtAdaptor<QAccessible::Text>(t), child);
    } else {
      return QAccessibleApplication::text(t, child);
    }
  }

  //  [adaptor impl] int QAccessibleApplication::userActionCount(int child)
  int cbs_userActionCount_c767_0(int child) const
  {
    return QAccessibleApplication::userActionCount(child);
  }

  virtual int userActionCount(int child) const
  {
    if (cb_userActionCount_c767_0.can_issue()) {
      return cb_userActionCount_c767_0.issue<QAccessibleApplication_Adaptor, int, int>(&QAccessibleApplication_Adaptor::cbs_userActionCount_c767_0, child);
    } else {
      return QAccessibleApplication::userActionCount(child);
    }
  }

  gsi::Callback cb_actionText_c3378_0;
  gsi::Callback cb_childAt_c1426_0;
  gsi::Callback cb_childCount_c0_0;
  gsi::Callback cb_doAction_4052_0;
  gsi::Callback cb_indexOfChild_c3317_0;
  gsi::Callback cb_isValid_c0_0;
  gsi::Callback cb_object_c0_0;
  gsi::Callback cb_rect_c767_0;
  gsi::Callback cb_relationTo_c4635_0;
  gsi::Callback cb_role_c767_0;
  gsi::Callback cb_setText_4636_0;
  gsi::Callback cb_state_c767_0;
  gsi::Callback cb_text_c2719_0;
  gsi::Callback cb_userActionCount_c767_0;
};

QAccessibleApplication_Adaptor::~QAccessibleApplication_Adaptor() { }

//  Constructor QAccessibleApplication::QAccessibleApplication() (adaptor class)

static void _init_ctor_QAccessibleApplication_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAccessibleApplication_Adaptor> ();
}

static void _call_ctor_QAccessibleApplication_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleApplication_Adaptor *> (new QAccessibleApplication_Adaptor ());
}


// QString QAccessibleApplication::actionText(int action, QAccessible::Text t, int child)

static void _init_cbs_actionText_c3378_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("child");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_cbs_actionText_c3378_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg2 = args.read<const qt_gsi::Converter<QAccessible::Text>::target_type & > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)((QAccessibleApplication_Adaptor *)cls)->cbs_actionText_c3378_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_actionText_c3378_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_actionText_c3378_0 = cb;
}


// int QAccessibleApplication::childAt(int x, int y)

static void _init_cbs_childAt_c1426_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<int > (argspec_1);
  decl->set_return<int > ();
}

static void _call_cbs_childAt_c1426_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<int > ((int)((QAccessibleApplication_Adaptor *)cls)->cbs_childAt_c1426_0 (arg1, arg2));
}

static void _set_callback_cbs_childAt_c1426_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_childAt_c1426_0 = cb;
}


// int QAccessibleApplication::childCount()

static void _init_cbs_childCount_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_childCount_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleApplication_Adaptor *)cls)->cbs_childCount_c0_0 ());
}

static void _set_callback_cbs_childCount_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_childCount_c0_0 = cb;
}


// bool QAccessibleApplication::doAction(int action, int child, const QList<QVariant> &params)

static void _init_cbs_doAction_4052_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("params");
  decl->add_arg<const QList<QVariant> & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_cbs_doAction_4052_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  const QList<QVariant> &arg3 = args.read<const QList<QVariant> & > (heap);
  ret.write<bool > ((bool)((QAccessibleApplication_Adaptor *)cls)->cbs_doAction_4052_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_doAction_4052_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_doAction_4052_0 = cb;
}


// int QAccessibleApplication::indexOfChild(const QAccessibleInterface *)

static void _init_cbs_indexOfChild_c3317_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QAccessibleInterface * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_indexOfChild_c3317_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAccessibleInterface *arg1 = args.read<const QAccessibleInterface * > (heap);
  ret.write<int > ((int)((QAccessibleApplication_Adaptor *)cls)->cbs_indexOfChild_c3317_0 (arg1));
}

static void _set_callback_cbs_indexOfChild_c3317_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_indexOfChild_c3317_0 = cb;
}


// bool QAccessibleApplication::isValid()

static void _init_cbs_isValid_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isValid_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAccessibleApplication_Adaptor *)cls)->cbs_isValid_c0_0 ());
}

static void _set_callback_cbs_isValid_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_isValid_c0_0 = cb;
}


// QObject *QAccessibleApplication::object()

static void _init_cbs_object_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_cbs_object_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAccessibleApplication_Adaptor *)cls)->cbs_object_c0_0 ());
}

static void _set_callback_cbs_object_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_object_c0_0 = cb;
}


// QRect QAccessibleApplication::rect(int child)

static void _init_cbs_rect_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QRect > ();
}

static void _call_cbs_rect_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QRect > ((QRect)((QAccessibleApplication_Adaptor *)cls)->cbs_rect_c767_0 (arg1));
}

static void _set_callback_cbs_rect_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_rect_c767_0 = cb;
}


// QFlags<QAccessible::RelationFlag> QAccessibleApplication::relationTo(int, const QAccessibleInterface *, int)

static void _init_cbs_relationTo_c4635_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<const QAccessibleInterface * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("arg3");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QFlags<QAccessible::RelationFlag> > ();
}

static void _call_cbs_relationTo_c4635_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const QAccessibleInterface *arg2 = args.read<const QAccessibleInterface * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QFlags<QAccessible::RelationFlag> > ((QFlags<QAccessible::RelationFlag>)((QAccessibleApplication_Adaptor *)cls)->cbs_relationTo_c4635_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_relationTo_c4635_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_relationTo_c4635_0 = cb;
}


// QAccessible::Role QAccessibleApplication::role(int child)

static void _init_cbs_role_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<qt_gsi::Converter<QAccessible::Role>::target_type > ();
}

static void _call_cbs_role_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<qt_gsi::Converter<QAccessible::Role>::target_type > ((qt_gsi::Converter<QAccessible::Role>::target_type)((QAccessibleApplication_Adaptor *)cls)->cbs_role_c767_0 (arg1));
}

static void _set_callback_cbs_role_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_role_c767_0 = cb;
}


// void QAccessibleApplication::setText(QAccessible::Text t, int child, const QString &text)

static void _init_cbs_setText_4636_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("text");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_cbs_setText_4636_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg1 = args.read<const qt_gsi::Converter<QAccessible::Text>::target_type & > (heap);
  int arg2 = args.read<int > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleApplication_Adaptor *)cls)->cbs_setText_4636_0 (arg1, arg2, arg3);
}

static void _set_callback_cbs_setText_4636_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_setText_4636_0 = cb;
}


// QFlags<QAccessible::StateFlag> QAccessibleApplication::state(int child)

static void _init_cbs_state_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QFlags<QAccessible::StateFlag> > ();
}

static void _call_cbs_state_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QFlags<QAccessible::StateFlag> > ((QFlags<QAccessible::StateFlag>)((QAccessibleApplication_Adaptor *)cls)->cbs_state_c767_0 (arg1));
}

static void _set_callback_cbs_state_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_state_c767_0 = cb;
}


// QString QAccessibleApplication::text(QAccessible::Text t, int child)

static void _init_cbs_text_c2719_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_cbs_text_c2719_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg1 = args.read<const qt_gsi::Converter<QAccessible::Text>::target_type & > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<QString > ((QString)((QAccessibleApplication_Adaptor *)cls)->cbs_text_c2719_0 (arg1, arg2));
}

static void _set_callback_cbs_text_c2719_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_text_c2719_0 = cb;
}


// int QAccessibleApplication::userActionCount(int child)

static void _init_cbs_userActionCount_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_userActionCount_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<int > ((int)((QAccessibleApplication_Adaptor *)cls)->cbs_userActionCount_c767_0 (arg1));
}

static void _set_callback_cbs_userActionCount_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleApplication_Adaptor *)cls)->cb_userActionCount_c767_0 = cb;
}


namespace gsi
{

gsi::Class<QAccessibleApplication> &qtdecl_QAccessibleApplication ();

static gsi::Methods methods_QAccessibleApplication_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleApplication::QAccessibleApplication()\nThis method creates an object of class QAccessibleApplication.", &_init_ctor_QAccessibleApplication_Adaptor_0, &_call_ctor_QAccessibleApplication_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("actionText", "@hide", true, &_init_cbs_actionText_c3378_0, &_call_cbs_actionText_c3378_0);
  methods += new qt_gsi::GenericMethod ("actionText", "@brief Virtual method QString QAccessibleApplication::actionText(int action, QAccessible::Text t, int child)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_actionText_c3378_0, &_call_cbs_actionText_c3378_0, &_set_callback_cbs_actionText_c3378_0);
  methods += new qt_gsi::GenericMethod ("childAt", "@hide", true, &_init_cbs_childAt_c1426_0, &_call_cbs_childAt_c1426_0);
  methods += new qt_gsi::GenericMethod ("childAt", "@brief Virtual method int QAccessibleApplication::childAt(int x, int y)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_childAt_c1426_0, &_call_cbs_childAt_c1426_0, &_set_callback_cbs_childAt_c1426_0);
  methods += new qt_gsi::GenericMethod ("childCount", "@hide", true, &_init_cbs_childCount_c0_0, &_call_cbs_childCount_c0_0);
  methods += new qt_gsi::GenericMethod ("childCount", "@brief Virtual method int QAccessibleApplication::childCount()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_childCount_c0_0, &_call_cbs_childCount_c0_0, &_set_callback_cbs_childCount_c0_0);
  methods += new qt_gsi::GenericMethod ("doAction", "@hide", false, &_init_cbs_doAction_4052_0, &_call_cbs_doAction_4052_0);
  methods += new qt_gsi::GenericMethod ("doAction", "@brief Virtual method bool QAccessibleApplication::doAction(int action, int child, const QList<QVariant> &params)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_doAction_4052_0, &_call_cbs_doAction_4052_0, &_set_callback_cbs_doAction_4052_0);
  methods += new qt_gsi::GenericMethod ("indexOfChild", "@hide", true, &_init_cbs_indexOfChild_c3317_0, &_call_cbs_indexOfChild_c3317_0);
  methods += new qt_gsi::GenericMethod ("indexOfChild", "@brief Virtual method int QAccessibleApplication::indexOfChild(const QAccessibleInterface *)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_indexOfChild_c3317_0, &_call_cbs_indexOfChild_c3317_0, &_set_callback_cbs_indexOfChild_c3317_0);
  methods += new qt_gsi::GenericMethod ("isValid", "@hide", true, &_init_cbs_isValid_c0_0, &_call_cbs_isValid_c0_0);
  methods += new qt_gsi::GenericMethod ("isValid", "@brief Virtual method bool QAccessibleApplication::isValid()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isValid_c0_0, &_call_cbs_isValid_c0_0, &_set_callback_cbs_isValid_c0_0);
  methods += new qt_gsi::GenericMethod ("object", "@hide", true, &_init_cbs_object_c0_0, &_call_cbs_object_c0_0);
  methods += new qt_gsi::GenericMethod ("object", "@brief Virtual method QObject *QAccessibleApplication::object()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_object_c0_0, &_call_cbs_object_c0_0, &_set_callback_cbs_object_c0_0);
  methods += new qt_gsi::GenericMethod ("rect", "@hide", true, &_init_cbs_rect_c767_0, &_call_cbs_rect_c767_0);
  methods += new qt_gsi::GenericMethod ("rect", "@brief Virtual method QRect QAccessibleApplication::rect(int child)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_rect_c767_0, &_call_cbs_rect_c767_0, &_set_callback_cbs_rect_c767_0);
  methods += new qt_gsi::GenericMethod ("relationTo", "@hide", true, &_init_cbs_relationTo_c4635_0, &_call_cbs_relationTo_c4635_0);
  methods += new qt_gsi::GenericMethod ("relationTo", "@brief Virtual method QFlags<QAccessible::RelationFlag> QAccessibleApplication::relationTo(int, const QAccessibleInterface *, int)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_relationTo_c4635_0, &_call_cbs_relationTo_c4635_0, &_set_callback_cbs_relationTo_c4635_0);
  methods += new qt_gsi::GenericMethod ("role", "@hide", true, &_init_cbs_role_c767_0, &_call_cbs_role_c767_0);
  methods += new qt_gsi::GenericMethod ("role", "@brief Virtual method QAccessible::Role QAccessibleApplication::role(int child)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_role_c767_0, &_call_cbs_role_c767_0, &_set_callback_cbs_role_c767_0);
  methods += new qt_gsi::GenericMethod ("setText", "@hide", false, &_init_cbs_setText_4636_0, &_call_cbs_setText_4636_0);
  methods += new qt_gsi::GenericMethod ("setText", "@brief Virtual method void QAccessibleApplication::setText(QAccessible::Text t, int child, const QString &text)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setText_4636_0, &_call_cbs_setText_4636_0, &_set_callback_cbs_setText_4636_0);
  methods += new qt_gsi::GenericMethod ("state", "@hide", true, &_init_cbs_state_c767_0, &_call_cbs_state_c767_0);
  methods += new qt_gsi::GenericMethod ("state", "@brief Virtual method QFlags<QAccessible::StateFlag> QAccessibleApplication::state(int child)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_state_c767_0, &_call_cbs_state_c767_0, &_set_callback_cbs_state_c767_0);
  methods += new qt_gsi::GenericMethod ("text", "@hide", true, &_init_cbs_text_c2719_0, &_call_cbs_text_c2719_0);
  methods += new qt_gsi::GenericMethod ("text", "@brief Virtual method QString QAccessibleApplication::text(QAccessible::Text t, int child)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_text_c2719_0, &_call_cbs_text_c2719_0, &_set_callback_cbs_text_c2719_0);
  methods += new qt_gsi::GenericMethod ("userActionCount", "@hide", true, &_init_cbs_userActionCount_c767_0, &_call_cbs_userActionCount_c767_0);
  methods += new qt_gsi::GenericMethod ("userActionCount", "@brief Virtual method int QAccessibleApplication::userActionCount(int child)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_userActionCount_c767_0, &_call_cbs_userActionCount_c767_0, &_set_callback_cbs_userActionCount_c767_0);
  return methods;
}

gsi::Class<QAccessibleApplication_Adaptor> decl_QAccessibleApplication_Adaptor (qtdecl_QAccessibleApplication (), "QAccessibleApplication",
  methods_QAccessibleApplication_Adaptor (),
  "@qt\n@brief Binding of QAccessibleApplication");

}

