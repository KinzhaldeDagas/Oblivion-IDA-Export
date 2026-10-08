// Verified: serializes each Oblivion weather entry as TESWeather FormID plus uint32 selectionWeight at +4; shared by climate WLS(T) and region RDWT.
void __userpurge OblivionTESWeatherList_SaveChunk(signed int a1@<ecx>, int a2@<esi>, int a3)
{
  signed int v3; // edi
  unsigned int v4; // eax
  __int64 v5; // rax
  _DWORD *v6; // esi
  int v7; // ecx
  _DWORD *v8; // eax
  size_t v9; // [esp-8h] [ebp-Ch]

  v3 = a1; /*0x4eeb31*/
  v4 = 0; /*0x4eeb33*/
  if ( a1 ) /*0x4eeb37*/
  {
    do /*0x4eeb4d*/
    {
      if ( *(_DWORD *)a1 ) /*0x4eeb40*/
        ++v4; /*0x4eeb45*/
      a1 = *(_DWORD *)(a1 + 4); /*0x4eeb48*/
    }
    while ( a1 ); /*0x4eeb4d*/
    if ( v4 ) /*0x4eeb51*/
    {
      v5 = 8LL * v4; /*0x4eeb58*/
      LOBYTE(a1) = HIDWORD(v5) != 0; /*0x4eeb5a*/
      HIDWORD(v9) = a2; /*0x4eeb5d*/
      v6 = (_DWORD *)FormHeapAlloc(v5 | -a1); /*0x4eeb6b*/
      v7 = 0; /*0x4eeb6d*/
      v8 = (_DWORD *)v3; /*0x4eeb6f*/
      do /*0x4eeb8c*/
      {
        v6[2 * v7] = *(_DWORD *)(*(_DWORD *)*v8 + 0xC); /*0x4eeb78*/
        v6[2 * v7 + 1] = *(_DWORD *)(*v8 + 4); /*0x4eeb80*/
        v8 = (_DWORD *)v8[1]; /*0x4eeb84*/
        ++v7; /*0x4eeb87*/
      }
      while ( v8 ); /*0x4eeb8c*/
      LODWORD(v9) = 8 * v7; /*0x4eeb99*/
      TESForm_PutFormRecordChunkData(a3, v6, v9); /*0x4eeb9c*/
      FormHeapFree((unsigned int)v6); /*0x4eeba2*/
    }
  }
}
