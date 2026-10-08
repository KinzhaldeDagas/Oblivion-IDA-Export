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

  v2 = *(this + 0x189); /*0x662da7*/
  v3 = 0; /*0x662dad*/
  v4 = 0; /*0x662daf*/
  if ( v2 || (DefaultPlayerSpell = Magic_GetDefaultPlayerSpell()) != 0 && (v2 = DefaultPlayerSpell + 0x18) != 0 ) /*0x662dc3*/
  {
    v6 = v2 + 0xC; /*0x662dc5*/
    if ( v2 != 0xFFFFFFF4 ) /*0x662dca*/
    {
      do /*0x662dfd*/
      {
        if ( !*(_DWORD *)(v6 + 8) && !*(_DWORD *)(v6 + 4) ) /*0x662dd5*/
          break; /*0x662dd8*/
        v7 = *(_DWORD **)(v6 + 4); /*0x662dda*/
        if ( *(_DWORD *)(v7[7] + 0x98) == 0x454C4554 ) /*0x662dea*/
          v3 += EffectItem_GetMagnitude(v7); /*0x662df1*/
        v8 = *(_DWORD *)(v6 + 8); /*0x662df3*/
        if ( !v8 ) /*0x662df8*/
          break; /*0x662df8*/
        v6 = v8 - 4; /*0x662dfa*/
      }
      while ( v6 ); /*0x662dfd*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x13C))(*(this + 0x16)) ) /*0x662e0a*/
  {
    v9 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 0x16) + 0xEC))(*(this + 0x16), 1); /*0x662e1d*/
    if ( v9 /*0x662e44*/
      && (v10 = (char *)OblivionDynamicCast(
                          *(void **)(v9 + 8),
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &TESObjectWEAP `RTTI Type Descriptor',
                          0)) != 0
      && (v11 = v10 + 0x60) != 0 )
    {
      v12 = *((_DWORD *)v11 + 1); /*0x662e46*/
    }
    else
    {
      v12 = 0; /*0x662e4b*/
    }
    if ( v12 ) /*0x662e4f*/
    {
      v13 = v12 + 0x24; /*0x662e51*/
      if ( v12 != 0xFFFFFFDC ) /*0x662e56*/
      {
        do /*0x662e87*/
        {
          if ( !*(_DWORD *)(v13 + 8) && !*(_DWORD *)(v13 + 4) ) /*0x662e5e*/
            break; /*0x662e62*/
          v14 = *(_DWORD **)(v13 + 4); /*0x662e64*/
          if ( *(_DWORD *)(v14[7] + 0x98) == 0x454C4554 ) /*0x662e74*/
            v4 += EffectItem_GetMagnitude(v14); /*0x662e7b*/
          v15 = *(_DWORD *)(v13 + 8); /*0x662e7d*/
          if ( !v15 ) /*0x662e82*/
            break; /*0x662e82*/
          v13 = v15 - 4; /*0x662e84*/
        }
        while ( v13 ); /*0x662e87*/
      }
    }
  }
  if ( v3 <= v4 ) /*0x662e8b*/
  {
    v16 = v4; /*0x662e95*/
    v20 = v4; /*0x662e97*/
  }
  else
  {
    v16 = v3; /*0x662e8d*/
    v20 = v3; /*0x662e8f*/
  }
  v17 = *this; /*0x662e9f*/
  *((_BYTE *)this + 0x6E6) = v16 > 0; /*0x662ea6*/
  v18 = Double_To_SInt32((double)v20 * MEMORY[0xB37DB8][0]); /*0x662eb2*/
  return (*(int (__thiscall **)(_DWORD *, int, int))(v17 + 0x290))(this, 0x3C, v18); /*0x662ec4*/
}
