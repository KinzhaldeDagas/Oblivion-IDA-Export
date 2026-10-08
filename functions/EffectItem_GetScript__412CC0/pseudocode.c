void __thiscall EffectItem_GetScript(UInt32 **this)
{
  UInt32 *v1; // ecx
  UInt32 v2; // ecx
  TESForm *v3; // eax

  v1 = *(this + 6); /*0x412cc0*/
  if ( v1 ) /*0x412cc7*/
  {
    v2 = *v1; /*0x412cc9*/
    if ( v2 ) /*0x412ccd*/
    {
      v3 = TESForm_LookupByFormID(v2); /*0x412cdc*/
      OblivionDynamicCast( /*0x412ce5*/
        v3,
        0,
        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
        &Script `RTTI Type Descriptor',
        0);
    }
  }
  EffectItem_GetScript_::Done(); /*0x412cc7*/
}
