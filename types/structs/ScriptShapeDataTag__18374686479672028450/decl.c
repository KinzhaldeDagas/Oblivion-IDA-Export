struct ScriptShapeDataTag
{
TEXTRANGE_PROPERTIES defaultTextRange;
TEXTRANGE_PROPERTIES defaultGPOSTextRange;
const char *const *requiredFeatures;
OPENTYPE_TAG newOtTag;
ContextualShapingProc contextProc;
ShapeCharGlyphPropProc charGlyphPropProc;
};
