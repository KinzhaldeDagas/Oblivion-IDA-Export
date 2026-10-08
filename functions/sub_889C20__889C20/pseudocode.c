char __cdecl sub_889C20(_DWORD *a1, int a2)
{
  char v2; // bl
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edx
  int v6; // eax

  v2 = 0; /*0x889c25*/
  if ( a1 && (v3 = a1[2]) != 0 && (v4 = v3 + 0x14) != 0 ) /*0x889c36*/
    v5 = *(_DWORD *)(v4 + 0x1C); /*0x889c38*/
  else
    v5 = 0; /*0x889c3d*/
  v6 = HIWORD(v5); /*0x889c45*/
  if ( *(_DWORD *)(a2 + 0x10) ) /*0x889c48*/
  {
    sub_89F4D0(a1, *(_DWORD *)(a2 + 0x10)); /*0x889c98*/
    return 1; /*0x889c9e*/
  }
  else
  {
    if ( !v6 ) /*0x889c50*/
    {
      v6 = *(_DWORD *)(4 * (v5 & 0x3F) + 0xBA7EB0); /*0x889c55*/
      if ( !v6 ) /*0x889c5e*/
      {
        v6 = (unsigned __int16)(dword_B2EB3C + 1); /*0x889c68*/
        dword_B2EB3C = v6; /*0x889c6d*/
        if ( !v6 ) /*0x889c72*/
        {
          v6 = 0xA; /*0x889c74*/
          dword_B2EB3C = 0xA; /*0x889c79*/
        }
      }
      v2 = 1; /*0x889c7e*/
    }
    *(_DWORD *)(a2 + 0x10) = v6; /*0x889c82*/
    if ( v2 ) /*0x889c85*/
      sub_89F4D0(a1, v6); /*0x889c88*/
    return v2; /*0x889c8e*/
  }
}
