_BYTE *__thiscall sub_855E80(
        _DWORD *this,
        void *vtable,
        int a3,
        int a4,
        _WORD *a5,
        RenderPass_DecodedLayout *a6,
        _BYTE *a7,
        char a8,
        char a9,
        char a10,
        int a11,
        char a12,
        char a13,
        char a14)
{
  RenderPass_DecodedLayout *v15; // eax
  RenderPass_DecodedLayout *v16; // eax
  RenderPass_DecodedLayout *v17; // eax
  RenderPass_DecodedLayout *v18; // eax
  RenderPass_DecodedLayout *v19; // eax
  RenderPass_DecodedLayout *v20; // eax
  RenderPass_DecodedLayout *v21; // eax
  RenderPass_DecodedLayout *v22; // eax
  RenderPass_DecodedLayout *v23; // eax
  RenderPass_DecodedLayout *v24; // eax
  RenderPass_DecodedLayout *v25; // eax
  RenderPass_DecodedLayout *v26; // eax
  RenderPass_DecodedLayout *v27; // eax
  RenderPass_DecodedLayout *v28; // eax
  RenderPass_DecodedLayout *v29; // eax
  RenderPass_DecodedLayout *v30; // eax
  RenderPass_DecodedLayout *v31; // eax
  RenderPass_DecodedLayout *v32; // eax
  RenderPass_DecodedLayout *v33; // eax
  _BYTE *result; // eax

  if ( a8 )
  {
    if ( !a9 ) /*0x856229*/
    {
      if ( a10 ) /*0x856234*/
      {
        if ( a12 ) /*0x856388*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x8563db*/
          {
            v31 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8563e3*/
            a6 = v31; /*0x8563eb*/
            if ( v31 ) /*0x8563f9*/
            {
              v16 = RenderPass_Construct(v31, vtable, 0x5Eu, 1u, 2u, a3, a4); /*0x856415*/
              goto LABEL_35; /*0x85641d*/
            }
            goto LABEL_34; /*0x8563f9*/
          }
        }
        else if ( (_BYTE)a6 == 1 ) /*0x85638f*/
        {
          v30 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856397*/
          a6 = v30; /*0x85639f*/
          if ( v30 ) /*0x8563ad*/
          {
            v16 = RenderPass_Construct(v30, vtable, 0x53u, 1u, 2u, a3, a4); /*0x8563c9*/
            goto LABEL_35; /*0x8563d1*/
          }
          goto LABEL_34; /*0x8563ad*/
        }
      }
      else if ( a13 ) /*0x85623f*/
      {
        if ( a12 ) /*0x8562e9*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x85633c*/
          {
            v29 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856344*/
            a6 = v29; /*0x85634c*/
            if ( v29 ) /*0x85635a*/
            {
              v16 = RenderPass_Construct(v29, vtable, 0x5Bu, 1u, 2u, a3, a4); /*0x856376*/
              goto LABEL_35; /*0x85637e*/
            }
            goto LABEL_34; /*0x85635a*/
          }
        }
        else if ( (_BYTE)a6 == 1 ) /*0x8562f0*/
        {
          v28 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8562f8*/
          a6 = v28; /*0x856300*/
          if ( v28 ) /*0x85630e*/
          {
            v16 = RenderPass_Construct(v28, vtable, 0x50u, 1u, 2u, a3, a4); /*0x85632a*/
            goto LABEL_35; /*0x856332*/
          }
          goto LABEL_34; /*0x85630e*/
        }
      }
      else if ( a12 ) /*0x85624a*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x85629d*/
        {
          v27 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8562a5*/
          a6 = v27; /*0x8562ad*/
          if ( v27 ) /*0x8562bb*/
          {
            v16 = RenderPass_Construct(v27, vtable, 0x5Au, 1u, 2u, a3, a4); /*0x8562d7*/
            goto LABEL_35; /*0x8562df*/
          }
          goto LABEL_34; /*0x8562bb*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x856251*/
      {
        v26 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856259*/
        a6 = v26; /*0x856261*/
        if ( v26 ) /*0x85626f*/
        {
          v16 = RenderPass_Construct(v26, vtable, 0x4Fu, 1u, 2u, a3, a4); /*0x85628b*/
          goto LABEL_35; /*0x856293*/
        }
        goto LABEL_34; /*0x85626f*/
      }
      goto LABEL_78; /*0x856251*/
    }
    if ( !a10 ) /*0x856427*/
    {
      if ( a12 ) /*0x856432*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x856485*/
        {
          v33 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856489*/
          a6 = v33; /*0x856491*/
          if ( v33 ) /*0x85649f*/
          {
            v16 = RenderPass_Construct(v33, vtable, 0x5Cu, 1u, 2u, a3, a4); /*0x8564bb*/
            goto LABEL_35; /*0x8564c3*/
          }
          goto LABEL_34; /*0x85649f*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x856439*/
      {
        v32 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856441*/
        a6 = v32; /*0x856449*/
        if ( v32 ) /*0x856457*/
        {
          v16 = RenderPass_Construct(v32, vtable, 0x51u, 1u, 2u, a3, a4); /*0x856473*/
          goto LABEL_35; /*0x85647b*/
        }
        goto LABEL_34; /*0x856457*/
      }
      goto LABEL_78; /*0x856439*/
    }
    if ( unk_B42E8C )
      unk_B42E8C("SHADER ERROR : no shader to handle BSSM_AD2_SGFg ( skinned & glowmap & facegenblend )", 0);
  }
  else
  {
    if ( !a9 ) /*0x855eb3*/
    {
      if ( a10 ) /*0x855ebe*/
      {
        if ( a12 ) /*0x8560bc*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x856108*/
          {
            v23 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856110*/
            a6 = v23; /*0x856118*/
            if ( v23 ) /*0x856126*/
            {
              v16 = RenderPass_Construct(v23, vtable, 0x59u, 1u, 2u, a3, a4); /*0x85613e*/
              goto LABEL_35; /*0x856146*/
            }
            goto LABEL_34; /*0x856126*/
          }
        }
        else if ( (_BYTE)a6 == 1 ) /*0x8560c3*/
        {
          v22 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8560cb*/
          a6 = v22; /*0x8560d3*/
          if ( v22 ) /*0x8560e1*/
          {
            v16 = RenderPass_Construct(v22, vtable, 0x4Eu, 1u, 2u, a3, a4); /*0x8560f9*/
            goto LABEL_35; /*0x856101*/
          }
          goto LABEL_34; /*0x8560e1*/
        }
      }
      else if ( a13 ) /*0x855ec9*/
      {
        if ( a12 ) /*0x85601d*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x856070*/
          {
            v21 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856078*/
            a6 = v21; /*0x856080*/
            if ( v21 ) /*0x85608e*/
            {
              v16 = RenderPass_Construct(v21, vtable, 0x57u, 1u, 2u, a3, a4); /*0x8560aa*/
              goto LABEL_35; /*0x8560b2*/
            }
            goto LABEL_34; /*0x85608e*/
          }
        }
        else if ( (_BYTE)a6 == 1 ) /*0x856024*/
        {
          v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85602c*/
          a6 = v20; /*0x856034*/
          if ( v20 ) /*0x856042*/
          {
            v16 = RenderPass_Construct(v20, vtable, 0x4Cu, 1u, 2u, a3, a4); /*0x85605e*/
            goto LABEL_35; /*0x856066*/
          }
          goto LABEL_34; /*0x856042*/
        }
      }
      else if ( a12 ) /*0x855ed4*/
      {
        if ( a14 ) /*0x855f7e*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x855fd1*/
          {
            v19 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x855fd9*/
            a6 = v19; /*0x855fe1*/
            if ( v19 ) /*0x855fef*/
            {
              v16 = RenderPass_Construct(v19, vtable, 0x5Fu, 1u, 2u, a3, a4); /*0x85600b*/
              goto LABEL_35; /*0x856013*/
            }
            goto LABEL_34; /*0x855fef*/
          }
        }
        else if ( (_BYTE)a6 == 1 ) /*0x855f85*/
        {
          v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x855f8d*/
          a6 = v18; /*0x855f95*/
          if ( v18 ) /*0x855fa3*/
          {
            v16 = RenderPass_Construct(v18, vtable, 0x55u, 1u, 2u, a3, a4); /*0x855fbf*/
            goto LABEL_35; /*0x855fc7*/
          }
          goto LABEL_34; /*0x855fa3*/
        }
      }
      else if ( a14 ) /*0x855edf*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x855f32*/
        {
          v17 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x855f3a*/
          a6 = v17; /*0x855f42*/
          if ( v17 ) /*0x855f50*/
          {
            v16 = RenderPass_Construct(v17, vtable, 0x54u, 1u, 2u, a3, a4); /*0x855f6c*/
            goto LABEL_35; /*0x855f74*/
          }
LABEL_34:
          v16 = 0; /*0x856148*/
          goto LABEL_35; /*0x856148*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x855ee6*/
      {
        v15 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x855eee*/
        a6 = v15; /*0x855ef6*/
        if ( v15 ) /*0x855f04*/
        {
          v16 = RenderPass_Construct(v15, vtable, 0x4Au, 1u, 2u, a3, a4); /*0x855f20*/
LABEL_35:
          a6 = v16; /*0x85614a*/
          NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a6); /*0x85615e*/
          goto LABEL_81; /*0x856163*/
        }
        goto LABEL_34; /*0x855f04*/
      }
