_DWORD *__thiscall sub_517C60(TESForm *this, TESForm *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // edi

  result = OblivionDynamicCast( /*0x517c78*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESSound `RTTI Type Descriptor',
             0);
  v4 = result; /*0x517c7d*/
  if ( result ) /*0x517c84*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x517c89*/
    *((_DWORD *)this + 0xE) = v4[0xE]; /*0x517c97*/
    *((_DWORD *)this + 0xF) = v4[0xF]; /*0x517c9c*/
    result = (_DWORD *)v4[0x10]; /*0x517c9f*/
    *((_DWORD *)this + 0x10) = result; /*0x517ca2*/
  }
  return result; /*0x517ca5*/
}
