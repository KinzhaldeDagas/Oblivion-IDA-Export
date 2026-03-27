unsigned __int8 __userpurge sub_45FC60@<al>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4)
{
  TESSaveLoad *v4; // eax
  unsigned __int8 result; // al
  int v7; // edi
  void (__cdecl *v8)(int, int *, int, int *, int); // eax
  void (__cdecl *v9)(int, int *, int, int *, int); // ecx
  _DWORD *v10; // ecx
  FreeEntry *v11; // eax
  char *v12; // ebp
  void (__cdecl *v13)(int, char *, int, int *, int); // eax
  int v14; // eax
  int v15; // [esp-18h] [ebp-20h]
  int v18; // [esp-4h] [ebp-Ch]
  int v19; // [esp+4h] [ebp-4h] BYREF

  v4 = SaveLoad_CurrentSavegame;
  v19 = 0;
  result = (unsigned __int8)v4[1].createdObjectList.next;
  if ( result >= 0x25u )
  {
    v7 = a4;
    if ( result >= 0x27u )
    {
      v8 = *(void (__cdecl **)(int, int *, int, int *, int))(a4 + 4);
      v15 = a4;
      a4 = 1;
      v8(v15, &v19, 4, &a4, 1);
    }
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x27u )
    {
      v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 4);
      v19 = 0;
      a4 = 1;
      v9(v7, &v19, 2, &a4, 1);
    }
    result = v19;
    if ( v19 )
    {
      v10 = *(_DWORD **)(a1 + 0x40);
      if ( v10 )
        sub_4531B0(v10, a2, v19, "Temp Effects List");
      v11 = j_MemoryHeap_Alloc(&FormHeap, a2, (unsigned int)v19 | 0x100000000LL, a3);
      *(_DWORD *)(a1 + 0x14) = v11;
      if ( !v11 )
        sub_404EC0("Could not create save buffer, out of memory.");
      v12 = *(char **)(a1 + 0x14);
      if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Eu )
      {
        v13 = *(void (__cdecl **)(int, char *, int, int *, int))(v7 + 4);
        a4 = 1;
        v13(v7, v12, v19, &a4, 1);
        sub_679850(a2, v18);
      }
      v14 = v19;
      if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x5Eu )
        *(_DWORD *)(a1 + 0x14) += v19;
      if ( &v12[v14] != *(char **)(a1 + 0x14) )
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
          dword_B34D90,
          "LoadTempEffectsList() call did not properly empty buffer.  See Warnings.txt for more info.");
      result = MemoryHeap_Free_checked(v12);
      *(_DWORD *)(a1 + 0x14) = 0;
    }
  }
  return result;
}
