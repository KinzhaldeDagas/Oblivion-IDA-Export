void __thiscall sub_88F0A0(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = (_DWORD *)*(this + 4); /*0x88f0a2*/
  if ( v2 ) /*0x88f0a7*/
  {
    v3 = v2[2]; /*0x88f0a9*/
    if ( v3 && (v4 = v3 + 0x14) != 0 ) /*0x88f0b3*/
      v5 = *(_DWORD *)(v4 + 0x1C); /*0x88f0b5*/
    else
      LOBYTE(v5) = 0; /*0x88f0ba*/
    if ( (v5 & 0x3F) == 8 ) /*0x88f0c0*/
    {
      v6 = *(this + 8); /*0x88f0c2*/
      if ( v6 ) /*0x88f0c7*/
        (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x5C))(v2, v6); /*0x88f0cf*/
    }
  }
}
