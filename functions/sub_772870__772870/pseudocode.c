int *__thiscall sub_772870(int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // eax

  v2 = 0;
  *(this + 1) = a2;
  *(this + 2) = 0;
  if ( a2 )
  {
    v4 = (0x14 * (unsigned __int64)(unsigned int)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x14 * a2;
    v5 = (_DWORD *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 )
    {
      v2 = (int)(v5 + 1);
      *v5 = a2;
      sub_401080(v5 + 1, 0x14, a2, (void *(__thiscall *)(void *))sub_7726A0);
    }
  }
  *this = v2;
  return this;
}
