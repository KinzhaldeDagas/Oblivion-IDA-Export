// High/MiddleHigh process vtable +0x128. With ActorSkinInfo, returns cached-node index 6 / QuiverNode; with null context, returns process quiver cache +0x10C. Actor_ProcessAction finds Arrow:0 beneath this source and clones it.
NiNode *__thiscall MiddleHighProcess_GetArrowCloneSourceNode(MiddleHighProcess *this, ActorSkinInfo *skinInfo)
{
  if ( skinInfo ) /*0x64b1d8*/
    return ActorSkinInfo_GetCachedNode(skinInfo, 6u); /*0x64b1eb*/
  else
    return this->quiverAttachNode; /*0x64b1da*/
}
