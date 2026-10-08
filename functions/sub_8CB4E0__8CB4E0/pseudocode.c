char __cdecl sub_8CB4E0(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( *(_DWORD *)(a1 + 0x88) ) /*0x8cb4e5*/
  {
    if ( a3 ) /*0x8cb4fa*/
    {
      v3 = *(_DWORD *)(a1 + 0xEC); /*0x8cb4fc*/
      if ( v3 ) /*0x8cb504*/
        sub_8DC770(v3, a1, a2); /*0x8cb508*/
    }
    LOBYTE(v4) = (unsigned __int8)sub_91ED30(a2); /*0x8cb511*/
  }
  else
  {
    *(_DWORD *)(a1 + 0x88) = 1; /*0x8cb51e*/
    if ( a3 ) /*0x8cb528*/
    {
      v5 = *(_DWORD *)(a1 + 0xEC); /*0x8cb52a*/
      if ( v5 ) /*0x8cb532*/
        sub_8DC770(v5, a1, a2); /*0x8cb536*/
    }
    sub_91ED30(a2); /*0x8cb53f*/
    v4 = *(_DWORD *)(a1 + 0x88) - 1; /*0x8cb54d*/
    *(_DWORD *)(a1 + 0x88) = v4; /*0x8cb54e*/
    if ( !v4 ) /*0x8cb554*/
    {
      v4 = *(_DWORD *)(a1 + 0x84); /*0x8cb556*/
      if ( v4 ) /*0x8cb55e*/
      {
        LOBYTE(v4) = *(_BYTE *)(a1 + 0x90); /*0x8cb560*/
        if ( !(_BYTE)v4 ) /*0x8cb568*/
          LOBYTE(v4) = sub_899210(a1); /*0x8cb56e*/
      }
    }
  }
  return v4; /*0x8cb519*/
}
