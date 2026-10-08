_BYTE *__thiscall sub_8588E0(
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
  _BYTE *result; // eax

  if ( a8 )
  {
    if ( a9 )
    {
      if ( !a10 ) /*0x858d91*/
      {
        if ( a13 ) /*0x858db6*/
        {
          if ( a12 ) /*0x858e66*/
          {
            if ( (_BYTE)a6 == 1 ) /*0x858ebc*/
            {
              v32 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858ec4*/
              a6 = v32; /*0x858ecc*/
              if ( v32 ) /*0x858eda*/
              {
                v17 = RenderPass_Construct(v32, vtable, 0xDEu, 1u, 2u, a3, a4); /*0x858ef9*/
                goto LABEL_102; /*0x858f01*/
              }
              goto LABEL_101; /*0x858eda*/
            }
          }
          else if ( (_BYTE)a6 == 1 ) /*0x858e6d*/
          {
            v31 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858e75*/
            a6 = v31; /*0x858e7d*/
            if ( v31 ) /*0x858e8b*/
            {
              v17 = RenderPass_Construct(v31, vtable, 0xD1u, 1u, 2u, a3, a4); /*0x858eaa*/
              goto LABEL_102; /*0x858eb2*/
            }
            goto LABEL_101; /*0x858e8b*/
          }
        }
        else if ( a12 ) /*0x858dc1*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x858e17*/
          {
            v30 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858e1f*/
            a6 = v30; /*0x858e27*/
            if ( v30 ) /*0x858e35*/
            {
              v17 = RenderPass_Construct(v30, vtable, 0xDAu, 1u, 2u, a3, a4); /*0x858e54*/
              goto LABEL_102; /*0x858e5c*/
            }
            goto LABEL_101; /*0x858e35*/
          }
        }
        else if ( (_BYTE)a6 == 1 ) /*0x858dc8*/
        {
          v29 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858dd0*/
          a6 = v29; /*0x858dd8*/
          if ( v29 ) /*0x858de6*/
          {
            v17 = RenderPass_Construct(v29, vtable, 0xCDu, 1u, 2u, a3, a4); /*0x858e05*/
            goto LABEL_102; /*0x858e0d*/
          }
          goto LABEL_101; /*0x858de6*/
        }
        goto LABEL_104; /*0x858dc8*/
      }
      if ( unk_B42E8C )
        unk_B42E8C("SHADER ERROR : no shader to handle ADTS2_SGFg ( 2 lights & skinned & glowmap & facegenblend )", 0);
    }
    else
    {
      if ( !a10 ) /*0x858f0b*/
      {
        if ( a13 ) /*0x858f30*/
        {
          if ( a12 ) /*0x859090*/
          {
            if ( (_BYTE)a6 == 1 ) /*0x8590df*/
            {
              v38 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8590e3*/
              a6 = v38; /*0x8590eb*/
              if ( v38 ) /*0x8590f9*/
              {
                v17 = RenderPass_Construct(v38, vtable, 0xDDu, 1u, 2u, a3, a4); /*0x859114*/
                goto LABEL_102; /*0x85911c*/
              }
              goto LABEL_101; /*0x8590f9*/
            }
          }
          else if ( (_BYTE)a6 == 1 ) /*0x859097*/
          {
            v37 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85909f*/
            a6 = v37; /*0x8590a7*/
            if ( v37 ) /*0x8590b5*/
            {
              v17 = RenderPass_Construct(v37, vtable, 0xD0u, 1u, 2u, a3, a4); /*0x8590d0*/
              goto LABEL_102; /*0x8590d8*/
            }
            goto LABEL_101; /*0x8590b5*/
          }
        }
        else if ( a12 ) /*0x858f3b*/
        {
          if ( a15 ) /*0x858feb*/
          {
            if ( (_BYTE)a6 == 1 ) /*0x859041*/
            {
              v36 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859049*/
              a6 = v36; /*0x859051*/
              if ( v36 ) /*0x85905f*/
              {
                v17 = RenderPass_Construct(v36, vtable, 0xDBu, 1u, 2u, a3, a4); /*0x85907e*/
                goto LABEL_102; /*0x859086*/
              }
              goto LABEL_101; /*0x85905f*/
            }
          }
          else if ( (_BYTE)a6 == 1 ) /*0x858ff2*/
          {
            v35 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858ffa*/
            a6 = v35; /*0x859002*/
            if ( v35 ) /*0x859010*/
            {
              v17 = RenderPass_Construct(v35, vtable, 0xD9u, 1u, 2u, a3, a4); /*0x85902f*/
              goto LABEL_102; /*0x859037*/
            }
            goto LABEL_101; /*0x859010*/
          }
        }
        else if ( a15 ) /*0x858f46*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x858f9c*/
          {
            v34 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858fa4*/
            a6 = v34; /*0x858fac*/
            if ( v34 ) /*0x858fba*/
            {
              v17 = RenderPass_Construct(v34, vtable, 0xCEu, 1u, 2u, a3, a4); /*0x858fd9*/
              goto LABEL_102; /*0x858fe1*/
            }
            goto LABEL_101; /*0x858fba*/
          }
        }
        else if ( (_BYTE)a6 == 1 ) /*0x858f4d*/
        {
          v33 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858f55*/
          a6 = v33; /*0x858f5d*/
          if ( v33 ) /*0x858f6b*/
          {
            v17 = RenderPass_Construct(v33, vtable, 0xCCu, 1u, 2u, a3, a4); /*0x858f8a*/
            goto LABEL_102; /*0x858f92*/
          }
          goto LABEL_101; /*0x858f6b*/
        }
        goto LABEL_104; /*0x858f4d*/
      }
      if ( unk_B42E8C )
        unk_B42E8C("SHADER ERROR : no shader to handle ADTS2_SFg ( skinned & facegenblend )", 0);
    }
  }
  else
  {
    if ( a9 )
    {
      if ( a10 )
      {
        if ( unk_B42E8C )
          unk_B42E8C("SHADER ERROR : no shader to handle ADTS2_GFg ( 2 lights & glowmap & facegenblend )", 0);
        goto LABEL_105; /*0x858939*/
      }
      if ( !a13 ) /*0x858943*/
      {
        if ( a12 ) /*0x85894e*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x8589a4*/
          {
            v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8589ac*/
            a6 = v18; /*0x8589b4*/
            if ( v18 ) /*0x8589c2*/
            {
              v17 = RenderPass_Construct(v18, vtable, 0xD4u, 1u, 2u, a3, a4); /*0x8589e1*/
              goto LABEL_102; /*0x8589e9*/
            }
LABEL_101:
            v17 = 0; /*0x85911e*/
            goto LABEL_102; /*0x85911e*/
          }
        }
        else if ( (_BYTE)a6 == 1 ) /*0x858955*/
        {
          v16 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85895d*/
          a6 = v16; /*0x858965*/
          if ( v16 ) /*0x858973*/
          {
            v17 = RenderPass_Construct(v16, vtable, 0xC7u, 1u, 2u, a3, a4); /*0x858992*/
LABEL_102:
            a6 = v17; /*0x859120*/
            goto LABEL_103; /*0x859124*/
          }
          goto LABEL_101; /*0x858973*/
        }
LABEL_104:
        ++*a5; /*0x85913b*/
        goto LABEL_105; /*0x85913f*/
      }
      if ( a12 ) /*0x8589f3*/
      {
        if ( (_BYTE)a6 != 1 ) /*0x858a59*/
          goto LABEL_104; /*0x858a59*/
        v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858a61*/
        a6 = v20; /*0x858a69*/
        if ( v20 ) /*0x858a77*/
        {
          a6 = RenderPass_Construct(v20, vtable, 0xD8u, 1u, 1u, a3); /*0x858a92*/
          goto LABEL_103; /*0x858a9e*/
        }
      }
      else
      {
        if ( (_BYTE)a6 != 1 ) /*0x8589fa*/
          goto LABEL_104; /*0x8589fa*/
        v19 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858a02*/
        a6 = v19; /*0x858a0a*/
        if ( v19 ) /*0x858a18*/
        {
          a6 = RenderPass_Construct(v19, vtable, 0xCBu, 1u, 1u, a3); /*0x858a33*/
LABEL_103:
          NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a6); /*0x859129*/
          goto LABEL_105; /*0x859139*/
        }
      }
      a6 = 0; /*0x858a46*/
      goto LABEL_103; /*0x858a4f*/
    }
    if ( !a10 ) /*0x858aa8*/
    {
      if ( a13 ) /*0x858acd*/
      {
        if ( a12 ) /*0x858ce1*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x858d37*/
          {
            v28 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858d3f*/
            a6 = v28; /*0x858d47*/
            if ( v28 ) /*0x858d55*/
            {
              v17 = RenderPass_Construct(v28, vtable, 0xD7u, 1u, 2u, a3, a4); /*0x858d74*/
              goto LABEL_102; /*0x858d7c*/
            }
            goto LABEL_101; /*0x858d55*/
          }
        }
        else if ( (_BYTE)a6 == 1 ) /*0x858ce8*/
        {
          v27 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858cf0*/
          a6 = v27; /*0x858cf8*/
          if ( v27 ) /*0x858d06*/
          {
            v17 = RenderPass_Construct(v27, vtable, 0xCAu, 1u, 2u, a3, a4); /*0x858d25*/
            goto LABEL_102; /*0x858d2d*/
          }
          goto LABEL_101; /*0x858d06*/
        }
      }
      else if ( a12 ) /*0x858ad8*/
      {
        if ( a14 ) /*0x858be2*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x858c92*/
          {
            v26 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858c9a*/
            a6 = v26; /*0x858ca2*/
            if ( v26 ) /*0x858cb0*/
            {
              v17 = RenderPass_Construct(v26, vtable, 0xDFu, 1u, 2u, a3, a4); /*0x858ccf*/
              goto LABEL_102; /*0x858cd7*/
            }
            goto LABEL_101; /*0x858cb0*/
          }
        }
        else if ( a15 ) /*0x858bed*/
        {
          if ( (_BYTE)a6 == 1 ) /*0x858c43*/
          {
            v25 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858c4b*/
            a6 = v25; /*0x858c53*/
            if ( v25 ) /*0x858c61*/
            {
              v17 = RenderPass_Construct(v25, vtable, 0xD5u, 1u, 2u, a3, a4); /*0x858c80*/
              goto LABEL_102; /*0x858c88*/
            }
            goto LABEL_101; /*0x858c61*/
          }
        }
        else if ( (_BYTE)a6 == 1 ) /*0x858bf4*/
        {
          v24 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858bfc*/
          a6 = v24; /*0x858c04*/
          if ( v24 ) /*0x858c12*/
          {
            v17 = RenderPass_Construct(v24, vtable, 0xD3u, 1u, 2u, a3, a4); /*0x858c31*/
            goto LABEL_102; /*0x858c39*/
          }
          goto LABEL_101; /*0x858c12*/
        }
      }
      else if ( a14 ) /*0x858ae3*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x858b93*/
        {
          v23 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858b9b*/
          a6 = v23; /*0x858ba3*/
          if ( v23 ) /*0x858bb1*/
          {
            v17 = RenderPass_Construct(v23, vtable, 0xD2u, 1u, 2u, a3, a4); /*0x858bd0*/
            goto LABEL_102; /*0x858bd8*/
          }
          goto LABEL_101; /*0x858bb1*/
        }
      }
      else if ( a15 ) /*0x858aee*/
      {
        if ( (_BYTE)a6 == 1 ) /*0x858b44*/
        {
          v22 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858b4c*/
          a6 = v22; /*0x858b54*/
          if ( v22 ) /*0x858b62*/
          {
            v17 = RenderPass_Construct(v22, vtable, 0xC8u, 1u, 2u, a3, a4); /*0x858b81*/
            goto LABEL_102; /*0x858b89*/
          }
          goto LABEL_101; /*0x858b62*/
        }
      }
      else if ( (_BYTE)a6 == 1 ) /*0x858af5*/
      {
        v21 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858afd*/
        a6 = v21; /*0x858b05*/
        if ( v21 ) /*0x858b13*/
        {
          v17 = RenderPass_Construct(v21, vtable, 0xC6u, 1u, 2u, a3, a4); /*0x858b32*/
          goto LABEL_102; /*0x858b3a*/
        }
        goto LABEL_101; /*0x858b13*/
      }
      goto LABEL_104; /*0x858af5*/
    }
    if ( unk_B42E8C )
      unk_B42E8C("SHADER ERROR : no shader to handle ADTS2_Fg ( facegenblend )", 0);
  }
LABEL_105:
  result = a7; /*0x859143*/
  *a7 = 0; /*0x859147*/
  return result; /*0x85914a*/
}
