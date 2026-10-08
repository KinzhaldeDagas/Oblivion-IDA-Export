void __thiscall MobileObject_SetDeleted(TESForm *this, bool a2)
{
  char v3; // [esp+Ch] [ebp+4h]

  j_TESForm_SetDeleted(this, a2); /*0x65aa69*/
  sub_6748B0(&qword_B3BB2C[0x75], (MobileObject *)this); /*0x65aa74*/
  if ( a2 ) /*0x65aa7b*/
  {
    if ( OblivionDynamicCast( /*0x65aaa5*/
           this,
           0,
           (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
           &MagicCaster `RTTI Type Descriptor',
           0)
      || (v3 = 0,
          OblivionDynamicCast(
            this,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESMagicCasterForm `RTTI Type Descriptor',
            0)) )
    {
      v3 = 1; /*0x65aab6*/
    }
    sub_65A050((ActorVtbl *)this, v3); /*0x65aac2*/
  }
}
