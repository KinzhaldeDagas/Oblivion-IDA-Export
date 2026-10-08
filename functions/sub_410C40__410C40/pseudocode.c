char __cdecl sub_410C40(const char *a1, char a2)
{
  int v2; // ecx
  int v3; // eax
  char result; // al

  if ( MEMORY[0xB33428] ) /*0x410c4a*/
  {
    if ( unk_B3342C ) /*0x410c52*/
      PrintError("Trying to pause a movie while another movie is already paused.  This is not currently supported."); /*0x410c59*/
    BinkPause(*(_DWORD *)MEMORY[0xB33428], 1); /*0x410c6b*/
    unk_B3342C = MEMORY[0xB33428]; /*0x410c77*/
    MEMORY[0xB33428] = 0; /*0x410c7d*/
  }
  if ( unk_B33431 && (v2 = unk_B33440) != 0 ) /*0x410c93*/
  {
    unk_B33440 = 0; /*0x410c95*/
    unk_B33431 = 0; /*0x410c9b*/
  }
  else
  {
    v3 = FormHeapAlloc(0x28u); /*0x410ca5*/
    if ( v3 ) /*0x410caf*/
    {
      *(_DWORD *)v3 = 0; /*0x410cb3*/
      *(float *)(v3 + 0x14) = 1.0; /*0x410cb5*/
      *(_DWORD *)(v3 + 4) = 0; /*0x410cb8*/
      *(_DWORD *)(v3 + 8) = 0; /*0x410cbd*/
      *(float *)(v3 + 0x18) = 0.0; /*0x410cc0*/
      *(_DWORD *)(v3 + 0xC) = 0; /*0x410cc3*/
      *(float *)(v3 + 0x1C) = 0.0; /*0x410cc6*/
      *(_DWORD *)(v3 + 0x10) = 0; /*0x410cc9*/
      *(_DWORD *)(v3 + 0x20) = 0; /*0x410ccc*/
      *(_BYTE *)(v3 + 0x24) = 0; /*0x410ccf*/
    }
    else
    {
      v3 = 0; /*0x410cd4*/
    }
    v2 = v3; /*0x410cd6*/
  }
  MEMORY[0xB33428] = v2; /*0x410ce2*/
  result = sub_4105F0(v2, a1, a2); /*0x410ce8*/
  if ( !result ) /*0x410cf4*/
  {
    sub_410B00(); /*0x410cf6*/
    return 0; /*0x410cfb*/
  }
  return result; /*0x410cf3*/
}
