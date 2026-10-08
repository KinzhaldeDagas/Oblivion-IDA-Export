signed int __thiscall sub_946130(void **this, int a2, _DWORD *a3)
{
  char v4; // bl
  char v5; // di
  int v6; // eax

  sub_918440(*(this + 5), 0x11); /*0x94613b*/
  v4 = (char)a3; /*0x946148*/
  v5 = (char)a3; /*0x946150*/
  if ( *((_DWORD *)*(this + 0xB) + 0x12) ) /*0x946143*/
  {
    if ( *sub_90D380(a3, (bool *)&a3) ) /*0x946160*/
    {
      v6 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)*(this + 0xB) + 0x12) + 0xC))( /*0x94616e*/
             *((_DWORD *)*(this + 0xB) + 0x12),
             a2);
      v5 = v6; /*0x946171*/
      if ( !v6 ) /*0x946175*/
        v5 = v4; /*0x946177*/
    }
  }
  sub_9181B0((_DWORD **)*(this + 5), 0x21); /*0x94617e*/
  sub_918460(*(this + 5), a2, 0); /*0x946189*/
  sub_918460(*(this + 5), v5, 0); /*0x946194*/
  return 0x11; /*0x946199*/
}
