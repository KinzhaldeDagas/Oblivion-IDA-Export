NiTPointerList_Node_void *__thiscall sub_856D60(
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
        char a14,
        char a15,
        char a16)
{
  NiTPointerList_Node_void *result; // eax
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

  if ( !a7 )
  {
    if ( a8 )
    {
      if ( a9 )
      {
        result = (NiTPointerList_Node_void *)dword_B42E8C;
        if ( dword_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle ADT_GFg ( glowmap & facegenblend )",
                                                 0);
        goto LABEL_126;
      }
      if ( a12 )
      {
        if ( a11 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v22 = FormHeapAlloc(0x10u);
            a5 = v22;
            if ( v22 )
            {
              v19 = sub_7E2370(v22, a2, 0x89, 1, 1u, a3);
              goto LABEL_124;
            }
            goto LABEL_123;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v21 = FormHeapAlloc(0x10u);
          a5 = v21;
          if ( v21 )
          {
            v19 = sub_7E2370(v21, a2, 0x7B, 1, 1u, a3);
            goto LABEL_124;
          }
          goto LABEL_123;
        }
      }
      else if ( a11 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v20 = FormHeapAlloc(0x10u);
          a5 = v20;
          if ( v20 )
          {
            v19 = sub_7E2370(v20, a2, 0x86, 1, 1u, a3);
            goto LABEL_124;
          }
LABEL_123:
          v19 = 0;
          goto LABEL_124;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v18 = FormHeapAlloc(0x10u);
        a5 = v18;
        if ( v18 )
        {
          v19 = sub_7E2370(v18, a2, 0x78, 1, 1u, a3);
LABEL_124:
          a5 = v19;
          result = sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a5);
          goto LABEL_126;
        }
        goto LABEL_123;
      }
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
              v35 = FormHeapAlloc(0x10u);
              a5 = v35;
              if ( v35 )
              {
                v19 = sub_7E2370(v35, a2, 0x88, 1, 1u, a3);
                goto LABEL_124;
              }
              goto LABEL_123;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v34 = FormHeapAlloc(0x10u);
            a5 = v34;
            if ( v34 )
            {
              v19 = sub_7E2370(v34, a2, 0x7A, 1, 1u, a3);
              goto LABEL_124;
            }
            goto LABEL_123;
          }
          goto LABEL_125;
        }
        if ( a13 )
        {
          if ( a11 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v33 = FormHeapAlloc(0x10u);
              a5 = v33;
              if ( v33 )
              {
                v19 = sub_7E2370(v33, a2, 0x85, 1, 1u, a3);
                goto LABEL_124;
              }
              goto LABEL_123;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v32 = FormHeapAlloc(0x10u);
            a5 = v32;
            if ( v32 )
            {
              v19 = sub_7E2370(v32, a2, 0x77, 1, 1u, a3);
              goto LABEL_124;
            }
            goto LABEL_123;
          }
          goto LABEL_125;
        }
        if ( a11 )
        {
          if ( a14 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v31 = FormHeapAlloc(0x10u);
              a5 = v31;
              if ( v31 )
              {
                v19 = sub_7E2370(v31, a2, 0x90, 1, 1u, a3);
                goto LABEL_124;
              }
              goto LABEL_123;
            }
          }
          else if ( a16 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v30 = FormHeapAlloc(0x10u);
              a5 = v30;
              if ( v30 )
              {
                v19 = sub_7E2370(v30, a2, 0x8A, 1, 1u, a3);
                goto LABEL_124;
              }
              goto LABEL_123;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v29 = FormHeapAlloc(0x10u);
            a5 = v29;
            if ( v29 )
            {
              v19 = sub_7E2370(v29, a2, 0x84, 1, 1u, a3);
              goto LABEL_124;
            }
            goto LABEL_123;
          }
          goto LABEL_125;
        }
        if ( a14 )
        {
          if ( !a15 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v28 = FormHeapAlloc(0x10u);
              a5 = v28;
              if ( v28 )
              {
                v19 = sub_7E2370(v28, a2, 0x82, 1, 1u, a3);
                goto LABEL_124;
              }
              goto LABEL_123;
            }
            goto LABEL_125;
          }
        }
        else if ( !a15 )
        {
          if ( a16 )
          {
            if ( (_BYTE)a5 == 1 )
            {
              v26 = FormHeapAlloc(0x10u);
              a5 = v26;
              if ( v26 )
              {
                v19 = sub_7E2370(v26, a2, 0x7C, 1, 1u, a3);
                goto LABEL_124;
              }
              goto LABEL_123;
            }
          }
          else if ( (_BYTE)a5 == 1 )
          {
            v25 = FormHeapAlloc(0x10u);
            a5 = v25;
            if ( v25 )
            {
              v19 = sub_7E2370(v25, a2, 0x76, 1, 1u, a3);
              goto LABEL_124;
            }
            goto LABEL_123;
          }
          goto LABEL_125;
        }
        if ( (_BYTE)a5 == 1 )
        {
          v27 = FormHeapAlloc(0x10u);
          a5 = v27;
          if ( v27 )
          {
            v19 = sub_7E2370(v27, a2, 0x17B, 1, 1u, a3);
            goto LABEL_124;
          }
          goto LABEL_123;
        }
        goto LABEL_125;
      }
      if ( a11 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v24 = FormHeapAlloc(0x10u);
          a5 = v24;
          if ( v24 )
          {
            v19 = sub_7E2370(v24, a2, 0x87, 1, 1u, a3);
            goto LABEL_124;
          }
          goto LABEL_123;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v23 = FormHeapAlloc(0x10u);
        a5 = v23;
        if ( v23 )
        {
          v19 = sub_7E2370(v23, a2, 0x79, 1, 1u, a3);
          goto LABEL_124;
        }
        goto LABEL_123;
      }
    }
