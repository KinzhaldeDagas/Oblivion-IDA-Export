char __thiscall TESAttributes_CompareTo(_BYTE *this, void *a2)
{
  _BYTE *v3; // edi
  int v5; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESAttributes `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return 1;
  v5 = 0;
  while ( *(this + v5 + 4) == v3[ActorValue_GetGroupOffsetFromAV(0, v5) + 4] )
  {
    if ( ++v5 >= 8 )
      return 0;
  }
  return 1;
}
