void __thiscall sub_651880(TESPackage **this, int a2, void *a3)
{
  TESObjectREFR *v4; // edi
  int v5; // eax
  TESPackage *v6; // ecx
  UInt32 v7; // eax
  _DWORD *v8; // ecx
  TargetData *target; // eax
  _DWORD *v10; // ecx

  v4 = (TESObjectREFR *)OblivionDynamicCast(
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  sub_658940(this, a2, (int)a3);
  if ( (a2 & 0x8000000) != 0 )
  {
    v5 = (int)*(this + 0x39);
    if ( v5 )
    {
      if ( *((_BYTE *)OblivionDynamicCast(
                        *(void **)(v5 + 8),
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESObjectWEAP `RTTI Type Descriptor',
                        0)
           + 0x90) == 5 )
        sub_5E13D0(v4, 0);
    }
    ((void (__thiscall *)(TESPackage **, _DWORD, _DWORD))(*this)[4].members.super.modlist.next)(this, 0, 0);
    ((void (__thiscall *)(TESPackage **, _DWORD))(*this)[4].members.packageFlags)(this, 0);
    (*(void (__thiscall **)(TESPackage **, _DWORD))&(*this)[4].members.type)(this, 0);
    ((void (__thiscall *)(TESPackage **, _DWORD))(*this)[4].members.procedureArrayIndex)(this, 0);
    *(this + 0x54) = 0;
  }
  if ( (a2 & 0x80000) != 0 )
  {
    v6 = *(this + 0x30);
    if ( v6 )
    {
      if ( sub_5660A0(v6) )
        sub_45C7A0((char *)SaveLoad_CurrentSavegame, (TESForm *)*(this + 0x30));
    }
    *(this + 0x30) = 0;
  }
  v7 = SaveLoad_CurrentSavegame->unk030[5];
  if ( v7 == 0x1FFFF000 || v7 == 0x7FFFF000 )
  {
    if ( (a2 & 0x2000000) != 0 )
    {
      v8 = *(this + 0x5F);
      if ( v8 )
        sub_473AA0(v8, (int)a3);
    }
    ActiveEffect_Base_PreLoadAEList(*(this + 0x5D), (int)v4);
    if ( v4 )
      (*(void (__thiscall **)(TESPackage **, TESObjectREFR *))&(*this)[6].members.time.month)(this, v4);
    target = (*this)[0xE].members.target;
    *((_BYTE *)this + 0x114) = 0;
    ((void (__thiscall *)(TESPackage **, TESObjectREFR *, _DWORD, _DWORD, int))target)(this, v4, 0, 0, 0x7F);
    *(this + 0x48) = 0;
    *((_BYTE *)this + 0x124) = 0x7F;
    BSSimpleList_Clear(this + 0x2A);
    *((float *)this + 0x3E) = flt_A30634;
    *((_BYTE *)this + 0xF4) = 0;
    *((float *)this + 0x2E) = 0.0;
    *((_BYTE *)this + 0xF5) = 0;
    *((float *)this + 0x2F) = 0.0;
    *((_WORD *)this + 0x9C) = 0xFFFF;
    *((float *)this + 0x31) = 0.0;
    *(this + 0x4F) = 0;
    *(this + 0x50) = 0;
    *((float *)this + 0x55) = 1.0;
    *(this + 0xD) = 0;
    *(this + 0x33) = 0;
    *((_BYTE *)this + 0x115) = 0;
    *(this + 0xE) = 0;
    *((float *)this + 0x56) = 0.0;
    *((_BYTE *)this + 0x180) = 0;
    *((float *)this + 0x22) = 0.0;
    *(this + 0x38) = 0;
    *((_BYTE *)this + 0x14C) = 0;
    *(this + 0x54) = 0;
    *(this + 0x59) = 0;
    *((_BYTE *)this + 0x161) = 0;
    *((_BYTE *)this + 0xC8) = 1;
    *((_BYTE *)this + 0x168) = 0;
    *((_BYTE *)this + 0x169) = 0;
    *((_BYTE *)this + 0x160) = 0;
    *(this + 0x12) = 0;
    *((_BYTE *)this + 0x16A) = 0;
    BSSimpleList_Clear(this + 0x2C);
    v10 = *(this + 0x5C);
    if ( v10 )
    {
      BSSimpleList_Clear(v10);
      FormHeapFree((unsigned int)*(this + 0x5C));
      *(this + 0x5C) = 0;
    }
  }
}
