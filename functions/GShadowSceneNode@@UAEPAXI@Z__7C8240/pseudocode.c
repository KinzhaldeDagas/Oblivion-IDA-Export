ShadowSceneNode *__thiscall ShadowSceneNode::`scalar deleting destructor'(ShadowSceneNode *this, char a2)
{
  ShadowSceneNode::~ShadowSceneNode(this); /*0x7c8243*/
  if ( (a2 & 1) != 0 ) /*0x7c824d*/
    FormHeapFree((unsigned int)this); /*0x7c8250*/
  return this; /*0x7c825a*/
}
