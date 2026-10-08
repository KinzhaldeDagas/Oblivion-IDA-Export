char __thiscall sub_51FDF0(TESForm *this, TESForm *a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // esi

  v3 = OblivionDynamicCast( /*0x51fe08*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESHair `RTTI Type Descriptor',
         0);
  v4 = v3; /*0x51fe0d*/
  if ( v3 ) /*0x51fe14*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x51fe19*/
    LOBYTE(v3) = v4[0x48]; /*0x51fe1e*/
    *((_BYTE *)this + 0x48) = (_BYTE)v3; /*0x51fe21*/
  }
  return (char)v3; /*0x51fe24*/
}
