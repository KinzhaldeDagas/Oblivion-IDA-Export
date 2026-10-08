char __thiscall TESAttributes_CopyFrom(_BYTE *this, void *a2)
{
  void *v3; // eax
  _BYTE *v4; // edi
  int i; // esi

  v3 = OblivionDynamicCast( /*0x468be7*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESAttributes `RTTI Type Descriptor',
         0);
  v4 = v3; /*0x468bec*/
  if ( v3 ) /*0x468bf3*/
  {
    for ( i = 0; i < 8; ++i ) /*0x468bf6*/
    {
      LOBYTE(v3) = ActorValue_GetGroupOffsetFromAV(0, i); /*0x468bfb*/
      *(this + i + 4) = v4[(char)v3 + 4]; /*0x468c07*/
    }
  }
  return (char)v3; /*0x468c17*/
}
