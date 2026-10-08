// Verified setter for NonActorMagicTarget.parentReference at +0x14; the sole direct caller is the modified-extra load path.
TESObjectREFR *__thiscall NonActorMagicTarget_SetParentReference(
        NonActorMagicTarget *this,
        TESObjectREFR *parentReference)
{
  this->parentReference = parentReference; /*0x6a32c4*/
  return parentReference; /*0x6a32c7*/
}
