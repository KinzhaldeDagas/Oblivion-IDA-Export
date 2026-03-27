_BYTE *__thiscall sub_857750(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        _WORD *a5,
        int a6,
        _BYTE *a7,
        char a8,
        char a9,
        char a10,
        int a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  _BYTE *result; // eax

  if ( !a8 )
  {
    if ( a9 )
    {
      if ( a10 )
      {
        if ( dword_B42E8C )
          dword_B42E8C("SHADER ERROR : no shader to handle ADT2_GFg ( 2 lights & glowmap & facegenblend )", 0);
        goto LABEL_113;
      }
      if ( a13 )
      {
        if ( a12 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v20 = FormHeapAlloc(0x10u);
            a6 = v20;
            if ( v20 )
            {
              v17 = sub_7E2370(v20, a2, 0xA3, 1, 2u, a3);
              goto LABEL_111;
            }
            goto LABEL_110;
          }
        }
        else if ( (_BYTE)a6 == 1 )
        {
          v19 = FormHeapAlloc(0x10u);
          a6 = v19;
          if ( v19 )
          {
            v17 = sub_7E2370(v19, a2, 0x96, 1, 2u, a3);
            goto LABEL_111;
          }
          goto LABEL_110;
        }
      }
      else if ( a12 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v18 = FormHeapAlloc(0x10u);
          a6 = v18;
          if ( v18 )
          {
            v17 = sub_7E2370(v18, a2, 0xA0, 1, 2u, a3);
            goto LABEL_111;
          }
LABEL_110:
          v17 = 0;
          goto LABEL_111;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v16 = FormHeapAlloc(0x10u);
        a6 = v16;
        if ( v16 )
        {
          v17 = sub_7E2370(v16, a2, 0x93, 1, 2u, a3);
LABEL_111:
          a6 = v17;
          sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a6);
          goto LABEL_113;
        }
        goto LABEL_110;
      }
    }
    else if ( a10 )
    {
      if ( a12 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v22 = FormHeapAlloc(0x10u);
          a6 = v22;
          if ( v22 )
          {
            v17 = sub_7E2370(v22, a2, 0xA1, 1, 2u, a3);
            goto LABEL_111;
          }
          goto LABEL_110;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v21 = FormHeapAlloc(0x10u);
        a6 = v21;
        if ( v21 )
        {
          v17 = sub_7E2370(v21, a2, 0x94, 1, 2u, a3);
          goto LABEL_111;
        }
        goto LABEL_110;
      }
    }
    else if ( a13 )
    {
      if ( a12 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v30 = FormHeapAlloc(0x10u);
          a6 = v30;
          if ( v30 )
          {
            v17 = sub_7E2370(v30, a2, 0xA2, 1, 2u, a3);
            goto LABEL_111;
          }
          goto LABEL_110;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v29 = FormHeapAlloc(0x10u);
        a6 = v29;
        if ( v29 )
        {
          v17 = sub_7E2370(v29, a2, 0x95, 1, 2u, a3);
          goto LABEL_111;
        }
        goto LABEL_110;
      }
    }
    else if ( a12 )
    {
      if ( a14 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v28 = FormHeapAlloc(0x10u);
          a6 = v28;
          if ( v28 )
          {
            v17 = sub_7E2370(v28, a2, 0xAA, 1, 2u, a3);
            goto LABEL_111;
          }
          goto LABEL_110;
        }
      }
      else if ( a15 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v27 = FormHeapAlloc(0x10u);
          a6 = v27;
          if ( v27 )
          {
            v17 = sub_7E2370(v27, a2, 0xA4, 1, 2u, a3);
            goto LABEL_111;
          }
          goto LABEL_110;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v26 = FormHeapAlloc(0x10u);
        a6 = v26;
        if ( v26 )
        {
          v17 = sub_7E2370(v26, a2, 0x9F, 1, 2u, a3);
          goto LABEL_111;
        }
        goto LABEL_110;
      }
    }
    else if ( a14 )
    {
      if ( (_BYTE)a6 == 1 )
      {
        v25 = FormHeapAlloc(0x10u);
        a6 = v25;
        if ( v25 )
        {
          v17 = sub_7E2370(v25, a2, 0x9D, 1, 2u, a3);
          goto LABEL_111;
        }
        goto LABEL_110;
      }
    }
    else if ( a15 )
    {
      if ( (_BYTE)a6 == 1 )
      {
        v24 = FormHeapAlloc(0x10u);
        a6 = v24;
        if ( v24 )
        {
          v17 = sub_7E2370(v24, a2, 0x97, 1, 2u, a3);
          goto LABEL_111;
        }
        goto LABEL_110;
      }
    }
    else if ( (_BYTE)a6 == 1 )
    {
      v23 = FormHeapAlloc(0x10u);
      a6 = v23;
      if ( v23 )
      {
        v17 = sub_7E2370(v23, a2, 0x92, 1, 2u, a3);
        goto LABEL_111;
      }
      goto LABEL_110;
    }
