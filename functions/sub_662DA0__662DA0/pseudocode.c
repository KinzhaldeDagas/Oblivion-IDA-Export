int __thiscall sub_662DA0(_DWORD *this)
{
  int v2; // eax
  int v3; // ebp
  int v4; // ebx
  int DefaultPlayerSpell; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // esi
  int v9; // eax
  char *v10; // eax
  char *v11; // eax
  int v12; // eax
  int v13; // esi
  _DWORD *v14; // ecx
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v20; // [esp+10h] [ebp-4h]

  v2 = *(this + 0x189);
  v3 = 0;
  v4 = 0;
  if ( v2 || (DefaultPlayerSpell = Magic_GetDefaultPlayerSpell()) != 0 && (v2 = DefaultPlayerSpell + 0x18) != 0 )
  {
    v6 = v2 + 0xC;
    if ( v2 != 0xFFFFFFF4 )
    {
      do
      {
        if ( !*(_DWORD *)(v6 + 8) && !*(_DWORD *)(v6 + 4) )
          break;
        v7 = *(_DWORD **)(v6 + 4);
        if ( *(_DWORD *)(v7[7] + 0x98) == 0x454C4554 )
          v3 += EffectItem_GetMagnitude(v7);
        v8 = *(_DWORD *)(v6 + 8);
        if ( !v8 )
          break;
        v6 = v8 - 4;
      }
      while ( v6 );
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x13C))(*(this + 0x16)) )
  {
    v9 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 0x16) + 0xEC))(*(this + 0x16), 1);
    if ( v9
      && (v10 = (char *)OblivionDynamicCast(
                          *(void **)(v9 + 8),
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &TESObjectWEAP `RTTI Type Descriptor',
                          0)) != 0
      && (v11 = v10 + 0x60) != 0 )
    {
      v12 = *((_DWORD *)v11 + 1);
    }
    else
    {
      v12 = 0;
    }
    if ( v12 )
    {
      v13 = v12 + 0x24;
      if ( v12 != 0xFFFFFFDC )
      {
        do
        {
          if ( !*(_DWORD *)(v13 + 8) && !*(_DWORD *)(v13 + 4) )
            break;
          v14 = *(_DWORD **)(v13 + 4);
          if ( *(_DWORD *)(v14[7] + 0x98) == 0x454C4554 )
            v4 += EffectItem_GetMagnitude(v14);
          v15 = *(_DWORD *)(v13 + 8);
          if ( !v15 )
            break;
          v13 = v15 - 4;
        }
        while ( v13 );
      }
    }
  }
  if ( v3 <= v4 )
  {
    v16 = v4;
    v20 = v4;
  }
  else
  {
    v16 = v3;
    v20 = v3;
  }
  v17 = *this;
  *((_BYTE *)this + 0x6E6) = v16 > 0;
  v18 = Double_To_SInt32((double)v20 * fMagicUnitsPerFoot);
  return (*(int (__thiscall **)(_DWORD *, int, int))(v17 + 0x290))(this, 0x3C, v18);
}
