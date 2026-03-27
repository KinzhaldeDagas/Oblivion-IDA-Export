char __thiscall sub_497470(_DWORD *this, Data *a1)
{
  unsigned int length; // esi
  char *v4; // eax

  if ( TESFile_GetChunkType(a1) != 0x44475258 )
    return 0;
  length = a1->currentChunk.length;
  *(_BYTE *)this = length / 0x1C;
  if ( length % (unsigned __int8)(length / 0x1C) )
  {
    *(_BYTE *)this = 0;
    return 0;
  }
  else
  {
    v4 = (char *)FormHeapAlloc(
                   (0x1C * (unsigned __int64)(unsigned __int8)(length / 0x1C)) >> 0x20 != 0
                 ? 0xFFFFFFFF
                 : 0x1C * (unsigned __int8)(length / 0x1C));
    *(this + 1) = v4;
    TESFile_GetChunkData(a1, v4, length);
    return 1;
  }
}
