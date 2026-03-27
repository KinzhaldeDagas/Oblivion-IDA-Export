NiTPointerList_Node_void *__thiscall sub_853970(
        _DWORD *this,
        int a2,
        int a3,
        NiTPointerList_Node_void *a4,
        char a5,
        char *a6,
        char a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  NiTPointerList_Node_void *result; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax
  void *v17; // eax
  void *v18; // eax
  void *v19; // eax
  void *v20; // eax
  void *v21; // eax
  void *v22; // eax
  void *v23; // eax
  int v24; // eax
  const char *v25; // eax
  void *v26; // [esp+10h] [ebp-194h] BYREF
  char v27[128]; // [esp+14h] [ebp-190h] BYREF
  char v28[256]; // [esp+94h] [ebp-110h] BYREF
  int v29; // [esp+1A0h] [ebp-4h]

  result = a4;
  if ( !a7 )
  {
    if ( a11 )
    {
      if ( a5 == 1 )
      {
        v19 = (void *)FormHeapAlloc(0x10u);
        v26 = v19;
        v29 = 4;
        if ( v19 )
        {
          v15 = (void *)sub_7E2370((int)v19, a2, 0x10B, *a6, 0, 0);
          goto LABEL_22;
        }
        goto LABEL_21;
      }
    }
    else if ( a10 )
    {
      if ( a12 )
      {
        if ( a5 == 1 )
        {
          v18 = (void *)FormHeapAlloc(0x10u);
          v26 = v18;
          v29 = 3;
          if ( v18 )
          {
            v15 = (void *)sub_7E2370((int)v18, a2, 0x106, *a6, 0, 0);
            goto LABEL_22;
          }
          goto LABEL_21;
        }
      }
      else if ( a5 == 1 )
      {
        v17 = (void *)FormHeapAlloc(0x10u);
        v26 = v17;
        v29 = 2;
        if ( v17 )
        {
          v15 = (void *)sub_7E2370((int)v17, a2, 0x108, *a6, 0, 0);
          goto LABEL_22;
        }
        goto LABEL_21;
      }
    }
    else if ( a9 )
    {
      if ( a5 == 1 )
      {
        v16 = (void *)FormHeapAlloc(0x10u);
        v26 = v16;
        v29 = 1;
        if ( v16 )
        {
          v15 = (void *)sub_7E2370((int)v16, a2, 0x105, *a6, 0, 0);
          goto LABEL_22;
        }
LABEL_21:
        v15 = 0;
        goto LABEL_22;
      }
    }
    else if ( a5 == 1 )
    {
      v14 = (void *)FormHeapAlloc(0x10u);
      v26 = v14;
      v29 = 0;
      if ( v14 )
      {
        v15 = (void *)sub_7E2370((int)v14, a2, 0x104, *a6, 0, 0);
LABEL_22:
        v29 = 0xFFFFFFFF;
        v26 = v15;
        result = sub_5B1E20((BSTextureManager *)(this + 0xA), &v26);
        goto LABEL_51;
      }
      goto LABEL_21;
    }
LABEL_39:
    ++LOWORD(a4->next);
    goto LABEL_51;
  }
  if ( !a9 )
  {
    if ( a10 )
    {
      if ( a12 )
      {
        if ( a5 == 1 )
        {
          v22 = (void *)FormHeapAlloc(0x10u);
          v26 = v22;
          v29 = 7;
          if ( v22 )
          {
            v15 = (void *)sub_7E2370((int)v22, a2, 0x10C, *a6, 0, 0);
            goto LABEL_22;
          }
          goto LABEL_21;
        }
      }
      else if ( a5 == 1 )
      {
        v21 = (void *)FormHeapAlloc(0x10u);
        v26 = v21;
        v29 = 6;
        if ( v21 )
        {
          v15 = (void *)sub_7E2370((int)v21, a2, 0x109, *a6, 0, 0);
          goto LABEL_22;
        }
        goto LABEL_21;
      }
    }
    else if ( a5 == 1 )
    {
      v20 = (void *)FormHeapAlloc(0x10u);
      v26 = v20;
      v29 = 5;
      if ( v20 )
      {
        v15 = (void *)sub_7E2370((int)v20, a2, 0x107, *a6, 0, 0);
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    goto LABEL_39;
  }
  if ( !a10 )
  {
    if ( a5 == 1 )
    {
      v23 = (void *)FormHeapAlloc(0x10u);
      v26 = v23;
      v29 = 8;
      if ( v23 )
      {
        v15 = (void *)sub_7E2370((int)v23, a2, 0x10A, *a6, 0, 0);
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    goto LABEL_39;
  }
  if ( !a2 )
    goto LABEL_48;
  v24 = *(_DWORD *)(a2 + 0x1C);
  if ( v24 )
  {
    v25 = *(const char **)(v24 + 8);
    if ( v25 )
    {
      if ( *(_DWORD *)(a2 + 8) )
        _sprintf(v27, "Parent:%s,Child:%s", v25, *(const char **)(a2 + 8));
      else
        _sprintf(v27, "Parent:%s", v25);
      goto LABEL_49;
    }
  }
  if ( *(_DWORD *)(a2 + 8) )
    _sprintf(v27, "%s", *(const char **)(a2 + 8));
  else
LABEL_48:
    _sprintf(v27, "none");
LABEL_49:
  _sprintf(
    v28,
    "SHADER ERROR (%s)(%08X) : no shader to handle TEXTURE_SFgVc ( texture skinned facegen vertexcolors )",
    v27,
    a2);
  result = (NiTPointerList_Node_void *)dword_B42E8C;
  if ( dword_B42E8C )
    result = (NiTPointerList_Node_void *)((int (__cdecl *)(char *, _DWORD))result)(v28, 0);
LABEL_51:
  *a6 = 0;
  return result;
}
