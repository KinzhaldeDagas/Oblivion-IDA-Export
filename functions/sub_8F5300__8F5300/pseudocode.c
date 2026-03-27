char *__thiscall sub_8F5300(char *this, _OWORD *a2, int a3)
{
  char *result; // eax
  char *v5; // esi
  int v6; // ecx

  result = this;
  *((_WORD *)this + 3) = 1;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &off_A9B328;
  if ( a3 > 0 )
  {
    v5 = this + 0x10;
    v6 = a3;
    do
    {
      *(_OWORD *)v5 = *a2++;
      v5 += 0x10;
      --v6;
    }
    while ( v6 );
  }
  *((_DWORD *)result + 3) = a3;
  return result;
}
