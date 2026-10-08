int *__thiscall sub_772360(int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // eax

  v2 = 0; /*0x772367*/
  *(this + 1) = a2; /*0x77236d*/
  *(this + 2) = 0; /*0x772370*/
  if ( a2 )
  {
    v4 = (0x60 * (unsigned __int64)(unsigned int)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x60 * a2;
    v5 = (_DWORD *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x77239e*/
    {
      v2 = (int)(v5 + 1); /*0x7723a6*/
      *v5 = a2; /*0x7723ac*/
      sub_401080(v5 + 1, 0x60, a2, (void *(__thiscall *)(void *))sub_7720D0); /*0x7723ae*/
    }
  }
  *this = v2; /*0x7723b3*/
  return this; /*0x7723b6*/
}
