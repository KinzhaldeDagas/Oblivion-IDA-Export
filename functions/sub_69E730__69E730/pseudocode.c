unsigned __int16 __userpurge sub_69E730@<ax>(_DWORD *this@<ecx>, char a2@<bpl>, int a3, int Dst)
{
  int v4; // esi
  const char *v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  unsigned __int16 result; // ax
  FreeEntry *v9; // esi
  size_t v10; // [esp-8h] [ebp-10h]
  size_t v11; // [esp-4h] [ebp-Ch]
  size_t v12; // [esp-4h] [ebp-Ch]
  int v13; // [esp+0h] [ebp-8h]

  v4 = a3;
  sub_69DBF0(this, a3, Dst);
  if ( v4 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 0xC) + 0x1C) + 0x18) + 0x14))(*(_DWORD *)(*(_DWORD *)(v4 + 0xC) + 0x1C) + 0x18) )
    {
      v6 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 0xC) + 0x1C) + 0x18)
                                                    + 0x14))(*(_DWORD *)(*(_DWORD *)(v4 + 0xC) + 0x1C) + 0x18);
      sub_43B420((int *)ModelLoaderPtr, (IOTask **)&a3, v6, 5u, 0, 0, 0, 1, 0);
      if ( a3 )
      {
        v7 = (void (__thiscall ***)(_DWORD, int))a3;
        if ( !InterlockedDecrement((volatile LONG *)(a3 + 8)) )
          (**v7)(v7, 1);
      }
    }
  }
  LODWORD(v11) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v11);
  result = Dst;
  if ( (_WORD)Dst )
  {
    HIDWORD(v10) = 1;
    LODWORD(v10) = (unsigned __int16)Dst + 2;
    v9 = j_MemoryHeap_Alloc(&FormHeap, a2, v10, v13);
    LOWORD(v9->prev) = Dst;
    LODWORD(v12) = (unsigned __int16)Dst;
    result = (unsigned __int16)SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)&v9->prev + 2, v12);
    *(this + 0xB) = v9;
  }
  return result;
}
