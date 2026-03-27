LONG __thiscall sub_6DA7E0(char *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // edi
  int v5; // ebx

  sub_6EC2B0((int)a2);
  sub_709430(this + 0xC, (signed int)a2);
  result = sub_712A90(a2);
  v4 = *((_DWORD *)this + 6);
  v5 = result;
  if ( v4 != result )
  {
    if ( v4 )
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *((_DWORD *)this + 6) = v5;
    if ( v5 )
      return InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  return result;
}
