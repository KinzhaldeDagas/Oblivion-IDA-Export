unsigned int __thiscall sub_53B6E0(_DWORD *this)
{
  signed int i; // edi
  int v3; // esi
  unsigned int result; // eax

  for ( i = 0; i < 2; i = (i + 1) % 3u )
  {
    v3 = *(this + i + 2);
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      *(this + i + 2) = 0;
    }
    result = (i + 1) / 3u;
  }
  return result;
}
