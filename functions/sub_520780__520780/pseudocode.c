// Final name: TESIdleForm_InsertChild. Maintains parent child array plus previous/next idle sibling links.
void __thiscall TESIdleForm_InsertChild(TESObjectREFR **this, UInt32 a2, unsigned int a3)
{
  int v4; // eax
  UInt32 refID; // esi
  TESObjectREFR *v6; // ecx
  void *v7; // eax
  void *v8; // eax
  TESObjectREFR *v9; // ecx
  void *v10; // eax
  _DWORD *v11; // eax

  if ( a3 ) /*0x5207af*/
  {
    if ( !*(this + 0xF) ) /*0x5207b5*/
    {
      v4 = FormHeapAlloc(0x18u); /*0x5207bc*/
      if ( v4 ) /*0x5207c6*/
      {
        *(_DWORD *)(v4 + 8) = 0; /*0x5207c8*/
        *(_DWORD *)(v4 + 0x14) = 1; /*0x5207cb*/
        *(_DWORD *)(v4 + 0xC) = 0; /*0x5207d2*/
        *(_DWORD *)(v4 + 0x10) = 0; /*0x5207d5*/
        *(_DWORD *)(v4 + 4) = 0; /*0x5207d8*/
        *(_DWORD *)v4 = &NiFormArray::`vftable'; /*0x5207db*/
      }
      else
      {
        v4 = 0; /*0x5207e3*/
      }
      *(this + 0xF) = (TESObjectREFR *)v4; /*0x5207ed*/
    }
    refID = a2; /*0x5207f6*/
    if ( a2 > (*(this + 0xF))->member.super.refID ) /*0x5207fc*/
      refID = (*(this + 0xF))->member.super.refID; /*0x5207fe*/
    *(_DWORD *)(a3 + 0x40) = this; /*0x520802*/
    if ( refID ) /*0x520805*/
    {
      v6 = *(this + 0xF); /*0x520807*/
      v7 = 0; /*0x52080a*/
      if ( v6 ) /*0x52080e*/
      {
        v8 = (void *)sub_494ED0(v6, refID - 1); /*0x520820*/
        v7 = OblivionDynamicCast( /*0x520826*/
               v8,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESIdleForm `RTTI Type Descriptor',
               0);
      }
      *(_DWORD *)(a3 + 0x44) = v7; /*0x52082e*/
    }
    else
    {
      *(_DWORD *)(a3 + 0x44) = 0; /*0x520833*/
    }
    v9 = *(this + 0xF); /*0x520836*/
    if ( v9 ) /*0x52083b*/
    {
      v10 = (void *)sub_494ED0(v9, refID); /*0x52084a*/
      v11 = OblivionDynamicCast( /*0x520850*/
              v10,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESIdleForm `RTTI Type Descriptor',
              0);
      if ( v11 ) /*0x52085a*/
        v11[0x11] = a3; /*0x52085c*/
    }
    sub_52F3C0((unsigned int *)*(this + 0xF), refID, a3); /*0x520864*/
  }
}
