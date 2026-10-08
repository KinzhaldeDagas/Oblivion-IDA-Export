// MobileObject GenerateNiNode override. Calls TESObjectREFR_GenerateNiNode, forwards matching model extra data to the process when present, conditionally registers the result as a shadow caster, and returns NiNode*. Native ABI has no stack/x87 inputs.
NiNode *__thiscall MobileObject_GenerateNiNode(MobileObject *this)
{
  NiObjectNET *NiNode; // eax
  volatile LONG *v3; // edi
  NiExtraData *ExtraData; // eax
  _DWORD *ShadowSceneNode; // eax

  NiNode = (NiObjectNET *)TESObjectREFR_GenerateNiNode((TESObjectREFR *)this); /*0x659f34*/
  v3 = (volatile LONG *)NiNode; /*0x659f39*/
  if ( NiNode ) /*0x659f3d*/
  {
    if ( this->process ) /*0x659f3f*/
    {
      ExtraData = NiObjectNET_GetExtraData(NiNode, (const char *)&off_A7D2CC); /*0x659f4c*/
      if ( ExtraData ) /*0x659f53*/
        ((void (__thiscall *)(LowProcess *, NiExtraData *))this->process->Unk_11B)(this->process, ExtraData); /*0x659f61*/
    }
  }
  if ( this->vtbl->super.IsActor((TESObjectREFR *)this) ) /*0x659f6d*/
  {
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x659f76*/
    ShadowSceneNodeAddShadowCaster(ShadowSceneNode, v3);// Direct retail AddShadowCaster caller in MobileObject_GenerateNiNode. /*0x659f80*/
  }
  return (NiNode *)v3; /*0x659f87*/
}
