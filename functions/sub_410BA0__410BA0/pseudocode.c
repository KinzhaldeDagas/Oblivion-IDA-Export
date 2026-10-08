char __cdecl sub_410BA0(const char *ArgList, char a2, char a3, char a4, char a5, float a6, char a7)
{
  int v7; // eax
  char v8; // bl

  if ( !a7 ) /*0x410ba7*/
  {
    sub_410340(); /*0x410ba9*/
    if ( unk_B33431 && (v7 = unk_B33440) != 0 ) /*0x410bbd*/
    {
      unk_B33440 = 0; /*0x410bbf*/
      unk_B33431 = 0; /*0x410bc5*/
    }
    else
    {
      v7 = FormHeapAlloc(0x28u); /*0x410bcf*/
      if ( v7 ) /*0x410bd9*/
      {
        *(_DWORD *)v7 = 0; /*0x410bdd*/
        *(float *)(v7 + 0x14) = 1.0; /*0x410bdf*/
        *(_DWORD *)(v7 + 4) = 0; /*0x410be2*/
        *(_DWORD *)(v7 + 8) = 0; /*0x410be7*/
        *(float *)(v7 + 0x18) = 0.0; /*0x410bea*/
        *(_DWORD *)(v7 + 0xC) = 0; /*0x410bed*/
        *(float *)(v7 + 0x1C) = 0.0; /*0x410bf0*/
        *(_DWORD *)(v7 + 0x10) = 0; /*0x410bf3*/
        *(_DWORD *)(v7 + 0x20) = 0; /*0x410bf6*/
        *(_BYTE *)(v7 + 0x24) = 0; /*0x410bf9*/
      }
      else
      {
        v7 = 0; /*0x410bfe*/
      }
    }
    MEMORY[0xB33428] = v7; /*0x410c00*/
  }
  v8 = sub_410A70((_DWORD *)MEMORY[0xB33428], ArgList, a2, a3, a4, a5, a6); /*0x410c2e*/
  sub_410B00(); /*0x410c30*/
  return v8; /*0x410c37*/
}
