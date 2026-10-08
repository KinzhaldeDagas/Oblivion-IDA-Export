// Verified body: sets/clears TESObjectCELL flags0 bit 0x20 and calls MarkAsModified(mask 8). Probable semantic identity: Public flag, supported by TESObjectCELL_HasPublicFlag20 and door trespass-access checks; Fallout independently names the homolog SetPublic. This comment records the confidence boundary; Fallout similarity alone is not treated as proof.
int __thiscall TESObjectCELL_SetPublicFlag20(TESObjectCELL *this, bool isPublic)
{
  if ( isPublic ) /*0x4c9845*/
    this->members.flags0 |= 0x20u; /*0x4c9847*/
  else
    this->members.flags0 &= ~0x20u; /*0x4c984d*/
  return ((int (__thiscall *)(TESObjectCELL *, int))this->vtbl->MarkAsModified)(this, 8);
}
