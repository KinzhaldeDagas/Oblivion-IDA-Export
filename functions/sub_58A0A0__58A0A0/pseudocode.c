void __stdcall sub_58A0A0(char *a1, char *a2)
{
  char v2; // al
  int v3; // esi
  BSStringT *v4; // eax
  char *v5; // eax
  BSStringT *v6; // eax
  char *v7; // eax

  if ( a1 ) /*0x58a0c8*/
  {
    v2 = *a1; /*0x58a0ce*/
    if ( *a1 ) /*0x58a0ce*/
    {
      if ( v2 == 0x26 ) /*0x58a0da*/
      {
        v3 = 0x1B; /*0x58a0dc*/
LABEL_5:
        v4 = (BSStringT *)FormHeapAlloc(0x10u); /*0x58a0e1*/
        if ( v4 ) /*0x58a0f9*/
          v5 = (char *)sub_589EB0(v4, a2, a1); /*0x58a107*/
        else
          v5 = 0; /*0x58a187*/
        a2 = v5; /*0x58a1a1*/
        NiTList_AddHead(&unk_B3B0B0[0x10 * v3], &a2); /*0x58a1a5*/
        return; /*0x58a1a5*/
      }
      if ( v2 != 0x5F ) /*0x58a110*/
      {
        v3 = v2 - 0x40; /*0x58a115*/
        if ( v3 > 0x20 ) /*0x58a11b*/
          v3 = v2 - 0x60; /*0x58a11d*/
        if ( (unsigned int)v3 > 0x1A ) /*0x58a122*/
          v3 = 0; /*0x58a129*/
        goto LABEL_5; /*0x58a12b*/
      }
      v6 = (BSStringT *)FormHeapAlloc(0x10u); /*0x58a12f*/
      if ( v6 ) /*0x58a145*/
        v7 = (char *)sub_589EB0(v6, a2, a1); /*0x58a14f*/
      else
        v7 = 0; /*0x58a156*/
      a2 = v7; /*0x58a16a*/
      NiTArray_Add((unsigned __int16 *)&g_TileUserTraitTable, &a2); /*0x58a16e*/
    }
  }
}
