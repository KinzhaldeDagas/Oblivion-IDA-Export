void __cdecl TESTexture_Load(int arg0, Data *a1)
{
  char v2[12]; // [esp+0h] [ebp-10h] BYREF

  if ( a1 )
  {
    if ( arg0 )
    {
      if ( a1->currentChunk.length )
      {
        _alloca_();
        TESFile_GetChunkData(a1, v2, 0);
        BSStringT_Set((BSStringT *)(arg0 + 4), v2, 0);
      }
      else
      {
        FormHeapFree(*(_DWORD *)(arg0 + 4));
        *(_DWORD *)(arg0 + 4) = 0;
        *(_WORD *)(arg0 + 0xA) = 0;
        *(_WORD *)(arg0 + 8) = 0;
      }
    }
  }
}
