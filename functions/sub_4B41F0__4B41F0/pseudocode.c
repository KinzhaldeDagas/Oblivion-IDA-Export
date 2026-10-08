_DWORD *__thiscall sub_4B41F0(TESForm *this, TESForm *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi

  result = OblivionDynamicCast( /*0x4b4208*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectANIO `RTTI Type Descriptor',
             0);
  v4 = result; /*0x4b420d*/
  if ( result ) /*0x4b4214*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4b4219*/
    result = (_DWORD *)v4[0xC]; /*0x4b421e*/
    *((_DWORD *)this + 0xC) = result; /*0x4b4221*/
  }
  return result; /*0x4b4224*/
}
