// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/Image>
#include <osg/Object>
#include <osg/Shape>
#include <osg/Vec2>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osgTerrain/Layer>
#include <osgTerrain/Locator>
#include <osgTerrain/ValidDataOperator>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgTerrain::CompositeLayer)
	I_DeclaringFile("osgTerrain/Layer");
	I_BaseType(osgTerrain::Layer);
	I_Constructor0(____CompositeLayer,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgTerrain::CompositeLayer &, compositeLayer, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____CompositeLayer__C5_CompositeLayer_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(void, clear,
	          Properties::NON_VIRTUAL,
	          __void__clear,
	          "",
	          "");
	I_Method2(void, setFileName, IN, unsigned int, i, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __void__setFileName__unsigned_int__C5_std_string_R1,
	          "",
	          "");
	I_Method1(const std::string &, getFileName, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getFileName__unsigned_int,
	          "",
	          "");
	I_Method2(void, setLayer, IN, unsigned int, i, IN, osgTerrain::Layer *, layer,
	          Properties::NON_VIRTUAL,
	          __void__setLayer__unsigned_int__Layer_P1,
	          "",
	          "");
	I_Method1(osgTerrain::Layer *, getLayer, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __Layer_P1__getLayer__unsigned_int,
	          "",
	          "");
	I_Method1(const osgTerrain::Layer *, getLayer, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_Layer_P1__getLayer__unsigned_int,
	          "",
	          "");
	I_Method1(void, addLayer, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __void__addLayer__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, addLayer, IN, osgTerrain::Layer *, layer,
	          Properties::NON_VIRTUAL,
	          __void__addLayer__Layer_P1,
	          "",
	          "");
	I_Method1(void, removeLayer, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __void__removeLayer__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getNumLayers,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumLayers,
	          "",
	          "");
	I_IndexedProperty(const std::string &, FileName, 
	                  __C5_std_string_R1__getFileName__unsigned_int, 
	                  __void__setFileName__unsigned_int__C5_std_string_R1, 
	                  0);
	I_ArrayProperty(osgTerrain::Layer *, Layer, 
	                __Layer_P1__getLayer__unsigned_int, 
	                __void__setLayer__unsigned_int__Layer_P1, 
	                __unsigned_int__getNumLayers, 
	                __void__addLayer__Layer_P1, 
	                0, 
	                __void__removeLayer__unsigned_int);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::HeightFieldLayer)
	I_DeclaringFile("osgTerrain/Layer");
	I_BaseType(osgTerrain::Layer);
	I_Constructor0(____HeightFieldLayer,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgTerrain::HeightFieldLayer &, hfLayer, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____HeightFieldLayer__C5_HeightFieldLayer_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setFileName, IN, const std::string &, filename,
	          Properties::VIRTUAL,
	          __void__setFileName__C5_std_string_R1,
	          "",
	          "");
	I_Method0(const std::string &, getFileName,
	          Properties::VIRTUAL,
	          __C5_std_string_R1__getFileName,
	          "",
	          "");
	I_Method2(bool, transform, IN, float, offset, IN, float, scale,
	          Properties::VIRTUAL,
	          __bool__transform__float__float,
	          "",
	          "");
	I_Method1(void, setHeightField, IN, osg::HeightField *, hf,
	          Properties::NON_VIRTUAL,
	          __void__setHeightField__osg_HeightField_P1,
	          "",
	          "");
	I_Method0(osg::HeightField *, getHeightField,
	          Properties::NON_VIRTUAL,
	          __osg_HeightField_P1__getHeightField,
	          "",
	          "");
	I_Method0(const osg::HeightField *, getHeightField,
	          Properties::NON_VIRTUAL,
	          __C5_osg_HeightField_P1__getHeightField,
	          "",
	          "");
	I_Method0(unsigned int, getNumColumns,
	          Properties::VIRTUAL,
	          __unsigned_int__getNumColumns,
	          "",
	          "");
	I_Method0(unsigned int, getNumRows,
	          Properties::VIRTUAL,
	          __unsigned_int__getNumRows,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, float &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__float_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec2 &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__osg_Vec2_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec3 &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__osg_Vec3_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec4 &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__osg_Vec4_R1,
	          "",
	          "");
	I_Method0(void, dirty,
	          Properties::VIRTUAL,
	          __void__dirty,
	          "increment the modified count. ",
	          "\" ");
	I_Method1(void, setModifiedCount, IN, unsigned int, value,
	          Properties::VIRTUAL,
	          __void__setModifiedCount__unsigned_int,
	          "Set the modified count value. ",
	          "");
	I_Method0(unsigned int, getModifiedCount,
	          Properties::VIRTUAL,
	          __unsigned_int__getModifiedCount,
	          "Get modified count value. ",
	          "");
	I_SimpleProperty(const std::string &, FileName, 
	                 __C5_std_string_R1__getFileName, 
	                 __void__setFileName__C5_std_string_R1);
	I_SimpleProperty(osg::HeightField *, HeightField, 
	                 __osg_HeightField_P1__getHeightField, 
	                 __void__setHeightField__osg_HeightField_P1);
	I_SimpleProperty(unsigned int, ModifiedCount, 
	                 __unsigned_int__getModifiedCount, 
	                 __void__setModifiedCount__unsigned_int);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::ImageLayer)
	I_DeclaringFile("osgTerrain/Layer");
	I_BaseType(osgTerrain::Layer);
	I_Constructor0(____ImageLayer,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgTerrain::ImageLayer &, imageLayer, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ImageLayer__C5_ImageLayer_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setFileName, IN, const std::string &, filename,
	          Properties::VIRTUAL,
	          __void__setFileName__C5_std_string_R1,
	          "",
	          "");
	I_Method0(const std::string &, getFileName,
	          Properties::VIRTUAL,
	          __C5_std_string_R1__getFileName,
	          "",
	          "");
	I_Method2(bool, transform, IN, float, offset, IN, float, scale,
	          Properties::VIRTUAL,
	          __bool__transform__float__float,
	          "",
	          "");
	I_Method1(void, setImage, IN, osg::Image *, image,
	          Properties::NON_VIRTUAL,
	          __void__setImage__osg_Image_P1,
	          "",
	          "");
	I_Method0(osg::Image *, getImage,
	          Properties::NON_VIRTUAL,
	          __osg_Image_P1__getImage,
	          "",
	          "");
	I_Method0(const osg::Image *, getImage,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Image_P1__getImage,
	          "",
	          "");
	I_Method0(unsigned int, getNumColumns,
	          Properties::VIRTUAL,
	          __unsigned_int__getNumColumns,
	          "",
	          "");
	I_Method0(unsigned int, getNumRows,
	          Properties::VIRTUAL,
	          __unsigned_int__getNumRows,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, float &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__float_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec2 &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__osg_Vec2_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec3 &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__osg_Vec3_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec4 &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__osg_Vec4_R1,
	          "",
	          "");
	I_Method0(void, dirty,
	          Properties::VIRTUAL,
	          __void__dirty,
	          "increment the modified count. ",
	          "\" ");
	I_Method1(void, setModifiedCount, IN, unsigned int, value,
	          Properties::VIRTUAL,
	          __void__setModifiedCount__unsigned_int,
	          "Set the modified count value. ",
	          "");
	I_Method0(unsigned int, getModifiedCount,
	          Properties::VIRTUAL,
	          __unsigned_int__getModifiedCount,
	          "Get modified count value. ",
	          "");
	I_SimpleProperty(const std::string &, FileName, 
	                 __C5_std_string_R1__getFileName, 
	                 __void__setFileName__C5_std_string_R1);
	I_SimpleProperty(osg::Image *, Image, 
	                 __osg_Image_P1__getImage, 
	                 __void__setImage__osg_Image_P1);
	I_SimpleProperty(unsigned int, ModifiedCount, 
	                 __unsigned_int__getModifiedCount, 
	                 __void__setModifiedCount__unsigned_int);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::Layer)
	I_DeclaringFile("osgTerrain/Layer");
	I_BaseType(osg::Object);
	I_Constructor0(____Layer,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgTerrain::Layer &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Layer__C5_Layer_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setFileName, IN, const std::string &, filename,
	          Properties::VIRTUAL,
	          __void__setFileName__C5_std_string_R1,
	          "",
	          "");
	I_Method0(const std::string &, getFileName,
	          Properties::VIRTUAL,
	          __C5_std_string_R1__getFileName,
	          "",
	          "");
	I_Method1(void, setLocator, IN, osgTerrain::Locator *, locator,
	          Properties::NON_VIRTUAL,
	          __void__setLocator__Locator_P1,
	          "",
	          "");
	I_Method0(osgTerrain::Locator *, getLocator,
	          Properties::NON_VIRTUAL,
	          __Locator_P1__getLocator,
	          "",
	          "");
	I_Method0(const osgTerrain::Locator *, getLocator,
	          Properties::NON_VIRTUAL,
	          __C5_Locator_P1__getLocator,
	          "",
	          "");
	I_Method1(void, setMinLevel, IN, unsigned int, minLevel,
	          Properties::NON_VIRTUAL,
	          __void__setMinLevel__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getMinLevel,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMinLevel,
	          "",
	          "");
	I_Method1(void, setMaxLevel, IN, unsigned int, maxLevel,
	          Properties::NON_VIRTUAL,
	          __void__setMaxLevel__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getMaxLevel,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMaxLevel,
	          "",
	          "");
	I_Method1(void, setValidDataOperator, IN, osgTerrain::ValidDataOperator *, validDataOp,
	          Properties::NON_VIRTUAL,
	          __void__setValidDataOperator__ValidDataOperator_P1,
	          "",
	          "");
	I_Method0(osgTerrain::ValidDataOperator *, getValidDataOperator,
	          Properties::NON_VIRTUAL,
	          __ValidDataOperator_P1__getValidDataOperator,
	          "",
	          "");
	I_Method0(const osgTerrain::ValidDataOperator *, getValidDataOperator,
	          Properties::NON_VIRTUAL,
	          __C5_ValidDataOperator_P1__getValidDataOperator,
	          "",
	          "");
	I_Method0(unsigned int, getNumColumns,
	          Properties::VIRTUAL,
	          __unsigned_int__getNumColumns,
	          "",
	          "");
	I_Method0(unsigned int, getNumRows,
	          Properties::VIRTUAL,
	          __unsigned_int__getNumRows,
	          "",
	          "");
	I_Method1(void, setDefaultValue, IN, const osg::Vec4 &, value,
	          Properties::NON_VIRTUAL,
	          __void__setDefaultValue__C5_osg_Vec4_R1,
	          "",
	          "");
	I_Method0(const osg::Vec4 &, getDefaultValue,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec4_R1__getDefaultValue,
	          "",
	          "");
	I_Method2(bool, transform, IN, float, offset, IN, float, scale,
	          Properties::VIRTUAL,
	          __bool__transform__float__float,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned, int, IN, unsigned, int, IN, float &, x,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned__unsigned__float_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned, int, IN, unsigned, int, IN, osg::Vec2 &, x,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned__unsigned__osg_Vec2_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned, int, IN, unsigned, int, IN, osg::Vec3 &, x,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned__unsigned__osg_Vec3_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned, int, IN, unsigned, int, IN, osg::Vec4 &, x,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned__unsigned__osg_Vec4_R1,
	          "",
	          "");
	I_Method3(bool, getValidValue, IN, unsigned int, i, IN, unsigned int, j, IN, float &, value,
	          Properties::NON_VIRTUAL,
	          __bool__getValidValue__unsigned_int__unsigned_int__float_R1,
	          "",
	          "");
	I_Method3(bool, getValidValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec2 &, value,
	          Properties::NON_VIRTUAL,
	          __bool__getValidValue__unsigned_int__unsigned_int__osg_Vec2_R1,
	          "",
	          "");
	I_Method3(bool, getValidValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec3 &, value,
	          Properties::NON_VIRTUAL,
	          __bool__getValidValue__unsigned_int__unsigned_int__osg_Vec3_R1,
	          "",
	          "");
	I_Method3(bool, getValidValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec4 &, value,
	          Properties::NON_VIRTUAL,
	          __bool__getValidValue__unsigned_int__unsigned_int__osg_Vec4_R1,
	          "",
	          "");
	I_Method6(void, computeIndices, IN, double, ndc_x, IN, double, ndc_y, IN, unsigned int &, i, IN, unsigned int &, j, IN, double &, ir, IN, double &, jr,
	          Properties::NON_VIRTUAL,
	          __void__computeIndices__double__double__unsigned_int_R1__unsigned_int_R1__double_R1__double_R1,
	          "",
	          "");
	I_Method3(bool, getInterpolatedValue, IN, double, ndc_x, IN, double, ndc_y, IN, float &, value,
	          Properties::NON_VIRTUAL,
	          __bool__getInterpolatedValue__double__double__float_R1,
	          "",
	          "");
	I_Method0(void, dirty,
	          Properties::VIRTUAL,
	          __void__dirty,
	          "increment the modified count. ",
	          "\" ");
	I_Method1(void, setModifiedCount, IN, unsigned, int,
	          Properties::VIRTUAL,
	          __void__setModifiedCount__unsigned,
	          "Set the modified count value. ",
	          "");
	I_Method0(unsigned int, getModifiedCount,
	          Properties::VIRTUAL,
	          __unsigned_int__getModifiedCount,
	          "Get modified count value. ",
	          "");
	I_Method1(osg::BoundingSphere, computeBound, IN, bool, treatAsElevationLayer,
	          Properties::VIRTUAL,
	          __osg_BoundingSphere__computeBound__bool,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec4 &, DefaultValue, 
	                 __C5_osg_Vec4_R1__getDefaultValue, 
	                 __void__setDefaultValue__C5_osg_Vec4_R1);
	I_SimpleProperty(const std::string &, FileName, 
	                 __C5_std_string_R1__getFileName, 
	                 __void__setFileName__C5_std_string_R1);
	I_SimpleProperty(osgTerrain::Locator *, Locator, 
	                 __Locator_P1__getLocator, 
	                 __void__setLocator__Locator_P1);
	I_SimpleProperty(unsigned int, MaxLevel, 
	                 __unsigned_int__getMaxLevel, 
	                 __void__setMaxLevel__unsigned_int);
	I_SimpleProperty(unsigned int, MinLevel, 
	                 __unsigned_int__getMinLevel, 
	                 __void__setMinLevel__unsigned_int);
	I_SimpleProperty(unsigned, ModifiedCount, 
	                 0, 
	                 __void__setModifiedCount__unsigned);
	I_SimpleProperty(osgTerrain::ValidDataOperator *, ValidDataOperator, 
	                 __ValidDataOperator_P1__getValidDataOperator, 
	                 __void__setValidDataOperator__ValidDataOperator_P1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::ProxyLayer)
	I_DeclaringFile("osgTerrain/Layer");
	I_BaseType(osgTerrain::Layer);
	I_Constructor0(____ProxyLayer,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgTerrain::ProxyLayer &, proxyLayer, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ProxyLayer__C5_ProxyLayer_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setImplementation, IN, osgTerrain::Layer *, layer,
	          Properties::NON_VIRTUAL,
	          __void__setImplementation__Layer_P1,
	          "Set the implementation layer that does the actual work. ",
	          "");
	I_Method0(osgTerrain::Layer *, getImplementation,
	          Properties::NON_VIRTUAL,
	          __Layer_P1__getImplementation,
	          "Get the implementation layer that does the actual work. ",
	          "");
	I_Method0(const osgTerrain::Layer *, getImplementation,
	          Properties::NON_VIRTUAL,
	          __C5_Layer_P1__getImplementation,
	          "Get the const implementation layer that does the actual work. ",
	          "");
	I_Method1(void, setFileName, IN, const std::string &, filename,
	          Properties::VIRTUAL,
	          __void__setFileName__C5_std_string_R1,
	          "",
	          "");
	I_Method0(const std::string &, getFileName,
	          Properties::VIRTUAL,
	          __C5_std_string_R1__getFileName,
	          "",
	          "");
	I_Method0(unsigned int, getNumColumns,
	          Properties::VIRTUAL,
	          __unsigned_int__getNumColumns,
	          "",
	          "");
	I_Method0(unsigned int, getNumRows,
	          Properties::VIRTUAL,
	          __unsigned_int__getNumRows,
	          "",
	          "");
	I_Method2(bool, transform, IN, float, offset, IN, float, scale,
	          Properties::VIRTUAL,
	          __bool__transform__float__float,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, float &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__float_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec2 &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__osg_Vec2_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec3 &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__osg_Vec3_R1,
	          "",
	          "");
	I_Method3(bool, getValue, IN, unsigned int, i, IN, unsigned int, j, IN, osg::Vec4 &, value,
	          Properties::VIRTUAL,
	          __bool__getValue__unsigned_int__unsigned_int__osg_Vec4_R1,
	          "",
	          "");
	I_Method0(void, dirty,
	          Properties::VIRTUAL,
	          __void__dirty,
	          "increment the modified count. ",
	          "\" ");
	I_Method1(void, setModifiedCount, IN, unsigned int, value,
	          Properties::VIRTUAL,
	          __void__setModifiedCount__unsigned_int,
	          "Set the modified count value. ",
	          "");
	I_Method0(unsigned int, getModifiedCount,
	          Properties::VIRTUAL,
	          __unsigned_int__getModifiedCount,
	          "Get modified count value. ",
	          "");
	I_Method1(osg::BoundingSphere, computeBound, IN, bool, treatAsElevationLayer,
	          Properties::VIRTUAL,
	          __osg_BoundingSphere__computeBound__bool,
	          "",
	          "");
	I_SimpleProperty(const std::string &, FileName, 
	                 __C5_std_string_R1__getFileName, 
	                 __void__setFileName__C5_std_string_R1);
	I_SimpleProperty(osgTerrain::Layer *, Implementation, 
	                 __Layer_P1__getImplementation, 
	                 __void__setImplementation__Layer_P1);
	I_SimpleProperty(unsigned int, ModifiedCount, 
	                 __unsigned_int__getModifiedCount, 
	                 __void__setModifiedCount__unsigned_int);
END_REFLECTOR

