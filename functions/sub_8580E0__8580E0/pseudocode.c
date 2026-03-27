NiTPointerList_Node_void *__thiscall sub_8580E0(
        _DWORD *this,
        int a2,
        int a3,
        NiTPointerList_Node_void *a4,
        int a5,
        _BYTE *a6,
        char a7,
        char a8,
        char a9,
        int a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  NiTPointerList_Node_void *result; // eax
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

  if ( a7 )
  {
    if ( a8 )
    {
      if ( !a9 )
      {
        if ( a12 )
        {
          if ( a11 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v32 = FormHeapAlloc(0x10u);
              a5 = v32;
              if ( v32 )
              {
                v17 = sub_7E2370(v32, a2, 0xC4, 1, 1u, a3);
                goto LABEL_101;
              }
              goto LABEL_100;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v31 = FormHeapAlloc(0x10u);
            a5 = v31;
            if ( v31 )
            {
              v17 = sub_7E2370(v31, a2, 0xB7, 1, 1u, a3);
              goto LABEL_101;
            }
            goto LABEL_100;
          }
        }
        else if ( a11 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v30 = FormHeapAlloc(0x10u);
            a5 = v30;
            if ( v30 )
            {
              v17 = sub_7E2370(v30, a2, 0xC0, 1, 1u, a3);
              goto LABEL_101;
            }
            goto LABEL_100;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v29 = FormHeapAlloc(0x10u);
          a5 = v29;
          if ( v29 )
          {
            v17 = sub_7E2370(v29, a2, 0xB3, 1, 1u, a3);
            goto LABEL_101;
          }
          goto LABEL_100;
        }
        goto LABEL_102;
      }
      result = (NiTPointerList_Node_void *)dword_B42E8C;
      if ( dword_B42E8C )
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle ADT_SGFg ( skinned & glowmap & facegenblend )",
                                               0);
    }
    else
    {
      if ( !a9 )
      {
        if ( a12 )
        {
          if ( a11 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v38 = FormHeapAlloc(0x10u);
              a5 = v38;
              if ( v38 )
              {
                v17 = sub_7E2370(v38, a2, 0xC3, 1, 1u, a3);
                goto LABEL_101;
              }
              goto LABEL_100;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v37 = FormHeapAlloc(0x10u);
            a5 = v37;
            if ( v37 )
            {
              v17 = sub_7E2370(v37, a2, 0xB6, 1, 1u, a3);
              goto LABEL_101;
            }
            goto LABEL_100;
          }
        }
        else if ( a11 )
        {
          if ( a14 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v36 = FormHeapAlloc(0x10u);
              a5 = v36;
              if ( v36 )
              {
                v17 = sub_7E2370(v36, a2, 0xC1, 1, 1u, a3);
                goto LABEL_101;
              }
              goto LABEL_100;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v35 = FormHeapAlloc(0x10u);
            a5 = v35;
            if ( v35 )
            {
              v17 = sub_7E2370(v35, a2, 0xBF, 1, 1u, a3);
              goto LABEL_101;
            }
            goto LABEL_100;
          }
        }
        else if ( a14 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v34 = FormHeapAlloc(0x10u);
            a5 = v34;
            if ( v34 )
            {
              v17 = sub_7E2370(v34, a2, 0xB4, 1, 1u, a3);
              goto LABEL_101;
            }
            goto LABEL_100;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v33 = FormHeapAlloc(0x10u);
          a5 = v33;
          if ( v33 )
          {
            v17 = sub_7E2370(v33, a2, 0xB2, 1, 1u, a3);
            goto LABEL_101;
          }
          goto LABEL_100;
        }
        goto LABEL_102;
      }
      result = (NiTPointerList_Node_void *)dword_B42E8C;
      if ( dword_B42E8C )
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle ADTS_SFg ( skinned & facegenblend )",
                                               0);
    }
  }
  else
  {
    if ( a8 )
    {
      if ( a9 )
      {
        result = (NiTPointerList_Node_void *)dword_B42E8C;
        if ( dword_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle ADTS_GFg ( glowmap & facegenblend )",
                                                 0);
        goto LABEL_103;
      }
      if ( a12 )
      {
        if ( a11 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v20 = FormHeapAlloc(0x10u);
            a5 = v20;
            if ( v20 )
            {
              v17 = sub_7E2370(v20, a2, 0xBE, 1, 1u, a3);
              goto LABEL_101;
            }
            goto LABEL_100;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v19 = FormHeapAlloc(0x10u);
          a5 = v19;
          if ( v19 )
          {
            v17 = sub_7E2370(v19, a2, 0xB1, 1, 1u, a3);
            goto LABEL_101;
          }
          goto LABEL_100;
        }
      }
      else if ( a11 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v18 = FormHeapAlloc(0x10u);
          a5 = v18;
          if ( v18 )
          {
            v17 = sub_7E2370(v18, a2, 0xBA, 1, 1u, a3);
            goto LABEL_101;
          }
LABEL_100:
          v17 = 0;
          goto LABEL_101;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v16 = FormHeapAlloc(0x10u);
        a5 = v16;
        if ( v16 )
        {
          v17 = sub_7E2370(v16, a2, 0xAD, 1, 1u, a3);
LABEL_101:
          a5 = v17;
          result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a5);
          goto LABEL_103;
        }
        goto LABEL_100;
      }
LABEL_102:
      result = a4;
      ++LOWORD(a4->next);
      goto LABEL_103;
    }
    if ( !a9 )
    {
      if ( a12 )
      {
        if ( a11 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v28 = FormHeapAlloc(0x10u);
            a5 = v28;
            if ( v28 )
            {
              v17 = sub_7E2370(v28, a2, 0xBD, 1, 1u, a3);
              goto LABEL_101;
            }
            goto LABEL_100;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v27 = FormHeapAlloc(0x10u);
          a5 = v27;
          if ( v27 )
          {
            v17 = sub_7E2370(v27, a2, 0xB0, 1, 1u, a3);
            goto LABEL_101;
          }
          goto LABEL_100;
        }
      }
      else if ( a11 )
      {
        if ( a13 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v26 = FormHeapAlloc(0x10u);
            a5 = v26;
            if ( v26 )
            {
              v17 = sub_7E2370(v26, a2, 0xC5, 1, 1u, a3);
              goto LABEL_101;
            }
            goto LABEL_100;
          }
        }
        else if ( a14 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v25 = FormHeapAlloc(0x10u);
            a5 = v25;
            if ( v25 )
            {
              v17 = sub_7E2370(v25, a2, 0xBB, 1, 1u, a3);
              goto LABEL_101;
            }
            goto LABEL_100;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v24 = FormHeapAlloc(0x10u);
          a5 = v24;
          if ( v24 )
          {
            v17 = sub_7E2370(v24, a2, 0xB9, 1, 1u, a3);
            goto LABEL_101;
          }
          goto LABEL_100;
        }
      }
      else if ( a13 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v23 = FormHeapAlloc(0x10u);
          a5 = v23;
          if ( v23 )
          {
            v17 = sub_7E2370(v23, a2, 0xB8, 1, 1u, a3);
            goto LABEL_101;
          }
          goto LABEL_100;
        }
      }
      else if ( a14 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v22 = FormHeapAlloc(0x10u);
          a5 = v22;
          if ( v22 )
          {
            v17 = sub_7E2370(v22, a2, 0xAE, 1, 1u, a3);
            goto LABEL_101;
          }
          goto LABEL_100;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v21 = FormHeapAlloc(0x10u);
        a5 = v21;
        if ( v21 )
        {
          v17 = sub_7E2370(v21, a2, 0xAC, 1, 1u, a3);
          goto LABEL_101;
        }
        goto LABEL_100;
      }
      goto LABEL_102;
    }
    result = (NiTPointerList_Node_void *)dword_B42E8C;
    if ( dword_B42E8C )
      result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                             "SHADER ERROR : no shader to handle ADTS_Fg ( facegenblend )",
                                             0);
  }
LABEL_103:
  *a6 = 0;
  return result;
}
