NiTPointerList_Node_void *__thiscall sub_856510(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        NiTPointerList_Node_void *a6,
        int a7,
        _BYTE *a8,
        char a9,
        char a10,
        char a11,
        int a12,
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
  NiTPointerList_Node_void *result; // eax
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

  if ( a9 )
  {
    if ( !a10 )
    {
      if ( a11 )
      {
        if ( a13 )
        {
          if ( (_BYTE)a7 == 1 )
          {
            v35 = FormHeapAlloc(0x10u);
            a7 = v35;
            if ( v35 )
            {
              v17 = sub_7E2370(v35, a2, 0x74, 1, 3u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a7 == 1 )
        {
          v34 = FormHeapAlloc(0x10u);
          a7 = v34;
          if ( v34 )
          {
            v17 = sub_7E2370(v34, a2, 0x69, 1, 3u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a14 )
      {
        if ( a13 )
        {
          if ( (_BYTE)a7 == 1 )
          {
            v33 = FormHeapAlloc(0x10u);
            a7 = v33;
            if ( v33 )
            {
              v17 = sub_7E2370(v33, a2, 0x71, 1, 3u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a7 == 1 )
        {
          v32 = FormHeapAlloc(0x10u);
          a7 = v32;
          if ( v32 )
          {
            v17 = sub_7E2370(v32, a2, 0x66, 1, 3u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a13 )
      {
        if ( (_BYTE)a7 == 1 )
        {
          v31 = FormHeapAlloc(0x10u);
          a7 = v31;
          if ( v31 )
          {
            v17 = sub_7E2370(v31, a2, 0x70, 1, 3u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( (_BYTE)a7 == 1 )
      {
        v30 = FormHeapAlloc(0x10u);
        a7 = v30;
        if ( v30 )
        {
          v17 = sub_7E2370(v30, a2, 0x65, 1, 3u, a3);
          goto LABEL_35;
        }
        goto LABEL_34;
      }
      goto LABEL_94;
    }
    if ( !a11 )
    {
      if ( a14 )
      {
        if ( a13 )
        {
          if ( (_BYTE)a7 == 1 )
          {
            v39 = FormHeapAlloc(0x10u);
            a7 = v39;
            if ( v39 )
            {
              v17 = sub_7E2370(v39, a2, 0x73, 1, 3u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a7 == 1 )
        {
          v38 = FormHeapAlloc(0x10u);
          a7 = v38;
          if ( v38 )
          {
            v17 = sub_7E2370(v38, a2, 0x68, 1, 3u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a13 )
      {
        if ( (_BYTE)a7 == 1 )
        {
          v37 = FormHeapAlloc(0x10u);
          a7 = v37;
          if ( v37 )
          {
            v17 = sub_7E2370(v37, a2, 0x72, 1, 3u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( (_BYTE)a7 == 1 )
      {
        v36 = FormHeapAlloc(0x10u);
        a7 = v36;
        if ( v36 )
        {
          v17 = sub_7E2370(v36, a2, 0x67, 1, 3u, a3);
          goto LABEL_35;
        }
        goto LABEL_34;
      }
      goto LABEL_94;
    }
    result = (NiTPointerList_Node_void *)dword_B42E8C;
    if ( dword_B42E8C )
      result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                             "SHADER ERROR : no shader to handle BSSM_AD3_SGFg ( skinned & glowmap & facegenblend )",
                                             0);
  }
  else
  {
    if ( !a10 )
    {
      if ( a11 )
      {
        if ( a13 )
        {
          if ( (_BYTE)a7 == 1 )
          {
            v24 = FormHeapAlloc(0x10u);
            a7 = v24;
            if ( v24 )
            {
              v17 = sub_7E2370(v24, a2, 0x6F, 1, 3u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a7 == 1 )
        {
          v23 = FormHeapAlloc(0x10u);
          a7 = v23;
          if ( v23 )
          {
            v17 = sub_7E2370(v23, a2, 0x64, 1, 3u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a14 )
      {
        if ( a13 )
        {
          if ( (_BYTE)a7 == 1 )
          {
            v22 = FormHeapAlloc(0x10u);
            a7 = v22;
            if ( v22 )
            {
              v17 = sub_7E2370(v22, a2, 0x6D, 1, 3u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a7 == 1 )
        {
          v21 = FormHeapAlloc(0x10u);
          a7 = v21;
          if ( v21 )
          {
            v17 = sub_7E2370(v21, a2, 0x62, 1, 3u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a13 )
      {
        if ( a15 )
        {
          if ( (_BYTE)a7 == 1 )
          {
            v20 = FormHeapAlloc(0x10u);
            a7 = v20;
            if ( v20 )
            {
              v17 = sub_7E2370(v20, a2, 0x75, 1, 3u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a7 == 1 )
        {
          v19 = FormHeapAlloc(0x10u);
          a7 = v19;
          if ( v19 )
          {
            v17 = sub_7E2370(v19, a2, 0x6B, 1, 3u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a15 )
      {
        if ( (_BYTE)a7 == 1 )
        {
          v18 = FormHeapAlloc(0x10u);
          a7 = v18;
          if ( v18 )
          {
            v17 = sub_7E2370(v18, a2, 0x6A, 1, 3u, a3);
            goto LABEL_35;
          }
LABEL_34:
          v17 = 0;
          goto LABEL_35;
        }
      }
      else if ( (_BYTE)a7 == 1 )
      {
        v16 = FormHeapAlloc(0x10u);
        a7 = v16;
        if ( v16 )
        {
          v17 = sub_7E2370(v16, a2, 0x60, 1, 3u, a3);
LABEL_35:
          a7 = v17;
          result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a7);
          goto LABEL_97;
        }
        goto LABEL_34;
      }
LABEL_94:
      result = a6;
      ++LOWORD(a6->next);
      goto LABEL_97;
    }
    if ( !a11 )
    {
      if ( a14 )
      {
        if ( a13 )
        {
          if ( (_BYTE)a7 == 1 )
          {
            v29 = FormHeapAlloc(0x10u);
            a7 = v29;
            if ( v29 )
            {
              v17 = sub_7E2370(v29, a2, 0x6E, 1, 3u, a3);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
        }
        else if ( (_BYTE)a7 == 1 )
        {
          v28 = FormHeapAlloc(0x10u);
          a7 = v28;
          if ( v28 )
          {
            v17 = sub_7E2370(v28, a2, 0x63, 1, 3u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( a13 )
      {
        if ( (_BYTE)a7 == 1 )
        {
          v27 = FormHeapAlloc(0x10u);
          a7 = v27;
          if ( v27 )
          {
            v17 = sub_7E2370(v27, a2, 0x6C, 1, 3u, a3);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
      }
      else if ( (_BYTE)a7 == 1 )
      {
        v26 = FormHeapAlloc(0x10u);
        a7 = v26;
        if ( v26 )
        {
          v17 = sub_7E2370(v26, a2, 0x61, 1, 3u, a3);
          goto LABEL_35;
        }
        goto LABEL_34;
      }
      goto LABEL_94;
    }
    result = (NiTPointerList_Node_void *)dword_B42E8C;
    if ( dword_B42E8C )
      result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                             "SHADER ERROR : no shader to handle BSSM_AD3_GFg ( glowmap & facegenblend )",
                                             0);
  }
LABEL_97:
  *a8 = 0;
  return result;
}
