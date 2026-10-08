NiTPointerList_Node_void *__thiscall sub_856D60(
        _DWORD *this,
        void *vtable,
        int a3,
        NiTPointerList_Node_void *a4,
        RenderPass_DecodedLayout *a5,
        _BYTE *a6,
        char a7,
        char a8,
        char a9,
        int a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16)
{
  NiTPointerList_Node_void *result; // eax
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
  RenderPass_DecodedLayout *v43; // eax
  RenderPass_DecodedLayout *v44; // eax
  RenderPass_DecodedLayout *v45; // eax
  RenderPass_DecodedLayout *v46; // eax
  RenderPass_DecodedLayout *v47; // eax

  if ( !a7 )
  {
    if ( a8 )
    {
      if ( a9 )
      {
        result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x856da0*/
        if ( unk_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle ADT_GFg ( glowmap & facegenblend )",
                                                 0);
        goto LABEL_126; /*0x856db9*/
      }
      if ( a12 ) /*0x856dc3*/
      {
        if ( a11 ) /*0x856e66*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x856eb4*/
          {
            v22 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856ebc*/
            a5 = v22; /*0x856ec4*/
            if ( v22 ) /*0x856ed2*/
            {
              v19 = RenderPass_Construct(v22, vtable, 0x89u, 1u, 1u, a3); /*0x856eec*/
              goto LABEL_124; /*0x856ef4*/
            }
            goto LABEL_123; /*0x856ed2*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x856e6d*/
        {
          v21 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856e75*/
          a5 = v21; /*0x856e7d*/
          if ( v21 ) /*0x856e8b*/
          {
            v19 = RenderPass_Construct(v21, vtable, 0x7Bu, 1u, 1u, a3); /*0x856ea2*/
            goto LABEL_124; /*0x856eaa*/
          }
          goto LABEL_123; /*0x856e8b*/
        }
      }
      else if ( a11 ) /*0x856dce*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x856e1c*/
        {
          v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856e24*/
          a5 = v20; /*0x856e2c*/
          if ( v20 ) /*0x856e3a*/
          {
            v19 = RenderPass_Construct(v20, vtable, 0x86u, 1u, 1u, a3); /*0x856e54*/
            goto LABEL_124; /*0x856e5c*/
          }
LABEL_123:
          v19 = 0; /*0x857706*/
          goto LABEL_124; /*0x857706*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x856dd5*/
      {
        v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856ddd*/
        a5 = v18; /*0x856de5*/
        if ( v18 ) /*0x856df3*/
        {
          v19 = RenderPass_Construct(v18, vtable, 0x78u, 1u, 1u, a3); /*0x856e0a*/
LABEL_124:
          a5 = v19; /*0x857708*/
          result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a5); /*0x85771c*/
          goto LABEL_126; /*0x857721*/
        }
        goto LABEL_123; /*0x856df3*/
      }
    }
    else
    {
      if ( !a9 ) /*0x856efe*/
      {
        if ( a12 ) /*0x856fa1*/
        {
          if ( a11 ) /*0x857290*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x8572de*/
            {
              v35 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8572e6*/
              a5 = v35; /*0x8572ee*/
              if ( v35 ) /*0x8572fc*/
              {
                v19 = RenderPass_Construct(v35, vtable, 0x88u, 1u, 1u, a3); /*0x857316*/
                goto LABEL_124; /*0x85731e*/
              }
              goto LABEL_123; /*0x8572fc*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x857297*/
          {
            v34 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85729f*/
            a5 = v34; /*0x8572a7*/
            if ( v34 ) /*0x8572b5*/
            {
              v19 = RenderPass_Construct(v34, vtable, 0x7Au, 1u, 1u, a3); /*0x8572cc*/
              goto LABEL_124; /*0x8572d4*/
            }
            goto LABEL_123; /*0x8572b5*/
          }
          goto LABEL_125; /*0x857297*/
        }
        if ( a13 ) /*0x856fac*/
        {
          if ( a11 ) /*0x8571f8*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x857246*/
            {
              v33 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85724e*/
              a5 = v33; /*0x857256*/
              if ( v33 ) /*0x857264*/
              {
                v19 = RenderPass_Construct(v33, vtable, 0x85u, 1u, 1u, a3); /*0x85727e*/
                goto LABEL_124; /*0x857286*/
              }
              goto LABEL_123; /*0x857264*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x8571ff*/
          {
            v32 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857207*/
            a5 = v32; /*0x85720f*/
            if ( v32 ) /*0x85721d*/
            {
              v19 = RenderPass_Construct(v32, vtable, 0x77u, 1u, 1u, a3); /*0x857234*/
              goto LABEL_124; /*0x85723c*/
            }
            goto LABEL_123; /*0x85721d*/
          }
          goto LABEL_125; /*0x8571ff*/
        }
        if ( a11 ) /*0x856fb7*/
        {
          if ( a14 ) /*0x857108*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x8571ae*/
            {
              v31 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8571b6*/
              a5 = v31; /*0x8571be*/
              if ( v31 ) /*0x8571cc*/
              {
                v19 = RenderPass_Construct(v31, vtable, 0x90u, 1u, 1u, a3); /*0x8571e6*/
                goto LABEL_124; /*0x8571ee*/
              }
              goto LABEL_123; /*0x8571cc*/
            }
          }
          else if ( a16 ) /*0x857113*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x857164*/
            {
              v30 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85716c*/
              a5 = v30; /*0x857174*/
              if ( v30 ) /*0x857182*/
              {
                v19 = RenderPass_Construct(v30, vtable, 0x8Au, 1u, 1u, a3); /*0x85719c*/
                goto LABEL_124; /*0x8571a4*/
              }
              goto LABEL_123; /*0x857182*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x85711a*/
          {
            v29 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857122*/
            a5 = v29; /*0x85712a*/
            if ( v29 ) /*0x857138*/
            {
              v19 = RenderPass_Construct(v29, vtable, 0x84u, 1u, 1u, a3); /*0x857152*/
              goto LABEL_124; /*0x85715a*/
            }
            goto LABEL_123; /*0x857138*/
          }
          goto LABEL_125; /*0x85711a*/
        }
        if ( a14 ) /*0x856fc2*/
        {
          if ( !a15 ) /*0x85706d*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x8570be*/
            {
              v28 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8570c6*/
              a5 = v28; /*0x8570ce*/
              if ( v28 ) /*0x8570dc*/
              {
                v19 = RenderPass_Construct(v28, vtable, 0x82u, 1u, 1u, a3); /*0x8570f6*/
                goto LABEL_124; /*0x8570fe*/
              }
              goto LABEL_123; /*0x8570dc*/
            }
            goto LABEL_125; /*0x8570be*/
          }
        }
        else if ( !a15 ) /*0x856fcd*/
        {
          if ( a16 ) /*0x856fd8*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x857026*/
            {
              v26 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85702e*/
              a5 = v26; /*0x857036*/
              if ( v26 ) /*0x857044*/
              {
                v19 = RenderPass_Construct(v26, vtable, 0x7Cu, 1u, 1u, a3); /*0x85705b*/
                goto LABEL_124; /*0x857063*/
              }
              goto LABEL_123; /*0x857044*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x856fdf*/
          {
            v25 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856fe7*/
            a5 = v25; /*0x856fef*/
            if ( v25 ) /*0x856ffd*/
            {
              v19 = RenderPass_Construct(v25, vtable, 0x76u, 1u, 1u, a3); /*0x857014*/
              goto LABEL_124; /*0x85701c*/
            }
            goto LABEL_123; /*0x856ffd*/
          }
          goto LABEL_125; /*0x856fdf*/
        }
        if ( (_BYTE)a5 == 1 ) /*0x857074*/
        {
          v27 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85707c*/
          a5 = v27; /*0x857084*/
          if ( v27 ) /*0x857092*/
          {
            v19 = RenderPass_Construct(v27, vtable, 0x17Bu, 1u, 1u, a3); /*0x8570ac*/
            goto LABEL_124; /*0x8570b4*/
          }
          goto LABEL_123; /*0x857092*/
        }
        goto LABEL_125; /*0x857074*/
      }
      if ( a11 ) /*0x856f09*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x856f57*/
        {
          v24 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856f5f*/
          a5 = v24; /*0x856f67*/
          if ( v24 ) /*0x856f75*/
          {
            v19 = RenderPass_Construct(v24, vtable, 0x87u, 1u, 1u, a3); /*0x856f8f*/
            goto LABEL_124; /*0x856f97*/
          }
          goto LABEL_123; /*0x856f75*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x856f10*/
      {
        v23 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856f18*/
        a5 = v23; /*0x856f20*/
        if ( v23 ) /*0x856f2e*/
        {
          v19 = RenderPass_Construct(v23, vtable, 0x79u, 1u, 1u, a3); /*0x856f45*/
          goto LABEL_124; /*0x856f4d*/
        }
        goto LABEL_123; /*0x856f2e*/
      }
    }
LABEL_125:
    result = a4; /*0x857723*/
    ++LOWORD(a4->next); /*0x857727*/
    goto LABEL_126; /*0x857727*/
  }
  if ( !a8 ) /*0x857328*/
  {
    if ( a9 ) /*0x857496*/
    {
      if ( a11 ) /*0x8574a1*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x8574ef*/
        {
          v41 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8574f7*/
          a5 = v41; /*0x8574ff*/
          if ( v41 ) /*0x85750d*/
          {
            v19 = RenderPass_Construct(v41, vtable, 0x8Du, 1u, 1u, a3); /*0x857527*/
            goto LABEL_124; /*0x85752f*/
          }
          goto LABEL_123; /*0x85750d*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x8574a8*/
      {
        v40 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8574b0*/
        a5 = v40; /*0x8574b8*/
        if ( v40 ) /*0x8574c6*/
        {
          v19 = RenderPass_Construct(v40, vtable, 0x7Fu, 1u, 1u, a3); /*0x8574dd*/
          goto LABEL_124; /*0x8574e5*/
        }
        goto LABEL_123; /*0x8574c6*/
      }
    }
    else if ( a12 ) /*0x857539*/
    {
      if ( a11 ) /*0x857682*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x8576cc*/
        {
          v47 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8576d0*/
          a5 = v47; /*0x8576d8*/
          if ( v47 ) /*0x8576e6*/
          {
            v19 = RenderPass_Construct(v47, vtable, 0x8Eu, 1u, 1u, a3); /*0x8576fc*/
            goto LABEL_124; /*0x857704*/
          }
          goto LABEL_123; /*0x8576e6*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x857689*/
      {
        v46 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857691*/
        a5 = v46; /*0x857699*/
        if ( v46 ) /*0x8576a7*/
        {
          v19 = RenderPass_Construct(v46, vtable, 0x80u, 1u, 1u, a3); /*0x8576bd*/
          goto LABEL_124; /*0x8576c5*/
        }
        goto LABEL_123; /*0x8576a7*/
      }
    }
    else if ( a11 ) /*0x857544*/
    {
      if ( a16 ) /*0x8575e7*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x857638*/
        {
          v45 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857640*/
          a5 = v45; /*0x857648*/
          if ( v45 ) /*0x857656*/
          {
            v19 = RenderPass_Construct(v45, vtable, 0x91u, 1u, 1u, a3); /*0x857670*/
            goto LABEL_124; /*0x857678*/
          }
          goto LABEL_123; /*0x857656*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x8575ee*/
      {
        v44 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8575f6*/
        a5 = v44; /*0x8575fe*/
        if ( v44 ) /*0x85760c*/
        {
          v19 = RenderPass_Construct(v44, vtable, 0x8Bu, 1u, 1u, a3); /*0x857626*/
          goto LABEL_124; /*0x85762e*/
        }
        goto LABEL_123; /*0x85760c*/
      }
    }
    else if ( a16 ) /*0x85754f*/
    {
      if ( (_BYTE)a5 == 1 ) /*0x85759d*/
      {
        v43 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8575a5*/
        a5 = v43; /*0x8575ad*/
        if ( v43 ) /*0x8575bb*/
        {
          v19 = RenderPass_Construct(v43, vtable, 0x83u, 1u, 1u, a3); /*0x8575d5*/
          goto LABEL_124; /*0x8575dd*/
        }
        goto LABEL_123; /*0x8575bb*/
      }
    }
    else if ( (_BYTE)a5 == 1 ) /*0x857556*/
    {
      v42 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85755e*/
      a5 = v42; /*0x857566*/
      if ( v42 ) /*0x857574*/
      {
        v19 = RenderPass_Construct(v42, vtable, 0x7Du, 1u, 1u, a3); /*0x85758b*/
        goto LABEL_124; /*0x857593*/
      }
      goto LABEL_123; /*0x857574*/
    }
    goto LABEL_125; /*0x8574a8*/
  }
  if ( !a9 ) /*0x857333*/
  {
    if ( a12 ) /*0x857358*/
    {
      if ( a11 ) /*0x8573fb*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x85744c*/
        {
          v39 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857454*/
          a5 = v39; /*0x85745c*/
          if ( v39 ) /*0x85746a*/
          {
            v19 = RenderPass_Construct(v39, vtable, 0x8Fu, 1u, 1u, a3); /*0x857484*/
            goto LABEL_124; /*0x85748c*/
          }
          goto LABEL_123; /*0x85746a*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x857402*/
      {
        v38 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85740a*/
        a5 = v38; /*0x857412*/
        if ( v38 ) /*0x857420*/
        {
          v19 = RenderPass_Construct(v38, vtable, 0x81u, 1u, 1u, a3); /*0x85743a*/
          goto LABEL_124; /*0x857442*/
        }
        goto LABEL_123; /*0x857420*/
      }
    }
    else if ( a11 ) /*0x857363*/
    {
      if ( (_BYTE)a5 == 1 ) /*0x8573b1*/
      {
        v37 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8573b9*/
        a5 = v37; /*0x8573c1*/
        if ( v37 ) /*0x8573cf*/
        {
          v19 = RenderPass_Construct(v37, vtable, 0x8Cu, 1u, 1u, a3); /*0x8573e9*/
          goto LABEL_124; /*0x8573f1*/
        }
        goto LABEL_123; /*0x8573cf*/
      }
    }
    else if ( (_BYTE)a5 == 1 ) /*0x85736a*/
    {
      v36 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x857372*/
      a5 = v36; /*0x85737a*/
      if ( v36 ) /*0x857388*/
      {
        v19 = RenderPass_Construct(v36, vtable, 0x7Eu, 1u, 1u, a3); /*0x85739f*/
        goto LABEL_124; /*0x8573a7*/
      }
      goto LABEL_123; /*0x857388*/
    }
    goto LABEL_125; /*0x85736a*/
  }
  result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x857335*/
  if ( unk_B42E8C )
    result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                           "SHADER ERROR : no shader to handle ADT_SGFg ( skinned & glowmap & facegenblend )",
                                           0);
LABEL_126:
  *a6 = 0; /*0x85772b*/
  return result; /*0x857732*/
}
