int __thiscall sub_9A4310(_WORD *this)
{
  int result; // eax
  unsigned __int16 i; // bp
  int v4; // edx
  int v5; // esi
  _DWORD *v6; // ebx

  result = 0;
  for ( i = 0; i < *(this + 5); ++i )
  {
    v4 = *((_DWORD *)this + 1);
    v5 = *(_DWORD *)(v4 + 4 * i);
    v6 = (_DWORD *)(v4 + 4 * i);
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      *v6 = 0;
      result = 0;
    }
  }
  *(this + 6) = 0;
  *(this + 5) = 0;
  return result;
}
