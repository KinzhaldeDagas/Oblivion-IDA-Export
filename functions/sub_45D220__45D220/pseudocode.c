char __userpurge sub_45D220@<al>(_BYTE *this@<ecx>, int a2@<edi>, _DWORD *a3)
{
  UInt32 mainThreadID; // esi
  int v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  _DWORD *v8; // ecx
  int v9; // eax
  _DWORD *v10; // ecx
  unsigned __int16 v11; // bp
  BSExtraDataVtbl *v12; // edi
  _BYTE v14[30]; // [esp-10h] [ebp-2Ch] BYREF
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45d22a*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x45d237*/
    LOBYTE(v5) = *(this + 0x18); /*0x45d239*/
  else
    v5 = *((_DWORD *)this + 6) >> 0x12; /*0x45d241*/
  LOBYTE(v5) = v5 & 1; /*0x45d244*/
  if ( !(_BYTE)v5 ) /*0x45d248*/
  {
    v6 = a3; /*0x45d24e*/
    *(_DWORD *)&v14[8] = a2; /*0x45d253*/
    v7 = OblivionDynamicCast( /*0x45d268*/
           a3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    if ( v7 ) /*0x45d26f*/
    {
      v8 = *(_DWORD **)this; /*0x45d279*/
      *(_DWORD *)v14 = v6[3]; /*0x45d27b*/
      a3 = 0; /*0x45d27c*/
      NiTMap_GetAt(v8, *(int *)v14, &a3); /*0x45d280*/
      if ( a3 ) /*0x45d28b*/
        v9 = *a3; /*0x45d28d*/
      else
        LOBYTE(v9) = 0; /*0x45d291*/
      if ( sub_5F0310(v7, v9) ) /*0x45d296*/
        goto LABEL_14; /*0x45d296*/
    }
    *(_DWORD *)v14 = v6[3]; /*0x45d2a7*/
    v10 = *(_DWORD **)this; /*0x45d2a8*/
    a3 = 0; /*0x45d2aa*/
    NiTMap_GetAt(v10, *(int *)v14, &a3); /*0x45d2ae*/
    if ( a3 ) /*0x45d2b9*/
      v5 = *a3; /*0x45d2bb*/
    else
      LOBYTE(v5) = 0; /*0x45d2bf*/
    if ( (v5 & 8) != 0 ) /*0x45d2c3*/
    {
LABEL_14:
      v14[0x18] = 0; /*0x45d2d0*/
      *(_DWORD *)&v14[0x1A] = 0; /*0x45d2d5*/
      v15 = 0; /*0x45d2df*/
      v16 = 0; /*0x45d2e3*/
      v17 = 0; /*0x45d2e7*/
      LOWORD(v5) = sub_4E0970(v6, &v14[0x18]); /*0x45d2eb*/
      v11 = v5; /*0x45d2f2*/
      if ( v7 || (LOBYTE(v5) = v14[0x1A] + v14[0x1C], *(_WORD *)&v14[0x1A] + *(_WORD *)&v14[0x1C] != 1) ) /*0x45d305*/
      {
        if ( v11 ) /*0x45d30a*/
        {
          NiEnterCriticalSection( /*0x45d316*/
            (struct _RTL_CRITICAL_SECTION *)&unk_B33B80,
            (int)"TESSaveLoadGame::SaveQueuedHavokData");
          if ( v7 ) /*0x45d31d*/
            (*(void (__thiscall **)(_DWORD *, int))(*v7 + 0x40))(v7, 8); /*0x45d328*/
          *(_DWORD *)&v14[4] = 1; /*0x45d330*/
          *(_DWORD *)v14 = v11 + 2; /*0x45d332*/
          v12 = (BSExtraDataVtbl *)j_MemoryHeap_Alloc(&FormHeap, v11, *(size_t *)v14, *(int *)&v14[8]); /*0x45d33d*/
          LOWORD(v12->Destructor) = v11; /*0x45d346*/
          *(_DWORD *)&v14[4] = &v14[0x18]; /*0x45d349*/
          *((_DWORD *)this + 5) = (char *)&v12->Destructor + 2; /*0x45d34c*/
          sub_4E0A40(v6, (int)v6, *(TESForm *)&v14[4]); /*0x45d34f*/
          *((_DWORD *)this + 5) = 0; /*0x45d358*/
          ExtraDataList_SetSavedHavokData((ExtraDataList *)(v6 + 0x11), v12); /*0x45d35f*/
          (*(void (__thiscall **)(_DWORD *, int))(*v6 + 0x40))(v6, 0x1000000); /*0x45d370*/
          LOBYTE(v5) = NiLeaveCriticalSection_0(&unk_B33B80); /*0x45d377*/
        }
      }
    }
  }
  return v5; /*0x45d37e*/
}