LABEL_112:
    ++*a5;
    goto LABEL_113;
  }
  if ( !a9 )
  {
    if ( a10 )
    {
      if ( a12 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v36 = FormHeapAlloc(0x10u);
          a6 = v36;
          if ( v36 )
          {
            v17 = sub_7E2370(v36, a2, 0xA7, 1, 2u, a3);
            goto LABEL_111;
          }
          goto LABEL_110;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v35 = FormHeapAlloc(0x10u);
        a6 = v35;
        if ( v35 )
        {
          v17 = sub_7E2370(v35, a2, 0x9A, 1, 2u, a3);
          goto LABEL_111;
        }
        goto LABEL_110;
      }
    }
    else if ( a13 )
    {
      if ( a12 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v42 = FormHeapAlloc(0x10u);
          a6 = v42;
          if ( v42 )
          {
            v17 = sub_7E2370(v42, a2, 0xA8, 1, 2u, a3);
            goto LABEL_111;
          }
          goto LABEL_110;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v41 = FormHeapAlloc(0x10u);
        a6 = v41;
        if ( v41 )
        {
          v17 = sub_7E2370(v41, a2, 0x9B, 1, 2u, a3);
          goto LABEL_111;
        }
        goto LABEL_110;
      }
    }
    else if ( a12 )
    {
      if ( a15 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v40 = FormHeapAlloc(0x10u);
          a6 = v40;
          if ( v40 )
          {
            v17 = sub_7E2370(v40, a2, 0xAB, 1, 2u, a3);
            goto LABEL_111;
          }
          goto LABEL_110;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v39 = FormHeapAlloc(0x10u);
        a6 = v39;
        if ( v39 )
        {
          v17 = sub_7E2370(v39, a2, 0xA5, 1, 2u, a3);
          goto LABEL_111;
        }
        goto LABEL_110;
      }
    }
    else if ( a15 )
    {
      if ( (_BYTE)a6 == 1 )
      {
        v38 = FormHeapAlloc(0x10u);
        a6 = v38;
        if ( v38 )
        {
          v17 = sub_7E2370(v38, a2, 0x9E, 1, 2u, a3);
          goto LABEL_111;
        }
        goto LABEL_110;
      }
    }
    else if ( (_BYTE)a6 == 1 )
    {
      v37 = FormHeapAlloc(0x10u);
      a6 = v37;
      if ( v37 )
      {
        v17 = sub_7E2370(v37, a2, 0x98, 1, 2u, a3);
        goto LABEL_111;
      }
      goto LABEL_110;
    }
    goto LABEL_112;
  }
  if ( !a10 )
  {
    if ( a13 )
    {
      if ( a12 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v34 = FormHeapAlloc(0x10u);
          a6 = v34;
          if ( v34 )
          {
            v17 = sub_7E2370(v34, a2, 0xA9, 1, 2u, a3);
            goto LABEL_111;
          }
          goto LABEL_110;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v33 = FormHeapAlloc(0x10u);
        a6 = v33;
        if ( v33 )
        {
          v17 = sub_7E2370(v33, a2, 0x9C, 1, 2u, a3);
          goto LABEL_111;
        }
        goto LABEL_110;
      }
    }
    else if ( a12 )
    {
      if ( (_BYTE)a6 == 1 )
      {
        v32 = FormHeapAlloc(0x10u);
        a6 = v32;
        if ( v32 )
        {
          v17 = sub_7E2370(v32, a2, 0xA6, 1, 2u, a3);
          goto LABEL_111;
        }
        goto LABEL_110;
      }
    }
    else if ( (_BYTE)a6 == 1 )
    {
      v31 = FormHeapAlloc(0x10u);
      a6 = v31;
      if ( v31 )
      {
        v17 = sub_7E2370(v31, a2, 0x99, 1, 2u, a3);
        goto LABEL_111;
      }
      goto LABEL_110;
    }
    goto LABEL_112;
  }
  if ( dword_B42E8C )
    dword_B42E8C("SHADER ERROR : no shader to handle ADT_SGFg ( 2 lights & skinned & glowmap & facegenblend )", 0);
LABEL_113:
  result = a7;
  *a7 = 0;
  return result;
}
