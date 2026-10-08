NiTPointerList_Node_void *__thiscall sub_853970(
        _DWORD *this,
        void *vtable,
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
  RenderPass_DecodedLayout *v14; // eax
  RenderPass_DecodedLayout *v15; // eax
  RenderPass_DecodedLayout *v16; // eax
  RenderPass_DecodedLayout *v17; // eax
  RenderPass_DecodedLayout *v18; // eax
  RenderPass_DecodedLayout *v19; // eax
  RenderPass_DecodedLayout *v20; // eax
  RenderPass_DecodedLayout *v21; // eax
  RenderPass_DecodedLayout *v22; // eax
  RenderPass_DecodedLayout *v23; // eax
  int v24; // eax
  const char *v25; // eax
  RenderPass_DecodedLayout *v26; // [esp+10h] [ebp-194h] BYREF
  char v27[128]; // [esp+14h] [ebp-190h] BYREF
  char v28[256]; // [esp+94h] [ebp-110h] BYREF
  int v29; // [esp+1A0h] [ebp-4h]

  result = a4; /*0x8539b9*/
  if ( !a7 ) /*0x8539c9*/
  {
    if ( a11 ) /*0x8539d7*/
    {
      if ( a5 == 1 ) /*0x853b2c*/
      {
        v19 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853b34*/
        v26 = v19; /*0x853b3c*/
        v29 = 4; /*0x853b42*/
        if ( v19 ) /*0x853b4d*/
        {
          v15 = RenderPass_Construct(v19, vtable, 0x10Bu, *a6, 0, 0); /*0x853b5e*/
          goto LABEL_22; /*0x853b66*/
        }
        goto LABEL_21; /*0x853b4d*/
      }
    }
    else if ( a10 ) /*0x8539e5*/
    {
      if ( a12 ) /*0x853a93*/
      {
        if ( a5 == 1 ) /*0x853ae8*/
        {
          v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853af0*/
          v26 = v18; /*0x853af8*/
          v29 = 3; /*0x853afe*/
          if ( v18 ) /*0x853b09*/
          {
            v15 = RenderPass_Construct(v18, vtable, 0x106u, *a6, 0, 0); /*0x853b1a*/
            goto LABEL_22; /*0x853b22*/
          }
          goto LABEL_21; /*0x853b09*/
        }
      }
      else if ( a5 == 1 ) /*0x853a9d*/
      {
        v17 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853aa5*/
        v26 = v17; /*0x853aad*/
        v29 = 2; /*0x853ab3*/
        if ( v17 ) /*0x853abe*/
        {
          v15 = RenderPass_Construct(v17, vtable, 0x108u, *a6, 0, 0); /*0x853ad3*/
          goto LABEL_22; /*0x853adb*/
        }
        goto LABEL_21; /*0x853abe*/
      }
    }
    else if ( a9 ) /*0x8539f3*/
    {
      if ( a5 == 1 ) /*0x853a48*/
      {
        v16 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853a50*/
        v26 = v16; /*0x853a58*/
        v29 = 1; /*0x853a5e*/
        if ( v16 ) /*0x853a69*/
        {
          v15 = RenderPass_Construct(v16, vtable, 0x105u, *a6, 0, 0); /*0x853a7e*/
          goto LABEL_22; /*0x853a86*/
        }
LABEL_21:
        v15 = 0; /*0x853b68*/
        goto LABEL_22; /*0x853b68*/
      }
    }
    else if ( a5 == 1 ) /*0x8539fd*/
    {
      v14 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853a05*/
      v26 = v14; /*0x853a0d*/
      v29 = 0; /*0x853a13*/
      if ( v14 ) /*0x853a1e*/
      {
        v15 = RenderPass_Construct(v14, vtable, 0x104u, *a6, 0, 0); /*0x853a33*/
LABEL_22:
        v29 = 0xFFFFFFFF; /*0x853b6a*/
        v26 = v15; /*0x853b7d*/
        result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&v26); /*0x853b81*/
        goto LABEL_51; /*0x853b86*/
      }
      goto LABEL_21; /*0x853a1e*/
    }
LABEL_39:
    ++LOWORD(a4->next); /*0x853cd8*/
    goto LABEL_51; /*0x853cdc*/
  }
  if ( !a9 ) /*0x853b93*/
  {
    if ( a10 ) /*0x853ba1*/
    {
      if ( a12 ) /*0x853bef*/
      {
        if ( a5 == 1 ) /*0x853c44*/
        {
          v22 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853c4c*/
          v26 = v22; /*0x853c54*/
          v29 = 7; /*0x853c5a*/
          if ( v22 ) /*0x853c65*/
          {
            v15 = RenderPass_Construct(v22, vtable, 0x10Cu, *a6, 0, 0); /*0x853c7a*/
            goto LABEL_22; /*0x853c82*/
          }
          goto LABEL_21; /*0x853c65*/
        }
      }
      else if ( a5 == 1 ) /*0x853bf9*/
      {
        v21 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853c01*/
        v26 = v21; /*0x853c09*/
        v29 = 6; /*0x853c0f*/
        if ( v21 ) /*0x853c1a*/
        {
          v15 = RenderPass_Construct(v21, vtable, 0x109u, *a6, 0, 0); /*0x853c2f*/
          goto LABEL_22; /*0x853c37*/
        }
        goto LABEL_21; /*0x853c1a*/
      }
    }
    else if ( a5 == 1 ) /*0x853bab*/
    {
      v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853bb3*/
      v26 = v20; /*0x853bbb*/
      v29 = 5; /*0x853bc1*/
      if ( v20 ) /*0x853bcc*/
      {
        v15 = RenderPass_Construct(v20, vtable, 0x107u, *a6, 0, 0); /*0x853bdd*/
        goto LABEL_22; /*0x853be5*/
      }
      goto LABEL_21; /*0x853bcc*/
    }
    goto LABEL_39; /*0x853bab*/
  }
  if ( !a10 ) /*0x853c8f*/
  {
    if ( a5 == 1 ) /*0x853c99*/
    {
      v23 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853c9d*/
      v26 = v23; /*0x853ca5*/
      v29 = 8; /*0x853cab*/
      if ( v23 ) /*0x853cb6*/
      {
        v15 = RenderPass_Construct(v23, vtable, 0x10Au, *a6, 0, 0); /*0x853ccb*/
        goto LABEL_22; /*0x853cd3*/
      }
      goto LABEL_21; /*0x853cb6*/
    }
    goto LABEL_39; /*0x853c99*/
  }
  if ( !vtable ) /*0x853ce3*/
    goto LABEL_48; /*0x853ce3*/
  v24 = *((_DWORD *)vtable + 7); /*0x853ce5*/
  if ( v24 ) /*0x853cea*/
  {
    v25 = *(const char **)(v24 + 8); /*0x853cec*/
    if ( v25 ) /*0x853cf1*/
    {
      if ( *((_DWORD *)vtable + 2) ) /*0x853cf3*/
        _sprintf(v27, "Parent:%s,Child:%s", v25, *((const char **)vtable + 2)); /*0x853d06*/
      else
        _sprintf(v27, "Parent:%s", v25); /*0x853d1b*/
      goto LABEL_49; /*0x853d0e*/
    }
  }
  if ( *((_DWORD *)vtable + 2) ) /*0x853d25*/
    _sprintf(v27, "%s", *((const char **)vtable + 2)); /*0x853d37*/
  else
LABEL_48:
    _sprintf(v27, "none"); /*0x853d57*/
LABEL_49:
  _sprintf(
    v28,
    "SHADER ERROR (%s)(%08X) : no shader to handle TEXTURE_SFgVc ( texture skinned facegen vertexcolors )",
    v27,
    vtable);
  result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x853d77*/
  if ( unk_B42E8C ) /*0x853d77*/
    result = (NiTPointerList_Node_void *)((int (__cdecl *)(char *, _DWORD))result)(v28, 0); /*0x853d8d*/
LABEL_51:
  *a6 = 0; /*0x853d92*/
  return result; /*0x853d95*/
}
