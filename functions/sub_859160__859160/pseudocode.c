NiTPointerList_Node_void *__thiscall sub_859160(
        _DWORD *this,
        void *vtable,
        int a3,
        int a4,
        NiTPointerList_Node_void *a5,
        RenderPass_DecodedLayout *a6,
        char *a7,
        char a8,
        char a9,
        int a10,
        char a11,
        char a12)
{
  unsigned __int8 *v13; // esi
  RenderPass_DecodedLayout *v14; // eax
  RenderPass_DecodedLayout *v15; // eax
  RenderPass_DecodedLayout *v16; // eax
  RenderPass_DecodedLayout *v17; // eax
  RenderPass_DecodedLayout *v18; // eax
  RenderPass_DecodedLayout *v19; // eax
  RenderPass_DecodedLayout *v20; // eax
  RenderPass_DecodedLayout *v21; // eax
  NiTPointerList_Node_void *result; // eax

  v13 = (unsigned __int8 *)a7; /*0x859189*/
  if ( a8 ) /*0x85918d*/
  {
    if ( a9 ) /*0x8592f9*/
    {
      if ( (_BYTE)a6 != 1 ) /*0x8593a6*/
        goto LABEL_30; /*0x8593a6*/
      v21 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8593aa*/
      a6 = v21; /*0x8593b2*/
      if ( v21 ) /*0x8593c0*/
      {
        v15 = RenderPass_Construct(v21, vtable, 0xECu, *v13, 2u, a3, a4); /*0x8593dd*/
        goto LABEL_29; /*0x8593e5*/
      }
    }
    else if ( a11 ) /*0x859304*/
    {
      if ( (_BYTE)a6 != 1 ) /*0x85935c*/
        goto LABEL_30; /*0x85935c*/
      v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859364*/
      a6 = v20; /*0x85936c*/
      if ( v20 ) /*0x85937a*/
      {
        v15 = RenderPass_Construct(v20, vtable, 0xEDu, *v13, 2u, a3, a4); /*0x859397*/
        goto LABEL_29; /*0x85939f*/
      }
    }
    else
    {
      if ( (_BYTE)a6 != 1 ) /*0x85930b*/
        goto LABEL_30; /*0x85930b*/
      v19 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859313*/
      a6 = v19; /*0x85931b*/
      if ( v19 ) /*0x859329*/
      {
        v15 = RenderPass_Construct(v19, vtable, 0xEBu, *v13, 2u, a3, a4); /*0x85934a*/
        goto LABEL_29; /*0x859352*/
      }
    }
    goto LABEL_28; /*0x859329*/
  }
  if ( a9 ) /*0x859198*/
  {
    if ( (_BYTE)a6 != 1 ) /*0x8592a8*/
      goto LABEL_30; /*0x8592a8*/
    v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8592b0*/
    a6 = v18; /*0x8592b8*/
    if ( v18 ) /*0x8592c6*/
    {
      v15 = RenderPass_Construct(v18, vtable, 0xE9u, *v13, 2u, a3, a4); /*0x8592e7*/
      goto LABEL_29; /*0x8592ef*/
    }
    goto LABEL_28; /*0x8592c6*/
  }
  if ( a11 ) /*0x8591a3*/
  {
    if ( (_BYTE)a6 != 1 ) /*0x859257*/
      goto LABEL_30; /*0x859257*/
    v17 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85925f*/
    a6 = v17; /*0x859267*/
    if ( v17 ) /*0x859275*/
    {
      v15 = RenderPass_Construct(v17, vtable, 0xEAu, *v13, 2u, a3, a4); /*0x859296*/
      goto LABEL_29; /*0x85929e*/
    }
    goto LABEL_28; /*0x859275*/
  }
  if ( a12 ) /*0x8591ae*/
  {
    if ( (_BYTE)a6 != 1 ) /*0x859206*/
      goto LABEL_30; /*0x859206*/
    v16 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85920e*/
    a6 = v16; /*0x859216*/
    if ( v16 ) /*0x859224*/
    {
      v15 = RenderPass_Construct(v16, vtable, 0xEEu, *v13, 2u, a3, a4); /*0x859245*/
      goto LABEL_29; /*0x85924d*/
    }
LABEL_28:
    v15 = 0; /*0x8593e7*/
    goto LABEL_29; /*0x8593e7*/
  }
  if ( (_BYTE)a6 != 1 ) /*0x8591b5*/
  {
LABEL_30:
    result = a5; /*0x859404*/
    ++LOWORD(a5->next); /*0x859408*/
    goto LABEL_31; /*0x859408*/
  }
  v14 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8591bd*/
  a6 = v14; /*0x8591c5*/
  if ( !v14 ) /*0x8591d3*/
    goto LABEL_28; /*0x8591d3*/
  v15 = RenderPass_Construct(v14, vtable, 0xE8u, *v13, 2u, a3, a4); /*0x8591f4*/
LABEL_29:
  a6 = v15; /*0x8593e9*/
  result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a6); /*0x8593fd*/
LABEL_31:
  *v13 = 0; /*0x85940c*/
  return result; /*0x85940f*/
}
