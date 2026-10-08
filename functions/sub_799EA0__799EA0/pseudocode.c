//
//
// [2026-10-03 callsite distinction] Native Enabled is solely byte+3C. Plugin changes two CBranch callsites, not this accessor globally:7925E9 uses current authored branch condition,79391A discards completed ENABLED/PRUNED children but retains DISABLED branches. An Enabled-only substitution without matching child retention would lose authored branch hierarchy.
bool __thiscall OB_CFrondEngine_Enabled_010201A0(const OB_CFrondEngine_010201A0 *this)
{
  return this->enabledFlag; /*0x799ea3*/
}
