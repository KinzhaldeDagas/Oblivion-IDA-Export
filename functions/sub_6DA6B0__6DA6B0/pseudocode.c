LONG __thiscall sub_6DA6B0(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // ebx
  LONG result; // eax

  sub_6EC2A0(this, a2, a3);
  a2[3] = *(this + 3);
  a2[4] = *(this + 4);
  a2[5] = *(this + 5);
  v4 = a2[6];
  if ( v4 == *(this + 6) )
  {
    result = *(this + 7);
    a2[7] = result;
  }
  else
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    result = *(this + 6);
    a2[6] = result;
    if ( result )
      result = InterlockedIncrement((volatile LONG *)(result + 4));
    a2[7] = *(this + 7);
  }
  return result;
}
