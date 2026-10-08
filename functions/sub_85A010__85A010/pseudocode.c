NiTPointerList_Node_void *__thiscall sub_85A010(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        char *a7,
        char a8,
        char a9,
        char a10)
{
  __int16 v11; // si
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  if ( a8 ) /*0x85a03a*/
  {
    if ( (_BYTE)a6 != 1 ) /*0x85a14e*/
      goto LABEL_26; /*0x85a14e*/
    v14 = FormHeapAlloc(0x10u); /*0x85a15a*/
    a6 = v14; /*0x85a164*/
    if ( a4 ) /*0x85a168*/
    {
      if ( v14 ) /*0x85a174*/
      {
        v15 = RenderPass_Construct(v14, a2, 0x185, *a7, 1u, a4); /*0x85a177*/
LABEL_24:
        a6 = v15; /*0x85a1ab*/
        return NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a6); /*0x85a1af*/
      }
    }
    else if ( v14 ) /*0x85a183*/
    {
      v15 = RenderPass_Construct(v14, a2, 0x185, *a7, 1u, a3); /*0x85a19f*/
      goto LABEL_24; /*0x85a19f*/
    }
    v15 = 0; /*0x85a1a9*/
    goto LABEL_24; /*0x85a1a9*/
  }
  if ( (_BYTE)a6 == 1 ) /*0x85a045*/
  {
    if ( a9 ) /*0x85a050*/
    {
      v11 = 0x187; /*0x85a052*/
    }
    else
    {
      if ( OB_RendererGlobalState_010201A0[0x1DB] && !a10 ) /*0x85a067*/
      {
        v13 = FormHeapAlloc(0x10u); /*0x85a0fa*/
        a6 = v13; /*0x85a102*/
        if ( v13 ) /*0x85a110*/
        {
          a6 = RenderPass_Construct(v13, a2, 0x186, *a7, 0, 0); /*0x85a12e*/
          return NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a6); /*0x85a13a*/
        }
        goto LABEL_15; /*0x85a110*/
      }
      v11 = 0x184; /*0x85a06d*/
    }
    v12 = FormHeapAlloc(0x10u); /*0x85a078*/
    a6 = v12; /*0x85a082*/
    if ( a4 ) /*0x85a086*/
    {
      if ( v12 ) /*0x85a092*/
      {
        a6 = RenderPass_Construct(v12, a2, v11, *a7, 1u, a4); /*0x85a0af*/
        return NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a6); /*0x85a1d6*/
      }
    }
    else if ( v12 ) /*0x85a0ca*/
    {
      a6 = RenderPass_Construct(v12, a2, v11, *a7, 1u, a3); /*0x85a0e7*/
      return NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a6); /*0x85a0f3*/
    }
LABEL_15:
    a6 = 0; /*0x85a13c*/
    return NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a6); /*0x85a147*/
  }
LABEL_26:
  ++*(_WORD *)a5; /*0x85a1d9*/
  return (NiTPointerList_Node_void *)a5; /*0x85a1c4*/
}
