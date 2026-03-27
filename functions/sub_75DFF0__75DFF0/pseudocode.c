void __thiscall sub_75DFF0(float *this, int a2, float a3)
{
  int v4; // esi

  v4 = *((_DWORD *)this + 3);
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *((_DWORD *)this + 3) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  *(this + 4) = a3;
}
