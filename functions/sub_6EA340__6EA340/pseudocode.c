char __thiscall sub_6EA340(int this, float a2, int a3, _DWORD *a4)
{
  _DWORD *v5; // esi

  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 )
    a2 = *(float *)(this + 0x20);
  if ( flt_A79F00 == a2 )
  {
    *a4 = dword_B3EBA0;
    a4[1] = dword_B3EBA4;
    a4[2] = dword_B3EBA8;
    a4[3] = dword_B3EBAC;
    *(_DWORD *)(this + 0x30) = *a4;
    *(_DWORD *)(this + 0x34) = a4[1];
    *(_DWORD *)(this + 0x38) = a4[2];
    *(_DWORD *)(this + 0x3C) = a4[3];
    return 0;
  }
  else
  {
    v5 = (_DWORD *)(this + 0x30);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(this + 0x18) + 0x58))(
           *(_DWORD *)(this + 0x18),
           LODWORD(a2),
           a3,
           this + 0x30) )
    {
      *a4 = *v5;
      a4[1] = v5[1];
      a4[2] = v5[2];
      a4[3] = v5[3];
      return 1;
    }
    else
    {
      *a4 = dword_B3EBA0;
      a4[1] = dword_B3EBA4;
      a4[2] = dword_B3EBA8;
      a4[3] = dword_B3EBAC;
      *v5 = *a4;
      v5[1] = a4[1];
      v5[2] = a4[2];
      v5[3] = a4[3];
      return 0;
    }
  }
}
