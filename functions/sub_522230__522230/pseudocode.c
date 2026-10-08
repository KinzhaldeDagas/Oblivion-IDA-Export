// Returns the stock sex-morph base endpoint: +2.0 for female TESNPCs and -2.0 for male TESNPCs.
float __thiscall TESNPC_GetSexMorphBase(const TESNPC *this)
{
  if ( TESActorBase_IsFemale(this) ) /*0x522231*/
    return fConstant_2; /*0x52224e*/
  else
    return flt_A53954; /*0x522240*/
}
