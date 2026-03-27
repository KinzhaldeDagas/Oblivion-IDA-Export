char __thiscall sub_4B6600(TESForm *this, TESForm *a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectCONT `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    LOBYTE(v3) = v4[0x78];
    *((_BYTE *)this + 0x78) = (_BYTE)v3;
    *((_DWORD *)this + 0x1C) = *((_DWORD *)v4 + 0x1C);
    *((_DWORD *)this + 0x1D) = *((_DWORD *)v4 + 0x1D);
  }
  return (char)v3;
}
