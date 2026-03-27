void __cdecl sub_772E30(NiD3DPass *a2)
{
  NiD3DPass *v1; // edi
  int v2; // eax
  int v3; // esi
  unsigned int *v4; // ecx
  int v5; // eax
  int v6; // esi
  unsigned int *v7; // ecx
  unsigned int *v8; // ecx

  v1 = a2;
  if ( a2 )
  {
    if ( LOBYTE(a2->__vftable) )
    {
      v2 = *(_DWORD *)&a2->Name[4];
      if ( v2 )
      {
        do
        {
          v3 = *(_DWORD *)(v2 + 8);
          v4 = (unsigned int *)dword_B427AC;
          a2 = (NiD3DPass *)v2;
          sub_73A5E0(v4, &a2);
          v2 = v3;
        }
        while ( v3 );
      }
      v5 = *(_DWORD *)&v1->Name[0xC];
      *(_DWORD *)&v1->Name[4] = 0;
      *(_DWORD *)v1->Name = 0;
      if ( v5 )
      {
        do
        {
          v6 = *(_DWORD *)(v5 + 8);
          v7 = (unsigned int *)dword_B427AC;
          a2 = (NiD3DPass *)v5;
          sub_73A5E0(v7, &a2);
          v5 = v6;
        }
        while ( v6 );
      }
      *(_DWORD *)&v1->Name[0xC] = 0;
      *(_DWORD *)&v1->Name[8] = 0;
      v8 = (unsigned int *)dword_B427A8;
      a2 = v1;
      sub_73A5E0(v8, &a2);
    }
    else
    {
      sub_772BB0(a2);
      FormHeapFree((unsigned int)v1);
    }
  }
}
