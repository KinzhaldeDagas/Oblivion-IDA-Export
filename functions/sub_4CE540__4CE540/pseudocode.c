TESForm *__thiscall sub_4CE540(int this, signed int a2, signed int a3, TESForm **a4, int a5, char a6)
{
  TESForm *result; // eax
  bool v7; // zf
  ExtraDataList *v8; // edi
  int v9; // eax
  NiRenderedTexture *v10; // [esp+8h] [ebp-4h] BYREF

  result = *a4; /*0x4ce546*/
  v7 = *a4 == 0; /*0x4ce548*/
  v10 = 0; /*0x4ce54b*/
  if ( !v7 ) /*0x4ce553*/
    goto LABEL_15; /*0x4ce553*/
  if ( (*(_BYTE *)(this + 0x24) & 1) == 0 ) /*0x4ce559*/
    result = *(TESForm **)(this + 0x50); /*0x4ce55b*/
  result = sub_447740((TESWorldSpace **)g_TESDataHandler, a2, a3, (TESWorldSpace *)result, 0); /*0x4ce571*/
  v8 = (ExtraDataList *)result; /*0x4ce576*/
  if ( result ) /*0x4ce57a*/
  {
    sub_41F9F0((ExtraDataList *)&result[1].member.modlist, &v10, a4); /*0x4ce589*/
    if ( !v10 ) /*0x4ce593*/
      TESObjectCELL::CreateCanopyShadowMaskForCell(v8, &v10, a4); /*0x4ce59c*/
    result = *a4; /*0x4ce5a4*/
    if ( *a4 ) /*0x4ce5a4*/
    {
LABEL_15:
      if ( !*(_DWORD *)&result->member.type ) /*0x4ce5aa*/
      {
        Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4ce5b2*/
        v9 = (*((int (__thiscall **)(NiDX9TextureData *))v10->member.super.rendererData->_vtbl + 5))(v10->member.super.rendererData); /*0x4ce5c6*/
        (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 0x4C))(v9, 0, *a4, 0, 0); /*0x4ce5d7*/
        Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4ce5db*/
      }
      result = *(TESForm **)&(*a4)->member.type; /*0x4ce5e5*/
      if ( *((_BYTE *)&result->vtbl + a5) ) /*0x4ce5ec*/
        *((_BYTE *)&result->vtbl + a5) = 0xFF; /*0x4ce5f3*/
      else
        *((_BYTE *)&result->vtbl + a5) = a6; /*0x4ce600*/
    }
  }
  return result; /*0x4ce5f2*/
}
