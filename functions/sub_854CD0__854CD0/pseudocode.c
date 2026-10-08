// Shared refraction RenderPass producer. Selector priority is RefractF -> 0x162, else passInfo bit 2 -> 0x161, else 0x160; count mode increments output, emit mode constructs and appends a property-owned pass.
NiTPointerList_Node_void *__thiscall Lighting30__AppendPassSelector160To162(
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
  RenderPass_DecodedLayout *v11; // eax
  NiTPointerList_Node_void *result; // eax
  RenderPass_DecodedLayout *v13; // eax
  char *v14; // ecx

  if ( a7 ) /*0x854cf9*/
  {
    if ( (_BYTE)a4 == 1 ) /*0x854d00*/
    {
      v8 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854d08*/
      a4 = v8; /*0x854d10*/
      v9 = a5; /*0x854d16*/
      if ( v8 ) /*0x854d22*/
      {
        v10 = RenderPass_Construct(v8, vtable, 0x162u, *a5, 0, 0); /*0x854d3b*/
LABEL_10:
        a4 = v10; /*0x854d97*/
        result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a4); /*0x854dab*/
        *v9 = 0; /*0x854db0*/
        return result; /*0x854dc4*/
      }
      goto LABEL_15; /*0x854d22*/
    }
LABEL_16:
    v14 = a5; /*0x854e5e*/
    ++*a3; /*0x854e66*/
    *v14 = 0; /*0x854e6a*/
    return (NiTPointerList_Node_void *)a3; /*0x854e5e*/
  }
  if ( a6 ) /*0x854d4d*/
  {
    if ( (_BYTE)a4 == 1 ) /*0x854def*/
    {
      v13 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854df3*/
      a4 = v13; /*0x854dfb*/
      v9 = a5; /*0x854e01*/
      if ( v13 ) /*0x854e0d*/
      {
        v10 = RenderPass_Construct(v13, vtable, 0x161u, *a5, 0, 0); /*0x854e22*/
        goto LABEL_10; /*0x854e2a*/
      }
LABEL_15:
      v10 = 0; /*0x854e2c*/
      goto LABEL_10; /*0x854e2e*/
    }
    goto LABEL_16; /*0x854def*/
  }
  if ( (_BYTE)a4 == 1 ) /*0x854d58*/
  {
    v11 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854d5c*/
    a4 = v11; /*0x854d64*/
    v9 = a5; /*0x854d6a*/
    if ( v11 ) /*0x854d76*/
      v10 = RenderPass_Construct(v11, vtable, 0x160u, *a5, 0, 0); /*0x854d8b*/
    else
      v10 = 0; /*0x854d95*/
    goto LABEL_10; /*0x854d93*/
  }
  ++*a3; /*0x854dcb*/
  result = (NiTPointerList_Node_void *)a5; /*0x854dcf*/
  *a5 = 0; /*0x854dd3*/
  return result; /*0x854db3*/
}
