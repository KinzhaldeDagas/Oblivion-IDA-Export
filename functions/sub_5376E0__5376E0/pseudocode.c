bool __cdecl sub_5376E0(int a1, int a2)
{
  TESObjectREFR *v2; // esi
  PlayerCharacter *v3; // eax
  int v4; // edi
  bool (__thiscall *v5)(BSExtraData *, BSExtraData *); // ecx

  v2 = (TESObjectREFR *)sub_536110(*(_DWORD *)(a1 + 0x28));
  v3 = sub_536110(*(_DWORD *)(a1 + 0x20));
  v4 = (int)v3;
  if ( !v2 )
    return 0;
  if ( !v3 )
    return 0;
  if ( !v3->vtbl->super.super.super.IsActor((TESObjectREFR *)v3) )
    return 0;
  v5 = sub_536F20(v2);
  if ( !v5 )
    return 0;
  if ( !a2 )
    return sub_536C30(v5, a1, (int)v2, v4, 0) != 0;
  sub_5375F0(v5, *(_DWORD *)(a1 + 0x28), v4);
  return 1;
}
