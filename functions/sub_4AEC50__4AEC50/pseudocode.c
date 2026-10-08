_DWORD *__thiscall sub_4AEC50(TESForm *this, TESForm *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // edi

  result = OblivionDynamicCast( /*0x4aec68*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESFurniture `RTTI Type Descriptor',
             0);
  v4 = result; /*0x4aec6d*/
  if ( result ) /*0x4aec74*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4aec79*/
    *((_DWORD *)this + 0x16) = v4[0x16]; /*0x4aec83*/
    return (_DWORD *)sub_4AE830(this); /*0x4aec86*/
  }
  return result; /*0x4aec8b*/
}
