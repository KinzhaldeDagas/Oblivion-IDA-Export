int __userpurge sub_90D9C0@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, const void **a3)
{
  const void **v3; // ebx
  int v5; // esi
  signed int v6; // eax
  int v7; // eax
  int result; // eax
  int v9; // esi
  int v10; // ebp
  char *v11; // [esp-Ch] [ebp-18h]
  size_t v12; // [esp-8h] [ebp-14h]

  v3 = a3 + 1; /*0x90d9c9*/
  v5 = *(this + 9); /*0x90d9cf*/
  v6 = (unsigned int)a3[3] & 0x3FFFFFFF; /*0x90d9d2*/
  if ( v6 < v5 ) /*0x90d9d9*/
  {
    v7 = 2 * v6; /*0x90d9db*/
    if ( v5 >= v7 ) /*0x90d9df*/
      v7 = *(this + 9); /*0x90d9e1*/
    sub_8A6E40(a3 + 1, v7, 0x30); /*0x90d9e7*/
  }
  v11 = (char *)*v3; /*0x90d9fa*/
  a3[2] = (const void *)v5; /*0x90d9fb*/
  sub_8B18C0((int)v3, v11, 0xFFFFFFFF, 0x30 * v5); /*0x90d9fe*/
  result = *(this + 9); /*0x90da03*/
  v9 = 0; /*0x90da09*/
  if ( result > 0 ) /*0x90da0d*/
  {
    HIDWORD(v12) = a2; /*0x90da0f*/
    v10 = 0; /*0x90da10*/
    do /*0x90da31*/
    {
      LODWORD(v12) = 0x13; /*0x90da1a*/
      sub_8B1840((char *)*v3 + v10, *(const char **)(*(this + 8) + 4 * v9), v12); /*0x90da20*/
      result = *(this + 9); /*0x90da25*/
      ++v9; /*0x90da2b*/
      v10 += 0x30; /*0x90da2c*/
    }
    while ( v9 < result ); /*0x90da31*/
  }
  return result; /*0x90da34*/
}
