NiTPointerList_Node_void *__thiscall sub_852470(
        _DWORD *this,
        int a2,
        int a3,
        NiTPointerList_Node_void *a4,
        int a5,
        _BYTE *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  int v14; // eax
  int v15; // eax
  NiTPointerList_Node_void *result; // eax
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
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax

  if ( a7 )
  {
    if ( a8 )
    {
      if ( a9 )
      {
        if ( !a10 )
        {
          if ( a11 )
          {
            if ( a12 )
            {
              if ( (_BYTE)a5 == 1 )
              {
                v42 = FormHeapAlloc(0x10u);
                a5 = v42;
                if ( v42 )
                {
                  v15 = sub_7E2370(v42, a2, 0x46, 1, 1u, a3);
                  goto LABEL_243;
                }
                goto LABEL_242;
              }
            }
            else if ( (_BYTE)a5 == 1 )
            {
              v41 = FormHeapAlloc(0x10u);
              a5 = v41;
              if ( v41 )
              {
                v15 = sub_7E2370(v41, a2, 0x45, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
          }
          else if ( a12 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v44 = FormHeapAlloc(0x10u);
              a5 = v44;
              if ( v44 )
              {
                v15 = sub_7E2370(v44, a2, 0x2C, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v43 = FormHeapAlloc(0x10u);
            a5 = v43;
            if ( v43 )
            {
              v15 = sub_7E2370(v43, a2, 0x2B, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
          goto LABEL_244;
        }
        if ( a11 )
        {
          if ( !a12 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v39 = FormHeapAlloc(0x10u);
              a5 = v39;
              if ( v39 )
              {
                v15 = sub_7E2370(v39, a2, 0x47, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
            goto LABEL_244;
          }
          result = (NiTPointerList_Node_void *)dword_B42E8C;
          if ( dword_B42E8C )
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_SFGFgAVc ( skinned & fo"
                                                   "g & glow & facegenblend & alpha & vertexcolors )",
                                                   0);
        }
        else
        {
          if ( !a12 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v40 = FormHeapAlloc(0x10u);
              a5 = v40;
              if ( v40 )
              {
                v15 = sub_7E2370(v40, a2, 0x2E, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
            goto LABEL_244;
          }
          result = (NiTPointerList_Node_void *)dword_B42E8C;
          if ( dword_B42E8C )
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_SGFgAVc ( skinned & glo"
                                                   "w & facegenblend & alpha & vertexcolors )",
                                                   0);
        }
      }
      else
      {
        if ( !a10 )
        {
          if ( a11 )
          {
            if ( a12 )
            {
              if ( (_BYTE)a5 == 1 )
              {
                v47 = FormHeapAlloc(0x10u);
                a5 = v47;
                if ( v47 )
                {
                  v15 = sub_7E2370(v47, a2, 0x43, 1, 1u, a3);
                  goto LABEL_243;
                }
                goto LABEL_242;
              }
            }
            else if ( (_BYTE)a5 == 1 )
            {
              v46 = FormHeapAlloc(0x10u);
              a5 = v46;
              if ( v46 )
              {
                v15 = sub_7E2370(v46, a2, 0x42, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
          }
          else if ( a12 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v49 = FormHeapAlloc(0x10u);
              a5 = v49;
              if ( v49 )
              {
                v15 = sub_7E2370(v49, a2, 0x2A, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v48 = FormHeapAlloc(0x10u);
            a5 = v48;
            if ( v48 )
            {
              v15 = sub_7E2370(v48, a2, 0x29, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
          goto LABEL_244;
        }
        if ( a11 )
        {
          result = (NiTPointerList_Node_void *)dword_B42E8C;
          if ( a12 )
          {
            if ( result )
              result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                     "SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgAVc ( skinned & f"
                                                     "og & facegenblend & alpha & vertexcolors )",
                                                     0);
          }
          else if ( result )
          {
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgA ( skinned & fog &"
                                                   " facegenblend & alpha )",
                                                   0);
          }
        }
        else
        {
          if ( !a12 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v45 = FormHeapAlloc(0x10u);
              a5 = v45;
              if ( v45 )
              {
                v15 = sub_7E2370(v45, a2, 0x2D, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
            goto LABEL_244;
          }
          result = (NiTPointerList_Node_void *)dword_B42E8C;
          if ( dword_B42E8C )
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_SFgAVc ( skinned & face"
                                                   "genblend & alpha & vertexcolors )",
                                                   0);
        }
      }
    }
    else if ( a9 )
    {
      if ( !a10 )
      {
        if ( a11 )
        {
          if ( a12 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v51 = FormHeapAlloc(0x10u);
              a5 = v51;
              if ( v51 )
              {
                v15 = sub_7E2370(v51, a2, 0x41, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v50 = FormHeapAlloc(0x10u);
            a5 = v50;
            if ( v50 )
            {
              v15 = sub_7E2370(v50, a2, 0x40, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
        }
        else if ( a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v53 = FormHeapAlloc(0x10u);
            a5 = v53;
            if ( v53 )
            {
              v15 = sub_7E2370(v53, a2, 0x27, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v52 = FormHeapAlloc(0x10u);
          a5 = v52;
          if ( v52 )
          {
            v15 = sub_7E2370(v52, a2, 0x26, 1, 1u, a3);
            goto LABEL_243;
          }
          goto LABEL_242;
        }
        goto LABEL_244;
      }
      result = (NiTPointerList_Node_void *)dword_B42E8C;
      if ( a11 )
      {
        if ( a12 )
        {
          if ( result )
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgGVc ( skinned & fog"
                                                   " & glowmap & facegenblend & vertexcolors )",
                                                   0);
        }
        else if ( result )
        {
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgG ( skinned & fog & g"
                                                 "lowmap & facegenblend )",
                                                 0);
        }
      }
      else if ( a12 )
      {
        if ( result )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_SFgGVc ( skinned & glowma"
                                                 "p & facegenblend & vertexcolors )",
                                                 0);
      }
      else if ( result )
      {
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle AMBDIFFTEX_SFgG ( skinned & glowmap & facegenblend )",
                                               0);
      }
    }
    else
    {
      if ( !a10 )
      {
        if ( a11 )
        {
          if ( a12 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v57 = FormHeapAlloc(0x10u);
              a5 = v57;
              if ( v57 )
              {
                v15 = sub_7E2370(v57, a2, 0x3F, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v56 = FormHeapAlloc(0x10u);
            a5 = v56;
            if ( v56 )
            {
              v15 = sub_7E2370(v56, a2, 0x3E, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
        }
        else if ( a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v59 = FormHeapAlloc(0x10u);
            a5 = v59;
            if ( v59 )
            {
              v15 = sub_7E2370(v59, a2, 0x25, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v58 = FormHeapAlloc(0x10u);
          a5 = v58;
          if ( v58 )
          {
            v15 = sub_7E2370(v58, a2, 0x24, 1, 1u, a3);
            goto LABEL_243;
          }
          goto LABEL_242;
        }
        goto LABEL_244;
      }
      if ( a11 )
      {
        if ( !a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v54 = FormHeapAlloc(0x10u);
            a5 = v54;
            if ( v54 )
            {
              v15 = sub_7E2370(v54, a2, 0x44, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
          goto LABEL_244;
        }
        result = (NiTPointerList_Node_void *)dword_B42E8C;
        if ( dword_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgVc ( skinned & fog & "
                                                 "facegenblend & vertexcolors )",
                                                 0);
      }
      else
      {
        if ( !a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v55 = FormHeapAlloc(0x10u);
            a5 = v55;
            if ( v55 )
            {
              v15 = sub_7E2370(v55, a2, 0x28, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
          goto LABEL_244;
        }
        result = (NiTPointerList_Node_void *)dword_B42E8C;
        if ( dword_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_SFgVc ( skinned & facegen"
                                                 "blend & vertexcolors )",
                                                 0);
      }
    }
  }
  else if ( a8 )
  {
    if ( a9 )
    {
      if ( !a10 )
      {
        if ( a11 )
        {
          if ( a12 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v19 = FormHeapAlloc(0x10u);
              a5 = v19;
              if ( v19 )
              {
                v15 = sub_7E2370(v19, a2, 0x3C, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v18 = FormHeapAlloc(0x10u);
            a5 = v18;
            if ( v18 )
            {
              v15 = sub_7E2370(v18, a2, 0x3B, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
        }
        else if ( a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v21 = FormHeapAlloc(0x10u);
            a5 = v21;
            if ( v21 )
            {
              v15 = sub_7E2370(v21, a2, 0x21, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v20 = FormHeapAlloc(0x10u);
          a5 = v20;
          if ( v20 )
          {
            v15 = sub_7E2370(v20, a2, 0x20, 1, 1u, a3);
            goto LABEL_243;
          }
          goto LABEL_242;
        }
        goto LABEL_244;
      }
      if ( a11 )
      {
        if ( !a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v14 = FormHeapAlloc(0x10u);
            a5 = v14;
            if ( v14 )
            {
              v15 = sub_7E2370(v14, a2, 0x3D, 1, 1u, a3);
LABEL_243:
              a5 = v15;
              result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a5);
              goto LABEL_245;
            }
            goto LABEL_242;
          }
          goto LABEL_244;
        }
        result = (NiTPointerList_Node_void *)dword_B42E8C;
        if ( dword_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_FGFgAVc ( fog & glow & fa"
                                                 "cegen & alpha & vertexcolors )",
                                                 0);
      }
      else
      {
        if ( !a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v17 = FormHeapAlloc(0x10u);
            a5 = v17;
            if ( v17 )
            {
              v15 = sub_7E2370(v17, a2, 0x23, 1, 1u, a3);
              goto LABEL_243;
            }
LABEL_242:
            v15 = 0;
            goto LABEL_243;
          }
LABEL_244:
          result = a4;
          ++LOWORD(a4->next);
          goto LABEL_245;
        }
        result = (NiTPointerList_Node_void *)dword_B42E8C;
        if ( dword_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_GFgAVc ( glow & facegen &"
                                                 " alpha & vertexcolors )",
                                                 0);
      }
    }
    else
    {
      if ( !a10 )
      {
        if ( a11 )
        {
          if ( a12 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v24 = FormHeapAlloc(0x10u);
              a5 = v24;
              if ( v24 )
              {
                v15 = sub_7E2370(v24, a2, 0x39, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v23 = FormHeapAlloc(0x10u);
            a5 = v23;
            if ( v23 )
            {
              v15 = sub_7E2370(v23, a2, 0x38, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
        }
        else if ( a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v26 = FormHeapAlloc(0x10u);
            a5 = v26;
            if ( v26 )
            {
              v15 = sub_7E2370(v26, a2, 0x1F, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v25 = FormHeapAlloc(0x10u);
          a5 = v25;
          if ( v25 )
          {
            v15 = sub_7E2370(v25, a2, 0x1E, 1, 1u, a3);
            goto LABEL_243;
          }
          goto LABEL_242;
        }
        goto LABEL_244;
      }
      if ( a11 )
      {
        result = (NiTPointerList_Node_void *)dword_B42E8C;
        if ( a12 )
        {
          if ( result )
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_FFgAVc ( fog & facegenb"
                                                   "lend & alpha & vertexcolors )",
                                                   0);
        }
        else if ( result )
        {
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_FFgA ( fog & facegenblend & alpha )",
                                                 0);
        }
      }
      else
      {
        if ( !a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v22 = FormHeapAlloc(0x10u);
            a5 = v22;
            if ( v22 )
            {
              v15 = sub_7E2370(v22, a2, 0x22, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
          goto LABEL_244;
        }
        result = (NiTPointerList_Node_void *)dword_B42E8C;
        if ( dword_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_FgAVc ( facegenblend & al"
                                                 "pha & vertexcolors )",
                                                 0);
      }
    }
  }
  else if ( a9 )
  {
    if ( !a10 )
    {
      if ( a11 )
      {
        if ( a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v28 = FormHeapAlloc(0x10u);
            a5 = v28;
            if ( v28 )
            {
              v15 = sub_7E2370(v28, a2, 0x37, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v27 = FormHeapAlloc(0x10u);
          a5 = v27;
          if ( v27 )
          {
            v15 = sub_7E2370(v27, a2, 0x36, 1, 1u, a3);
            goto LABEL_243;
          }
          goto LABEL_242;
        }
      }
      else if ( a12 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v30 = FormHeapAlloc(0x10u);
          a5 = v30;
          if ( v30 )
          {
            v15 = sub_7E2370(v30, a2, 0x1C, 1, 1u, a3);
            goto LABEL_243;
          }
          goto LABEL_242;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v29 = FormHeapAlloc(0x10u);
        a5 = v29;
        if ( v29 )
        {
          v15 = sub_7E2370(v29, a2, 0x1B, 1, 1u, a3);
          goto LABEL_243;
        }
        goto LABEL_242;
      }
      goto LABEL_244;
    }
    result = (NiTPointerList_Node_void *)dword_B42E8C;
    if ( a11 )
    {
      if ( a12 )
      {
        if ( result )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_FFgGVc ( fog & glowmap & "
                                                 "facegenblend & vertexcolors )",
                                                 0);
      }
      else if ( result )
      {
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle AMBDIFFTEX_FFgG ( fog & glowmap & facegenblend )",
                                               0);
      }
    }
    else if ( a12 )
    {
      if ( result )
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle AMBDIFFTEX_FgGVc ( glowmap & facegenbl"
                                               "end & vertexcolors )",
                                               0);
    }
    else if ( result )
    {
      result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                             "SHADER ERROR : no shader to handle AMBDIFFTEX_FgG ( glowmap & facegenblend )",
                                             0);
    }
  }
  else
  {
    if ( !a10 )
    {
      if ( a11 )
      {
        if ( a12 )
        {
          if ( a13 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v35 = FormHeapAlloc(0x10u);
              a5 = v35;
              if ( v35 )
              {
                v15 = sub_7E2370(v35, a2, 0x30, 1, 1u, a3);
                goto LABEL_243;
              }
              goto LABEL_242;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v34 = FormHeapAlloc(0x10u);
            a5 = v34;
            if ( v34 )
            {
              v15 = sub_7E2370(v34, a2, 0x35, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v33 = FormHeapAlloc(0x10u);
          a5 = v33;
          if ( v33 )
          {
            v15 = sub_7E2370(v33, a2, 0x34, 1, 1u, a3);
            goto LABEL_243;
          }
          goto LABEL_242;
        }
      }
      else if ( a12 )
      {
        if ( a13 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v38 = FormHeapAlloc(0x10u);
            a5 = v38;
            if ( v38 )
            {
              v15 = sub_7E2370(v38, a2, 0x2F, 1, 1u, a3);
              goto LABEL_243;
            }
            goto LABEL_242;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v37 = FormHeapAlloc(0x10u);
          a5 = v37;
          if ( v37 )
          {
            v15 = sub_7E2370(v37, a2, 0x1A, 1, 1u, a3);
            goto LABEL_243;
          }
          goto LABEL_242;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v36 = FormHeapAlloc(0x10u);
        a5 = v36;
        if ( v36 )
        {
          v15 = sub_7E2370(v36, a2, 0x19, 1, 1u, a3);
          goto LABEL_243;
        }
        goto LABEL_242;
      }
      goto LABEL_244;
    }
    if ( a11 )
    {
      if ( !a12 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v31 = FormHeapAlloc(0x10u);
          a5 = v31;
          if ( v31 )
          {
            v15 = sub_7E2370(v31, a2, 0x3A, 1, 1u, a3);
            goto LABEL_243;
          }
          goto LABEL_242;
        }
        goto LABEL_244;
      }
      result = (NiTPointerList_Node_void *)dword_B42E8C;
      if ( dword_B42E8C )
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle AMBDIFFTEX_FFgVc ( fog & facegenblend "
                                               "& vertexcolors )",
                                               0);
    }
    else
    {
      if ( !a12 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v32 = FormHeapAlloc(0x10u);
          a5 = v32;
          if ( v32 )
          {
            v15 = sub_7E2370(v32, a2, 0x1D, 1, 1u, a3);
            goto LABEL_243;
          }
          goto LABEL_242;
        }
        goto LABEL_244;
      }
      result = (NiTPointerList_Node_void *)dword_B42E8C;
      if ( dword_B42E8C )
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle AMBDIFFTEX_FgVc ( facegenblend & vertexcolors )",
                                               0);
    }
  }
LABEL_245:
  *a6 = 0;
  return result;
}
