// Verified seed-array consumer: accesses seedValues through the embedded NiTArray at +0x4C and count at +0x52. Constructor initializes it empty; destructor frees its data; Oblivion TREE load does not populate it. Fallout's SNAM load/save is a schema divergence, not evidence of an Oblivion population path.
unsigned int __thiscall TESObjectTREE_GetSeedAtIndex(
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this,
        unsigned __int8 index)
{
  unsigned __int8 v2; // dl
  unsigned __int16 seedCount; // ax

  v2 = index; /*0x4ba060*/
  if ( index == 0xFF ) /*0x4ba067*/
    return (*(unsigned int (__thiscall **)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *))(*(_DWORD *)this->prefix_000_047 /*0x4ba067*/
                                                                                               + 0x130))(this);
  seedCount = this->seedCount; /*0x4ba069*/
  if ( !seedCount ) /*0x4ba070*/
    return (*(unsigned int (__thiscall **)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *))(*(_DWORD *)this->prefix_000_047 /*0x4ba09b*/
                                                                                               + 0x130))(this);
  if ( index >= seedCount ) /*0x4ba07a*/
    v2 = index % seedCount; /*0x4ba084*/
  return this->seedValues[v2]; /*0x4ba090*/
}
