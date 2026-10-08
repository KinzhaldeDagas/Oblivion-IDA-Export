// Replace or create kExtraData_Light (type 0x30) with the shared {strong NiLight*, target dimmer} payload. Existing payload ownership is released before replacement.
BSExtraData *__thiscall ExtraDataList_SetExtraLightPayload(ExtraDataList *self, AttachedLightPayload_Decoded *payload)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // ebx
  BSExtraDataVtbl *vtbl; // edi
  void (__thiscall *Destructor)(BSExtraData *); // esi
  ExtraLight *v8; // eax
  BSExtraData *v9; // esi

  ExtraData = BaseExtraList_GetExtraData(self, kExtraData_Light); /*0x428ce8*/
  v4 = ExtraData; /*0x428ced*/
  if ( ExtraData ) /*0x428cf1*/
  {
    vtbl = ExtraData[1].vtbl; /*0x428cf3*/
    if ( vtbl ) /*0x428cf8*/
    {
      Destructor = vtbl->Destructor; /*0x428cfa*/
      if ( vtbl->Destructor ) /*0x428cfa*/
      {
        if ( !InterlockedDecrement((volatile LONG *)Destructor + 1) ) /*0x428d04*/
        {
          if ( Destructor ) /*0x428d10*/
            (**(void (__thiscall ***)(void (__thiscall *)(BSExtraData *), int))Destructor)(Destructor, 1); /*0x428d1a*/
        }
      }
      FormHeapFree((unsigned int)vtbl); /*0x428d1d*/
    }
    v4[1].vtbl = (BSExtraDataVtbl *)payload; /*0x428d29*/
    return v4; /*0x428d2c*/
  }
  else
  {
    v8 = (ExtraLight *)FormHeapAlloc(0x10u); /*0x428d45*/
    if ( v8 ) /*0x428d5b*/
      v9 = (BSExtraData *)ExtraLight::ExtraLight(v8, (int)payload); /*0x428d69*/
    else
      v9 = 0; /*0x428d6d*/
    BaseExtraList_AddExtra(self, v9); /*0x428d7a*/
    return v9; /*0x428d7f*/
  }
}
