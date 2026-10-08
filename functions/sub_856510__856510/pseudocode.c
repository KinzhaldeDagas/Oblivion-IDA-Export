NiTPointerList_Node_void *__thiscall sub_856510(
        _DWORD *this,
        void *vtable,
        int a3,
        int a4,
        int a5,
        NiTPointerList_Node_void *a6,
        RenderPass_DecodedLayout *a7,
        _BYTE *a8,
        char a9,
        char a10,
        char a11,
        int a12,
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
  NiTPointerList_Node_void *result; // eax
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

  if ( a9 )
  {
    if ( !a10 ) /*0x8569a2*/
    {
      if ( a11 ) /*0x8569ad*/
      {
        if ( a13 ) /*0x856b15*/
        {
          if ( (_BYTE)a7 == 1 ) /*0x856b6d*/
          {
            v35 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856b75*/
            a7 = v35; /*0x856b7d*/
            if ( v35 ) /*0x856b8b*/
            {
              v17 = RenderPass_Construct(v35, vtable, 0x74u, 1u, 3u, a3, a4, a5); /*0x856bac*/
              goto LABEL_35; /*0x856bb4*/
            }
            goto LABEL_34; /*0x856b8b*/
          }
        }
        else if ( (_BYTE)a7 == 1 ) /*0x856b1c*/
        {
          v34 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856b24*/
          a7 = v34; /*0x856b2c*/
          if ( v34 ) /*0x856b3a*/
          {
            v17 = RenderPass_Construct(v34, vtable, 0x69u, 1u, 3u, a3, a4, a5); /*0x856b5b*/
            goto LABEL_35; /*0x856b63*/
          }
          goto LABEL_34; /*0x856b3a*/
        }
      }
      else if ( a14 ) /*0x8569b8*/
      {
        if ( a13 ) /*0x856a6c*/
        {
          if ( (_BYTE)a7 == 1 ) /*0x856ac4*/
          {
            v33 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856acc*/
            a7 = v33; /*0x856ad4*/
            if ( v33 ) /*0x856ae2*/
            {
              v17 = RenderPass_Construct(v33, vtable, 0x71u, 1u, 3u, a3, a4, a5); /*0x856b03*/
              goto LABEL_35; /*0x856b0b*/
            }
            goto LABEL_34; /*0x856ae2*/
          }
        }
        else if ( (_BYTE)a7 == 1 ) /*0x856a73*/
        {
          v32 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856a7b*/
          a7 = v32; /*0x856a83*/
          if ( v32 ) /*0x856a91*/
          {
            v17 = RenderPass_Construct(v32, vtable, 0x66u, 1u, 3u, a3, a4, a5); /*0x856ab2*/
            goto LABEL_35; /*0x856aba*/
          }
          goto LABEL_34; /*0x856a91*/
        }
      }
      else if ( a13 ) /*0x8569c3*/
      {
        if ( (_BYTE)a7 == 1 ) /*0x856a1b*/
        {
          v31 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856a23*/
          a7 = v31; /*0x856a2b*/
          if ( v31 ) /*0x856a39*/
          {
            v17 = RenderPass_Construct(v31, vtable, 0x70u, 1u, 3u, a3, a4, a5); /*0x856a5a*/
            goto LABEL_35; /*0x856a62*/
          }
          goto LABEL_34; /*0x856a39*/
        }
      }
      else if ( (_BYTE)a7 == 1 ) /*0x8569ca*/
      {
        v30 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8569d2*/
        a7 = v30; /*0x8569da*/
        if ( v30 ) /*0x8569e8*/
        {
          v17 = RenderPass_Construct(v30, vtable, 0x65u, 1u, 3u, a3, a4, a5); /*0x856a09*/
          goto LABEL_35; /*0x856a11*/
        }
        goto LABEL_34; /*0x8569e8*/
      }
      goto LABEL_94; /*0x8569ca*/
    }
    if ( !a11 ) /*0x856bbe*/
    {
      if ( a14 ) /*0x856bc9*/
      {
        if ( a13 ) /*0x856c7d*/
        {
          if ( (_BYTE)a7 == 1 ) /*0x856cd5*/
          {
            v39 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856cd9*/
            a7 = v39; /*0x856ce1*/
            if ( v39 ) /*0x856cef*/
            {
              v17 = RenderPass_Construct(v39, vtable, 0x73u, 1u, 3u, a3, a4, a5); /*0x856d10*/
              goto LABEL_35; /*0x856d18*/
            }
            goto LABEL_34; /*0x856cef*/
          }
        }
        else if ( (_BYTE)a7 == 1 ) /*0x856c84*/
        {
          v38 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856c8c*/
          a7 = v38; /*0x856c94*/
          if ( v38 ) /*0x856ca2*/
          {
            v17 = RenderPass_Construct(v38, vtable, 0x68u, 1u, 3u, a3, a4, a5); /*0x856cc3*/
            goto LABEL_35; /*0x856ccb*/
          }
          goto LABEL_34; /*0x856ca2*/
        }
      }
      else if ( a13 ) /*0x856bd4*/
      {
        if ( (_BYTE)a7 == 1 ) /*0x856c2c*/
        {
          v37 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856c34*/
          a7 = v37; /*0x856c3c*/
          if ( v37 ) /*0x856c4a*/
          {
            v17 = RenderPass_Construct(v37, vtable, 0x72u, 1u, 3u, a3, a4, a5); /*0x856c6b*/
            goto LABEL_35; /*0x856c73*/
          }
          goto LABEL_34; /*0x856c4a*/
        }
      }
      else if ( (_BYTE)a7 == 1 ) /*0x856bdb*/
      {
        v36 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856be3*/
        a7 = v36; /*0x856beb*/
        if ( v36 ) /*0x856bf9*/
        {
          v17 = RenderPass_Construct(v36, vtable, 0x67u, 1u, 3u, a3, a4, a5); /*0x856c1a*/
          goto LABEL_35; /*0x856c22*/
        }
        goto LABEL_34; /*0x856bf9*/
      }
      goto LABEL_94; /*0x856bdb*/
    }
    result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x856d27*/
    if ( unk_B42E8C )
      result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                             "SHADER ERROR : no shader to handle BSSM_AD3_SGFg ( skinned & glowmap & facegenblend )",
                                             0);
  }
  else
  {
    if ( !a10 ) /*0x856543*/
    {
      if ( a11 ) /*0x85654e*/
      {
        if ( a13 ) /*0x85676a*/
        {
          if ( (_BYTE)a7 == 1 ) /*0x8567bb*/
          {
            v24 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8567c3*/
            a7 = v24; /*0x8567cb*/
            if ( v24 ) /*0x8567d9*/
            {
              v17 = RenderPass_Construct(v24, vtable, 0x6Fu, 1u, 3u, a3, a4, a5); /*0x8567f6*/
              goto LABEL_35; /*0x8567fe*/
            }
            goto LABEL_34; /*0x8567d9*/
          }
        }
        else if ( (_BYTE)a7 == 1 ) /*0x856771*/
        {
          v23 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856779*/
          a7 = v23; /*0x856781*/
          if ( v23 ) /*0x85678f*/
          {
            v17 = RenderPass_Construct(v23, vtable, 0x64u, 1u, 3u, a3, a4, a5); /*0x8567ac*/
            goto LABEL_35; /*0x8567b4*/
          }
          goto LABEL_34; /*0x85678f*/
        }
      }
      else if ( a14 ) /*0x856559*/
      {
        if ( a13 ) /*0x8566c1*/
        {
          if ( (_BYTE)a7 == 1 ) /*0x856719*/
          {
            v22 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856721*/
            a7 = v22; /*0x856729*/
            if ( v22 ) /*0x856737*/
            {
              v17 = RenderPass_Construct(v22, vtable, 0x6Du, 1u, 3u, a3, a4, a5); /*0x856758*/
              goto LABEL_35; /*0x856760*/
            }
            goto LABEL_34; /*0x856737*/
          }
        }
        else if ( (_BYTE)a7 == 1 ) /*0x8566c8*/
        {
          v21 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8566d0*/
          a7 = v21; /*0x8566d8*/
          if ( v21 ) /*0x8566e6*/
          {
            v17 = RenderPass_Construct(v21, vtable, 0x62u, 1u, 3u, a3, a4, a5); /*0x856707*/
            goto LABEL_35; /*0x85670f*/
          }
          goto LABEL_34; /*0x8566e6*/
        }
      }
      else if ( a13 ) /*0x856564*/
      {
        if ( a15 ) /*0x856618*/
        {
          if ( (_BYTE)a7 == 1 ) /*0x856670*/
          {
            v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856678*/
            a7 = v20; /*0x856680*/
            if ( v20 ) /*0x85668e*/
            {
              v17 = RenderPass_Construct(v20, vtable, 0x75u, 1u, 3u, a3, a4, a5); /*0x8566af*/
              goto LABEL_35; /*0x8566b7*/
            }
            goto LABEL_34; /*0x85668e*/
          }
        }
        else if ( (_BYTE)a7 == 1 ) /*0x85661f*/
        {
          v19 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856627*/
          a7 = v19; /*0x85662f*/
          if ( v19 ) /*0x85663d*/
          {
            v17 = RenderPass_Construct(v19, vtable, 0x6Bu, 1u, 3u, a3, a4, a5); /*0x85665e*/
            goto LABEL_35; /*0x856666*/
          }
          goto LABEL_34; /*0x85663d*/
        }
      }
      else if ( a15 ) /*0x85656f*/
      {
        if ( (_BYTE)a7 == 1 ) /*0x8565c7*/
        {
          v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8565cf*/
          a7 = v18; /*0x8565d7*/
          if ( v18 ) /*0x8565e5*/
          {
            v17 = RenderPass_Construct(v18, vtable, 0x6Au, 1u, 3u, a3, a4, a5); /*0x856606*/
            goto LABEL_35; /*0x85660e*/
          }
LABEL_34:
          v17 = 0; /*0x856800*/
          goto LABEL_35; /*0x856800*/
        }
      }
      else if ( (_BYTE)a7 == 1 ) /*0x856576*/
      {
        v16 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85657e*/
        a7 = v16; /*0x856586*/
        if ( v16 ) /*0x856594*/
        {
          v17 = RenderPass_Construct(v16, vtable, 0x60u, 1u, 3u, a3, a4, a5); /*0x8565b5*/
LABEL_35:
          a7 = v17; /*0x856802*/
          result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a7); /*0x856816*/
          goto LABEL_97; /*0x85681b*/
        }
        goto LABEL_34; /*0x856594*/
      }
LABEL_94:
      result = a6; /*0x856d1d*/
      ++LOWORD(a6->next); /*0x856d21*/
      goto LABEL_97; /*0x856d25*/
    }
    if ( !a11 ) /*0x856825*/
    {
      if ( a14 ) /*0x856830*/
      {
        if ( a13 ) /*0x8568e0*/
        {
          if ( (_BYTE)a7 == 1 ) /*0x856938*/
          {
            v29 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856940*/
            a7 = v29; /*0x856948*/
            if ( v29 ) /*0x856956*/
            {
              v17 = RenderPass_Construct(v29, vtable, 0x6Eu, 1u, 3u, a3, a4, a5); /*0x856977*/
              goto LABEL_35; /*0x85697f*/
            }
            goto LABEL_34; /*0x856956*/
          }
        }
        else if ( (_BYTE)a7 == 1 ) /*0x8568e7*/
        {
          v28 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8568ef*/
          a7 = v28; /*0x8568f7*/
          if ( v28 ) /*0x856905*/
          {
            v17 = RenderPass_Construct(v28, vtable, 0x63u, 1u, 3u, a3, a4, a5); /*0x856926*/
            goto LABEL_35; /*0x85692e*/
          }
          goto LABEL_34; /*0x856905*/
        }
      }
      else if ( a13 ) /*0x85683b*/
      {
        if ( (_BYTE)a7 == 1 ) /*0x85688f*/
        {
          v27 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x856897*/
          a7 = v27; /*0x85689f*/
          if ( v27 ) /*0x8568ad*/
          {
            v17 = RenderPass_Construct(v27, vtable, 0x6Cu, 1u, 3u, a3, a4, a5); /*0x8568ce*/
            goto LABEL_35; /*0x8568d6*/
          }
          goto LABEL_34; /*0x8568ad*/
        }
      }
      else if ( (_BYTE)a7 == 1 ) /*0x856842*/
      {
        v26 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85684a*/
        a7 = v26; /*0x856852*/
        if ( v26 ) /*0x856860*/
        {
          v17 = RenderPass_Construct(v26, vtable, 0x61u, 1u, 3u, a3, a4, a5); /*0x85687d*/
          goto LABEL_35; /*0x856885*/
        }
        goto LABEL_34; /*0x856860*/
      }
      goto LABEL_94; /*0x856842*/
    }
    result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x856984*/
    if ( unk_B42E8C )
      result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                             "SHADER ERROR : no shader to handle BSSM_AD3_GFg ( glowmap & facegenblend )",
                                             0);
  }
LABEL_97:
  *a8 = 0; /*0x856d3c*/
  return result; /*0x856d43*/
}
