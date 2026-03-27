void __thiscall sub_6D2B70(float *this, float a2)
{
  int v3; // esi

  v3 = *((_DWORD *)this + 4);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *(this + 4) = 0.0;
  }
  *(this + 3) = a2;
}
