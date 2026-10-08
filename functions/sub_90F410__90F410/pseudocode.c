_BYTE *__thiscall sub_90F410(int *this, _BYTE *a2, int a3)
{
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax

  v3 = *(this + 0x49); /*0x90f411*/
  v4 = 0; /*0x90f417*/
  if ( v3 <= 0 ) /*0x90f41b*/
  {
LABEL_5:
    *a2 = 0; /*0x90f43c*/
    return a2; /*0x90f43c*/
  }
  else
  {
    v5 = (_DWORD *)(*(this + 0x48) + 4); /*0x90f427*/
    while ( *v5 != a3 ) /*0x90f432*/
    {
      ++v4; /*0x90f434*/
      v5 += 2; /*0x90f435*/
      if ( v4 >= v3 ) /*0x90f43a*/
        goto LABEL_5; /*0x90f43a*/
    }
    *a2 = 1; /*0x90f44b*/
    return a2; /*0x90f447*/
  }
}
