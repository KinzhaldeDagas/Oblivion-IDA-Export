LONG __thiscall sub_723350(unsigned __int16 *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  LONG result; // eax
  int v7; // esi
  LONG v8; // ebx

  sub_7081B0(this, a2);
  v3 = sub_7124A0(a2);
  v4 = *((_DWORD *)this + 0x2D);
  v5 = v3;
  if ( v4 != v3 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *((_DWORD *)this + 0x2D) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  result = sub_7124A0(a2);
  v7 = *((_DWORD *)this + 0x2E);
  v8 = result;
  if ( v7 != result )
  {
    if ( v7 )
    {
      result = InterlockedDecrement((volatile LONG *)(v7 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *((_DWORD *)this + 0x2E) = v8;
    if ( v8 )
      return InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  return result;
}
