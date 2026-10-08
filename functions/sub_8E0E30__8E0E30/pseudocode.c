unsigned int __thiscall sub_8E0E30(int *this, int a2, int a3)
{
  int v4; // ecx
  unsigned int result; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  const void *v8; // esi
  void *v9; // edi
  int v10; // esi
  unsigned int v11; // ecx

  v4 = *this; /*0x8e0e36*/
  result = v4 + 4 * a2; /*0x8e0e3d*/
  v6 = v4 + 4 * a3 - 4; /*0x8e0e40*/
  if ( result < v6 ) /*0x8e0e47*/
  {
    v7 = ((v6 - result - 1) >> 2) + 1; /*0x8e0e4f*/
    v8 = (const void *)(result + 4); /*0x8e0e53*/
    v9 = (void *)result; /*0x8e0e56*/
    result += 4 * v7; /*0x8e0e58*/
    qmemcpy(v9, v8, 4 * v7); /*0x8e0e5b*/
  }
  v10 = *(this + 1) - 2; /*0x8e0e61*/
  v11 = *this + 4 * v10; /*0x8e0e66*/
  *(this + 1) = v10; /*0x8e0e6b*/
  if ( result < v11 ) /*0x8e0e6e*/
    qmemcpy((void *)result, (const void *)(result + 8), 4 * (((v11 - result - 1) >> 2) + 1)); /*0x8e0e7c*/
  return result; /*0x8e0e7e*/
}
