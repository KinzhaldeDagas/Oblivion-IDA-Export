void __thiscall sub_8BD190(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // eax

  sub_721550(this, a2); /*0x8bd199*/
  v3 = sub_7124D0(a2); /*0x8bd1a0*/
  if ( v3 ) /*0x8bd1a7*/
  {
    v4 = v3; /*0x8bd1aa*/
    do /*0x8bd1c6*/
    {
      v5 = sub_7124A0(a2); /*0x8bd1b2*/
      if ( v5 ) /*0x8bd1b9*/
        sub_8BD090(this, v5); /*0x8bd1be*/
      --v4; /*0x8bd1c3*/
    }
    while ( v4 ); /*0x8bd1c6*/
  }
}
