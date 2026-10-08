char __thiscall TESObjectCELL_CopyFrom(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  ExtraDataList *v4; // ebx
  void **v5; // edi
  void **vtbl; // esi
  void **v7; // esi
  void **v8; // ebx

  v3 = (TESForm *)OblivionDynamicCast( /*0x4ce007*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectCELL `RTTI Type Descriptor',
                    0);
  v4 = (ExtraDataList *)v3; /*0x4ce00c*/
  if ( v3 ) /*0x4ce013*/
  {
    TESForm_CopyAllComponentsFrom(this, v3); /*0x4ce018*/
    BaseExtraList_Copy((ExtraDataList *)this + 2, v4 + 2); /*0x4ce024*/
    FormHeapFree(*((_DWORD *)this + 0xF)); /*0x4ce02d*/
    *((_DWORD *)this + 0xF) = 0; /*0x4ce032*/
    *((_BYTE *)this + 0x24) = v4[1].members.m_presenceBitfield[8]; /*0x4ce041*/
    sub_4CA710((TESObjectCELL *)this); /*0x4ce044*/
    LOBYTE(v3) = 1; /*0x4ce049*/
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4ce04e*/
    {
      v5 = *((void ***)this + 0xF); /*0x4ce054*/
      if ( (v4[1].members.m_presenceBitfield[8] & 1) != 0 ) /*0x4ce057*/
        vtbl = v4[3].vtbl; /*0x4ce05d*/
      else
        vtbl = 0; /*0x4ce059*/
      if ( v5 ) /*0x4ce062*/
      {
        if ( vtbl ) /*0x4ce066*/
          qmemcpy(v5, vtbl, 0x28u); /*0x4ce06d*/
      }
    }
    else
    {
      v7 = *((void ***)this + 0xF); /*0x4ce078*/
      if ( (v4[1].members.m_presenceBitfield[8] & 1) != 0 ) /*0x4ce07b*/
        v8 = 0; /*0x4ce07d*/
      else
        v8 = v4[3].vtbl; /*0x4ce081*/
      if ( v7 ) /*0x4ce086*/
      {
        if ( v8 ) /*0x4ce08a*/
        {
          *v7 = *v8; /*0x4ce08e*/
          v7[1] = v8[1]; /*0x4ce093*/
        }
      }
    }
  }
  return (char)v3; /*0x4ce070*/
}
