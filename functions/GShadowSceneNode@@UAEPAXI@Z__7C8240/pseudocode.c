ShadowSceneNode *__thiscall ShadowSceneNode::`scalar deleting destructor'(ShadowSceneNode *this, char a2)
{
  ShadowSceneNode::~ShadowSceneNode(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
