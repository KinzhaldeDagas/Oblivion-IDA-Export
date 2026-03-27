char __thiscall sub_615220(int this, int *a2)
{
  char v6; // bl
  char *Name; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  void *v14; // eax
  _DWORD *v15; // eax
  int v16; // eax
  int v17; // ebx
  TESObjectREFR *v18; // esi
  bool v19; // zf
  TESObjectREFR *v20; // eax
  char *v21; // eax
  char v22; // [esp+0h] [ebp-20h]
  float DistanceBetween; // [esp+10h] [ebp-10h]
  _DWORD *StrongestItem; // [esp+14h] [ebp-Ch]

  if ( a2 )
  {
    v6 = 0;
    if ( !EffectItemList_HasOnTarget(*a2 + 0xC) )
      return 0;
  }
  else
  {
    v9 = *(_DWORD *)(this + 0x3C);
    if ( !v9 )
      return 0;
    v10 = *(_DWORD *)(v9 + 0x58);
    if ( !v10
      || !(*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0xEC))(v10, 1)
      || !*(_DWORD *)((*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 0x3C) + 0x58) + 0xEC))(
                        *(_DWORD *)(*(_DWORD *)(this + 0x3C) + 0x58),
                        1)
                    + 8)
      || *(_BYTE *)(sub_612D60((_DWORD *)this) + 0x90) != 5 && *(_BYTE *)(sub_612D60((_DWORD *)this) + 0x90) != 4 )
    {
      return 0;
    }
    v6 = 1;
  }
  if ( *(_BYTE *)(this + 0x159) )
  {
    if ( byte_B3B908 )
    {
      Name = TESObjectREFR_GetName(*(TESObjectREFR **)(this + 0x3C));
      Interface_ConsolePrint("%.20s is holding off attacking because an ally is in the way!", Name);
    }
    return 1;
  }
  if ( a2 )
  {
    v11 = *a2;
    goto LABEL_19;
  }
  if ( sub_612D60((_DWORD *)this) )
  {
    v12 = *(_DWORD *)(sub_612D60((_DWORD *)this) + 0x64);
    if ( v12 )
    {
      v11 = v12 + 0x18;
LABEL_19:
      if ( v11 )
        goto LABEL_26;
    }
  }
  if ( !v6 )
    return 0;
  v13 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 0x3C) + 0x58) + 0xF4))(
          *(_DWORD *)(*(_DWORD *)(this + 0x3C) + 0x58),
          1);
  if ( !v13 )
    return 0;
  v14 = *(void **)(v13 + 8);
  if ( !v14 )
    return 0;
  v15 = OblivionDynamicCast(
          v14,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESAmmo `RTTI Type Descriptor',
          0);
  if ( !v15 )
    return 0;
  v16 = v15[0x16];
  if ( !v16 || v16 == 0xFFFFFFE8 )
    return 0;
LABEL_26:
  StrongestItem = (_DWORD *)EffectItemList_GetStrongestItem(3, 1);
  if ( !StrongestItem )
    return 0;
  v17 = this + 0x15C;
  if ( this == 0xFFFFFEA4 )
    return 0;
  while ( 1 )
  {
    v18 = *(TESObjectREFR **)v17;
    v19 = *(_DWORD *)v17 == 0;
    v17 = *(_DWORD *)(v17 + 4);
    if ( !v19 && v18 != *(TESObjectREFR **)(this + 0x3C) )
    {
      v20 = (TESObjectREFR *)sub_6135F0(this);
      DistanceBetween = TESObjectREFR_GetDistanceBetween_((int *)this, v18, v20, 0, v22);
      if ( (double)EffectItem_GetArea(StrongestItem) * dbl_A563D0 >= DistanceBetween )
        break;
    }
    if ( !v17 )
      return 0;
  }
  if ( !byte_B3B908 )
    return 1;
  v21 = TESObjectREFR_GetName(*(TESObjectREFR **)(this + 0x3C));
  Interface_ConsolePrint("%.20s is holding off using an area spell so that allies don't get hurt!", v21);
  return 1;
}