LABEL_125:
    result = a4;
    ++LOWORD(a4->next);
    goto LABEL_126;
  }
  if ( !a8 )
  {
    if ( a9 )
    {
      if ( a11 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v41 = FormHeapAlloc(0x10u);
          a5 = v41;
          if ( v41 )
          {
            v19 = sub_7E2370(v41, a2, 0x8D, 1, 1u, a3);
            goto LABEL_124;
          }
          goto LABEL_123;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v40 = FormHeapAlloc(0x10u);
        a5 = v40;
        if ( v40 )
        {
          v19 = sub_7E2370(v40, a2, 0x7F, 1, 1u, a3);
          goto LABEL_124;
        }
        goto LABEL_123;
      }
    }
    else if ( a12 )
    {
      if ( a11 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v47 = FormHeapAlloc(0x10u);
          a5 = v47;
          if ( v47 )
          {
            v19 = sub_7E2370(v47, a2, 0x8E, 1, 1u, a3);
            goto LABEL_124;
          }
          goto LABEL_123;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v46 = FormHeapAlloc(0x10u);
        a5 = v46;
        if ( v46 )
        {
          v19 = sub_7E2370(v46, a2, 0x80, 1, 1u, a3);
          goto LABEL_124;
        }
        goto LABEL_123;
      }
    }
    else if ( a11 )
    {
      if ( a16 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v45 = FormHeapAlloc(0x10u);
          a5 = v45;
          if ( v45 )
          {
            v19 = sub_7E2370(v45, a2, 0x91, 1, 1u, a3);
            goto LABEL_124;
          }
          goto LABEL_123;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v44 = FormHeapAlloc(0x10u);
        a5 = v44;
        if ( v44 )
        {
          v19 = sub_7E2370(v44, a2, 0x8B, 1, 1u, a3);
          goto LABEL_124;
        }
        goto LABEL_123;
      }
    }
    else if ( a16 )
    {
      if ( (_BYTE)a5 == 1 )
      {
        v43 = FormHeapAlloc(0x10u);
        a5 = v43;
        if ( v43 )
        {
          v19 = sub_7E2370(v43, a2, 0x83, 1, 1u, a3);
          goto LABEL_124;
        }
        goto LABEL_123;
      }
    }
    else if ( (_BYTE)a5 == 1 )
    {
      v42 = FormHeapAlloc(0x10u);
      a5 = v42;
      if ( v42 )
      {
        v19 = sub_7E2370(v42, a2, 0x7D, 1, 1u, a3);
        goto LABEL_124;
      }
      goto LABEL_123;
    }
    goto LABEL_125;
  }
  if ( !a9 )
  {
    if ( a12 )
    {
      if ( a11 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v39 = FormHeapAlloc(0x10u);
          a5 = v39;
          if ( v39 )
          {
            v19 = sub_7E2370(v39, a2, 0x8F, 1, 1u, a3);
            goto LABEL_124;
          }
          goto LABEL_123;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v38 = FormHeapAlloc(0x10u);
        a5 = v38;
        if ( v38 )
        {
          v19 = sub_7E2370(v38, a2, 0x81, 1, 1u, a3);
          goto LABEL_124;
        }
        goto LABEL_123;
      }
    }
    else if ( a11 )
    {
      if ( (_BYTE)a5 == 1 )
      {
        v37 = FormHeapAlloc(0x10u);
        a5 = v37;
        if ( v37 )
        {
          v19 = sub_7E2370(v37, a2, 0x8C, 1, 1u, a3);
          goto LABEL_124;
        }
        goto LABEL_123;
      }
    }
    else if ( (_BYTE)a5 == 1 )
    {
      v36 = FormHeapAlloc(0x10u);
      a5 = v36;
      if ( v36 )
      {
        v19 = sub_7E2370(v36, a2, 0x7E, 1, 1u, a3);
        goto LABEL_124;
      }
      goto LABEL_123;
    }
    goto LABEL_125;
  }
  result = (NiTPointerList_Node_void *)dword_B42E8C;
  if ( dword_B42E8C )
    result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                           "SHADER ERROR : no shader to handle ADT_SGFg ( skinned & glowmap & facegenblend )",
                                           0);
LABEL_126:
  *a6 = 0;
  return result;
}
