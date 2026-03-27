int *__thiscall sub_56B920(int *this, unsigned int size)
{
  int v3; // edi
  unsigned int v4; // ecx
  unsigned int *v5; // eax

  v3 = 0;
  *(this + 1) = size;
  *(this + 2) = 0;
  if ( size )
  {
    v4 = (unsigned __int64)size >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * size;
    v5 = (unsigned int *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 )
    {
      v3 = (int)(v5 + 1);
      *v5 = size;
      ArrayConstructor(v5 + 1, 0x10u, size, (int)sub_56B7F0, (void (__thiscall *)(void *))sub_56B820);
    }
  }
  *this = v3;
  return this;
}
