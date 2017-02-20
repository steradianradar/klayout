/**
*  @file gsiDeclQAbstractTextDocumentLayout_Selection.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractTextDocumentLayout>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractTextDocumentLayout::Selection

//  Constructor QAbstractTextDocumentLayout::Selection::Selection()


static void _init_ctor_QAbstractTextDocumentLayout_Selection_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAbstractTextDocumentLayout::Selection> ();
}

static void _call_ctor_QAbstractTextDocumentLayout_Selection_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractTextDocumentLayout::Selection *> (new QAbstractTextDocumentLayout::Selection ());
}



namespace gsi
{

static gsi::Methods methods_QAbstractTextDocumentLayout_Selection () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractTextDocumentLayout::Selection::Selection()\nThis method creates an object of class QAbstractTextDocumentLayout::Selection.", &_init_ctor_QAbstractTextDocumentLayout_Selection_0, &_call_ctor_QAbstractTextDocumentLayout_Selection_0);
  return methods;
}

gsi::Class<QAbstractTextDocumentLayout::Selection> decl_QAbstractTextDocumentLayout_Selection ("QAbstractTextDocumentLayout_Selection",
  methods_QAbstractTextDocumentLayout_Selection (),
  "@qt\n@brief Binding of QAbstractTextDocumentLayout::Selection");

gsi::ClassExt<QAbstractTextDocumentLayout> decl_QAbstractTextDocumentLayout_Selection_as_child (decl_QAbstractTextDocumentLayout_Selection, "Selection");

GSIQT_PUBLIC gsi::Class<QAbstractTextDocumentLayout::Selection> &qtdecl_QAbstractTextDocumentLayout_Selection () { return decl_QAbstractTextDocumentLayout_Selection; }

}

