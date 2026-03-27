char __thiscall sub_4BBF90(TESForm *this, TESForm *a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESSoulGem `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( v3 )
  {
    TESObjectMISC_CopyFrom(this, a2);
    LOBYTE(v3) = v4[0x70];
    *((_BYTE *)this + 0x70) = (_BYTE)v3;
    *((_BYTE *)this + 0x71) = v4[0x71];
  }
  return (char)v3;
}
