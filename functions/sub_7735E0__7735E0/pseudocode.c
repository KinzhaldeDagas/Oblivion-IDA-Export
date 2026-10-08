_BYTE *sub_7735E0()
{
  unsigned int *v0; // ecx
  _DWORD *v1; // esi
  _BYTE ***v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // ecx
  _BYTE *result; // eax

  v0 = (unsigned int *)unk_B42838; /*0x7735e0*/
  v1 = (_DWORD *)(unk_B42838 + 8); /*0x7735eb*/
  v2 = (_BYTE ***)unk_B42838; /*0x7735ef*/
  if ( !*v1 ) /*0x7735e6*/
  {
    v3 = v0 + 3; /*0x7735f7*/
    sub_7734E0(v0, v0[3]); /*0x7735fb*/
    *v3 *= 2; /*0x773604*/
  }
  v4 = *v2; /*0x773607*/
  result = **v2; /*0x773609*/
  *v4 = v4[--*v1]; /*0x773613*/
  if ( !*result ) /*0x773615*/
    *result = 1; /*0x77361c*/
  return result; /*0x773618*/
}
