int __thiscall sub_57DC60(_DWORD *this, float a2)
{
  int v2; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int result; // eax
  int v9; // eax
  double v10; // st7
  double v11; // st6

  v2 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x57dc6b*/
  if ( flt_B135B0 < 0.0 ) /*0x57dc78*/
    return 0; /*0x57dc78*/
  if ( *(this + 0x47) == 0x80000001 /*0x57dd0e*/
    && (LOBYTE(v4) = InputGlobals::QueryKeyboardState(MEMORY[0xB33398]->input, 0xCB, 0), !v4)
    || *(this + 0x47) == 0x80000002
    && (LOBYTE(v5) = InputGlobals::QueryKeyboardState(MEMORY[0xB33398]->input, 0xCD, 0), !v5)
    || *(this + 0x47) == 0x80000003
    && (LOBYTE(v6) = InputGlobals::QueryKeyboardState(MEMORY[0xB33398]->input, 0xC8, 0), !v6)
    || *(this + 0x47) == 0x80000004
    && (LOBYTE(v7) = InputGlobals::QueryKeyboardState(MEMORY[0xB33398]->input, 0xD0, 0), !v7) )
  {
    *(this + 0x47) = 0; /*0x57dd10*/
    return 0; /*0x57dd1f*/
  }
  v9 = *(this + 0x49); /*0x57dd22*/
  if ( v9 ) /*0x57dd2a*/
  {
    v10 = (double)(v2 - v9); /*0x57dd58*/
    if ( v2 - v9 < 0 ) /*0x57dd5c*/
      v10 = v10 + flt_A2FC78; /*0x57dd5e*/
    v11 = flt_B135B8 / a2; /*0x57dd6a*/
  }
  else
  {
    v10 = (double)(v2 - *(this + 0x48)); /*0x57dd3a*/
    if ( v2 - *(this + 0x48) < 0 ) /*0x57dd3e*/
      v10 = v10 + flt_A2FC78; /*0x57dd40*/
    v11 = flt_B135B0; /*0x57dd46*/
  }
  if ( v11 > v10 ) /*0x57dd75*/
    return 0; /*0x57dd75*/
  result = *(this + 0x47); /*0x57dd77*/
  *(this + 0x49) = v2; /*0x57dd7d*/
  return result; /*0x57dd1a*/
}
