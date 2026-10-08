char __thiscall sub_5E48D0(_DWORD *this, _BYTE *a2, int a3)
{
  int v3; // eax
  _DWORD *v5; // eax

  LOBYTE(v3) = a2[4]; /*0x5e48d5*/
  if ( (_BYTE)v3 == 0x14 || (_BYTE)v3 == 0x16 ) /*0x5e48e1*/
  {
    v5 = OblivionDynamicCast( /*0x5e48f2*/
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESEnchantableForm `RTTI Type Descriptor',
           0);
    if ( v5 ) /*0x5e48fc*/
      v3 = v5[1]; /*0x5e48fe*/
    else
      v3 = 0; /*0x5e4903*/
    if ( v3 ) /*0x5e4907*/
      LOBYTE(v3) = (*(char (__thiscall **)(_DWORD *, int, _BYTE *, _DWORD))(*(this + 0x17) + 8))( /*0x5e4919*/
                     this + 0x17,
                     v3 + 0x18,
                     a2,
                     0);
  }
  return v3; /*0x5e491b*/
}
