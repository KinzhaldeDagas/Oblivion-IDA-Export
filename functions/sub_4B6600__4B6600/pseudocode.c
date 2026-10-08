char __thiscall sub_4B6600(TESForm *this, TESForm *a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // esi

  v3 = OblivionDynamicCast( /*0x4b6618*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectCONT `RTTI Type Descriptor',
         0);
  v4 = v3; /*0x4b661d*/
  if ( v3 ) /*0x4b6624*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4b6629*/
    LOBYTE(v3) = v4[0x78]; /*0x4b662e*/
    *((_BYTE *)this + 0x78) = (_BYTE)v3; /*0x4b6631*/
    *((_DWORD *)this + 0x1C) = *((_DWORD *)v4 + 0x1C); /*0x4b6637*/
    *((_DWORD *)this + 0x1D) = *((_DWORD *)v4 + 0x1D); /*0x4b663d*/
  }
  return (char)v3; /*0x4b6640*/
}
