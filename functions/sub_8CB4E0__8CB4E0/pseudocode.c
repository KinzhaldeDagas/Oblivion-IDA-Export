char __cdecl sub_8CB4E0(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( *(_DWORD *)(a1 + 0x88) )
  {
    if ( a3 )
    {
      v3 = *(_DWORD *)(a1 + 0xEC);
      if ( v3 )
        sub_8DC770(v3, a1, a2);
    }
    LOBYTE(v4) = (unsigned __int8)sub_91ED30(a2);
  }
  else
  {
    *(_DWORD *)(a1 + 0x88) = 1;
    if ( a3 )
    {
      v5 = *(_DWORD *)(a1 + 0xEC);
      if ( v5 )
        sub_8DC770(v5, a1, a2);
    }
    sub_91ED30(a2);
    v4 = *(_DWORD *)(a1 + 0x88) - 1;
    *(_DWORD *)(a1 + 0x88) = v4;
    if ( !v4 )
    {
      v4 = *(_DWORD *)(a1 + 0x84);
      if ( v4 )
      {
        LOBYTE(v4) = *(_BYTE *)(a1 + 0x90);
        if ( !(_BYTE)v4 )
          LOBYTE(v4) = sub_899210(a1);
      }
    }
  }
  return v4;
}
