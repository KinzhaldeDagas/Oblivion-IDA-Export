char __cdecl sub_889C20(_DWORD *a1, int a2)
{
  char v2; // bl
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edx
  int v6; // eax

  v2 = 0;
  if ( a1 && (v3 = a1[2]) != 0 && (v4 = v3 + 0x14) != 0 )
    v5 = *(_DWORD *)(v4 + 0x1C);
  else
    v5 = 0;
  v6 = HIWORD(v5);
  if ( *(_DWORD *)(a2 + 0x10) )
  {
    sub_89F4D0(a1, *(_DWORD *)(a2 + 0x10));
    return 1;
  }
  else
  {
    if ( !v6 )
    {
      v6 = *(_DWORD *)(4 * (v5 & 0x3F) + 0xBA7EB0);
      if ( !v6 )
      {
        v6 = (unsigned __int16)(dword_B2EB3C + 1);
        dword_B2EB3C = v6;
        if ( !v6 )
        {
          v6 = 0xA;
          dword_B2EB3C = 0xA;
        }
      }
      v2 = 1;
    }
    *(_DWORD *)(a2 + 0x10) = v6;
    if ( v2 )
      sub_89F4D0(a1, v6);
    return v2;
  }
}
