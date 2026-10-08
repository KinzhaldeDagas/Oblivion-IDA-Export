NiTPointerList_Node_void *__thiscall sub_854190(
        _DWORD *this,
        void *vtable,
        NiTPointerList_Node_void *a3,
        RenderPass_DecodedLayout *a4,
        char *a5,
        char a6,
        char a7,
        char a8)
{
  unsigned __int8 *v9; // esi
  RenderPass_DecodedLayout *v10; // eax
  RenderPass_DecodedLayout *v11; // eax
  RenderPass_DecodedLayout *v12; // eax
  RenderPass_DecodedLayout *v13; // eax
  RenderPass_DecodedLayout *v14; // eax
  RenderPass_DecodedLayout *v15; // eax
  NiTPointerList_Node_void *result; // eax

  v9 = (unsigned __int8 *)a5; /*0x8541b9*/
  if ( a7 ) /*0x8541bd*/
  {
    if ( (_BYTE)a4 != 1 ) /*0x8542fe*/
      goto LABEL_22; /*0x8542fe*/
    v15 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854302*/
    a4 = v15; /*0x85430a*/
    if ( v15 ) /*0x854318*/
    {
      v11 = RenderPass_Construct(v15, vtable, 0x194u, *v9, 0, 0); /*0x85432d*/
      goto LABEL_21; /*0x854335*/
    }
    goto LABEL_20; /*0x854318*/
  }
  if ( a6 ) /*0x8541c8*/
  {
    if ( a8 ) /*0x85426c*/
    {
      if ( (_BYTE)a4 != 1 ) /*0x8542bc*/
        goto LABEL_22; /*0x8542bc*/
      v14 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8542c4*/
      a4 = v14; /*0x8542cc*/
      if ( v14 ) /*0x8542da*/
      {
        v11 = RenderPass_Construct(v14, vtable, 0x193u, *v9, 0, 0); /*0x8542ef*/
        goto LABEL_21; /*0x8542f7*/
      }
    }
    else
    {
      if ( (_BYTE)a4 != 1 ) /*0x854273*/
        goto LABEL_22; /*0x854273*/
      v13 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85427b*/
      a4 = v13; /*0x854283*/
      if ( v13 ) /*0x854291*/
      {
        v11 = RenderPass_Construct(v13, vtable, 0x192u, *v9, 0, 0); /*0x8542aa*/
        goto LABEL_21; /*0x8542b2*/
      }
    }
    goto LABEL_20; /*0x854291*/
  }
  if ( a8 ) /*0x8541d3*/
  {
    if ( (_BYTE)a4 != 1 ) /*0x854223*/
      goto LABEL_22; /*0x854223*/
    v12 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85422b*/
    a4 = v12; /*0x854233*/
    if ( v12 ) /*0x854241*/
    {
      v11 = RenderPass_Construct(v12, vtable, 0x191u, *v9, 0, 0); /*0x85425a*/
      goto LABEL_21; /*0x854262*/
    }
LABEL_20:
    v11 = 0; /*0x854337*/
    goto LABEL_21; /*0x854337*/
  }
  if ( (_BYTE)a4 != 1 ) /*0x8541da*/
  {
LABEL_22:
    result = a3; /*0x854354*/
    ++LOWORD(a3->next); /*0x854358*/
    goto LABEL_23; /*0x854358*/
  }
  v10 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8541e2*/
  a4 = v10; /*0x8541ea*/
  if ( !v10 ) /*0x8541f8*/
    goto LABEL_20; /*0x8541f8*/
  v11 = RenderPass_Construct(v10, vtable, 0x190u, *v9, 0, 0); /*0x854211*/
LABEL_21:
  a4 = v11; /*0x854339*/
  result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a4); /*0x85434d*/
LABEL_23:
  *v9 = 0; /*0x85435c*/
  return result; /*0x85435f*/
}
