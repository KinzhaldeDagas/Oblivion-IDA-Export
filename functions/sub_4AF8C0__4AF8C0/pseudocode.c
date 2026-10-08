_DWORD *__thiscall sub_4AF8C0(TESForm *this, TESForm *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi

  result = OblivionDynamicCast( /*0x4af8d8*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESLevCreature `RTTI Type Descriptor',
             0);
  v4 = result; /*0x4af8dd*/
  if ( result ) /*0x4af8e4*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4af8e9*/
    result = (_DWORD *)v4[0x10]; /*0x4af8ee*/
    *((_DWORD *)this + 0x10) = result; /*0x4af8f1*/
  }
  return result; /*0x4af8f4*/
}
