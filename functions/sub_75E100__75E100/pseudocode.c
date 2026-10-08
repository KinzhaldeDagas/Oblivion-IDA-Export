int *__thiscall sub_75E100(int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // eax

  v2 = 0; /*0x75e107*/
  *(this + 1) = a2; /*0x75e10d*/
  *(this + 2) = 0; /*0x75e110*/
  if ( a2 )
  {
    v4 = (0x14 * (unsigned __int64)(unsigned int)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x14 * a2;
    v5 = (_DWORD *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x75e13e*/
    {
      v2 = (int)(v5 + 1); /*0x75e146*/
      *v5 = a2; /*0x75e14c*/
      sub_401080(v5 + 1, 0x14, a2, (void *(__thiscall *)(void *))sub_75DF50); /*0x75e14e*/
    }
  }
  *this = v2; /*0x75e153*/
  return this; /*0x75e156*/
}
