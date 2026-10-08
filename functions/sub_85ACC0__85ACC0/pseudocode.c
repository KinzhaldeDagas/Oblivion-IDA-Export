NiTPointerList_Node_void *__thiscall sub_85ACC0(
        _DWORD *this,
        void *vtable,
        _WORD *a3,
        RenderPass_DecodedLayout *a4,
        char *a5,
        char a6)
{
  RenderPass_DecodedLayout *v7; // eax
  char *v8; // esi
  RenderPass_DecodedLayout *v9; // eax
  NiTPointerList_Node_void *result; // eax
  char *v11; // ecx
  RenderPass_DecodedLayout *v12; // eax

  if ( a6 ) /*0x85ace9*/
  {
    if ( (_BYTE)a4 == 1 ) /*0x85acf4*/
    {
      v7 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85acf8*/
      a4 = v7; /*0x85ad00*/
      v8 = a5; /*0x85ad06*/
      if ( v7 ) /*0x85ad12*/
        v9 = RenderPass_Construct(v7, vtable, 0x18Fu, *a5, 0, 0); /*0x85ad27*/
      else
        v9 = 0; /*0x85ad31*/
LABEL_6:
      a4 = v9; /*0x85ad33*/
      result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a4); /*0x85ad47*/
      *v8 = 0; /*0x85ad4c*/
      return result; /*0x85ad60*/
    }
    v11 = a5; /*0x85ad67*/
    ++*a3; /*0x85ad6b*/
    *v11 = 0; /*0x85ad6f*/
    return (NiTPointerList_Node_void *)a3; /*0x85ad63*/
  }
  else
  {
    if ( (_BYTE)a4 == 1 ) /*0x85ad8b*/
    {
      v12 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85ad8f*/
      a4 = v12; /*0x85ad97*/
      v8 = a5; /*0x85ad9d*/
      if ( v12 ) /*0x85ada9*/
        v9 = RenderPass_Construct(v12, vtable, 0x18Eu, *a5, 0, 0); /*0x85adbe*/
      else
        v9 = 0; /*0x85adc8*/
      goto LABEL_6; /*0x85adc6*/
    }
    ++*a3; /*0x85adfe*/
    result = (NiTPointerList_Node_void *)a5; /*0x85ae02*/
    *a5 = 0; /*0x85ae06*/
  }
  return result; /*0x85ad4f*/
}
