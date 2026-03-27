int __cdecl sub_680A00(TESObjectREFR *a1)
{
  int v1; // esi
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraData *p_super; // edi
  unsigned __int16 v4; // bp
  int v5; // eax
  BSExtraDataVtbl *v6; // eax
  TESObjectCELL **v7; // ecx
  TESObjectCELL **v8; // ecx
  int v9; // eax
  int v10; // eax

  v1 = 0;
  if ( !a1 || (a1->member.super.flags & 0x20) != 0 )
    return 0;
  TeleportExtraData = GetTeleportExtraData(a1);
  p_super = &TeleportExtraData->super;
  if ( !TeleportExtraData || !sub_42B410(&TeleportExtraData->super) )
    return 0;
  v4 = sub_6806B0(0);
  if ( v4 != 0xFFFF )
  {
    v5 = FormHeapAlloc(0x14u);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 4) = 0;
      *(_DWORD *)(v5 + 8) = 0;
      *(_DWORD *)(v5 + 0xC) = 0;
      *(_DWORD *)(v5 + 0x10) = 0;
      *(_WORD *)v5 = 0xFFFF;
      v1 = v5;
    }
    *(_DWORD *)(v1 + 4) = a1;
    v6 = sub_42B410(p_super);
    v7 = *(TESObjectCELL ***)(v1 + 4);
    *(_DWORD *)(v1 + 0xC) = v6;
    sub_4D8AF0(v7);
    v8 = *(TESObjectCELL ***)(v1 + 0xC);
    *(_DWORD *)(v1 + 8) = v9;
    sub_4D8AF0(v8);
    *(_DWORD *)(v1 + 0x10) = v10;
    *(_WORD *)v1 = v4;
  }
  return v1;
}
