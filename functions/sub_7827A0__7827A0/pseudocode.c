void sub_7827A0()
{
  int v0; // edi
  _DWORD *v1; // eax
  int v2; // ecx
  bool v3; // cf

  v0 = 0; /*0x7827a4*/
  if ( dword_B2B598 ) /*0x7827a6*/
  {
    do /*0x782800*/
    {
      v1 = (_DWORD *)FormHeapAlloc(0x20u); /*0x7827b2*/
      if ( v1 ) /*0x7827bc*/
      {
        *v1 = 0; /*0x7827be*/
        v1[1] = 0; /*0x7827c0*/
        v1[2] = 0; /*0x7827c3*/
        v1[3] = 0; /*0x7827c6*/
        v1[5] = 0; /*0x7827c9*/
        v1[4] = 0; /*0x7827cc*/
        v1[6] = 0; /*0x7827cf*/
        v1[7] = 0; /*0x7827d2*/
      }
      else
      {
        v1 = 0; /*0x7827d7*/
      }
      v2 = unk_B428D4; /*0x7827d9*/
      if ( unk_B428D4 ) /*0x7827d9*/
      {
        *(_DWORD *)(v2 + 0x1C) = v1; /*0x7827e3*/
        v2 = unk_B428D4; /*0x7827e6*/
      }
      v1[6] = v2; /*0x7827ec*/
      v1[7] = 0; /*0x7827ef*/
      v3 = ++v0 < (unsigned int)dword_B2B598; /*0x7827f5*/
      unk_B428D4 = (int)v1; /*0x7827fb*/
    }
    while ( v3 ); /*0x782800*/
  }
}
