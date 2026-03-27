bool __thiscall sub_6A1E20(void *this, void *a2)
{
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // edi
  int *v7; // eax
  bool i; // dl
  int v9; // ecx

  if ( !a2 )
    return 0;
  v4 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESEnchantableForm `RTTI Type Descriptor',
         0);
  if ( !v4 )
    return 0;
  v5 = v4[1];
  if ( !v5 )
    return 0;
  v6 = v5 + 0x18;
  if ( v5 == 0xFFFFFFE8 )
    return 0;
  v7 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  for ( i = 0; v7; v7 = (int *)v7[1] )
  {
    if ( i )
      break;
    v9 = *v7;
    if ( *v7 )
    {
      if ( *(_DWORD *)(v9 + 8) == v6 )
        i = *(_DWORD *)(v9 + 0x30) == (_DWORD)a2;
    }
  }
  return i;
}
