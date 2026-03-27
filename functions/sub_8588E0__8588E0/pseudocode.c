_BYTE *__thiscall sub_8588E0(
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
  _BYTE *result; // eax

  if ( a8 )
  {
    if ( a9 )
    {
      if ( !a10 )
      {
        if ( a13 )
        {
          if ( a12 )
          {
            if ( (_BYTE)a6 == 1 )
            {
              v32 = FormHeapAlloc(0x10u);
              a6 = v32;
              if ( v32 )
              {
                v17 = sub_7E2370(v32, a2, 0xDE, 1, 2u, a3);
                goto LABEL_102;
              }
              goto LABEL_101;
            }
          }
          else if ( (_BYTE)a6 == 1 )
          {
            v31 = FormHeapAlloc(0x10u);
            a6 = v31;
            if ( v31 )
            {
              v17 = sub_7E2370(v31, a2, 0xD1, 1, 2u, a3);
              goto LABEL_102;
            }
            goto LABEL_101;
          }
        }
        else if ( a12 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v30 = FormHeapAlloc(0x10u);
            a6 = v30;
            if ( v30 )
            {
              v17 = sub_7E2370(v30, a2, 0xDA, 1, 2u, a3);
              goto LABEL_102;
            }
            goto LABEL_101;
          }
        }
        else if ( (_BYTE)a6 == 1 )
        {
          v29 = FormHeapAlloc(0x10u);
          a6 = v29;
          if ( v29 )
          {
            v17 = sub_7E2370(v29, a2, 0xCD, 1, 2u, a3);
            goto LABEL_102;
          }
          goto LABEL_101;
        }
        goto LABEL_104;
      }
      if ( dword_B42E8C )
        dword_B42E8C("SHADER ERROR : no shader to handle ADTS2_SGFg ( 2 lights & skinned & glowmap & facegenblend )", 0);
    }
    else
    {
      if ( !a10 )
      {
        if ( a13 )
        {
          if ( a12 )
          {
            if ( (_BYTE)a6 == 1 )
            {
              v38 = FormHeapAlloc(0x10u);
              a6 = v38;
              if ( v38 )
              {
                v17 = sub_7E2370(v38, a2, 0xDD, 1, 2u, a3);
                goto LABEL_102;
              }
              goto LABEL_101;
            }
          }
          else if ( (_BYTE)a6 == 1 )
          {
            v37 = FormHeapAlloc(0x10u);
            a6 = v37;
            if ( v37 )
            {
              v17 = sub_7E2370(v37, a2, 0xD0, 1, 2u, a3);
              goto LABEL_102;
            }
            goto LABEL_101;
          }
        }
        else if ( a12 )
        {
          if ( a15 )
          {
            if ( (_BYTE)a6 == 1 )
            {
              v36 = FormHeapAlloc(0x10u);
              a6 = v36;
              if ( v36 )
              {
                v17 = sub_7E2370(v36, a2, 0xDB, 1, 2u, a3);
                goto LABEL_102;
              }
              goto LABEL_101;
            }
          }
          else if ( (_BYTE)a6 == 1 )
          {
            v35 = FormHeapAlloc(0x10u);
            a6 = v35;
            if ( v35 )
            {
              v17 = sub_7E2370(v35, a2, 0xD9, 1, 2u, a3);
              goto LABEL_102;
            }
            goto LABEL_101;
          }
        }
        else if ( a15 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v34 = FormHeapAlloc(0x10u);
            a6 = v34;
            if ( v34 )
            {
              v17 = sub_7E2370(v34, a2, 0xCE, 1, 2u, a3);
              goto LABEL_102;
            }
            goto LABEL_101;
          }
        }
        else if ( (_BYTE)a6 == 1 )
        {
          v33 = FormHeapAlloc(0x10u);
          a6 = v33;
          if ( v33 )
          {
            v17 = sub_7E2370(v33, a2, 0xCC, 1, 2u, a3);
            goto LABEL_102;
          }
          goto LABEL_101;
        }
        goto LABEL_104;
      }
      if ( dword_B42E8C )
        dword_B42E8C("SHADER ERROR : no shader to handle ADTS2_SFg ( skinned & facegenblend )", 0);
    }
  }
  else
  {
    if ( a9 )
    {
      if ( a10 )
      {
        if ( dword_B42E8C )
          dword_B42E8C("SHADER ERROR : no shader to handle ADTS2_GFg ( 2 lights & glowmap & facegenblend )", 0);
        goto LABEL_105;
      }
      if ( !a13 )
      {
        if ( a12 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v18 = FormHeapAlloc(0x10u);
            a6 = v18;
            if ( v18 )
            {
              v17 = sub_7E2370(v18, a2, 0xD4, 1, 2u, a3);
              goto LABEL_102;
            }
LABEL_101:
            v17 = 0;
            goto LABEL_102;
          }
        }
        else if ( (_BYTE)a6 == 1 )
        {
          v16 = FormHeapAlloc(0x10u);
          a6 = v16;
          if ( v16 )
          {
            v17 = sub_7E2370(v16, a2, 0xC7, 1, 2u, a3);
LABEL_102:
            a6 = v17;
            goto LABEL_103;
          }
          goto LABEL_101;
        }
LABEL_104:
        ++*a5;
        goto LABEL_105;
      }
      if ( a12 )
      {
        if ( (_BYTE)a6 != 1 )
          goto LABEL_104;
        v20 = FormHeapAlloc(0x10u);
        a6 = v20;
        if ( v20 )
        {
          a6 = sub_7E2370(v20, a2, 0xD8, 1, 1u, a3);
          goto LABEL_103;
        }
      }
      else
      {
        if ( (_BYTE)a6 != 1 )
          goto LABEL_104;
        v19 = FormHeapAlloc(0x10u);
        a6 = v19;
        if ( v19 )
        {
          a6 = sub_7E2370(v19, a2, 0xCB, 1, 1u, a3);
LABEL_103:
          sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a6);
          goto LABEL_105;
        }
      }
      a6 = 0;
      goto LABEL_103;
    }
    if ( !a10 )
    {
      if ( a13 )
      {
        if ( a12 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v28 = FormHeapAlloc(0x10u);
            a6 = v28;
            if ( v28 )
            {
              v17 = sub_7E2370(v28, a2, 0xD7, 1, 2u, a3);
              goto LABEL_102;
            }
            goto LABEL_101;
          }
        }
        else if ( (_BYTE)a6 == 1 )
        {
          v27 = FormHeapAlloc(0x10u);
          a6 = v27;
          if ( v27 )
          {
            v17 = sub_7E2370(v27, a2, 0xCA, 1, 2u, a3);
            goto LABEL_102;
          }
          goto LABEL_101;
        }
      }
      else if ( a12 )
      {
        if ( a14 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v26 = FormHeapAlloc(0x10u);
            a6 = v26;
            if ( v26 )
            {
              v17 = sub_7E2370(v26, a2, 0xDF, 1, 2u, a3);
              goto LABEL_102;
            }
            goto LABEL_101;
          }
        }
        else if ( a15 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v25 = FormHeapAlloc(0x10u);
            a6 = v25;
            if ( v25 )
            {
              v17 = sub_7E2370(v25, a2, 0xD5, 1, 2u, a3);
              goto LABEL_102;
            }
            goto LABEL_101;
          }
        }
        else if ( (_BYTE)a6 == 1 )
        {
          v24 = FormHeapAlloc(0x10u);
          a6 = v24;
          if ( v24 )
          {
            v17 = sub_7E2370(v24, a2, 0xD3, 1, 2u, a3);
            goto LABEL_102;
          }
          goto LABEL_101;
        }
      }
      else if ( a14 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v23 = FormHeapAlloc(0x10u);
          a6 = v23;
          if ( v23 )
          {
            v17 = sub_7E2370(v23, a2, 0xD2, 1, 2u, a3);
            goto LABEL_102;
          }
          goto LABEL_101;
        }
      }
      else if ( a15 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v22 = FormHeapAlloc(0x10u);
          a6 = v22;
          if ( v22 )
          {
            v17 = sub_7E2370(v22, a2, 0xC8, 1, 2u, a3);
            goto LABEL_102;
          }
          goto LABEL_101;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v21 = FormHeapAlloc(0x10u);
        a6 = v21;
        if ( v21 )
        {
          v17 = sub_7E2370(v21, a2, 0xC6, 1, 2u, a3);
          goto LABEL_102;
        }
        goto LABEL_101;
      }
      goto LABEL_104;
    }
    if ( dword_B42E8C )
      dword_B42E8C("SHADER ERROR : no shader to handle ADTS2_Fg ( facegenblend )", 0);
  }
LABEL_105:
  result = a7;
  *a7 = 0;
  return result;
}
