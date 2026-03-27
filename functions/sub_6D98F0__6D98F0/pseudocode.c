int __thiscall sub_6D98F0(_DWORD *this, _DWORD *a2, int a3)
{
  int result; // eax
  int v5; // ebx

  sub_6EC2A0(this, a2, a3);
  a2[3] = *(this + 3);
  a2[4] = *(this + 4);
  result = *(this + 5);
  a2[5] = result;
  a2[6] = *(this + 6);
  v5 = a2[7];
  if ( v5 == *(this + 7) )
  {
    a2[8] = *(this + 8);
  }
  else
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    result = *(this + 7);
    a2[7] = result;
    if ( result )
    {
      InterlockedIncrement((volatile LONG *)(result + 4));
      result = *(this + 8);
      a2[8] = result;
    }
    else
    {
      a2[8] = *(this + 8);
    }
  }
  return result;
}
