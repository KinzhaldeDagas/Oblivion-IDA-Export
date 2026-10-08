NiTPointerList_Node_void *__thiscall sub_859720(
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
        int a12,
        RenderPass_DecodedLayout *a13,
        char a14)
{
  RenderPass_DecodedLayout *v15; // eax
  RenderPass_DecodedLayout *v16; // eax
  RenderPass_DecodedLayout *v17; // eax

  if ( !(_BYTE)a13 ) /*0x859748*/
    return sub_853970(this, (int)vtable, a3, a4, a5, a6, a7, a8, a9, a10, a11, a14); /*0x85985f*/
  if ( a7 ) /*0x859753*/
  {
    if ( a5 == 1 ) /*0x8597a0*/
    {
      v17 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8597a4*/
      a13 = v17; /*0x8597ac*/
      if ( v17 ) /*0x8597ba*/
      {
        v16 = RenderPass_Construct(v17, vtable, 0x10Eu, *a6, 0, 0); /*0x8597d3*/
        goto LABEL_10; /*0x8597db*/
      }
LABEL_9:
      v16 = 0; /*0x8597dd*/
      goto LABEL_10; /*0x8597dd*/
    }
  }
  else if ( a5 == 1 ) /*0x85975a*/
  {
    v15 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859762*/
    a13 = v15; /*0x85976a*/
    if ( v15 ) /*0x859778*/
    {
      v16 = RenderPass_Construct(v15, vtable, 0x10Du, *a6, 0, 0); /*0x859791*/
LABEL_10:
      a13 = v16; /*0x8597df*/
      return NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a13); /*0x859808*/
    }
    goto LABEL_9; /*0x859778*/
  }
  ++LOWORD(a4->next); /*0x85980f*/
  return a4; /*0x8597f8*/
}
