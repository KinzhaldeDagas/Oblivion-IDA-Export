NiTPointerList_Node_void *__thiscall sub_85ABD0(
        BSTextureManager *this,
        void *vtable,
        char a3,
        RenderPass_DecodedLayout *a4)
{
  NiTPointerList_Node_void *result; // eax
  RenderPass_DecodedLayout *v6; // eax
  bool v7; // zf
  RenderPass_DecodedLayout *v8; // eax

  result = *((NiTPointerList_Node_void **)this + 0x15); /*0x85abf3*/
  if ( !result ) /*0x85abf8*/
  {
    v6 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85ac00*/
    v7 = (_BYTE)a4 == 0; /*0x85ac08*/
    a4 = v6; /*0x85ac0d*/
    if ( v7 ) /*0x85ac11*/
    {
      if ( a3 ) /*0x85ac3f*/
      {
        if ( v6 ) /*0x85ac72*/
        {
          v8 = RenderPass_Construct(v6, vtable, 0x166u, 1u, 0, 0); /*0x85ac85*/
          goto LABEL_11; /*0x85ac8d*/
        }
      }
      else if ( v6 ) /*0x85ac4b*/
      {
        v8 = RenderPass_Construct(v6, vtable, 0x165u, 1u, 0, 0); /*0x85ac5e*/
        goto LABEL_11; /*0x85ac66*/
      }
    }
    else if ( v6 ) /*0x85ac1d*/
    {
      v8 = RenderPass_Construct(v6, vtable, 0x167u, 1u, 0, 0); /*0x85ac30*/
LABEL_11:
      a4 = v8; /*0x85ac91*/
      return NiTPointerList__AddTail(this + 1, (void **)&a4); /*0x85aca5*/
    }
    v8 = 0; /*0x85ac8f*/
    goto LABEL_11; /*0x85ac8f*/
  }
  return result; /*0x85acaa*/
}
