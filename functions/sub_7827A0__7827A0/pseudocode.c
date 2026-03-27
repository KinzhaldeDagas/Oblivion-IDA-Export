void sub_7827A0()
{
  int v0; // edi
  _DWORD *v1; // eax
  int v2; // ecx
  bool v3; // cf

  v0 = 0;
  if ( dword_B2B598 )
  {
    do
    {
      v1 = (_DWORD *)FormHeapAlloc(0x20u);
      if ( v1 )
      {
        *v1 = 0;
        v1[1] = 0;
        v1[2] = 0;
        v1[3] = 0;
        v1[5] = 0;
        v1[4] = 0;
        v1[6] = 0;
        v1[7] = 0;
      }
      else
      {
        v1 = 0;
      }
      v2 = dword_B428D4;
      if ( dword_B428D4 )
      {
        *(_DWORD *)(v2 + 0x1C) = v1;
        v2 = dword_B428D4;
      }
      v1[6] = v2;
      v1[7] = 0;
      v3 = ++v0 < (unsigned int)dword_B2B598;
      dword_B428D4 = (int)v1;
    }
    while ( v3 );
  }
}
