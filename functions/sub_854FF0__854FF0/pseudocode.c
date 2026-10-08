// Lighting30 pass-list helper gated by an exact three-component property/global vector mismatch. Marks the associated state dirty and selects 0x19E or 0x19F; count mode only increments the pending pass count.
NiTPointerList_Node_void *__thiscall Lighting30__AppendPassSelector19EOr19F(
        _DWORD *this,
        NiGeometry *vtable,
        NiTPointerList_Node_void *a3,
        RenderPass_DecodedLayout *a4,
        char a5,
        int a6)
{
  NiGeometry *v7; // ebp
  float *v8; // esi
  NiTPointerList_Node_void *result; // eax
  NiGeometry *v10; // edi
  float v11; // edx
  float v12; // eax
  int v13; // eax
  RenderPass_DecodedLayout *v14; // eax
  RenderPass_DecodedLayout *v15; // eax
  RenderPass_DecodedLayout *v16; // eax
  float v17[3]; // [esp+14h] [ebp-18h] BYREF
  int v18; // [esp+28h] [ebp-4h]

  v7 = vtable; /*0x855019*/
  v8 = *((float **)*NiGeometry_GetPropertyState(vtable, (volatile LONG **)&vtable) + 4); /*0x85502b*/
  result = (NiTPointerList_Node_void *)vtable; /*0x85502e*/
  if ( vtable ) /*0x855034*/
  {
    v10 = vtable; /*0x855036*/
    result = (NiTPointerList_Node_void *)InterlockedDecrement((volatile LONG *)&vtable->member); /*0x85503c*/
    if ( !result ) /*0x855044*/
      result = (NiTPointerList_Node_void *)((int (__thiscall *)(NiGeometry *, int))v10->__vftable->super.super.super.Destructor)( /*0x855052*/
                                             v10,
                                             1);
  }
  if ( v8 ) /*0x855056*/
  {
    v11 = v8[0x11]; /*0x85505f*/
    v12 = v8[0x12]; /*0x855062*/
    v17[0] = v8[0x10]; /*0x855065*/
    v17[1] = v11; /*0x855072*/
    v17[2] = v12; /*0x855076*/
    result = (NiTPointerList_Node_void *)NiPoint3__NotEqual(v17, &MEMORY[0xB3F9B0][0x38]); /*0x85507a*/
    if ( (_BYTE)result ) /*0x855081*/
    {
      v13 = *(_DWORD *)(*(this + 0xC) + 8); /*0x85508a*/
      if ( v13 ) /*0x85508f*/
        *(_BYTE *)(v13 + 7) = 1; /*0x855091*/
      if ( a5 ) /*0x85509a*/
      {
        if ( (_BYTE)a4 == 1 ) /*0x8550f3*/
        {
          v15 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8550f7*/
          a4 = v15; /*0x8550ff*/
          v18 = 1; /*0x855105*/
          if ( v15 ) /*0x85510d*/
            v16 = RenderPass_Construct(v15, v7, 0x19Fu, 0, 0, 0); /*0x85511c*/
          else
            v16 = 0; /*0x855126*/
          a4 = v16; /*0x855128*/
          goto LABEL_18; /*0x855128*/
        }
      }
      else if ( (_BYTE)a4 == 1 ) /*0x8550a1*/
      {
        v14 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8550a9*/
        a4 = v14; /*0x8550b1*/
        v18 = 0; /*0x8550b7*/
        if ( v14 ) /*0x8550bf*/
          a4 = RenderPass_Construct(v14, v7, 0x19Eu, 0, 0, 0); /*0x8550da*/
        else
          a4 = 0; /*0x8550e7*/
LABEL_18:
        v18 = 0xFFFFFFFF; /*0x855131*/
        return NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a4); /*0x855141*/
      }
      result = a3; /*0x855143*/
      ++LOWORD(a3->next); /*0x855147*/
    }
  }
  return result; /*0x85514b*/
}
