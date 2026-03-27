char __thiscall sub_4A4890(_DWORD *this, Data *a1, int a3)
{
  signed int ChunkType; // eax
  int v5; // eax
  int (__thiscall *v6)(_DWORD *, int); // edx
  int v7; // eax
  int v9; // eax
  char Dst[4]; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h]

  if ( a1 && a3 )
  {
    *(this + 1) = a3;
    ChunkType = TESFile_GetChunkType(a1);
    if ( ChunkType > 0x504D4452 )
    {
      if ( ChunkType != 0x53474452 )
      {
        if ( ChunkType == 0x54414452 )
        {
          *(_DWORD *)Dst = 0;
          v11 = 0;
          TESFile_GetChunkData(a1, Dst, 8u);
          v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 4))(this, *(_DWORD *)Dst);
          dword_B3541C = v9;
          if ( v9 )
          {
            (*(void (__thiscall **)(int, char *))(*(_DWORD *)v9 + 8))(v9, Dst);
            BSSimpleList_PushFront(*(_DWORD **)(a3 + 0x18), dword_B3541C);
            return 1;
          }
        }
        else if ( ChunkType == 0x54574452 )
        {
          v7 = (*(int (__thiscall **)(_DWORD *, int))(*this + 0xC))(this, dword_B3541C);
          if ( v7 )
          {
            (*(void (__thiscall **)(int, Data *, int))(*(_DWORD *)v7 + 0x20))(v7, a1, a3);
            return 1;
          }
        }
        return 1;
      }
      v6 = *(int (__thiscall **)(_DWORD *, int))(*this + 0x18);
    }
    else if ( ChunkType == 0x504D4452 )
    {
      v6 = *(int (__thiscall **)(_DWORD *, int))(*this + 0x10);
    }
    else
    {
      if ( ChunkType > 0x4E4C4452 )
      {
        if ( ChunkType != 0x4E4F4349 )
          return 1;
      }
      else if ( ChunkType != 0x4E4C4452 )
      {
        if ( ChunkType != 0x444D4452 && ChunkType != 0x44534452 )
          return 1;
        v5 = (*(int (__thiscall **)(_DWORD *, int))(*this + 0x1C))(this, dword_B3541C);
        goto LABEL_22;
      }
      v6 = *(int (__thiscall **)(_DWORD *, int))(*this + 0x14);
    }
    v5 = v6(this, dword_B3541C);
LABEL_22:
    if ( v5 )
      (*(void (__thiscall **)(int, Data *))(*(_DWORD *)v5 + 0x20))(v5, a1);
    return 1;
  }
  return 0;
}