LABEL_78:
      ++*a5; /*0x8564c8*/
      goto LABEL_81; /*0x8564d0*/
    }
    if ( !a10 ) /*0x85616d*/
    {
      if ( a12 ) /*0x856178*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x8561c4*/
        {
          v25 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8561cc*/
          a6 = v25; /*0x8561d4*/
          if ( v25 ) /*0x8561e2*/
          {
            v16 = RenderPass_Construct(v25, vtable, 0x56u, 1u, 2u, a3, a4); /*0x8561fe*/
            goto LABEL_35; /*0x856206*/
          }
          goto LABEL_34; /*0x8561e2*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x85617f*/
      {
        v24 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856187*/
        a6 = v24; /*0x85618f*/
        if ( v24 ) /*0x85619d*/
        {
          v16 = RenderPass_Construct(v24, vtable, 0x4Bu, 1u, 2u, a3, a4); /*0x8561b5*/
          goto LABEL_35; /*0x8561bd*/
        }
        goto LABEL_34; /*0x85619d*/
      }
      goto LABEL_78; /*0x85617f*/
    }
    if ( unk_B42E8C )
      unk_B42E8C("SHADER ERROR : no shader to handle BSSM_AD2_GFg ( glowmap & facegenblend )", 0);
  }
LABEL_81:
  result = a7; /*0x8564e7*/
  *a7 = 0; /*0x8564eb*/
  return result; /*0x8564ee*/
}
