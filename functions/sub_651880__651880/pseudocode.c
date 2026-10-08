void __thiscall sub_651880(TESPackage **this, ProcessSaveChangeMask changeMask, MobileObject *owner)
{
  TESObjectREFR *v4; // edi
  int v5; // eax
  TESPackage *v6; // ecx
  unsigned int resetSelector; // eax
  _DWORD *v8; // ecx
  TargetData *target; // eax
  _DWORD *v10; // ecx

  v4 = (TESObjectREFR *)OblivionDynamicCast( /*0x6518a9*/
                          owner,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  MiddleLowProcess_Revert((MiddleLowProcess *)this, changeMask, owner); /*0x6518ab*/
  if ( (changeMask & 0x8000000) != 0 ) /*0x6518b6*/
  {
    v5 = (int)*(this + 0x39); /*0x6518b8*/
    if ( v5 ) /*0x6518c0*/
    {
      if ( *((_BYTE *)OblivionDynamicCast( /*0x6518e1*/
                        *(void **)(v5 + 8),
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESObjectWEAP `RTTI Type Descriptor',
                        0)
           + 0x90) == 5 )
        sub_5E13D0(v4, 0); /*0x6518e6*/
    }
    ((void (__thiscall *)(TESPackage **, _DWORD, _DWORD))(*this)[4].members.super.modlist.next)(this, 0, 0); /*0x6518f7*/
    ((void (__thiscall *)(TESPackage **, _DWORD))(*this)[4].members.packageFlags)(this, 0); /*0x651904*/
    (*(void (__thiscall **)(TESPackage **, _DWORD))&(*this)[4].members.type)(this, 0); /*0x651911*/
    ((void (__thiscall *)(TESPackage **, _DWORD))(*this)[4].members.procedureArrayIndex)(this, 0); /*0x65191e*/
    *(this + 0x54) = 0; /*0x651920*/
  }
  if ( (changeMask & 0x80000) != 0 ) /*0x65192c*/
  {
    v6 = *(this + 0x30); /*0x65192e*/
    if ( v6 ) /*0x651936*/
    {
      if ( TESPackage_IsRuntimePackage(v6) ) /*0x651938*/
        TESSaveLoadGame_DeleteForm(g_TESSaveLoadGame, (TESForm *)*(this + 0x30)); /*0x65194e*/
    }
    *(this + 0x30) = 0; /*0x651953*/
  }
  resetSelector = g_TESSaveLoadGame->resetSelector; /*0x65195f*/
  if ( resetSelector == 0x1FFFF000 || resetSelector == 0x7FFFF000 ) /*0x65196e*/
  {
    if ( (changeMask & 0x2000000) != 0 ) /*0x65197a*/
    {
      v8 = *(this + 0x5F); /*0x65197c*/
      if ( v8 ) /*0x651984*/
        ActorAnimData_ResetAllSequences(v8, (int)owner); /*0x65198b*/
    }
    ActiveEffect_Base_PreLoadAEList(*(this + 0x5D), (int)v4); /*0x651998*/
    if ( v4 ) /*0x6519a2*/
      (*(void (__thiscall **)(TESPackage **, TESObjectREFR *))&(*this)[6].members.time.month)(this, v4); /*0x6519af*/
    target = (*this)[0xE].members.target; /*0x6519b3*/
    *((_BYTE *)this + 0x114) = 0; /*0x6519c0*/
    ((void (__thiscall *)(TESPackage **, TESObjectREFR *, _DWORD, _DWORD, int))target)(this, v4, 0, 0, 0x7F); /*0x6519c6*/
    *(this + 0x48) = 0; /*0x6519ce*/
    *((_BYTE *)this + 0x124) = 0x7F; /*0x6519d4*/
    BSSimpleList_Clear(this + 0x2A); /*0x6519db*/
    *((float *)this + 0x3E) = kTerrainLODQuadRayDirectionZ; /*0x6519e6*/
    *((_BYTE *)this + 0xF4) = 0; /*0x6519f4*/
    *((float *)this + 0x2E) = 0.0; /*0x6519fa*/
    *((_BYTE *)this + 0xF5) = 0; /*0x651a00*/
    *((float *)this + 0x2F) = 0.0; /*0x651a06*/
    *((_WORD *)this + 0x9C) = 0xFFFF; /*0x651a0c*/
    *((float *)this + 0x31) = 0.0; /*0x651a15*/
    *(this + 0x4F) = 0; /*0x651a1b*/
    *(this + 0x50) = 0; /*0x651a23*/
    *((float *)this + 0x55) = 1.0; /*0x651a29*/
    *(this + 0xD) = 0; /*0x651a2f*/
    *(this + 0x33) = 0; /*0x651a32*/
    *((_BYTE *)this + 0x115) = 0; /*0x651a38*/
    *(this + 0xE) = 0; /*0x651a3e*/
    *((float *)this + 0x56) = 0.0; /*0x651a41*/
    *((_BYTE *)this + 0x180) = 0; /*0x651a47*/
    *((float *)this + 0x22) = 0.0; /*0x651a4d*/
    *(this + 0x38) = 0; /*0x651a53*/
    *((_BYTE *)this + 0x14C) = 0; /*0x651a59*/
    *(this + 0x54) = 0; /*0x651a5f*/
    *(this + 0x59) = 0; /*0x651a65*/
    *((_BYTE *)this + 0x161) = 0; /*0x651a6b*/
    *((_BYTE *)this + 0xC8) = 1; /*0x651a71*/
    *((_BYTE *)this + 0x168) = 0; /*0x651a78*/
    *((_BYTE *)this + 0x169) = 0; /*0x651a7e*/
    *((_BYTE *)this + 0x160) = 0; /*0x651a84*/
    *(this + 0x12) = 0; /*0x651a8a*/
    *((_BYTE *)this + 0x16A) = 0; /*0x651a8d*/
    BSSimpleList_Clear(this + 0x2C); /*0x651a93*/
    v10 = *(this + 0x5C); /*0x651a98*/
    if ( v10 ) /*0x651aa0*/
    {
      BSSimpleList_Clear(v10); /*0x651aa2*/
      FormHeapFree((unsigned int)*(this + 0x5C)); /*0x651aae*/
      *(this + 0x5C) = 0; /*0x651ab6*/
    }
  }
}
