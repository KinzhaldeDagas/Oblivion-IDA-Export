char __thiscall sub_4320A0(_DWORD *this, _DWORD *a2)
{
  int v3; // ebp

  if ( *(this + 0xE) != 6 ) /*0x4320ae*/
  {
    v3 = a2[5]; /*0x4320b3*/
    if ( (unsigned __int8)BYTE2(a2[4]) <= (int)*(this + 0xE) ) /*0x4320c7*/
    {
      a2[4] &= 0xFF00FFFF; /*0x4320cf*/
      a2[5] = v3; /*0x4320d2*/
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*a2 + 0x18))(a2); /*0x4320dc*/
  for ( ; /*0x4320e1*/
        !sub_431FF0(this, (int)a2);
        *((_QWORD *)a2 + 2) = (unsigned __int16)InterlockedIncrement(&unk_B33A14)
                            + __PAIR64__(a2[5], a2[4] & 0xFFFF0000) )
  {
    ; /*0x43210e*/
  }
  return 1; /*0x432120*/
}
