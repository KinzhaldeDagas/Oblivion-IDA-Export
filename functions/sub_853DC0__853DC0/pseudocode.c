NiTPointerList_Node_void *__thiscall sub_853DC0(
        _DWORD *this,
        void *vtable,
        int a3,
        _WORD *a4,
        RenderPass_DecodedLayout *a5,
        char *a6,
        char a7,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  RenderPass_DecodedLayout *v13; // eax
  char *v14; // esi
  RenderPass_DecodedLayout *v15; // eax
  RenderPass_DecodedLayout *v16; // eax
  RenderPass_DecodedLayout *v17; // eax
  RenderPass_DecodedLayout *v18; // eax
  NiTPointerList_Node_void *result; // eax

  if ( a7 ) /*0x853de9*/
  {
    if ( a8 ) /*0x853e9b*/
    {
      if ( (_BYTE)a5 == 1 ) /*0x853eeb*/
      {
        v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853eef*/
        a5 = v18; /*0x853ef7*/
        v14 = a6; /*0x853efd*/
        if ( v18 ) /*0x853f09*/
        {
          v15 = RenderPass_Construct(v18, vtable, 0x112u, *a6, 1u, a3); /*0x853f21*/
          goto LABEL_17; /*0x853f29*/
        }
        goto LABEL_16; /*0x853f09*/
      }
    }
    else if ( (_BYTE)a5 == 1 ) /*0x853ea2*/
    {
      v17 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853eaa*/
      a5 = v17; /*0x853eb2*/
      v14 = a6; /*0x853eb8*/
      if ( v17 ) /*0x853ec4*/
      {
        v15 = RenderPass_Construct(v17, vtable, 0x111u, *a6, 1u, a3); /*0x853edc*/
        goto LABEL_17; /*0x853ee4*/
      }
      goto LABEL_16; /*0x853ec4*/
    }
  }
  else if ( a8 ) /*0x853df4*/
  {
    if ( (_BYTE)a5 == 1 ) /*0x853e4b*/
    {
      v16 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853e53*/
      a5 = v16; /*0x853e5b*/
      v14 = a6; /*0x853e61*/
      if ( v16 ) /*0x853e6d*/
      {
        v15 = RenderPass_Construct(v16, vtable, 0x110u, *a6, 1u, a3); /*0x853e89*/
        goto LABEL_17; /*0x853e91*/
      }
LABEL_16:
      v15 = 0; /*0x853f2b*/
      goto LABEL_17; /*0x853f2b*/
    }
  }
  else if ( (_BYTE)a5 == 1 ) /*0x853dfb*/
  {
    v13 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853e03*/
    a5 = v13; /*0x853e0b*/
    v14 = a6; /*0x853e11*/
    if ( v13 ) /*0x853e1d*/
    {
      v15 = RenderPass_Construct(v13, vtable, 0x10Fu, *a6, 1u, a3); /*0x853e39*/
LABEL_17:
      a5 = v15; /*0x853f2d*/
      result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a5); /*0x853f41*/
      *v14 = 0; /*0x853f46*/
      return result; /*0x853f5a*/
    }
    goto LABEL_16; /*0x853e1d*/
  }
  ++*a4; /*0x853f61*/
  result = (NiTPointerList_Node_void *)a6; /*0x853f65*/
  *a6 = 0; /*0x853f69*/
  return result; /*0x853f49*/
}
