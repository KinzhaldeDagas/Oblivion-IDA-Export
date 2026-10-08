// Build a strong-owned {NiLight*,1.0} payload and install it as the reference's spell-effect attached-light extra-data type 0x49.
BSExtraData *__thiscall TESObjectREFR_SetSpellEffectExtraLight(TESObjectREFR *self, NiLight *backingLight)
{
  AttachedLightPayload_Decoded *v3; // eax
  AttachedLightPayload_Decoded *v4; // edi
  NiLight *backingLight_00; // esi

  v3 = (AttachedLightPayload_Decoded *)FormHeapAlloc(8u); /*0x4d7fe8*/
  if ( v3 ) /*0x4d7ff2*/
  {
    v3->backingLight_00 = 0; /*0x4d7ff4*/
    v4 = v3; /*0x4d7ffa*/
  }
  else
  {
    v4 = 0; /*0x4d7ffe*/
  }
  backingLight_00 = v4->backingLight_00; /*0x4d8000*/
  if ( v4->backingLight_00 != backingLight ) /*0x4d8008*/
  {
    if ( backingLight_00 ) /*0x4d800c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&backingLight_00->members) ) /*0x4d8012*/
        backingLight_00->vtbl->super.super.Destructor((NiRefObject *)backingLight_00, 1); /*0x4d8028*/
    }
    v4->backingLight_00 = backingLight; /*0x4d802c*/
    if ( backingLight ) /*0x4d802e*/
      InterlockedIncrement((volatile LONG *)&backingLight->members); /*0x4d8034*/
  }
  v4->targetDimmer_04 = 1.0; /*0x4d8040*/
  return ExtraDataList_SetSpellEffectLightPayload(&self->member.baseExtraList, v4); /*0x4d8048*/
}
