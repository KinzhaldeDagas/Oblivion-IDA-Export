NiTPointerList_Node_void *__thiscall sub_8580E0(
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
        char a14)
{
  NiTPointerList_Node_void *result; // eax
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

  if ( a7 )
  {
    if ( a8 )
    {
      if ( !a9 ) /*0x858545*/
      {
        if ( a12 ) /*0x85856a*/
        {
          if ( a11 ) /*0x858610*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x858661*/
            {
              v32 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858669*/
              a5 = v32; /*0x858671*/
              if ( v32 ) /*0x85867f*/
              {
                v17 = RenderPass_Construct(v32, vtable, 0xC4u, 1u, 1u, a3); /*0x858699*/
                goto LABEL_101; /*0x8586a1*/
              }
              goto LABEL_100; /*0x85867f*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x858617*/
          {
            v31 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85861f*/
            a5 = v31; /*0x858627*/
            if ( v31 ) /*0x858635*/
            {
              v17 = RenderPass_Construct(v31, vtable, 0xB7u, 1u, 1u, a3); /*0x85864f*/
              goto LABEL_101; /*0x858657*/
            }
            goto LABEL_100; /*0x858635*/
          }
        }
        else if ( a11 ) /*0x858575*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x8585c6*/
          {
            v30 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8585ce*/
            a5 = v30; /*0x8585d6*/
            if ( v30 ) /*0x8585e4*/
            {
              v17 = RenderPass_Construct(v30, vtable, 0xC0u, 1u, 1u, a3); /*0x8585fe*/
              goto LABEL_101; /*0x858606*/
            }
            goto LABEL_100; /*0x8585e4*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x85857c*/
        {
          v29 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858584*/
          a5 = v29; /*0x85858c*/
          if ( v29 ) /*0x85859a*/
          {
            v17 = RenderPass_Construct(v29, vtable, 0xB3u, 1u, 1u, a3); /*0x8585b4*/
            goto LABEL_101; /*0x8585bc*/
          }
          goto LABEL_100; /*0x85859a*/
        }
        goto LABEL_102; /*0x85857c*/
      }
      result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x858547*/
      if ( unk_B42E8C )
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle ADT_SGFg ( skinned & glowmap & facegenblend )",
                                               0);
    }
    else
    {
      if ( !a9 ) /*0x8586ab*/
      {
        if ( a12 ) /*0x8586d0*/
        {
          if ( a11 ) /*0x85881c*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x858866*/
            {
              v38 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85886a*/
              a5 = v38; /*0x858872*/
              if ( v38 ) /*0x858880*/
              {
                v17 = RenderPass_Construct(v38, vtable, 0xC3u, 1u, 1u, a3); /*0x858896*/
                goto LABEL_101; /*0x85889e*/
              }
              goto LABEL_100; /*0x858880*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x858823*/
          {
            v37 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85882b*/
            a5 = v37; /*0x858833*/
            if ( v37 ) /*0x858841*/
            {
              v17 = RenderPass_Construct(v37, vtable, 0xB6u, 1u, 1u, a3); /*0x858857*/
              goto LABEL_101; /*0x85885f*/
            }
            goto LABEL_100; /*0x858841*/
          }
        }
        else if ( a11 ) /*0x8586db*/
        {
          if ( a14 ) /*0x858781*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x8587d2*/
            {
              v36 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8587da*/
              a5 = v36; /*0x8587e2*/
              if ( v36 ) /*0x8587f0*/
              {
                v17 = RenderPass_Construct(v36, vtable, 0xC1u, 1u, 1u, a3); /*0x85880a*/
                goto LABEL_101; /*0x858812*/
              }
              goto LABEL_100; /*0x8587f0*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x858788*/
          {
            v35 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858790*/
            a5 = v35; /*0x858798*/
            if ( v35 ) /*0x8587a6*/
            {
              v17 = RenderPass_Construct(v35, vtable, 0xBFu, 1u, 1u, a3); /*0x8587c0*/
              goto LABEL_101; /*0x8587c8*/
            }
            goto LABEL_100; /*0x8587a6*/
          }
        }
        else if ( a14 ) /*0x8586e6*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x858737*/
          {
            v34 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85873f*/
            a5 = v34; /*0x858747*/
            if ( v34 ) /*0x858755*/
            {
              v17 = RenderPass_Construct(v34, vtable, 0xB4u, 1u, 1u, a3); /*0x85876f*/
              goto LABEL_101; /*0x858777*/
            }
            goto LABEL_100; /*0x858755*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x8586ed*/
        {
          v33 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8586f5*/
          a5 = v33; /*0x8586fd*/
          if ( v33 ) /*0x85870b*/
          {
            v17 = RenderPass_Construct(v33, vtable, 0xB2u, 1u, 1u, a3); /*0x858725*/
            goto LABEL_101; /*0x85872d*/
          }
          goto LABEL_100; /*0x85870b*/
        }
        goto LABEL_102; /*0x8586ed*/
      }
      result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x8586ad*/
      if ( unk_B42E8C )
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle ADTS_SFg ( skinned & facegenblend )",
                                               0);
    }
  }
  else
  {
    if ( a8 )
    {
      if ( a9 )
      {
        result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x858120*/
        if ( unk_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle ADTS_GFg ( glowmap & facegenblend )",
                                                 0);
        goto LABEL_103; /*0x858139*/
      }
      if ( a12 ) /*0x858143*/
      {
        if ( a11 ) /*0x8581e9*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x85823a*/
          {
            v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858242*/
            a5 = v20; /*0x85824a*/
            if ( v20 ) /*0x858258*/
            {
              v17 = RenderPass_Construct(v20, vtable, 0xBEu, 1u, 1u, a3); /*0x858272*/
              goto LABEL_101; /*0x85827a*/
            }
            goto LABEL_100; /*0x858258*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x8581f0*/
        {
          v19 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8581f8*/
          a5 = v19; /*0x858200*/
          if ( v19 ) /*0x85820e*/
          {
            v17 = RenderPass_Construct(v19, vtable, 0xB1u, 1u, 1u, a3); /*0x858228*/
            goto LABEL_101; /*0x858230*/
          }
          goto LABEL_100; /*0x85820e*/
        }
      }
      else if ( a11 ) /*0x85814e*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x85819f*/
        {
          v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8581a7*/
          a5 = v18; /*0x8581af*/
          if ( v18 ) /*0x8581bd*/
          {
            v17 = RenderPass_Construct(v18, vtable, 0xBAu, 1u, 1u, a3); /*0x8581d7*/
            goto LABEL_101; /*0x8581df*/
          }
LABEL_100:
          v17 = 0; /*0x8588a0*/
          goto LABEL_101; /*0x8588a0*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x858155*/
      {
        v16 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85815d*/
        a5 = v16; /*0x858165*/
        if ( v16 ) /*0x858173*/
        {
          v17 = RenderPass_Construct(v16, vtable, 0xADu, 1u, 1u, a3); /*0x85818d*/
LABEL_101:
          a5 = v17; /*0x8588a2*/
          result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a5); /*0x8588b6*/
          goto LABEL_103; /*0x8588bb*/
        }
        goto LABEL_100; /*0x858173*/
      }
LABEL_102:
      result = a4; /*0x8588bd*/
      ++LOWORD(a4->next); /*0x8588c1*/
      goto LABEL_103; /*0x8588c1*/
    }
    if ( !a9 ) /*0x858284*/
    {
      if ( a12 ) /*0x8582a9*/
      {
        if ( a11 ) /*0x85849f*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x8584f0*/
          {
            v28 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8584f8*/
            a5 = v28; /*0x858500*/
            if ( v28 ) /*0x85850e*/
            {
              v17 = RenderPass_Construct(v28, vtable, 0xBDu, 1u, 1u, a3); /*0x858528*/
              goto LABEL_101; /*0x858530*/
            }
            goto LABEL_100; /*0x85850e*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x8584a6*/
        {
          v27 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8584ae*/
          a5 = v27; /*0x8584b6*/
          if ( v27 ) /*0x8584c4*/
          {
            v17 = RenderPass_Construct(v27, vtable, 0xB0u, 1u, 1u, a3); /*0x8584de*/
            goto LABEL_101; /*0x8584e6*/
          }
          goto LABEL_100; /*0x8584c4*/
        }
      }
      else if ( a11 ) /*0x8582b4*/
      {
        if ( a13 ) /*0x8583af*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x858455*/
          {
            v26 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85845d*/
            a5 = v26; /*0x858465*/
            if ( v26 ) /*0x858473*/
            {
              v17 = RenderPass_Construct(v26, vtable, 0xC5u, 1u, 1u, a3); /*0x85848d*/
              goto LABEL_101; /*0x858495*/
            }
            goto LABEL_100; /*0x858473*/
          }
        }
        else if ( a14 ) /*0x8583ba*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x85840b*/
          {
            v25 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858413*/
            a5 = v25; /*0x85841b*/
            if ( v25 ) /*0x858429*/
            {
              v17 = RenderPass_Construct(v25, vtable, 0xBBu, 1u, 1u, a3); /*0x858443*/
              goto LABEL_101; /*0x85844b*/
            }
            goto LABEL_100; /*0x858429*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x8583c1*/
        {
          v24 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8583c9*/
          a5 = v24; /*0x8583d1*/
          if ( v24 ) /*0x8583df*/
          {
            v17 = RenderPass_Construct(v24, vtable, 0xB9u, 1u, 1u, a3); /*0x8583f9*/
            goto LABEL_101; /*0x858401*/
          }
          goto LABEL_100; /*0x8583df*/
        }
      }
      else if ( a13 ) /*0x8582bf*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x858365*/
        {
          v23 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85836d*/
          a5 = v23; /*0x858375*/
          if ( v23 ) /*0x858383*/
          {
            v17 = RenderPass_Construct(v23, vtable, 0xB8u, 1u, 1u, a3); /*0x85839d*/
            goto LABEL_101; /*0x8583a5*/
          }
          goto LABEL_100; /*0x858383*/
        }
      }
      else if ( a14 ) /*0x8582ca*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x85831b*/
        {
          v22 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x858323*/
          a5 = v22; /*0x85832b*/
          if ( v22 ) /*0x858339*/
          {
            v17 = RenderPass_Construct(v22, vtable, 0xAEu, 1u, 1u, a3); /*0x858353*/
            goto LABEL_101; /*0x85835b*/
          }
          goto LABEL_100; /*0x858339*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x8582d1*/
      {
        v21 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8582d9*/
        a5 = v21; /*0x8582e1*/
        if ( v21 ) /*0x8582ef*/
        {
          v17 = RenderPass_Construct(v21, vtable, 0xACu, 1u, 1u, a3); /*0x858309*/
          goto LABEL_101; /*0x858311*/
        }
        goto LABEL_100; /*0x8582ef*/
      }
      goto LABEL_102; /*0x8582d1*/
    }
    result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x858286*/
    if ( unk_B42E8C )
      result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                             "SHADER ERROR : no shader to handle ADTS_Fg ( facegenblend )",
                                             0);
  }
LABEL_103:
  *a6 = 0; /*0x8588c5*/
  return result; /*0x8588cc*/
}
