void __stdcall sub_58A0A0(char *a1, char *a2)
{
  char v2; // al
  int v3; // esi
  BSStringT *v4; // eax
  BSStringT *v5; // eax
  BSStringT *v6; // eax
  BSStringT *v7; // eax

  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      if ( v2 == 0x26 )
      {
        v3 = 0x1B;
LABEL_5:
        v4 = (BSStringT *)FormHeapAlloc(0x10u);
        if ( v4 )
          v5 = sub_589EB0(v4, a2, a1);
        else
          v5 = 0;
        a2 = (char *)v5;
        sub_6AA320((_DWORD *)&unk_B3B0B0 + 4 * v3, &a2);
        return;
      }
      if ( v2 != 0x5F )
      {
        v3 = v2 - 0x40;
        if ( v3 > 0x20 )
          v3 = v2 - 0x60;
        if ( (unsigned int)v3 > 0x1A )
          v3 = 0;
        goto LABEL_5;
      }
      v6 = (BSStringT *)FormHeapAlloc(0x10u);
      if ( v6 )
        v7 = sub_589EB0(v6, a2, a1);
      else
        v7 = 0;
      a2 = (char *)v7;
      NiTArray_Add((unsigned __int16 *)&off_B13BC4, &a2);
    }
  }
}
