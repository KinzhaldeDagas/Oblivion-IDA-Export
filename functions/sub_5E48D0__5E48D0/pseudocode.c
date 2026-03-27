char __thiscall sub_5E48D0(_DWORD *this, _BYTE *a2, int a3)
{
  int v3; // eax
  _DWORD *v5; // eax

  LOBYTE(v3) = a2[4];
  if ( (_BYTE)v3 == 0x14 || (_BYTE)v3 == 0x16 )
  {
    v5 = OblivionDynamicCast(
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESEnchantableForm `RTTI Type Descriptor',
           0);
    if ( v5 )
      v3 = v5[1];
    else
      v3 = 0;
    if ( v3 )
      LOBYTE(v3) = (*(char (__thiscall **)(_DWORD *, int, _BYTE *, _DWORD))(*(this + 0x17) + 8))(
                     this + 0x17,
                     v3 + 0x18,
                     a2,
                     0);
  }
  return v3;
}
