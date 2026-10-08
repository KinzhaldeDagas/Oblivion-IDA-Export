char __thiscall sub_52B1F0(void **this, Data *a1)
{
  int v2; // edi
  signed int ChunkType; // eax
  int v6; // eax
  UInt32 length; // edi
  int v8[3]; // [esp+0h] [ebp-14h] BYREF
  void **v9; // [esp+Ch] [ebp-8h] BYREF
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v2 = 0; /*0x52b206*/
  v9 = this; /*0x52b20c*/
  if ( !a1 ) /*0x52b20f*/
    return 0; /*0x52b211*/
  ChunkType = TESFile_GetChunkType(a1); /*0x52b21a*/
  if ( ChunkType > 0x52484353 ) /*0x52b224*/
  {
    if ( ChunkType == 0x54445351 ) /*0x52b2cd*/
    {
      *(this + 0x17) = (void *)a1->currentRecordOffset; /*0x52b2da*/
      TESFile_GetChunkData(a1, (char *)this, 1u); /*0x52b2dd*/
    }
  }
  else
  {
    switch ( ChunkType ) /*0x52b22a*/
    {
      case 0x52484353: /*0x52b22a*/
        TESFile_GetChunkData(a1, (char *)this + 0x24, 0); /*0x52b2ba*/
        Shared_NoOpVirtual_60D0A0(this + 9); /*0x52b2c1*/
        break;
      case 0x41444353: /*0x52b22a*/
        length = a1->currentChunk.length; /*0x52b27e*/
        _alloca_(v8[0]); /*0x52b286*/
        _memset((int)v8, 0, length); /*0x52b291*/
        TESFile_GetChunkData(a1, (char *)v8, 0); /*0x52b29e*/
        Script_SetCompiledData(v9 + 3, (char)&savedregs, length, length, v8); /*0x52b2ab*/
        break;
      case 0x4F524353: /*0x52b22a*/
        v6 = FormHeapAlloc(0x10u); /*0x52b244*/
        if ( v6 ) /*0x52b24e*/
        {
          *(_DWORD *)v6 = 0; /*0x52b250*/
          *(_WORD *)(v6 + 4) = 0; /*0x52b252*/
          *(_WORD *)(v6 + 6) = 0; /*0x52b256*/
          *(_DWORD *)(v6 + 8) = 0; /*0x52b25a*/
          *(_DWORD *)(v6 + 0xC) = 0; /*0x52b25d*/
          v2 = v6; /*0x52b260*/
        }
        TESFile_GetChunkData4(a1, (char *)&v9); /*0x52b268*/
        *(_DWORD *)(v2 + 8) = v9; /*0x52b270*/
        BSSimpleList_PushBack(this + 0x13, v2); /*0x52b277*/
        break;
    }
  }
  return 1; /*0x52b2e7*/
}
