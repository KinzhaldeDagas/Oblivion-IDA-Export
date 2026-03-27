void __thiscall sub_520780(TESObjectREFR **this, UInt32 a2, unsigned int a3)
{
  TESObjectREFR *v4; // eax
  UInt32 refID; // esi
  TESObjectREFR *v6; // ecx
  void *v7; // eax
  void *v8; // eax
  TESObjectREFR *v9; // ecx
  void *v10; // eax
  _DWORD *v11; // eax

  if ( a3 )
  {
    if ( !*(this + 0xF) )
    {
      v4 = (TESObjectREFR *)FormHeapAlloc(0x18u);
      if ( v4 )
      {
        v4->member.super.flags = 0;
        v4->member.super.modlist.next = (TESForm::ModReferenceList *)1;
        v4->member.super.refID = 0;
        v4->member.super.modlist.data = 0;
        *(_DWORD *)&v4->member.super.type = 0;
        v4->vtbl = (TESObjectREFRVtbl *)&NiFormArray::`vftable';
      }
      else
      {
        v4 = 0;
      }
      *(this + 0xF) = v4;
    }
    refID = a2;
    if ( a2 > (*(this + 0xF))->member.super.refID )
      refID = (*(this + 0xF))->member.super.refID;
    *(_DWORD *)(a3 + 0x40) = this;
    if ( refID )
    {
      v6 = *(this + 0xF);
      v7 = 0;
      if ( v6 )
      {
        v8 = (void *)sub_494ED0(v6, refID - 1);
        v7 = OblivionDynamicCast(
               v8,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESIdleForm `RTTI Type Descriptor',
               0);
      }
      *(_DWORD *)(a3 + 0x44) = v7;
    }
    else
    {
      *(_DWORD *)(a3 + 0x44) = 0;
    }
    v9 = *(this + 0xF);
    if ( v9 )
    {
      v10 = (void *)sub_494ED0(v9, refID);
      v11 = OblivionDynamicCast(
              v10,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESIdleForm `RTTI Type Descriptor',
              0);
      if ( v11 )
        v11[0x11] = a3;
    }
    sub_52F3C0(*(this + 0xF), refID, a3);
  }
}
