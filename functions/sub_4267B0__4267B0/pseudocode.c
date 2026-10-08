// Install or replace extra-data type 0x49 with an AttachedLightPayload_Decoded. Replacement releases the old payload's backing NiLight and frees that payload; creation builds an ExtraLight-style node, changes its type to 0x49, and adds it to the list.
BSExtraData *__thiscall ExtraDataList_SetSpellEffectLightPayload(
        ExtraDataList *self,
        AttachedLightPayload_Decoded *payload)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // edi
  BSExtraDataVtbl *vtbl; // ebx
  void (__thiscall *Destructor)(BSExtraData *); // esi
  ExtraLight *v8; // eax
  BSExtraData *v9; // esi

  ExtraData = BaseExtraList_GetExtraData(self, kExtraData_Poison|0x1);// Look up existing extra-data type 0x49 before replacing or creating the spell-effect light payload node. /*0x4267d8*/
  v4 = ExtraData; /*0x4267dd*/
  if ( ExtraData ) /*0x4267e1*/
  {
    vtbl = ExtraData[1].vtbl; /*0x4267e3*/
    if ( vtbl ) /*0x4267e8*/
    {
      Destructor = vtbl->Destructor; /*0x4267ea*/
      if ( vtbl->Destructor ) /*0x4267ea*/
      {
        if ( !InterlockedDecrement((volatile LONG *)Destructor + 1) ) /*0x4267f4*/
        {
          if ( Destructor ) /*0x426800*/
            (**(void (__thiscall ***)(void (__thiscall *)(BSExtraData *), int))Destructor)(Destructor, 1); /*0x42680a*/
        }
      }
      FormHeapFree((unsigned int)vtbl); /*0x42680d*/
    }
    v4[1].vtbl = (BSExtraDataVtbl *)payload; /*0x426819*/
    return v4; /*0x42681c*/
  }
  else
  {
    v8 = (ExtraLight *)FormHeapAlloc(0x10u); /*0x426835*/
    if ( v8 ) /*0x42684b*/
      v9 = (BSExtraData *)ExtraLight::ExtraLight(v8, (int)payload); /*0x426859*/
    else
      v9 = 0; /*0x42685d*/
    v9->members.type = 0x49;                    // The newly constructed ExtraLight-style node is retagged as retail extra-data type 0x49 before insertion. /*0x42686a*/
    BaseExtraList_AddExtra(self, v9); /*0x42686e*/
    return v9; /*0x426873*/
  }
}
