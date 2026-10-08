// Returns ActorSkinInfo cached node at +8+nodeIndex*8. Index 6 is QuiverNode at +0x38, the native Arrow:0 clone source.
NiNode *__thiscall ActorSkinInfo_GetCachedNode(ActorSkinInfo *this, unsigned int nodeIndex)
{
  return *(&this->HeadNode + 2 * nodeIndex); /*0x477ec8*/
}
