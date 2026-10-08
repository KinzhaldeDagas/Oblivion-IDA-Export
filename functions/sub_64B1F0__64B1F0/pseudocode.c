// High/MiddleHigh process vtable +0x12C. Compares supplied ActorSkinInfo against the player's first-person skin info (+0x5C8): first-person returns global ArrowBone cache 0xB3BA98; otherwise returns process +0x110. Native action 4 may still advance to action 5 when null.
NiNode *__thiscall MiddleHighProcess_GetArrowAttachTargetNode(MiddleHighProcess *this, ActorSkinInfo *skinInfo)
{
  bool v3; // zf
  NiNode *result; // eax

  v3 = skinInfo == Actor_GetSkinInfoByPerspective((Actor *)reference, 1); /*0x64b200*/
  result = g_playerFirstPersonArrowBoneAttachNode; /*0x64b204*/
  if ( !v3 ) /*0x64b209*/
    return this->arrowBoneAttachNode; /*0x64b20b*/
  return result; /*0x64b211*/
}
