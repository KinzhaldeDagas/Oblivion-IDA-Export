char __stdcall sub_8DED40(int a1, float a2)
{
  int v2; // edi
  _BYTE *v3; // eax
  int v4; // ebx
  float v5; // ebp
  int v6; // esi

  v2 = a1; /*0x8ded41*/
  LOBYTE(v3) = *(_BYTE *)(a1 + 0xA5); /*0x8ded45*/
  if ( (_BYTE)v3 ) /*0x8ded4d*/
  {
    v4 = *(_DWORD *)(a1 + 0x3C) - 1; /*0x8ded53*/
    if ( v4 >= 0 ) /*0x8ded54*/
    {
      v5 = a2; /*0x8ded57*/
      do /*0x8ded83*/
      {
        v6 = *(_DWORD *)(*(_DWORD *)(v2 + 0x38) + 4 * v4); /*0x8ded63*/
        v3 = sub_8DDCD0(v6, &a1, v5); /*0x8ded6e*/
        if ( *v3 ) /*0x8ded73*/
          LOBYTE(v3) = sub_8CBBB0(v2, v6); /*0x8ded7a*/
        --v4; /*0x8ded82*/
      }
      while ( v4 >= 0 ); /*0x8ded83*/
    }
  }
  return (char)v3; /*0x8ded88*/
}
