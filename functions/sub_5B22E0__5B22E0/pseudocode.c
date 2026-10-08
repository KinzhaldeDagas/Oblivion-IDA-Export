void __thiscall sub_5B22E0(void **this, int a2)
{
  void **v2; // esi
  void **v3; // edi
  char v4; // al
  bool v5; // zf
  char v6; // al
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax

  if ( a2 ) /*0x5b2309*/
  {
    v2 = this + 1; /*0x5b2313*/
    v3 = this; /*0x5b2316*/
    if ( *(this + 1) ) /*0x5b230f*/
    {
      do /*0x5b2323*/
      {
        ActvEffListEntry_CompareName(*v3, a2); /*0x5b2323*/
        if ( v4 ) /*0x5b232a*/
          goto LABEL_11; /*0x5b232a*/
        v3 = (void **)*v2; /*0x5b232c*/
        v5 = *((_DWORD *)*v2 + 1) == 0; /*0x5b232e*/
        v2 = (void **)((char *)*v2 + 4); /*0x5b2332*/
      }
      while ( !v5 ); /*0x5b2323*/
    }
    if ( *v3 ) /*0x5b2337*/
    {
      ActvEffListEntry_CompareName(*v3, a2); /*0x5b2342*/
      if ( v6 ) /*0x5b2349*/
      {
LABEL_11:
        v9 = *v3; /*0x5b239e*/
        sub_5B2140(a2); /*0x5b23a1*/
        v9[1] += v10; /*0x5b23a9*/
        return; /*0x5b23be*/
      }
      v7 = (_DWORD *)FormHeapAlloc(8u); /*0x5b2352*/
      if ( v7 ) /*0x5b2365*/
      {
        v8 = (_DWORD *)FormHeapAlloc(8u); /*0x5b2369*/
        if ( v8 ) /*0x5b2373*/
          *v7 = sub_5B2190(v8, a2); /*0x5b237d*/
        else
          *v7 = 0; /*0x5b23c3*/
        v7[1] = 0; /*0x5b237f*/
        v3[1] = v7; /*0x5b2386*/
      }
      else
      {
        v3[1] = 0; /*0x5b23e2*/
      }
    }
    else
    {
      v11 = (_DWORD *)FormHeapAlloc(8u); /*0x5b23fc*/
      if ( v11 ) /*0x5b2406*/
        v12 = sub_5B2190(v11, a2); /*0x5b240b*/
      else
        v12 = 0; /*0x5b2412*/
      *v3 = v12; /*0x5b2414*/
      sub_5B2416(a2); /*0x5b2415*/
    }
  }
  else
  {
    sub_5B2416(0); /*0x5b2309*/
  }
}
