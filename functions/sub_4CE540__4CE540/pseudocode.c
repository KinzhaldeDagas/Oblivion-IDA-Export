TESForm *__thiscall sub_4CE540(int this, signed int a2, signed int a3, TESForm **a4, int a5, char a6)
{
  TESForm *result; // eax
  bool v7; // zf
  ExtraDataList *v8; // edi
  int v9; // eax
  NiRenderedTexture *v10; // [esp+8h] [ebp-4h] BYREF

  result = *a4;
  v7 = *a4 == 0;
  v10 = 0;
  if ( !v7 )
    goto LABEL_15;
  if ( (*(_BYTE *)(this + 0x24) & 1) == 0 )
    result = *(TESForm **)(this + 0x50);
  result = sub_447740((TESWorldSpace **)TESDataHandler, a2, a3, (TESWorldSpace *)result, 0);
  v8 = (ExtraDataList *)result;
  if ( result )
  {
    sub_41F9F0((ExtraDataList *)&result[1].member.modlist, &v10, a4);
    if ( !v10 )
      TESObjectCELL::CreateCanopyShadowMaskForCell(v8, &v10, a4);
    result = *a4;
    if ( *a4 )
    {
LABEL_15:
      if ( !*(_DWORD *)&result->member.type )
      {
        nullsub_returnTrue_0arg();
        v9 = (*((int (__thiscall **)(NiDX9TextureData *))v10->member.super.rendererData->_vtbl + 5))(v10->member.super.rendererData);
        (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 0x4C))(v9, 0, *a4, 0, 0);
        nullsub_returnTrue_0arg();
      }
      result = *(TESForm **)&(*a4)->member.type;
      if ( *((_BYTE *)&result->vtbl + a5) )
        *((_BYTE *)&result->vtbl + a5) = 0xFF;
      else
        *((_BYTE *)&result->vtbl + a5) = a6;
    }
  }
  return result;
}
