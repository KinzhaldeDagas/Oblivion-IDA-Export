__int16 __thiscall sub_4B5640(TESForm *this, TESForm *a2)
{
  _WORD *v3; // eax
  _WORD *v4; // esi

  v3 = OblivionDynamicCast( /*0x4b5658*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectBOOK `RTTI Type Descriptor',
         0);
  v4 = v3; /*0x4b565d*/
  if ( v3 ) /*0x4b5664*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4b5669*/
    LOWORD(v3) = v4[0x44]; /*0x4b566e*/
    *((_WORD *)this + 0x44) = (_WORD)v3; /*0x4b5675*/
  }
  return (__int16)v3; /*0x4b567c*/
}
