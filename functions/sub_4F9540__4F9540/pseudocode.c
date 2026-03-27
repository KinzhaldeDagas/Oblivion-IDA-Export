char __thiscall sub_4F9540(TESForm *this, TESForm *a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)OblivionDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESGlobal `RTTI Type Descriptor',
                  0);
  v4 = v3;
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    LOBYTE(v3) = *((_BYTE *)v4 + 0x20);
    *((_BYTE *)this + 0x20) = (_BYTE)v3;
    *((float *)this + 9) = v4[9];
  }
  return (char)v3;
}
