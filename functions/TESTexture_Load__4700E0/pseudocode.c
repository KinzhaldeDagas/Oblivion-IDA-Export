void __cdecl TESTexture_Load(int arg0, Data *a1)
{
  int v2[3]; // [esp+0h] [ebp-10h] BYREF

  if ( a1 ) /*0x4700f8*/
  {
    if ( arg0 ) /*0x4700ff*/
    {
      if ( a1->currentChunk.length ) /*0x470101*/
      {
        _alloca_(v2[0]); /*0x47010b*/
        TESFile_GetChunkData(a1, (char *)v2, 0); /*0x470117*/
        BSStringT_Set((BSStringT *)(arg0 + 4), (const char *)v2, 0); /*0x470122*/
      }
      else
      {
        FormHeapFree(*(_DWORD *)(arg0 + 4)); /*0x47013f*/
        *(_DWORD *)(arg0 + 4) = 0; /*0x470147*/
        *(_WORD *)(arg0 + 0xA) = 0; /*0x47014a*/
        *(_WORD *)(arg0 + 8) = 0; /*0x47014e*/
      }
    }
  }
}
