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
  int v14; // [esp-10h] [ebp-2Ch]
  int v15; // [esp-10h] [ebp-2Ch]
  size_t v16; // [esp-10h] [ebp-2Ch]
  _BYTE v18[20]; // [esp+8h] [ebp-14h] BYREF

  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    LOBYTE(v5) = *(this + 0x18);
  else
    v5 = *((_DWORD *)this + 6) >> 0x12;
  LOBYTE(v5) = v5 & 1;
  if ( !(_BYTE)v5 )
  {
    v6 = a3;
    v7 = OblivionDynamicCast(
           a3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    if ( v7 )
    {
      v8 = *(_DWORD **)this;
      v14 = v6[3];
      a3 = 0;
      NiTMap_GetAt(v8, v14, &a3);
      if ( a3 )
        v9 = *a3;
      else
        LOBYTE(v9) = 0;
      if ( sub_5F0310(v7, v9) )
        goto LABEL_14;
    }
    v15 = v6[3];
    v10 = *(_DWORD **)this;
    a3 = 0;
    NiTMap_GetAt(v10, v15, &a3);
    if ( a3 )
      v5 = *a3;
    else
      LOBYTE(v5) = 0;
    if ( (v5 & 8) != 0 )
    {
LABEL_14:
      v18[0] = 0;
      *(_DWORD *)&v18[2] = 0;
      memset(&v18[8], 0, 0xC);
      LOWORD(v5) = sub_4E0970(v6, v18);
      v11 = v5;
      if ( v7 || (LOBYTE(v5) = v18[2] + v18[4], *(_WORD *)&v18[2] + *(_WORD *)&v18[4] != 1) )
      {
        if ( v11 )
        {
          NiEnterCriticalSection(
            (struct _RTL_CRITICAL_SECTION *)&stru_B33B80,
            (int)"TESSaveLoadGame::SaveQueuedHavokData");
          if ( v7 )
            (*(void (__thiscall **)(_DWORD *, int))(*v7 + 0x40))(v7, 8);
          HIDWORD(v16) = 1;
          LODWORD(v16) = v11 + 2;
          v12 = (BSExtraDataVtbl *)j_MemoryHeap_Alloc(&FormHeap, v11, v16, a2);
          LOWORD(v12->Destructor) = v11;
          *((_DWORD *)this + 5) = (char *)&v12->Destructor + 2;
          sub_4E0A40(v6, (TESForm *)v18);
          *((_DWORD *)this + 5) = 0;
          sub_4211E0((ExtraDataList *)(v6 + 0x11), v12);
          (*(void (__thiscall **)(_DWORD *, int))(*v6 + 0x40))(v6, 0x1000000);
          LOBYTE(v5) = NiLeaveCriticalSection_0(&stru_B33B80);
        }
      }
    }
  }
  return v5;
}
