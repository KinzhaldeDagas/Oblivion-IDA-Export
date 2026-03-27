int __thiscall sub_57DC60(_DWORD *this, float a2)
{
  unsigned int v2; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int result; // eax
  int v9; // eax
  double v10; // st7
  double v11; // st6

  v2 = Seed;
  if ( flt_B135B0 < 0.0 )
    return 0;
  if ( *(this + 0x47) == 0x80000001 && (LOBYTE(v4) = InputGlobals::QueryKeyboardState(OSGlobals->input, 0xCB, 0), !v4)
    || *(this + 0x47) == 0x80000002 && (LOBYTE(v5) = InputGlobals::QueryKeyboardState(OSGlobals->input, 0xCD, 0), !v5)
    || *(this + 0x47) == 0x80000003 && (LOBYTE(v6) = InputGlobals::QueryKeyboardState(OSGlobals->input, 0xC8, 0), !v6)
    || *(this + 0x47) == 0x80000004 && (LOBYTE(v7) = InputGlobals::QueryKeyboardState(OSGlobals->input, 0xD0, 0), !v7) )
  {
    *(this + 0x47) = 0;
    return 0;
  }
  v9 = *(this + 0x49);
  if ( v9 )
  {
    v10 = (double)(int)(v2 - v9);
    if ( (int)(v2 - v9) < 0 )
      v10 = v10 + flt_A2FC78;
    v11 = flt_B135B8 / a2;
  }
  else
  {
    v10 = (double)(int)(v2 - *(this + 0x48));
    if ( (int)(v2 - *(this + 0x48)) < 0 )
      v10 = v10 + flt_A2FC78;
    v11 = flt_B135B0;
  }
  if ( v11 > v10 )
    return 0;
  result = *(this + 0x47);
  *(this + 0x49) = v2;
  return result;
}
