// Constructs one 0x30-byte cache-map node: installs left/parent/right links, copies the 28-byte small-string key and stBezierSpline* value from the pair, then writes color and clears isNil.
OB_stBezierSplineCacheNode_010201A0 *__thiscall OB_stBezierSplineCacheNode_Init_010201A0(
        OB_stBezierSplineCacheNode_010201A0 *this,
        OB_stBezierSplineCacheNode_010201A0 *left,
        OB_stBezierSplineCacheNode_010201A0 *parent,
        OB_stBezierSplineCacheNode_010201A0 *right,
        const OB_stBezierSplineCachePair_010201A0 *value,
        unsigned __int8 color)
{
  OB_stString28_010201A0 *p_key; // edi

  this->parent = parent; /*0x784f37*/
  p_key = &this->key; /*0x784f3a*/
  this->left = left; /*0x784f3d*/
  this->right = right; /*0x784f3f*/
  this->key.capacity = 0xF; /*0x784f44*/
  this->key.size = 0; /*0x784f4b*/
  this->key.storage.inlineData[0] = 0; /*0x784f55*/
  OB_stString28_AssignSubstring_010201A0((int)&this->key, value, 0, 0xFFFFFFFF); /*0x784f59*/
  p_key[1].allocatorState = (unsigned int)value->value; /*0x784f65*/
  this->color = color; /*0x784f69*/
  this->isNil = 0; /*0x784f6c*/
  return this; /*0x784f68*/
}
