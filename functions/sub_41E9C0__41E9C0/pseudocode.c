BSExtraData *__thiscall sub_41E9C0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // esi
  unsigned int vtbl; // edi
  ExtraAnim *v6; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Anim);
  v4 = ExtraData;
  if ( ExtraData )
  {
    vtbl = (unsigned int)ExtraData[1].vtbl;
    if ( vtbl )
    {
      DisposeActorAnimData((ActorAnimData *)ExtraData[1].vtbl);
      FormHeapFree(vtbl);
    }
    v4[1].vtbl = a2;
  }
  else
  {
    v6 = (ExtraAnim *)FormHeapAlloc(0x10u);
    if ( v6 )
      v4 = (BSExtraData *)ExtraAnim::ExtraAnim(v6, (int)a2);
    else
      v4 = 0;
    BaseExtraList_AddExtra(this, v4);
  }
  return v4;
}
