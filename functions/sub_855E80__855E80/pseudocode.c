_BYTE *__thiscall sub_855E80(
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
        char a14)
{
  int v15; // eax
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
  _BYTE *result; // eax

  if ( a8 )
  {
    if ( !a9 )
    {
      if ( a10 )
      {
        if ( a12 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v31 = FormHeapAlloc(0x10u);
            a6 = v31;
            if ( v31 )
            {
              v16 = sub_7E2370(v31, a2, 0x5E, 1, 2u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a6 == 1 )
        {
          v30 = FormHeapAlloc(0x10u);
          a6 = v30;
          if ( v30 )
          {
            v16 = sub_7E2370(v30, a2, 0x53, 1, 2u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a13 )
      {
        if ( a12 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v29 = FormHeapAlloc(0x10u);
            a6 = v29;
            if ( v29 )
            {
              v16 = sub_7E2370(v29, a2, 0x5B, 1, 2u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a6 == 1 )
        {
          v28 = FormHeapAlloc(0x10u);
          a6 = v28;
          if ( v28 )
          {
            v16 = sub_7E2370(v28, a2, 0x50, 1, 2u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a12 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v27 = FormHeapAlloc(0x10u);
          a6 = v27;
          if ( v27 )
          {
            v16 = sub_7E2370(v27, a2, 0x5A, 1, 2u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v26 = FormHeapAlloc(0x10u);
        a6 = v26;
        if ( v26 )
        {
          v16 = sub_7E2370(v26, a2, 0x4F, 1, 2u, a3);
          goto LABEL_35;
        }
        goto LABEL_34;
      }
      goto LABEL_78;
    }
    if ( !a10 )
    {
      if ( a12 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v33 = FormHeapAlloc(0x10u);
          a6 = v33;
          if ( v33 )
          {
            v16 = sub_7E2370(v33, a2, 0x5C, 1, 2u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v32 = FormHeapAlloc(0x10u);
        a6 = v32;
        if ( v32 )
        {
          v16 = sub_7E2370(v32, a2, 0x51, 1, 2u, a3);
          goto LABEL_35;
        }
        goto LABEL_34;
      }
      goto LABEL_78;
    }
    if ( dword_B42E8C )
      dword_B42E8C("SHADER ERROR : no shader to handle BSSM_AD2_SGFg ( skinned & glowmap & facegenblend )", 0);
  }
  else
  {
    if ( !a9 )
    {
      if ( a10 )
      {
        if ( a12 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v23 = FormHeapAlloc(0x10u);
            a6 = v23;
            if ( v23 )
            {
              v16 = sub_7E2370(v23, a2, 0x59, 1, 2u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a6 == 1 )
        {
          v22 = FormHeapAlloc(0x10u);
          a6 = v22;
          if ( v22 )
          {
            v16 = sub_7E2370(v22, a2, 0x4E, 1, 2u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a13 )
      {
        if ( a12 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v21 = FormHeapAlloc(0x10u);
            a6 = v21;
            if ( v21 )
            {
              v16 = sub_7E2370(v21, a2, 0x57, 1, 2u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a6 == 1 )
        {
          v20 = FormHeapAlloc(0x10u);
          a6 = v20;
          if ( v20 )
          {
            v16 = sub_7E2370(v20, a2, 0x4C, 1, 2u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a12 )
      {
        if ( a14 )
        {
          if ( (_BYTE)a6 == 1 )
          {
            v19 = FormHeapAlloc(0x10u);
            a6 = v19;
            if ( v19 )
            {
              v16 = sub_7E2370(v19, a2, 0x5F, 1, 2u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a6 == 1 )
        {
          v18 = FormHeapAlloc(0x10u);
          a6 = v18;
          if ( v18 )
          {
            v16 = sub_7E2370(v18, a2, 0x55, 1, 2u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a14 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v17 = FormHeapAlloc(0x10u);
          a6 = v17;
          if ( v17 )
          {
            v16 = sub_7E2370(v17, a2, 0x54, 1, 2u, a3);
            goto LABEL_35;
          }
LABEL_34:
          v16 = 0;
          goto LABEL_35;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v15 = FormHeapAlloc(0x10u);
        a6 = v15;
        if ( v15 )
        {
          v16 = sub_7E2370(v15, a2, 0x4A, 1, 2u, a3);
LABEL_35:
          a6 = v16;
          sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a6);
          goto LABEL_81;
        }
        goto LABEL_34;
      }
LABEL_78:
      ++*a5;
      goto LABEL_81;
    }
    if ( !a10 )
    {
      if ( a12 )
      {
        if ( (_BYTE)a6 == 1 )
        {
          v25 = FormHeapAlloc(0x10u);
          a6 = v25;
          if ( v25 )
          {
            v16 = sub_7E2370(v25, a2, 0x56, 1, 2u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( (_BYTE)a6 == 1 )
      {
        v24 = FormHeapAlloc(0x10u);
        a6 = v24;
        if ( v24 )
        {
          v16 = sub_7E2370(v24, a2, 0x4B, 1, 2u, a3);
          goto LABEL_35;
        }
        goto LABEL_34;
      }
      goto LABEL_78;
    }
    if ( dword_B42E8C )
      dword_B42E8C("SHADER ERROR : no shader to handle BSSM_AD2_GFg ( glowmap & facegenblend )", 0);
  }
LABEL_81:
  result = a7;
  *a7 = 0;
  return result;
}
