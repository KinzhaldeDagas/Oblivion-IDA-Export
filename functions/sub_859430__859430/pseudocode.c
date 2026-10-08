NiTPointerList_Node_void *__thiscall sub_859430(
        _DWORD *this,
        void *vtable,
        int a3,
        int a4,
        int a5,
        NiTPointerList_Node_void *a6,
        RenderPass_DecodedLayout *a7,
        char *a8,
        char a9,
        char a10,
        int a11,
        char a12,
        char a13)
{
  unsigned __int8 *v14; // esi
  RenderPass_DecodedLayout *v15; // eax
  RenderPass_DecodedLayout *v16; // eax
  RenderPass_DecodedLayout *v17; // eax
  RenderPass_DecodedLayout *v18; // eax
  RenderPass_DecodedLayout *v19; // eax
  RenderPass_DecodedLayout *v20; // eax
  RenderPass_DecodedLayout *v21; // eax
  RenderPass_DecodedLayout *v22; // eax
  NiTPointerList_Node_void *result; // eax

  v14 = (unsigned __int8 *)a8; /*0x859459*/
  if ( a9 ) /*0x85945d*/
  {
    if ( a10 ) /*0x8595dd*/
    {
      if ( (_BYTE)a7 != 1 ) /*0x859694*/
        goto LABEL_30; /*0x859694*/
      v22 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859698*/
      a7 = v22; /*0x8596a0*/
      if ( v22 ) /*0x8596ae*/
      {
        v16 = RenderPass_Construct(v22, vtable, 0xFAu, *v14, 3u, a3, a4, a5); /*0x8596d0*/
        goto LABEL_29; /*0x8596d8*/
      }
    }
    else if ( a12 ) /*0x8595e8*/
    {
      if ( (_BYTE)a7 != 1 ) /*0x859645*/
        goto LABEL_30; /*0x859645*/
      v21 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85964d*/
      a7 = v21; /*0x859655*/
      if ( v21 ) /*0x859663*/
      {
        v16 = RenderPass_Construct(v21, vtable, 0xFBu, *v14, 3u, a3, a4, a5); /*0x859685*/
        goto LABEL_29; /*0x85968d*/
      }
    }
    else
    {
      if ( (_BYTE)a7 != 1 ) /*0x8595ef*/
        goto LABEL_30; /*0x8595ef*/
      v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8595f7*/
      a7 = v20; /*0x8595ff*/
      if ( v20 ) /*0x85960d*/
      {
        v16 = RenderPass_Construct(v20, vtable, 0xF9u, *v14, 3u, a3, a4, a5); /*0x859633*/
        goto LABEL_29; /*0x85963b*/
      }
    }
    goto LABEL_28; /*0x85960d*/
  }
  if ( a10 ) /*0x859468*/
  {
    if ( (_BYTE)a7 != 1 ) /*0x859587*/
      goto LABEL_30; /*0x859587*/
    v19 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85958f*/
    a7 = v19; /*0x859597*/
    if ( v19 ) /*0x8595a5*/
    {
      v16 = RenderPass_Construct(v19, vtable, 0xF7u, *v14, 3u, a3, a4, a5); /*0x8595cb*/
      goto LABEL_29; /*0x8595d3*/
    }
    goto LABEL_28; /*0x8595a5*/
  }
  if ( a12 ) /*0x859473*/
  {
    if ( (_BYTE)a7 != 1 ) /*0x859531*/
      goto LABEL_30; /*0x859531*/
    v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859539*/
    a7 = v18; /*0x859541*/
    if ( v18 ) /*0x85954f*/
    {
      v16 = RenderPass_Construct(v18, vtable, 0xF8u, *v14, 3u, a3, a4, a5); /*0x859575*/
      goto LABEL_29; /*0x85957d*/
    }
    goto LABEL_28; /*0x85954f*/
  }
  if ( a13 ) /*0x85947e*/
  {
    if ( (_BYTE)a7 != 1 ) /*0x8594db*/
      goto LABEL_30; /*0x8594db*/
    v17 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8594e3*/
    a7 = v17; /*0x8594eb*/
    if ( v17 ) /*0x8594f9*/
    {
      v16 = RenderPass_Construct(v17, vtable, 0xFCu, *v14, 3u, a3, a4, a5); /*0x85951f*/
      goto LABEL_29; /*0x859527*/
    }
LABEL_28:
    v16 = 0; /*0x8596da*/
    goto LABEL_29; /*0x8596da*/
  }
  if ( (_BYTE)a7 != 1 ) /*0x859485*/
  {
LABEL_30:
    result = a6; /*0x8596f7*/
    ++LOWORD(a6->next); /*0x8596fb*/
    goto LABEL_31; /*0x8596fb*/
  }
  v15 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85948d*/
  a7 = v15; /*0x859495*/
  if ( !v15 ) /*0x8594a3*/
    goto LABEL_28; /*0x8594a3*/
  v16 = RenderPass_Construct(v15, vtable, 0xF6u, *v14, 3u, a3, a4, a5); /*0x8594c9*/
LABEL_29:
  a7 = v16; /*0x8596dc*/
  result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a7); /*0x8596f0*/
LABEL_31:
  *v14 = 0; /*0x8596ff*/
  return result; /*0x859702*/
}
