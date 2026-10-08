NiTPointerList_Node_void *__thiscall sub_853F80(
        _DWORD *this,
        void *vtable,
        _WORD *a3,
        RenderPass_DecodedLayout *a4,
        char *a5,
        char a6,
        char a7)
{
  RenderPass_DecodedLayout *v8; // eax
  char *v9; // esi
  RenderPass_DecodedLayout *v10; // eax
  NiTPointerList_Node_void *result; // eax
  RenderPass_DecodedLayout *v12; // eax
  RenderPass_DecodedLayout *v13; // eax
  char *v14; // ecx
  RenderPass_DecodedLayout *v15; // eax

  if ( a6 ) /*0x853fa9*/
  {
    if ( !a7 ) /*0x854080*/
    {
      if ( (_BYTE)a4 == 1 ) /*0x854087*/
      {
        v13 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85408b*/
        a4 = v13; /*0x854093*/
        v9 = a5; /*0x854099*/
        if ( v13 ) /*0x8540a5*/
        {
          v10 = RenderPass_Construct(v13, vtable, 0x182u, *a5, 0, 0); /*0x8540be*/
          goto LABEL_7; /*0x8540c6*/
        }
        goto LABEL_6; /*0x8540a5*/
      }
      goto LABEL_15; /*0x854087*/
    }
    if ( (_BYTE)a4 == 1 ) /*0x8540f3*/
    {
      v15 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8540f7*/
      a4 = v15; /*0x8540ff*/
      v9 = a5; /*0x854105*/
      if ( v15 ) /*0x854111*/
      {
        v10 = RenderPass_Construct(v15, vtable, 0x183u, *a5, 0, 0); /*0x854126*/
        goto LABEL_7; /*0x85412e*/
      }
      goto LABEL_19; /*0x854111*/
    }
  }
  else
  {
    if ( !a7 ) /*0x853fb4*/
    {
      if ( (_BYTE)a4 == 1 ) /*0x853fbb*/
      {
        v8 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853fc3*/
        a4 = v8; /*0x853fcb*/
        v9 = a5; /*0x853fd1*/
        if ( v8 ) /*0x853fdd*/
        {
          v10 = RenderPass_Construct(v8, vtable, 0x180u, *a5, 0, 0); /*0x853ff2*/
LABEL_7:
          a4 = v10; /*0x853ffe*/
          result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a4); /*0x854012*/
          *v9 = 0; /*0x854017*/
          return result; /*0x85402b*/
        }
LABEL_6:
        v10 = 0; /*0x853ffc*/
        goto LABEL_7; /*0x853ffc*/
      }
LABEL_15:
      v14 = a5; /*0x8540cb*/
      ++*a3; /*0x8540d3*/
      *v14 = 0; /*0x8540d7*/
      return (NiTPointerList_Node_void *)a3; /*0x8540eb*/
    }
    if ( (_BYTE)a4 == 1 ) /*0x854033*/
    {
      v12 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85403b*/
      a4 = v12; /*0x854043*/
      v9 = a5; /*0x854049*/
      if ( v12 ) /*0x854055*/
      {
        v10 = RenderPass_Construct(v12, vtable, 0x181u, *a5, 0, 0); /*0x85406e*/
        goto LABEL_7; /*0x854076*/
      }
LABEL_19:
      v10 = 0; /*0x854130*/
      goto LABEL_7; /*0x854142*/
    }
  }
  ++*a3; /*0x854166*/
  result = (NiTPointerList_Node_void *)a5; /*0x85416a*/
  *a5 = 0; /*0x85416e*/
  return result; /*0x85401a*/
}
