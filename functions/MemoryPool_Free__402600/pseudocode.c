_DWORD *__thiscall MemoryPool_Free(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // edx
  unsigned int v4; // eax
  int v5; // ecx

  result = a2;
  if ( a2 )
  {
    *a2 = 0;
    a2[1] = *(this + 0x11);
    v3 = (_DWORD *)*(this + 0x11);
    if ( v3 )
      *v3 = a2;
    ++*(this + 0x45);
    *(this + 0x11) = a2;
    v4 = (unsigned int)a2 - *(this + 0x10);
    v5 = *(this + 0x42);
    v4 >>= 0xC;
    --*(_WORD *)(v5 + 2 * v4);
    return (_DWORD *)(v5 + 2 * v4);
  }
  return result;
}
