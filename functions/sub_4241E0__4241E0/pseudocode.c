// 0x4241E0: Named ExtraDataList_SetRegionList after direct decompilation: a nonnull candidate list replaces/frees prior region-list payload; null removes type8. Shared XCLR calls this for placed reference and CELL owners, with no record-kind gate.
void __thiscall sub_4241E0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // esi
  _BYTE *v5; // eax
  BSExtraData *v6; // eax
  BSExtraDataVtbl *vtbl; // ecx

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RegionList); /*0x424207*/
  v4 = ExtraData; /*0x424212*/
  if ( a2 ) /*0x424214*/
  {
    if ( ExtraData ) /*0x42423f*/
    {
      vtbl = ExtraData[1].vtbl; /*0x424288*/
      if ( vtbl ) /*0x42428d*/
      {
        if ( vtbl != a2 ) /*0x424291*/
          (*(void (__thiscall **)(BSExtraDataVtbl *, int))vtbl->Destructor)(vtbl, 1); /*0x424299*/
      }
      v4[1].vtbl = a2; /*0x42429b*/
    }
    else
    {
      v5 = (_BYTE *)FormHeapAlloc(0x10u); /*0x424243*/
      if ( v5 ) /*0x424255*/
        v6 = (BSExtraData *)sub_41D940(v5, (int)a2); /*0x42425a*/
      else
        v6 = 0; /*0x424261*/
      BaseExtraList_AddExtra(this, v6); /*0x42426e*/
    }
  }
  else if ( ExtraData ) /*0x424218*/
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x424223*/
  }
}
