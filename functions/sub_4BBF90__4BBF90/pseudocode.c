char __thiscall sub_4BBF90(TESForm *this, TESForm *a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // esi

  v3 = OblivionDynamicCast( /*0x4bbfa8*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESSoulGem `RTTI Type Descriptor',
         0);
  v4 = v3; /*0x4bbfad*/
  if ( v3 ) /*0x4bbfb4*/
  {
    TESObjectMISC_CopyFrom(this, a2); /*0x4bbfb9*/
    LOBYTE(v3) = v4[0x70]; /*0x4bbfbe*/
    *((_BYTE *)this + 0x70) = (_BYTE)v3; /*0x4bbfc1*/
    *((_BYTE *)this + 0x71) = v4[0x71]; /*0x4bbfc7*/
  }
  return (char)v3; /*0x4bbfca*/
}
