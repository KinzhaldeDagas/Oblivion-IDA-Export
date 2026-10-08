int __thiscall sub_91CC30(char *this, int *a2)
{
  char *v3; // eax
  char *v4; // eax
  int result; // eax
  int v6; // esi
  char *v7; // ebx

  if ( this ) /*0x91cc37*/
    v3 = this + 0x28; /*0x91cc39*/
  else
    v3 = 0; /*0x91cc3e*/
  sub_898A30(a2, (int)v3); /*0x91cc47*/
  if ( this ) /*0x91cc4e*/
    v4 = this + 0x2C; /*0x91cc50*/
  else
    v4 = 0; /*0x91cc55*/
  sub_898A80(a2, (int)v4); /*0x91cc5a*/
  result = a2[0x2F]; /*0x91cc5f*/
  v6 = 0; /*0x91cc65*/
  if ( result > 0 ) /*0x91cc69*/
  {
    v7 = this + 0x28; /*0x91cc6b*/
    do /*0x91cc8a*/
    {
      (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v7 + 8))(v7, *(_DWORD *)(a2[0x2E] + 4 * v6)); /*0x91cc7e*/
      result = a2[0x2F]; /*0x91cc81*/
      ++v6; /*0x91cc87*/
    }
    while ( v6 < result ); /*0x91cc8a*/
  }
  return result; /*0x91cc8c*/
}
