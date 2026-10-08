int *sub_60DEA0()
{
  int v0; // ecx
  int *result; // eax

LABEL_1:
  v0 = unk_B3B800; /*0x60dea0*/
  result = (int *)unk_B3B804; /*0x60dea6*/
  while ( result || v0 ) /*0x60deb6*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v0 + 0x148))(v0); /*0x60dec0*/
    result = (int *)unk_B3B804; /*0x60dec2*/
    if ( unk_B3B804 ) /*0x60dec2*/
    {
      unk_B3B804 = result[1]; /*0x60dece*/
      unk_B3B800 = *result; /*0x60ded7*/
      FormHeapFree((unsigned int)result); /*0x60dedd*/
      goto LABEL_1; /*0x60dee5*/
    }
    v0 = 0; /*0x60dee7*/
    unk_B3B800 = 0; /*0x60dee9*/
  }
  return result; /*0x60def1*/
}
