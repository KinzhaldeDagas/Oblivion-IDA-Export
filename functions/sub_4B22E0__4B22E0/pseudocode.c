// Retain payload->backingLight_00 and forward the light plus &payload->targetDimmer_04 to TESObjectLIGH_UpdateAttachedLightState. All six direct retail caller sites pass optionalContext=null.
bool __thiscall TESObjectLIGH_UpdateAttachedLightPayload(
        TESObjectLIGH_DecodedLayout *self,
        AttachedLightPayload_Decoded *payload,
        void *optionalContext)
{
  NiLight *backingLight_00; // [esp-Ch] [ebp-10h]

  backingLight_00 = payload->backingLight_00; /*0x4b22fb*/
  if ( payload->backingLight_00 ) /*0x4b22ef*/
    InterlockedIncrement((volatile LONG *)&payload->backingLight_00->members); /*0x4b2303*/
  return TESObjectLIGH_UpdateAttachedLightState(self, backingLight_00, &payload->targetDimmer_04, optionalContext);// Forward payload->backingLight_00 and &payload->targetDimmer_04; optionalContext is supplied by the caller and is null at every direct retail call site. /*0x4b2310*/
}
