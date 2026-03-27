char __thiscall sub_52B1F0(void **this, Data *a1)
{
  int v2; // edi
  signed int ChunkType; // eax
  int v6; // eax
  int length; // edi
  char v8[12]; // [esp+0h] [ebp-14h] BYREF
  void **v9; // [esp+Ch] [ebp-8h] BYREF
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v2 = 0;
  v9 = this;
  if ( !a1 )
    return 0;
  ChunkType = TESFile_GetChunkType(a1);
  if ( ChunkType > 0x52484353 )
  {
    if ( ChunkType == 0x54445351 )
    {
      *(this + 0x17) = (void *)a1->currentRecordOffset;
      TESFile_GetChunkData(a1, (char *)this, 1u);
    }
  }
  else
  {
    switch ( ChunkType )
    {
      case 0x52484353:
        TESFile_GetChunkData(a1, (char *)this + 0x24, 0);
        TESTexture::ClearComponentReferences(this + 9);
        break;
      case 0x41444353:
        length = a1->currentChunk.length;
        _alloca_();
        _memset(v8, 0, length);
        TESFile_GetChunkData(a1, v8, 0);
        sub_4F9DF0(v9 + 3, (char)&savedregs, length, length, v8);
        break;
      case 0x4F524353:
        v6 = FormHeapAlloc(0x10u);
        if ( v6 )
        {
          *(_DWORD *)v6 = 0;
          *(_WORD *)(v6 + 4) = 0;
          *(_WORD *)(v6 + 6) = 0;
          *(_DWORD *)(v6 + 8) = 0;
          *(_DWORD *)(v6 + 0xC) = 0;
          v2 = v6;
        }
        TESFile_GetChunkData4(a1, (char *)&v9);
        *(_DWORD *)(v2 + 8) = v9;
        BSSimpleList_PushBack(this + 0x13, v2);
        break;
    }
  }
  return 1;
}
