char __thiscall sub_613BB0(_DWORD *this, int *a2, int a3, int a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // [esp-8h] [ebp-28h]
  double v11; // [esp+0h] [ebp-20h]
  char v12; // [esp+10h] [ebp-10h]
  char v13; // [esp+14h] [ebp-Ch]

  if ( !a2
    || !*a2
    || !sub_6135F0((int)this)
    || !(*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*(this + 0xF) + 0x5C) + 0x1C))(
          *(this + 0xF) + 0x5C,
          *a2,
          0,
          0,
          0) )
  {
    return sub_613BE7((int)a2, a3, a4);
  }
  if ( !EffectItemList_HasHostile((_DWORD *)(*a2 + 0xC)) )
    return 1;
  if ( EffectItemList_HasEffect((_DWORD *)(*a2 + 0xC), 0x41524150, 0x48) )
  {
    v6 = sub_6135F0((int)this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0x1A0))(v6) )
      return sub_613BE7((int)a2, a3, a4);
  }
  if ( EffectItemList_HasEffect((_DWORD *)(*a2 + 0xC), 0x434E4C53, 0x48) )
  {
    v7 = sub_6135F0((int)this);
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x284))(v7, 0x31) > 0 )
      return sub_613BE7((int)a2, a3, a4);
  }
  v10 = *a2;
  v8 = sub_6135F0((int)this);
  if ( (unsigned __int8)MagicTarget_HasMagicItem((void *)(v8 + 0x68), v10) )
    return sub_613BE7((int)a2, a3, a4);
  if ( v12 && EffectItemList_HasAreaEffect((_DWORD *)(*a2 + 0xC)) )
    return sub_613BE7((int)a2, a3, a4);
  if ( EffectItemList_HasOnTarget(*a2 + 0xC) )
  {
    if ( !v13 )
    {
      v11 = fNumberOfWeightedProjectileExisting;
      if ( GetMagicTrackingLimitForScene() <= v11 )
        return sub_613BE7((int)a2, a3, a4);
    }
    if ( Actor_IsSwimming((_DWORD *)*(this + 0xF)) )
      return sub_613BE7((int)a2, a3, a4);
  }
  v9 = *a2;
  if ( !*a2 || v9 == 0xFFFFFFF4 )
    JUMPOUT(0x613D3F);
  return sub_613CE8((int)this, v9 + 0xC, (int)a2, a3, a4);
}
