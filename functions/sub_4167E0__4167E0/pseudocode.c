_DWORD *sub_4167E0()
{
  int v0; // eax
  _DWORD *result; // eax
  _DWORD *v2; // ecx
  int v3; // edi
  unsigned int v4; // eax

  v0 = 0; /*0x4167e6*/
  if ( unk_B3350C ) /*0x4167ea*/
  {
    while ( !*(_DWORD *)(unk_B33510 + 4 * v0) ) /*0x4167f6*/
    {
      if ( ++v0 >= (unsigned int)unk_B3350C ) /*0x4167fd*/
        goto LABEL_4; /*0x4167fd*/
    }
    result = *(_DWORD **)(unk_B33510 + 4 * v0); /*0x416814*/
  }
  else
  {
LABEL_4:
    result = 0; /*0x4167ff*/
  }
  while ( result ) /*0x416803*/
  {
    v2 = (_DWORD *)*result; /*0x416807*/
    v3 = result[2]; /*0x41680b*/
    if ( !*result ) /*0x41680e*/
    {
      v4 = (*(int (__thiscall **)(void *, _DWORD))(MEMORY[0xB33508] + 4))(&MEMORY[0xB33508], result[1]) + 1; /*0x416833*/
      if ( v4 >= unk_B3350C ) /*0x416838*/
      {
LABEL_12:
        result = 0; /*0x41684e*/
        goto LABEL_13; /*0x41684e*/
      }
      while ( 1 ) /*0x416840*/
      {
        v2 = *(_DWORD **)(unk_B33510 + 4 * v4); /*0x416840*/
        if ( v2 ) /*0x416845*/
          break; /*0x416845*/
        if ( ++v4 >= unk_B3350C ) /*0x41684c*/
          goto LABEL_12; /*0x41684c*/
      }
    }
    result = v2; /*0x416810*/
LABEL_13:
    if ( v3 ) /*0x416852*/
      *(_DWORD *)(v3 + 0x58) &= ~0x200000u; /*0x416854*/
  }
  return result; /*0x416861*/
}
