// OBMEFix verification 2026-05-30: vanilla ScriptEffect/ActiveEffect IsTargetValid target returns true and pops one MagicTarget argument. Safe previous target for OBMEFix to chain when the slot is still vanilla.
char __stdcall nullsub_returnTrue_1arg(int a1)
{
  return 1; /*0x6fdff2*/
}
