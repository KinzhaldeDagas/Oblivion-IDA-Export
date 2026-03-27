char __thiscall sub_4320A0(_DWORD *this, _DWORD *a2)
{
  int v3; // ebp

  if ( *(this + 0xE) != 6 )
  {
    v3 = a2[5];
    if ( (unsigned __int8)BYTE2(a2[4]) <= (int)*(this + 0xE) )
    {
      a2[4] &= 0xFF00FFFF;
      a2[5] = v3;
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*a2 + 0x18))(a2);
  for ( ;
        !sub_431FF0(this, (int)a2);
        *((_QWORD *)a2 + 2) = (unsigned __int16)InterlockedIncrement(&dword_B33A14)
                            + __PAIR64__(a2[5], a2[4] & 0xFFFF0000) )
  {
    ;
  }
  return 1;
}
