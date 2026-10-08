NiTPointerList_Node_void *__thiscall sub_853720(
        _DWORD *this,
        void *vtable,
        int a3,
        NiTPointerList_Node_void *a4,
        RenderPass_DecodedLayout *a5,
        char *a6,
        char a7,
        char a8,
        int a9,
        char a10)
{
  unsigned __int8 *v11; // esi
  RenderPass_DecodedLayout *v12; // eax
  RenderPass_DecodedLayout *v13; // eax
  RenderPass_DecodedLayout *v14; // eax
  RenderPass_DecodedLayout *v15; // eax
  RenderPass_DecodedLayout *v16; // eax
  RenderPass_DecodedLayout *v17; // eax
  RenderPass_DecodedLayout *v18; // eax
  NiTPointerList_Node_void *result; // eax

  v11 = (unsigned __int8 *)a6; /*0x853749*/
  if ( a7 ) /*0x85374d*/
  {
    if ( a8 ) /*0x8538a1*/
    {
      if ( (_BYTE)a5 != 1 ) /*0x8538ed*/
        goto LABEL_26; /*0x8538ed*/
      v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8538f1*/
      a5 = v18; /*0x8538f9*/
      if ( v18 ) /*0x853907*/
      {
        v13 = RenderPass_Construct(v18, vtable, 0xE5u, *v11, 1u, a3); /*0x85391f*/
        goto LABEL_25; /*0x853927*/
      }
    }
    else
    {
      if ( (_BYTE)a5 != 1 ) /*0x8538a8*/
        goto LABEL_26; /*0x8538a8*/
      v17 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8538b0*/
      a5 = v17; /*0x8538b8*/
      if ( v17 ) /*0x8538c6*/
      {
        v13 = RenderPass_Construct(v17, vtable, 0xE4u, *v11, 1u, a3); /*0x8538de*/
        goto LABEL_25; /*0x8538e6*/
      }
    }
    goto LABEL_24; /*0x8538c6*/
  }
  if ( a8 ) /*0x853758*/
  {
    if ( a10 ) /*0x853802*/
    {
      if ( (_BYTE)a5 != 1 ) /*0x853855*/
        goto LABEL_26; /*0x853855*/
      v16 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85385d*/
      a5 = v16; /*0x853865*/
      if ( v16 ) /*0x853873*/
      {
        v13 = RenderPass_Construct(v16, vtable, 0xE7u, *v11, 1u, a3); /*0x85388f*/
        goto LABEL_25; /*0x853897*/
      }
    }
    else
    {
      if ( (_BYTE)a5 != 1 ) /*0x853809*/
        goto LABEL_26; /*0x853809*/
      v15 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853811*/
      a5 = v15; /*0x853819*/
      if ( v15 ) /*0x853827*/
      {
        v13 = RenderPass_Construct(v15, vtable, 0xE3u, *v11, 1u, a3); /*0x853843*/
        goto LABEL_25; /*0x85384b*/
      }
    }
    goto LABEL_24; /*0x853827*/
  }
  if ( a10 ) /*0x853763*/
  {
    if ( (_BYTE)a5 != 1 ) /*0x8537b6*/
      goto LABEL_26; /*0x8537b6*/
    v14 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8537be*/
    a5 = v14; /*0x8537c6*/
    if ( v14 ) /*0x8537d4*/
    {
      v13 = RenderPass_Construct(v14, vtable, 0xE6u, *v11, 1u, a3); /*0x8537f0*/
      goto LABEL_25; /*0x8537f8*/
    }
LABEL_24:
    v13 = 0; /*0x853929*/
    goto LABEL_25; /*0x853929*/
  }
  if ( (_BYTE)a5 != 1 ) /*0x85376a*/
  {
LABEL_26:
    result = a4; /*0x853946*/
    ++LOWORD(a4->next); /*0x85394a*/
    goto LABEL_27; /*0x85394a*/
  }
  v12 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853772*/
  a5 = v12; /*0x85377a*/
  if ( !v12 ) /*0x853788*/
    goto LABEL_24; /*0x853788*/
  v13 = RenderPass_Construct(v12, vtable, 0xE2u, *v11, 1u, a3); /*0x8537a4*/
LABEL_25:
  a5 = v13; /*0x85392b*/
  result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a5); /*0x85393f*/
LABEL_27:
  *v11 = 0; /*0x85394e*/
  return result; /*0x853951*/
}
