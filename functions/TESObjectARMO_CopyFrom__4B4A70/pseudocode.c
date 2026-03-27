__int16 __thiscall TESObjectARMO_CopyFrom(TESForm *this, TESForm *a2)
{
  _WORD *v3; // eax
  _WORD *v4; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectARMO `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    LOWORD(v3) = v4[0x72];
    *((_WORD *)this + 0x72) = (_WORD)v3;
  }
  return (__int16)v3;
}
