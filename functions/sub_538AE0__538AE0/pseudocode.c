void __thiscall sub_538AE0(int *this, int *a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax

  v3 = *this; /*0x538ae3*/
  if ( v3 ) /*0x538ae7*/
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v3 + 0x5C))(v3, a2); /*0x538af4*/
    if ( a2 ) /*0x538af8*/
    {
      v4 = *this; /*0x538afa*/
      v5 = sub_8AEB80(0x58u, 0xADu, 0x56u, 0x19u); /*0x538b07*/
      sub_88BB60(a2, v4, v5); /*0x538b13*/
    }
  }
}
