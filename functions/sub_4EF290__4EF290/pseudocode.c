// Verified: load-time SubSpace index builder reads only this WorldSpace's persistentCell (+0x34), not regular exterior cells. Persistent-cell SubSpace refs are represented in two distinct indexes: +0x64 is populated by TESWorldSpace_IndexReference for later cell reattachment; +0x60 is populated here for spatial bounds lookup.
double __usercall TESWorldSpace_IndexPersistentCellSubSpaces@<st0>(TESWorldSpace *this@<ecx>, double carry@<st0>)
{
  TESObjectCELL *persistentCell; // ecx

  persistentCell = this->persistentCell; /*0x4ef292*/
  if ( persistentCell ) /*0x4ef297*/
    return TESObjectCELL_IndexSubSpaceReferences(persistentCell, carry, this); /*0x4ef29a*/
  return carry; /*0x4ef29f*/
}
