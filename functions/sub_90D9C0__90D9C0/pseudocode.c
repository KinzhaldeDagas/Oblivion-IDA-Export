int __userpurge sub_90D9C0@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, const void **a3)
{
  char **v3; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int result; // eax
  int v9; // esi
  int v10; // ebp
  char *v11; // [esp-Ch] [ebp-18h]
  size_t v12; // [esp-8h] [ebp-14h]

  v3 = (char **)(a3 + 1);
  v5 = *(this + 9);
  v6 = (unsigned int)a3[3] & 0x3FFFFFFF;
  if ( v6 < v5 )
  {
    v7 = 2 * v6;
    if ( v5 >= v7 )
      v7 = *(this + 9);
    sub_8A6E40(a3 + 1, v7, 0x30);
  }
  v11 = *v3;
  a3[2] = (const void *)v5;
  sub_8B18C0((int)v3, v11, 0xFFFFFFFF, 0x30 * v5);
  result = *(this + 9);
  v9 = 0;
  if ( result > 0 )
  {
    HIDWORD(v12) = a2;
    v10 = 0;
    do
    {
      LODWORD(v12) = 0x13;
      sub_8B1840(&(*v3)[v10], *(const char **)(*(this + 8) + 4 * v9), v12);
      result = *(this + 9);
      ++v9;
      v10 += 0x30;
    }
    while ( v9 < result );
  }
  return result;
}
