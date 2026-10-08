// Verified MagicHitEffect vtable +0x80 callback takes a TESChildCELL* targetReference, reads its parent-cell pointer at +0x40, and stores it in BSTempEffect.parentCell at +0x0C. The explicit TESObjectREFR* linkContext parameter is unused in this implementation.
void __thiscall MagicHitEffect_SetParentCellFromTarget(
        MagicHitEffect *this,
        TESObjectREFR *linkContext,
        TESChildCELL *targetReference)
{
  if ( targetReference ) /*0x69d969*/
    this->super.parentCell = (TESObjectCELL *)Shared_GetDwordAtOffset40(targetReference); /*0x69d970*/
}
