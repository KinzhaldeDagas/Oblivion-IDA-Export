char __thiscall sub_6EAF50(int this, float a2, int a3, _DWORD *a4)
{
  _DWORD *v5; // esi

  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6eaf54*/
    a2 = *(float *)(this + 0x20); /*0x6eaf59*/
  if ( flt_A79F00 == a2 ) /*0x6eaf70*/
    return 0; /*0x6eaf74*/
  v5 = (_DWORD *)(this + 0x30); /*0x6eaf82*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(this + 0x18) + 0x50))( /*0x6eaf91*/
         *(_DWORD *)(this + 0x18),
         LODWORD(a2),
         a3,
         this + 0x30) )
  {
    *a4 = *v5; /*0x6eaf9d*/
    a4[1] = v5[1]; /*0x6eafa2*/
    a4[2] = v5[2]; /*0x6eafa8*/
    a4[3] = v5[3]; /*0x6eafae*/
    return 1; /*0x6eafb1*/
  }
  else
  {
    *a4 = dword_B24FD4; /*0x6eafbd*/
    a4[1] = dword_B24FD8; /*0x6eafc5*/
    a4[2] = dword_B24FDC; /*0x6eafce*/
    a4[3] = dword_B24FE0; /*0x6eafd7*/
    *v5 = *a4; /*0x6eafdc*/
    v5[1] = a4[1]; /*0x6eafe1*/
    v5[2] = a4[2]; /*0x6eafe7*/
    v5[3] = a4[3]; /*0x6eafed*/
    return 0; /*0x6eaff0*/
  }
}
