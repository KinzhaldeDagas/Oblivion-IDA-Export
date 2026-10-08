int *__thiscall sub_7733D0(int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // eax

  v2 = 0; /*0x7733d7*/
  *(this + 1) = a2; /*0x7733dd*/
  *(this + 2) = 0; /*0x7733e0*/
  if ( a2 )
  {
    v4 = (0xB8 * (unsigned __int64)(unsigned int)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0xB8 * a2;
    v5 = (_DWORD *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x77340e*/
    {
      v2 = (int)(v5 + 1); /*0x773416*/
      *v5 = a2; /*0x77341f*/
      sub_401080(v5 + 1, 0xB8, a2, (void *(__thiscall *)(void *))sub_772F30); /*0x773421*/
    }
  }
  *this = v2; /*0x773426*/
  return this; /*0x773429*/
}
