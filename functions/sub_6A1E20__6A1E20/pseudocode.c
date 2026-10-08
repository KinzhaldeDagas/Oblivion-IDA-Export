bool __thiscall sub_6A1E20(void *this, void *a2)
{
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // edi
  int *v7; // eax
  bool i; // dl
  int v9; // ecx

  if ( !a2 ) /*0x6a1e2a*/
    return 0; /*0x6a1e2d*/
  v4 = OblivionDynamicCast( /*0x6a1e43*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESEnchantableForm `RTTI Type Descriptor',
         0);
  if ( !v4 ) /*0x6a1e4d*/
    return 0; /*0x6a1e4d*/
  v5 = v4[1]; /*0x6a1e4f*/
  if ( !v5 ) /*0x6a1e54*/
    return 0; /*0x6a1e54*/
  v6 = v5 + 0x18; /*0x6a1e56*/
  if ( v5 == 0xFFFFFFE8 ) /*0x6a1e5b*/
    return 0; /*0x6a1e5f*/
  v7 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this); /*0x6a1e6c*/
  for ( i = 0; v7; v7 = (int *)v7[1] ) /*0x6a1e72*/
  {
    if ( i ) /*0x6a1e76*/
      break; /*0x6a1e76*/
    v9 = *v7; /*0x6a1e78*/
    if ( *v7 ) /*0x6a1e78*/
    {
      if ( *(_DWORD *)(v9 + 8) == v6 ) /*0x6a1e81*/
        i = *(_DWORD *)(v9 + 0x30) == (_DWORD)a2; /*0x6a1e88*/
    }
  }
  return i; /*0x6a1e2c*/
}
