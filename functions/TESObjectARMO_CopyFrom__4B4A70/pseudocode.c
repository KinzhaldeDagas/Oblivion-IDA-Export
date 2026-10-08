__int16 __thiscall TESObjectARMO_CopyFrom(TESForm *this, TESForm *a2)
{
  _WORD *v3; // eax
  _WORD *v4; // esi

  v3 = OblivionDynamicCast( /*0x4b4a88*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectARMO `RTTI Type Descriptor',
         0);
  v4 = v3; /*0x4b4a8d*/
  if ( v3 ) /*0x4b4a94*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4b4a99*/
    LOWORD(v3) = v4[0x72]; /*0x4b4a9e*/
    *((_WORD *)this + 0x72) = (_WORD)v3; /*0x4b4aa5*/
  }
  return (__int16)v3; /*0x4b4aac*/
}
