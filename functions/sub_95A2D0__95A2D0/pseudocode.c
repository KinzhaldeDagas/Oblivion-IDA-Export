float *__thiscall sub_95A2D0(float *this, int a2)
{
  float v3; // edi
  int v4; // edi

  *this = 0.0;
  *(this + 1) = 0.0;
  *(this + 0xD) = 0.0;
  *(this + 0xE) = 0.0;
  *(this + 0xF) = 0.0;
  *(this + 0x10) = 0.0;
  v3 = *this;
  if ( *(_DWORD *)this != a2 )
  {
    if ( v3 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v3) + 4)) )
      (**(void (__thiscall ***)(float, int))LODWORD(v3))(COERCE_FLOAT(LODWORD(v3)), 1);
    *(_DWORD *)this = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v4 = *((_DWORD *)this + 1);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 1) = 0.0;
  }
  return this;
}
