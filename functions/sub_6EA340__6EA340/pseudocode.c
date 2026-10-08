char __thiscall sub_6EA340(int this, float a2, int a3, _DWORD *a4)
{
  _DWORD *v5; // esi

  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6ea344*/
    a2 = *(float *)(this + 0x20); /*0x6ea349*/
  if ( flt_A79F00 == a2 ) /*0x6ea360*/
  {
    *a4 = LODWORD(flt_B3EBA0[0]); /*0x6ea36e*/
    a4[1] = LODWORD(flt_B3EBA0[1]); /*0x6ea376*/
    a4[2] = LODWORD(flt_B3EBA0[2]); /*0x6ea37f*/
    a4[3] = LODWORD(flt_B3EBA0[3]); /*0x6ea388*/
    *(_DWORD *)(this + 0x30) = *a4; /*0x6ea38d*/
    *(_DWORD *)(this + 0x34) = a4[1]; /*0x6ea393*/
    *(_DWORD *)(this + 0x38) = a4[2]; /*0x6ea399*/
    *(_DWORD *)(this + 0x3C) = a4[3]; /*0x6ea39f*/
    return 0; /*0x6ea3a2*/
  }
  else
  {
    v5 = (_DWORD *)(this + 0x30); /*0x6ea3b0*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(this + 0x18) + 0x58))( /*0x6ea3bf*/
           *(_DWORD *)(this + 0x18),
           LODWORD(a2),
           a3,
           this + 0x30) )
    {
      *a4 = *v5; /*0x6ea40a*/
      a4[1] = v5[1]; /*0x6ea40f*/
      a4[2] = v5[2]; /*0x6ea415*/
      a4[3] = v5[3]; /*0x6ea41b*/
      return 1; /*0x6ea41e*/
    }
    else
    {
      *a4 = LODWORD(flt_B3EBA0[0]); /*0x6ea3cf*/
      a4[1] = LODWORD(flt_B3EBA0[1]); /*0x6ea3d7*/
      a4[2] = LODWORD(flt_B3EBA0[2]); /*0x6ea3e0*/
      a4[3] = LODWORD(flt_B3EBA0[3]); /*0x6ea3e9*/
      *v5 = *a4; /*0x6ea3ee*/
      v5[1] = a4[1]; /*0x6ea3f3*/
      v5[2] = a4[2]; /*0x6ea3f9*/
      v5[3] = a4[3]; /*0x6ea3ff*/
      return 0; /*0x6ea402*/
    }
  }
}
