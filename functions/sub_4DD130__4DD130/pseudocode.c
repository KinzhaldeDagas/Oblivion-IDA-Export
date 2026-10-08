// Allocate an AttachedLightPayload_Decoded for ordinary ExtraLight type 0x30, strongly own backingLight, initialize targetDimmer_04 to 1.0, and install it on the reference.
BSExtraData *__thiscall TESObjectREFR_SetExtraLightPayload(TESObjectREFR *self, NiLight *backingLight)
{
  AttachedLightPayload_Decoded *v3; // eax
  AttachedLightPayload_Decoded *v4; // edi
  NiLight *backingLight_00; // esi

  v3 = (AttachedLightPayload_Decoded *)FormHeapAlloc(8u); /*0x4dd138*/
  if ( v3 ) /*0x4dd142*/
  {
    v3->backingLight_00 = 0; /*0x4dd144*/
    v4 = v3; /*0x4dd14a*/
  }
  else
  {
    v4 = 0; /*0x4dd14e*/
  }
  backingLight_00 = v4->backingLight_00; /*0x4dd150*/
  if ( v4->backingLight_00 != backingLight ) /*0x4dd158*/
  {
    if ( backingLight_00 ) /*0x4dd15c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&backingLight_00->members) ) /*0x4dd162*/
        backingLight_00->vtbl->super.super.Destructor((NiRefObject *)backingLight_00, 1); /*0x4dd178*/
    }
    v4->backingLight_00 = backingLight; /*0x4dd17c*/
    if ( backingLight ) /*0x4dd17e*/
      InterlockedIncrement((volatile LONG *)&backingLight->members); /*0x4dd184*/
  }
  v4->targetDimmer_04 = 1.0;                    // Initialize ordinary ExtraLight payload targetDimmer_04 to 1.0, matching the spell-effect payload constructor. /*0x4dd190*/
  return ExtraDataList_SetExtraLightPayload(&self->member.baseExtraList, v4); /*0x4dd198*/
}
