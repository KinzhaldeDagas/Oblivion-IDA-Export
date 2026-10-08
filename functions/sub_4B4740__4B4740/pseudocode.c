char __thiscall sub_4B4740(TESForm *this, TESForm *a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // esi

  v3 = OblivionDynamicCast( /*0x4b4758*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectAPPA `RTTI Type Descriptor',
         0);
  v4 = v3; /*0x4b475d*/
  if ( v3 ) /*0x4b4764*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4b4769*/
    LOBYTE(v3) = v4[0x78]; /*0x4b476e*/
    *((_BYTE *)this + 0x78) = (_BYTE)v3; /*0x4b4771*/
  }
  return (char)v3; /*0x4b4774*/
}
