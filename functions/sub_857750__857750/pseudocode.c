_BYTE *__thiscall sub_857750(
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
        char a14,
        char a15)
{
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
  RenderPass_DecodedLayout *v34; // eax
  RenderPass_DecodedLayout *v35; // eax
  RenderPass_DecodedLayout *v36; // eax
  RenderPass_DecodedLayout *v37; // eax
  RenderPass_DecodedLayout *v38; // eax
  RenderPass_DecodedLayout *v39; // eax
  RenderPass_DecodedLayout *v40; // eax
  RenderPass_DecodedLayout *v41; // eax
  RenderPass_DecodedLayout *v42; // eax
  _BYTE *result; // eax

  if ( !a8 )
  {
    if ( a9 )
    {
      if ( a10 )
      {
        if ( unk_B42E8C )
          unk_B42E8C("SHADER ERROR : no shader to handle ADT2_GFg ( 2 lights & glowmap & facegenblend )", 0);
        goto LABEL_113; /*0x8577a9*/
      }
      if ( a13 ) /*0x8577b3*/
      {
        if ( a12 ) /*0x857863*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x8578b9*/
          {
            v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8578c1*/
            a6 = v20; /*0x8578c9*/
            if ( v20 ) /*0x8578d7*/
            {
              v17 = RenderPass_Construct(v20, vtable, 0xA3u, 1u, 2u, a3, a4); /*0x8578f6*/
              goto LABEL_111; /*0x8578fe*/
            }
            goto LABEL_110; /*0x8578d7*/
          }
        }
        else if ( (_BYTE)a6 == 1 ) /*0x85786a*/
        {
          v19 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857872*/
          a6 = v19; /*0x85787a*/
          if ( v19 ) /*0x857888*/
          {
            v17 = RenderPass_Construct(v19, vtable, 0x96u, 1u, 2u, a3, a4); /*0x8578a7*/
            goto LABEL_111; /*0x8578af*/
          }
          goto LABEL_110; /*0x857888*/
        }
      }
      else if ( a12 ) /*0x8577be*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x857814*/
        {
          v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85781c*/
          a6 = v18; /*0x857824*/
          if ( v18 ) /*0x857832*/
          {
            v17 = RenderPass_Construct(v18, vtable, 0xA0u, 1u, 2u, a3, a4); /*0x857851*/
            goto LABEL_111; /*0x857859*/
          }
LABEL_110:
          v17 = 0; /*0x858094*/
          goto LABEL_111; /*0x858094*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x8577c5*/
      {
        v16 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8577cd*/
        a6 = v16; /*0x8577d5*/
        if ( v16 ) /*0x8577e3*/
        {
          v17 = RenderPass_Construct(v16, vtable, 0x93u, 1u, 2u, a3, a4); /*0x857802*/
LABEL_111:
          a6 = v17; /*0x858096*/
          NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a6); /*0x8580aa*/
          goto LABEL_113; /*0x8580af*/
        }
        goto LABEL_110; /*0x8577e3*/
      }
    }
    else if ( a10 ) /*0x857908*/
    {
      if ( a12 ) /*0x857913*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x857969*/
        {
          v22 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857971*/
          a6 = v22; /*0x857979*/
          if ( v22 ) /*0x857987*/
          {
            v17 = RenderPass_Construct(v22, vtable, 0xA1u, 1u, 2u, a3, a4); /*0x8579a6*/
            goto LABEL_111; /*0x8579ae*/
          }
          goto LABEL_110; /*0x857987*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x85791a*/
      {
        v21 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857922*/
        a6 = v21; /*0x85792a*/
        if ( v21 ) /*0x857938*/
        {
          v17 = RenderPass_Construct(v21, vtable, 0x94u, 1u, 2u, a3, a4); /*0x857957*/
          goto LABEL_111; /*0x85795f*/
        }
        goto LABEL_110; /*0x857938*/
      }
    }
    else if ( a13 ) /*0x8579b8*/
    {
      if ( a12 ) /*0x857bcc*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x857c22*/
        {
          v30 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857c2a*/
          a6 = v30; /*0x857c32*/
          if ( v30 ) /*0x857c40*/
          {
            v17 = RenderPass_Construct(v30, vtable, 0xA2u, 1u, 2u, a3, a4); /*0x857c5f*/
            goto LABEL_111; /*0x857c67*/
          }
          goto LABEL_110; /*0x857c40*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x857bd3*/
      {
        v29 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857bdb*/
        a6 = v29; /*0x857be3*/
        if ( v29 ) /*0x857bf1*/
        {
          v17 = RenderPass_Construct(v29, vtable, 0x95u, 1u, 2u, a3, a4); /*0x857c10*/
          goto LABEL_111; /*0x857c18*/
        }
        goto LABEL_110; /*0x857bf1*/
      }
    }
    else if ( a12 ) /*0x8579c3*/
    {
      if ( a14 ) /*0x857acd*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x857b7d*/
        {
          v28 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857b85*/
          a6 = v28; /*0x857b8d*/
          if ( v28 ) /*0x857b9b*/
          {
            v17 = RenderPass_Construct(v28, vtable, 0xAAu, 1u, 2u, a3, a4); /*0x857bba*/
            goto LABEL_111; /*0x857bc2*/
          }
          goto LABEL_110; /*0x857b9b*/
        }
      }
      else if ( a15 ) /*0x857ad8*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x857b2e*/
        {
          v27 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857b36*/
          a6 = v27; /*0x857b3e*/
          if ( v27 ) /*0x857b4c*/
          {
            v17 = RenderPass_Construct(v27, vtable, 0xA4u, 1u, 2u, a3, a4); /*0x857b6b*/
            goto LABEL_111; /*0x857b73*/
          }
          goto LABEL_110; /*0x857b4c*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x857adf*/
      {
        v26 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857ae7*/
        a6 = v26; /*0x857aef*/
        if ( v26 ) /*0x857afd*/
        {
          v17 = RenderPass_Construct(v26, vtable, 0x9Fu, 1u, 2u, a3, a4); /*0x857b1c*/
          goto LABEL_111; /*0x857b24*/
        }
        goto LABEL_110; /*0x857afd*/
      }
    }
    else if ( a14 ) /*0x8579ce*/
    {
      if ( (_BYTE)a6 == 1 ) /*0x857a7e*/
      {
        v25 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857a86*/
        a6 = v25; /*0x857a8e*/
        if ( v25 ) /*0x857a9c*/
        {
          v17 = RenderPass_Construct(v25, vtable, 0x9Du, 1u, 2u, a3, a4); /*0x857abb*/
          goto LABEL_111; /*0x857ac3*/
        }
        goto LABEL_110; /*0x857a9c*/
      }
    }
    else if ( a15 ) /*0x8579d9*/
    {
      if ( (_BYTE)a6 == 1 ) /*0x857a2f*/
      {
        v24 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857a37*/
        a6 = v24; /*0x857a3f*/
        if ( v24 ) /*0x857a4d*/
        {
          v17 = RenderPass_Construct(v24, vtable, 0x97u, 1u, 2u, a3, a4); /*0x857a6c*/
          goto LABEL_111; /*0x857a74*/
        }
        goto LABEL_110; /*0x857a4d*/
      }
    }
    else if ( (_BYTE)a6 == 1 ) /*0x8579e0*/
    {
      v23 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8579e8*/
      a6 = v23; /*0x8579f0*/
      if ( v23 ) /*0x8579fe*/
      {
        v17 = RenderPass_Construct(v23, vtable, 0x92u, 1u, 2u, a3, a4); /*0x857a1d*/
        goto LABEL_111; /*0x857a25*/
      }
      goto LABEL_110; /*0x8579fe*/
    }
LABEL_112:
    ++*a5; /*0x8580b1*/
    goto LABEL_113; /*0x8580b5*/
  }
  if ( !a9 ) /*0x857c71*/
  {
    if ( a10 ) /*0x857df6*/
    {
      if ( a12 ) /*0x857e01*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x857e57*/
        {
          v36 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857e5f*/
          a6 = v36; /*0x857e67*/
          if ( v36 ) /*0x857e75*/
          {
            v17 = RenderPass_Construct(v36, vtable, 0xA7u, 1u, 2u, a3, a4); /*0x857e94*/
            goto LABEL_111; /*0x857e9c*/
          }
          goto LABEL_110; /*0x857e75*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x857e08*/
      {
        v35 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857e10*/
        a6 = v35; /*0x857e18*/
        if ( v35 ) /*0x857e26*/
        {
          v17 = RenderPass_Construct(v35, vtable, 0x9Au, 1u, 2u, a3, a4); /*0x857e45*/
          goto LABEL_111; /*0x857e4d*/
        }
        goto LABEL_110; /*0x857e26*/
      }
    }
    else if ( a13 ) /*0x857ea6*/
    {
      if ( a12 ) /*0x858006*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x858055*/
        {
          v42 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858059*/
          a6 = v42; /*0x858061*/
          if ( v42 ) /*0x85806f*/
          {
            v17 = RenderPass_Construct(v42, vtable, 0xA8u, 1u, 2u, a3, a4); /*0x85808a*/
            goto LABEL_111; /*0x858092*/
          }
          goto LABEL_110; /*0x85806f*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x85800d*/
      {
        v41 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858015*/
        a6 = v41; /*0x85801d*/
        if ( v41 ) /*0x85802b*/
        {
          v17 = RenderPass_Construct(v41, vtable, 0x9Bu, 1u, 2u, a3, a4); /*0x858046*/
          goto LABEL_111; /*0x85804e*/
        }
        goto LABEL_110; /*0x85802b*/
      }
    }
    else if ( a12 ) /*0x857eb1*/
    {
      if ( a15 ) /*0x857f61*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x857fb7*/
        {
          v40 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857fbf*/
          a6 = v40; /*0x857fc7*/
          if ( v40 ) /*0x857fd5*/
          {
            v17 = RenderPass_Construct(v40, vtable, 0xABu, 1u, 2u, a3, a4); /*0x857ff4*/
            goto LABEL_111; /*0x857ffc*/
          }
          goto LABEL_110; /*0x857fd5*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x857f68*/
      {
        v39 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857f70*/
        a6 = v39; /*0x857f78*/
        if ( v39 ) /*0x857f86*/
        {
          v17 = RenderPass_Construct(v39, vtable, 0xA5u, 1u, 2u, a3, a4); /*0x857fa5*/
          goto LABEL_111; /*0x857fad*/
        }
        goto LABEL_110; /*0x857f86*/
      }
    }
    else if ( a15 ) /*0x857ebc*/
    {
      if ( (_BYTE)a6 == 1 ) /*0x857f12*/
      {
        v38 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857f1a*/
        a6 = v38; /*0x857f22*/
        if ( v38 ) /*0x857f30*/
        {
          v17 = RenderPass_Construct(v38, vtable, 0x9Eu, 1u, 2u, a3, a4); /*0x857f4f*/
          goto LABEL_111; /*0x857f57*/
        }
        goto LABEL_110; /*0x857f30*/
      }
    }
    else if ( (_BYTE)a6 == 1 ) /*0x857ec3*/
    {
      v37 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857ecb*/
      a6 = v37; /*0x857ed3*/
      if ( v37 ) /*0x857ee1*/
      {
        v17 = RenderPass_Construct(v37, vtable, 0x98u, 1u, 2u, a3, a4); /*0x857f00*/
        goto LABEL_111; /*0x857f08*/
      }
      goto LABEL_110; /*0x857ee1*/
    }
    goto LABEL_112; /*0x857e08*/
  }
  if ( !a10 ) /*0x857c7c*/
  {
    if ( a13 ) /*0x857ca1*/
    {
      if ( a12 ) /*0x857d51*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x857da7*/
        {
          v34 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857daf*/
          a6 = v34; /*0x857db7*/
          if ( v34 ) /*0x857dc5*/
          {
            v17 = RenderPass_Construct(v34, vtable, 0xA9u, 1u, 2u, a3, a4); /*0x857de4*/
            goto LABEL_111; /*0x857dec*/
          }
          goto LABEL_110; /*0x857dc5*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x857d58*/
      {
        v33 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857d60*/
        a6 = v33; /*0x857d68*/
        if ( v33 ) /*0x857d76*/
        {
          v17 = RenderPass_Construct(v33, vtable, 0x9Cu, 1u, 2u, a3, a4); /*0x857d95*/
          goto LABEL_111; /*0x857d9d*/
        }
        goto LABEL_110; /*0x857d76*/
      }
    }
    else if ( a12 ) /*0x857cac*/
    {
      if ( (_BYTE)a6 == 1 ) /*0x857d02*/
      {
        v32 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857d0a*/
        a6 = v32; /*0x857d12*/
        if ( v32 ) /*0x857d20*/
        {
          v17 = RenderPass_Construct(v32, vtable, 0xA6u, 1u, 2u, a3, a4); /*0x857d3f*/
          goto LABEL_111; /*0x857d47*/
        }
        goto LABEL_110; /*0x857d20*/
      }
    }
    else if ( (_BYTE)a6 == 1 ) /*0x857cb3*/
    {
      v31 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857cbb*/
      a6 = v31; /*0x857cc3*/
      if ( v31 ) /*0x857cd1*/
      {
        v17 = RenderPass_Construct(v31, vtable, 0x99u, 1u, 2u, a3, a4); /*0x857cf0*/
        goto LABEL_111; /*0x857cf8*/
      }
      goto LABEL_110; /*0x857cd1*/
    }
    goto LABEL_112; /*0x857cb3*/
  }
  if ( unk_B42E8C )
    unk_B42E8C("SHADER ERROR : no shader to handle ADT_SGFg ( 2 lights & skinned & glowmap & facegenblend )", 0);
LABEL_113:
  result = a7; /*0x8580b9*/
  *a7 = 0; /*0x8580bd*/
  return result; /*0x8580c0*/
}
