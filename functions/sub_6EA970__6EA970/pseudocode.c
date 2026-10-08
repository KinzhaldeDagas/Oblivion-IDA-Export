char __thiscall sub_6EA970(int this, float a2, int a3, _DWORD *a4)
{
  _DWORD *v5; // esi

  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6ea974*/
    a2 = *(float *)(this + 0x20); /*0x6ea979*/
  if ( flt_A79F00 == a2 ) /*0x6ea990*/
    return 0; /*0x6ea994*/
  v5 = (_DWORD *)(this + 0x30); /*0x6ea9a2*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(this + 0x18) + 0x54))( /*0x6ea9b1*/
         *(_DWORD *)(this + 0x18),
         LODWORD(a2),
         a3,
         this + 0x30) )
  {
    *a4 = *v5; /*0x6ea9bd*/
    a4[1] = v5[1]; /*0x6ea9c2*/
    a4[2] = v5[2]; /*0x6ea9c8*/
    return 1; /*0x6ea9cb*/
  }
  else
  {
    *v5 = dword_B24FC8; /*0x6ea9d7*/
    v5[1] = dword_B24FCC; /*0x6ea9de*/
    v5[2] = dword_B24FD0; /*0x6ea9eb*/
    *a4 = *v5; /*0x6ea9f0*/
    a4[1] = v5[1]; /*0x6ea9f5*/
    a4[2] = v5[2]; /*0x6ea9fb*/
    return 0; /*0x6ea9fe*/
  }
}
