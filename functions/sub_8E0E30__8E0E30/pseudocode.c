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

  v4 = *this;
  result = v4 + 4 * a2;
  v6 = v4 + 4 * a3 - 4;
  if ( result < v6 )
  {
    v7 = ((v6 - result - 1) >> 2) + 1;
    v8 = (const void *)(result + 4);
    v9 = (void *)result;
    result += 4 * v7;
    qmemcpy(v9, v8, 4 * v7);
  }
  v10 = *(this + 1) - 2;
  v11 = *this + 4 * v10;
  *(this + 1) = v10;
  if ( result < v11 )
    qmemcpy((void *)result, (const void *)(result + 8), 4 * (((v11 - result - 1) >> 2) + 1));
  return result;
}
