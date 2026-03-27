char __thiscall TESObjectCELL_CopyFrom(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  ExtraDataList *v4; // ebx
  void **v5; // edi
  void **vtbl; // esi
  void **v7; // esi
  void **v8; // ebx

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectCELL `RTTI Type Descriptor',
                    0);
  v4 = (ExtraDataList *)v3;
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, v3);
    BaseExtraList_Copy((ExtraDataList *)this + 2, v4 + 2);
    FormHeapFree(*((_DWORD *)this + 0xF));
    *((_DWORD *)this + 0xF) = 0;
    *((_BYTE *)this + 0x24) = v4[1].members.m_presenceBitfield[8];
    sub_4CA710((TESObjectCELL *)this);
    LOBYTE(v3) = 1;
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
    {
      v5 = *((void ***)this + 0xF);
      if ( (v4[1].members.m_presenceBitfield[8] & 1) != 0 )
        vtbl = v4[3].vtbl;
      else
        vtbl = 0;
      if ( v5 )
      {
        if ( vtbl )
          qmemcpy(v5, vtbl, 0x28u);
      }
    }
    else
    {
      v7 = *((void ***)this + 0xF);
      if ( (v4[1].members.m_presenceBitfield[8] & 1) != 0 )
        v8 = 0;
      else
        v8 = v4[3].vtbl;
      if ( v7 )
      {
        if ( v8 )
        {
          *v7 = *v8;
          v7[1] = v8[1];
        }
      }
    }
  }
  return (char)v3;
}
