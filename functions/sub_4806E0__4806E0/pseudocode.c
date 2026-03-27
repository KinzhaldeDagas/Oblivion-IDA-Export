void __cdecl sub_4806E0(int a1)
{
  char v1; // dl
  int *v2; // eax
  int *v3; // esi
  Atmosphere *v4; // eax
  Atmosphere *v5; // eax
  _DWORD *v6; // ecx

  if ( a1 )
  {
    v1 = *(_BYTE *)(a1 + 0x18);
    if ( v1 == 1 )
    {
      v2 = (int *)(a1 + *(_DWORD *)(a1 + 0x10));
      if ( v2 )
        goto LABEL_7;
    }
    else
    {
      v2 = 0;
    }
    if ( v1 == 2 )
    {
      v3 = (int *)(a1 + *(_DWORD *)(a1 + 0x10));
      goto LABEL_8;
    }
LABEL_7:
    v3 = 0;
LABEL_8:
    if ( v2 )
    {
      v4 = (Atmosphere *)sub_47FA60(v2);
      if ( v4 )
        sub_452A60(v4);
    }
    else
    {
      v5 = (Atmosphere *)sub_47FB10(v3);
      if ( !v5 || !sub_452A60(v5) )
      {
        if ( v3 )
          v6 = (_DWORD *)v3[3];
        else
          v6 = 0;
        if ( v6 )
          sub_89F6B0(v6, 0);
      }
    }
  }
}
