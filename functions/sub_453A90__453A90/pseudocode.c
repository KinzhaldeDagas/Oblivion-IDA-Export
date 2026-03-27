int __stdcall sub_453A90(_BYTE *a1, _DWORD *a2, unsigned int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int v6; // ecx
  int v7; // eax
  char v9[316]; // [esp+24h] [ebp-140h] BYREF

  *a1 = 0;
  if ( a2 )
    a3 = sub_4535A0(a2, a3);
  if ( !(_BYTE)a5 )
  {
    if ( a2 )
      (*(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x4C))(a2, 0);
  }
  OblivionDynamicCast(
    a2,
    0,
    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
    0);
  v5 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &MobileObject `RTTI Type Descriptor',
         0);
  OblivionDynamicCast(
    a2,
    0,
    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
    &Actor `RTTI Type Descriptor',
    0);
  if ( !v5 )
    JUMPOUT(0x453D14);
  v6 = v5[0x16];
  v7 = 0xFFFFFFFF;
  if ( v6 )
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  switch ( v7 )
  {
    case 0xFFFFFFFF:
      if ( !(_BYTE)a4 )
        JUMPOUT(0x453C33);
      _sprintf(v9, "Process Level: None\r\n");
      return def_453B6F(a1, a2, a3, a4, a5);
    case 0:
      JUMPOUT(0x453CE3);
    case 1:
      JUMPOUT(0x453CB2);
    case 2:
      JUMPOUT(0x453C81);
    case 3:
      JUMPOUT(0x453C50);
    default:
      JUMPOUT(0x453B96);
  }
}
