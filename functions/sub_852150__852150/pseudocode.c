NiTPointerList_Node_void *__thiscall sub_852150(
        _DWORD *this,
        void *vtable,
        int a3,
        NiTPointerList_Node_void *a4,
        RenderPass_DecodedLayout *a5,
        _BYTE *a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  RenderPass_DecodedLayout *v11; // eax
  RenderPass_DecodedLayout *v12; // eax
  RenderPass_DecodedLayout *v13; // eax
  RenderPass_DecodedLayout *v14; // eax
  RenderPass_DecodedLayout *v15; // eax
  RenderPass_DecodedLayout *v16; // eax
  RenderPass_DecodedLayout *v17; // eax
  RenderPass_DecodedLayout *v18; // eax
  RenderPass_DecodedLayout *v19; // eax
  RenderPass_DecodedLayout *v20; // eax
  NiTPointerList_Node_void *result; // eax

  if ( a7 ) /*0x852178*/
  {
    if ( a8 ) /*0x852306*/
    {
      if ( a9 ) /*0x852311*/
      {
        if ( (_BYTE)a5 != 1 ) /*0x852318*/
          goto LABEL_38; /*0x852318*/
        v17 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852320*/
        a5 = v17; /*0x852328*/
        if ( v17 ) /*0x852336*/
        {
          v12 = RenderPass_Construct(v17, vtable, 0x17u, 1u, 1u, a3); /*0x85234d*/
          goto LABEL_37; /*0x852355*/
        }
      }
      else
      {
        if ( (_BYTE)a5 != 1 ) /*0x85235f*/
          goto LABEL_38; /*0x85235f*/
        v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852367*/
        a5 = v18; /*0x85236f*/
        if ( v18 ) /*0x85237d*/
        {
          v12 = RenderPass_Construct(v18, vtable, 0x16u, 1u, 1u, a3); /*0x852394*/
          goto LABEL_37; /*0x85239c*/
        }
      }
    }
    else if ( a9 ) /*0x8523a6*/
    {
      if ( (_BYTE)a5 != 1 ) /*0x8523ad*/
        goto LABEL_38; /*0x8523ad*/
      v19 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8523b5*/
      a5 = v19; /*0x8523bd*/
      if ( v19 ) /*0x8523cb*/
      {
        v12 = RenderPass_Construct(v19, vtable, 0x15u, 1u, 1u, a3); /*0x8523de*/
        goto LABEL_37; /*0x8523e6*/
      }
    }
    else
    {
      if ( (_BYTE)a5 != 1 ) /*0x8523ed*/
        goto LABEL_38; /*0x8523ed*/
      v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8523f1*/
      a5 = v20; /*0x8523f9*/
      if ( v20 ) /*0x852407*/
      {
        v12 = RenderPass_Construct(v20, vtable, 0x14u, 1u, 1u, a3); /*0x85241a*/
        goto LABEL_37; /*0x852422*/
      }
    }
    goto LABEL_36; /*0x852336*/
  }
  if ( !a8 ) /*0x852183*/
  {
    if ( a9 ) /*0x852223*/
    {
      if ( (_BYTE)a5 != 1 ) /*0x85222a*/
        goto LABEL_38; /*0x85222a*/
      v14 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852232*/
      a5 = v14; /*0x85223a*/
      if ( v14 ) /*0x852248*/
      {
        v12 = RenderPass_Construct(v14, vtable, 0x11u, 1u, 1u, a3); /*0x85225f*/
        goto LABEL_37; /*0x852267*/
      }
    }
    else if ( a10 ) /*0x852271*/
    {
      if ( (_BYTE)a5 != 1 ) /*0x8522bf*/
        goto LABEL_38; /*0x8522bf*/
      v16 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8522c7*/
      a5 = v16; /*0x8522cf*/
      if ( v16 ) /*0x8522dd*/
      {
        v12 = RenderPass_Construct(v16, vtable, 0x18u, 1u, 1u, a3); /*0x8522f4*/
        goto LABEL_37; /*0x8522fc*/
      }
    }
    else
    {
      if ( (_BYTE)a5 != 1 ) /*0x852278*/
        goto LABEL_38; /*0x852278*/
      v15 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852280*/
      a5 = v15; /*0x852288*/
      if ( v15 ) /*0x852296*/
      {
        v12 = RenderPass_Construct(v15, vtable, 0x10u, 1u, 1u, a3); /*0x8522ad*/
        goto LABEL_37; /*0x8522b5*/
      }
    }
    goto LABEL_36; /*0x852248*/
  }
  if ( !a9 ) /*0x85218e*/
  {
    if ( (_BYTE)a5 != 1 ) /*0x8521dc*/
      goto LABEL_38; /*0x8521dc*/
    v13 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8521e4*/
    a5 = v13; /*0x8521ec*/
    if ( v13 ) /*0x8521fa*/
    {
      v12 = RenderPass_Construct(v13, vtable, 0x12u, 1u, 1u, a3); /*0x852211*/
      goto LABEL_37; /*0x852219*/
    }
LABEL_36:
    v12 = 0; /*0x852424*/
    goto LABEL_37; /*0x852424*/
  }
  if ( (_BYTE)a5 != 1 ) /*0x852195*/
  {
LABEL_38:
    result = a4; /*0x852441*/
    ++LOWORD(a4->next); /*0x852445*/
    goto LABEL_39; /*0x852445*/
  }
  v11 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85219d*/
  a5 = v11; /*0x8521a5*/
  if ( !v11 ) /*0x8521b3*/
    goto LABEL_36; /*0x8521b3*/
  v12 = RenderPass_Construct(v11, vtable, 0x13u, 1u, 1u, a3); /*0x8521ca*/
LABEL_37:
  a5 = v12; /*0x852426*/
  result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a5); /*0x85243a*/
LABEL_39:
  *a6 = 0; /*0x852449*/
  return result; /*0x852450*/
}
