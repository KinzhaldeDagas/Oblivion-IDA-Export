char __thiscall TESAttributes_CopyFrom(_BYTE *this, void *a2)
{
  void *v3; // eax
  _BYTE *v4; // edi
  int i; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESAttributes `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( v3 )
  {
    for ( i = 0; i < 8; ++i )
    {
      LOBYTE(v3) = ActorValue_GetGroupOffsetFromAV(0, i);
      *(this + i + 4) = v4[(char)v3 + 4];
    }
  }
  return (char)v3;
}
