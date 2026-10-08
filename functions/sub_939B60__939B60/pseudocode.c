char __cdecl sub_939B60(_BYTE *a1, int a2)
{
  int v2; // eax
  int v3; // ebp
  _WORD *v4; // esi
  int v5; // eax

  LOBYTE(v2) = a1[2]; /*0x939b66*/
  v3 = 0; /*0x939b69*/
  if ( (_BYTE)v2 ) /*0x939b6d*/
  {
    v4 = a1 + 6; /*0x939b75*/
    do /*0x939b9d*/
    {
      HIWORD(v5) = 0; /*0x939b80*/
      if ( *v4 != 0xFFFF ) /*0x939b89*/
      {
        LOWORD(v5) = *v4; /*0x939b82*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x10))(a2, v5); /*0x939b90*/
      }
      v2 = (unsigned __int8)a1[2]; /*0x939b93*/
      ++v3; /*0x939b97*/
      v4 += 4; /*0x939b98*/
    }
    while ( v3 < v2 ); /*0x939b9d*/
  }
  a1[2] = 0; /*0x939ba1*/
  *a1 = 0; /*0x939ba5*/
  a1[1] = 0; /*0x939ba8*/
  return v2; /*0x939bac*/
}
