char __cdecl Cmd_DispelAllSpells(int a1, int a2, void *a3)
{
  char *v3; // eax

  if ( a3 )
  {
    v3 = (char *)OblivionDynamicCast(
                   a3,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
    if ( v3 )
      MagicTarget_RemoveNonPersistentEffects(v3 + 0x68, 0);
  }
  return 1;
}
