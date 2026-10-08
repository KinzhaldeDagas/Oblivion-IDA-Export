char __thiscall sub_947910(_DWORD **this, char *a2, int a3, int a4)
{
  int v4; // edi
  char *v6; // eax
  char v7; // cl
  char v8; // cl
  char v9; // cl
  char v10; // cl
  char v11; // cl
  char v12; // cl
  char v13; // cl

  v4 = a4; /*0x94791c*/
  (*(void (__thiscall **)(_DWORD, char *, int))(**(this + 2) + 0xC))(*(this + 2), a2, a4 * a3); /*0x94792e*/
  LOBYTE(v6) = *((_BYTE *)this + 0xC); /*0x947931*/
  if ( (_BYTE)v6 ) /*0x947936*/
  {
    v6 = a2; /*0x947941*/
    if ( a3 == 2 ) /*0x947943*/
    {
      if ( a4 > 0 ) /*0x9479c9*/
      {
        do /*0x9479de*/
        {
          v13 = *v6; /*0x9479d3*/
          *v6 = v6[1]; /*0x9479d5*/
          v6[1] = v13; /*0x9479d7*/
          v6 += 2; /*0x9479da*/
          --v4; /*0x9479dd*/
        }
        while ( v4 ); /*0x9479de*/
      }
    }
    else if ( a3 == 4 ) /*0x94794c*/
    {
      if ( a4 > 0 ) /*0x94799f*/
      {
        v6 = a2 + 2; /*0x9479a1*/
        do /*0x9479be*/
        {
          v11 = v6[0xFFFFFFFE]; /*0x9479a7*/
          v6[0xFFFFFFFE] = v6[1]; /*0x9479aa*/
          v6[1] = v11; /*0x9479ad*/
          v12 = v6[0xFFFFFFFF]; /*0x9479b2*/
          v6[0xFFFFFFFF] = *v6; /*0x9479b5*/
          *v6 = v12; /*0x9479b8*/
          v6 += 4; /*0x9479ba*/
          --v4; /*0x9479bd*/
        }
        while ( v4 ); /*0x9479be*/
      }
    }
    else if ( a3 == 8 && a4 > 0 ) /*0x947959*/
    {
      v6 = a2 + 6; /*0x94795f*/
      do /*0x947994*/
      {
        v7 = v6[0xFFFFFFFA]; /*0x947965*/
        v6[0xFFFFFFFA] = v6[1]; /*0x947968*/
        v6[1] = v7; /*0x94796b*/
        v8 = v6[0xFFFFFFFB]; /*0x947970*/
        v6[0xFFFFFFFB] = *v6; /*0x947973*/
        *v6 = v8; /*0x947976*/
        v9 = v6[0xFFFFFFFC]; /*0x94797b*/
        v6[0xFFFFFFFC] = v6[0xFFFFFFFF]; /*0x94797e*/
        v6[0xFFFFFFFF] = v9; /*0x947981*/
        v10 = v6[0xFFFFFFFD]; /*0x947987*/
        v6[0xFFFFFFFD] = v6[0xFFFFFFFE]; /*0x94798a*/
        v6[0xFFFFFFFE] = v10; /*0x94798d*/
        v6 += 8; /*0x947990*/
        --v4; /*0x947993*/
      }
      while ( v4 ); /*0x947994*/
    }
  }
  return (char)v6; /*0x947996*/
}
