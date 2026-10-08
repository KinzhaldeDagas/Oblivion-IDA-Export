// Replaces or creates ExtraAnim. Existing ActorAnimData is disposed and freed before the new animation pointer is installed.
BSExtraData *__thiscall sub_41E9C0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // esi
  unsigned int vtbl; // edi
  ExtraAnim *v6; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Anim); /*0x41e9e7*/
  v4 = ExtraData; /*0x41e9ec*/
  if ( ExtraData ) /*0x41e9f0*/
  {
    vtbl = (unsigned int)ExtraData[1].vtbl; /*0x41e9f2*/
    if ( vtbl ) /*0x41e9f7*/
    {
      DisposeActorAnimData((ActorAnimData *)ExtraData[1].vtbl); /*0x41e9fb*/
      FormHeapFree(vtbl); /*0x41ea01*/
    }
    v4[1].vtbl = a2; /*0x41ea0d*/
  }
  else
  {
    v6 = (ExtraAnim *)FormHeapAlloc(0x10u); /*0x41ea14*/
    if ( v6 ) /*0x41ea2a*/
      v4 = (BSExtraData *)ExtraAnim::ExtraAnim(v6, (int)a2); /*0x41ea38*/
    else
      v4 = 0; /*0x41ea3c*/
    BaseExtraList_AddExtra(this, v4); /*0x41ea49*/
  }
  return v4; /*0x41ea50*/
}
