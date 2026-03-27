char __thiscall sub_45F820(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  unsigned __int16 v3; // ax
  _DWORD *v5; // ecx
  int v6; // ebp
  FreeEntry *v7; // eax
  void *v8; // edi
  int v9; // eax
  int v10; // ecx
  UInt32 mainThreadID; // edi
  int v12; // eax
  void (__cdecl *v13)(int, void *, int, int *, int); // edx
  char result; // al
  _DWORD *v15; // esi
  size_t v16; // [esp-4h] [ebp-20h]
  int v17; // [esp+0h] [ebp-1Ch]
  int Src; // [esp+10h] [ebp-Ch] BYREF
  float v19; // [esp+14h] [ebp-8h]
  int v20; // [esp+18h] [ebp-4h] BYREF

  v2 = (_DWORD *)(TESDataHandler + 0x74);
  v3 = 0;
  v5 = v2;
  if ( TESDataHandler != 0xFFFFFF8C )
  {
    do
    {
      if ( *v5 )
        ++v3;
      v5 = (_DWORD *)v5[1];
    }
    while ( v5 );
  }
  v6 = (unsigned __int16)(8 * v3 + 2);
  Src = v3;
  v7 = j_MemoryHeap_Alloc(&FormHeap, 8 * v3 + 2, (unsigned __int16)(8 * v3 + 2) | 0x100000000LL, v17);
  *(this + 5) = v7;
  if ( !v7 )
    sub_404EC0("Could not create save buffer, out of memory.");
  v8 = (void *)*(this + 5);
  LODWORD(v16) = 2;
  v20 = (int)v8;
  SaveLoad_SaveData((int)this, &Src, v16);
  if ( v2 )
  {
    do
    {
      v9 = *v2;
      if ( *v2 )
      {
        v10 = *(_DWORD *)(v9 + 0xC);
        v19 = *(float *)(v9 + 0x24);
        Src = v10;
        SaveLoad_SaveFormID(this, (int)&Src, 4u);
        mainThreadID = OSGlobals->mainThreadID;
        if ( GetCurrentThreadId() == mainThreadID )
          LOBYTE(v12) = *((_BYTE *)this + 0x18);
        else
          v12 = *(this + 6) >> 0x12;
        if ( (v12 & 1) != 0 )
          (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
            dword_B34D90,
            "Error: TESSaveLoadGame::SaveGameData() was called while loading.\n");
        *(float *)*(this + 5) = v19;
        *(this + 5) += 4;
      }
      v2 = (_DWORD *)v2[1];
    }
    while ( v2 );
    v8 = (void *)v20;
  }
  if ( (*(this + 6) & 0x200) != 0 )
  {
    *(this + 0x24) += v6;
  }
  else
  {
    v13 = *(void (__cdecl **)(int, void *, int, int *, int))(a2 + 8);
    v20 = 1;
    v13(a2, v8, v6, &v20, 1);
  }
  result = MemoryHeap_Free_checked(v8);
  *(this + 5) = 0;
  v15 = (_DWORD *)*(this + 0x10);
  if ( v15 )
    return sub_4531B0(v15, v6, v6, "Global Variables");
  return result;
}
