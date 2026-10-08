NiTPointerList_Node_void *__thiscall sub_853580(
        _DWORD *this,
        void *vtable,
        int a3,
        int a4,
        NiTPointerList_Node_void *a5,
        RenderPass_DecodedLayout *a6,
        NiTPointerList_Node_void *a7,
        char a8,
        char a9)
{
  RenderPass_DecodedLayout *v10; // eax
  RenderPass_DecodedLayout *v11; // eax
  RenderPass_DecodedLayout *v12; // eax
  RenderPass_DecodedLayout *v13; // eax
  NiTPointerList_Node_void *result; // eax
  NiTPointerList_Node_void *v15; // edx
  RenderPass_DecodedLayout *v16; // eax

  if ( a8 ) /*0x8535a8*/
  {
    if ( (_BYTE)a6 == 1 ) /*0x853689*/
    {
      v16 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85368d*/
      a6 = v16; /*0x853695*/
      if ( v16 ) /*0x8536a3*/
      {
        v11 = RenderPass_Construct(v16, vtable, 0x32u, 1u, 2u, a3, a4); /*0x8536bb*/
        goto LABEL_16; /*0x8536c3*/
      }
LABEL_15:
      v11 = 0; /*0x8536c5*/
      goto LABEL_16; /*0x8536c5*/
    }
  }
  else
  {
    if ( a9 ) /*0x8535b3*/
    {
      if ( (_BYTE)a6 != 1 ) /*0x853606*/
      {
        v15 = a7; /*0x853666*/
        ++LOWORD(a5->next); /*0x85366a*/
        LOBYTE(v15->next) = 0; /*0x85366e*/
        return a5; /*0x853681*/
      }
      v12 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85360a*/
      a6 = v12; /*0x853612*/
      if ( v12 ) /*0x853620*/
        v13 = RenderPass_Construct(v12, vtable, 0x33u, 1u, 2u, a3, a4); /*0x853638*/
      else
        v13 = 0; /*0x853642*/
      a6 = v13; /*0x853644*/
      result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a6); /*0x853658*/
      goto LABEL_18; /*0x85365d*/
    }
    if ( (_BYTE)a6 == 1 ) /*0x8535ba*/
    {
      v10 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8535c2*/
      a6 = v10; /*0x8535ca*/
      if ( v10 ) /*0x8535d8*/
      {
        v11 = RenderPass_Construct(v10, vtable, 0x31u, 1u, 2u, a3, a4); /*0x8535f4*/
LABEL_16:
        a6 = v11; /*0x8536c7*/
        NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a6); /*0x8536db*/
        result = a7; /*0x8536e0*/
        LOBYTE(a7->next) = 0; /*0x8536e4*/
        return result; /*0x8536f7*/
      }
      goto LABEL_15; /*0x8535d8*/
    }
  }
  result = a5; /*0x8536fa*/
  ++LOWORD(a5->next); /*0x8536fe*/
LABEL_18:
  LOBYTE(a7->next) = 0; /*0x853702*/
  return result; /*0x853671*/
}
