char __usercall Cmd_DispelAllSpells@<al>(double a1@<st0>, int a2, int a3, void *a4)
{
  char *v4; // eax

  if ( a4 ) /*0x5021e6*/
  {
    v4 = (char *)OblivionDynamicCast( /*0x5021f7*/
                   a4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
    if ( v4 ) /*0x502201*/
      MagicTarget_RemoveNonPersistentEffects(v4 + 0x68, a1, 0); /*0x502208*/
  }
  return 1; /*0x50220f*/
}
