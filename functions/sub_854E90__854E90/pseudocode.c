// Lighting30 pass-list helper selecting RenderPass selector 0 or 2 from one variant flag; appends in emit mode or increments the pending count in count mode.
NiTPointerList_Node_void *__thiscall Lighting30__AppendPassSelector0Or2(
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

  if ( a6 ) /*0x854eb9*/
  {
    if ( (_BYTE)a4 == 1 ) /*0x854ec4*/
    {
      v7 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854ec8*/
      a4 = v7; /*0x854ed0*/
      v8 = a5; /*0x854ed6*/
      if ( v7 ) /*0x854ee2*/
        v9 = RenderPass_Construct(v7, vtable, 2u, *a5, 0, 0); /*0x854ef4*/
      else
        v9 = 0; /*0x854efe*/
LABEL_6:
      a4 = v9; /*0x854f00*/
      result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a4); /*0x854f14*/
      *v8 = 0; /*0x854f19*/
      return result; /*0x854f2d*/
    }
    v11 = a5; /*0x854f34*/
    ++*a3; /*0x854f38*/
    *v11 = 0; /*0x854f3c*/
    return (NiTPointerList_Node_void *)a3; /*0x854f30*/
  }
  else
  {
    if ( (_BYTE)a4 == 1 ) /*0x854f58*/
    {
      v12 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854f5c*/
      a4 = v12; /*0x854f64*/
      v8 = a5; /*0x854f6a*/
      if ( v12 ) /*0x854f76*/
        v9 = RenderPass_Construct(v12, vtable, 0, *a5, 0, 0); /*0x854f88*/
      else
        v9 = 0; /*0x854f92*/
      goto LABEL_6; /*0x854f90*/
    }
    ++*a3; /*0x854fc8*/
    result = (NiTPointerList_Node_void *)a5; /*0x854fcc*/
    *a5 = 0; /*0x854fd0*/
  }
  return result; /*0x854f1c*/
}
