_DWORD *__thiscall sub_8F78F0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  const void **v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax

  *(this + 2) = a5; /*0x8f78fb*/
  v6 = (const void **)(this + 3); /*0x8f78ff*/
  *((_WORD *)this + 3) = 1; /*0x8f7902*/
  *this = &off_A9B5CC; /*0x8f7908*/
  *(this + 3) = this + 6; /*0x8f7911*/
  *(this + 4) = 0; /*0x8f7913*/
  *(this + 5) = 0x80000004; /*0x8f791a*/
  v7 = *(_DWORD *)(*(_DWORD *)a2 + 0x10); /*0x8f7924*/
  v8 = *(this + 5) & 0x3FFFFFFF; /*0x8f792a*/
  if ( v8 < v7 ) /*0x8f7931*/
  {
    v9 = 2 * v8; /*0x8f7933*/
    if ( v7 >= v9 ) /*0x8f7937*/
      v9 = *(_DWORD *)(*(_DWORD *)a2 + 0x10); /*0x8f7939*/
    sub_8A6E40(v6, v9, 2); /*0x8f793f*/
  }
  v10 = 0; /*0x8f7947*/
  for ( v6[1] = (const void *)v7; v10 < v7; ++v10 ) /*0x8f794e*/
    *((_WORD *)*v6 + v10) = 0xFFFF; /*0x8f7952*/
  return this; /*0x8f795d*/
}
