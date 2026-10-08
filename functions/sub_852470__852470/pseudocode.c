NiTPointerList_Node_void *__thiscall sub_852470(
        _DWORD *this,
        void *vtable,
        int a3,
        NiTPointerList_Node_void *a4,
        RenderPass_DecodedLayout *a5,
        _BYTE *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  RenderPass_DecodedLayout *v14; // eax
  RenderPass_DecodedLayout *v15; // eax
  NiTPointerList_Node_void *result; // eax
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
  RenderPass_DecodedLayout *v43; // eax
  RenderPass_DecodedLayout *v44; // eax
  RenderPass_DecodedLayout *v45; // eax
  RenderPass_DecodedLayout *v46; // eax
  RenderPass_DecodedLayout *v47; // eax
  RenderPass_DecodedLayout *v48; // eax
  RenderPass_DecodedLayout *v49; // eax
  RenderPass_DecodedLayout *v50; // eax
  RenderPass_DecodedLayout *v51; // eax
  RenderPass_DecodedLayout *v52; // eax
  RenderPass_DecodedLayout *v53; // eax
  RenderPass_DecodedLayout *v54; // eax
  RenderPass_DecodedLayout *v55; // eax
  RenderPass_DecodedLayout *v56; // eax
  RenderPass_DecodedLayout *v57; // eax
  RenderPass_DecodedLayout *v58; // eax
  RenderPass_DecodedLayout *v59; // eax

  if ( a7 )
  {
    if ( a8 )
    {
      if ( a9 )
      {
        if ( !a10 ) /*0x852d5f*/
        {
          if ( a11 ) /*0x852e49*/
          {
            if ( a12 ) /*0x852e54*/
            {
              if ( (_BYTE)a5 == 1 ) /*0x852ea2*/
              {
                v42 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852eaa*/
                a5 = v42; /*0x852eb2*/
                if ( v42 ) /*0x852ec0*/
                {
                  v15 = RenderPass_Construct(v42, vtable, 0x46u, 1u, 1u, a3); /*0x852ed7*/
                  goto LABEL_243; /*0x852edf*/
                }
                goto LABEL_242; /*0x852ec0*/
              }
            }
            else if ( (_BYTE)a5 == 1 ) /*0x852e5b*/
            {
              v41 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852e63*/
              a5 = v41; /*0x852e6b*/
              if ( v41 ) /*0x852e79*/
              {
                v15 = RenderPass_Construct(v41, vtable, 0x45u, 1u, 1u, a3); /*0x852e90*/
                goto LABEL_243; /*0x852e98*/
              }
              goto LABEL_242; /*0x852e79*/
            }
          }
          else if ( a12 ) /*0x852ee9*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x852f37*/
            {
              v44 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852f3f*/
              a5 = v44; /*0x852f47*/
              if ( v44 ) /*0x852f55*/
              {
                v15 = RenderPass_Construct(v44, vtable, 0x2Cu, 1u, 1u, a3); /*0x852f6c*/
                goto LABEL_243; /*0x852f74*/
              }
              goto LABEL_242; /*0x852f55*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x852ef0*/
          {
            v43 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852ef8*/
            a5 = v43; /*0x852f00*/
            if ( v43 ) /*0x852f0e*/
            {
              v15 = RenderPass_Construct(v43, vtable, 0x2Bu, 1u, 1u, a3); /*0x852f25*/
              goto LABEL_243; /*0x852f2d*/
            }
            goto LABEL_242; /*0x852f0e*/
          }
          goto LABEL_244; /*0x852e5b*/
        }
        if ( a11 )
        {
          if ( !a12 ) /*0x852d71*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x852d78*/
            {
              v39 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852d80*/
              a5 = v39; /*0x852d88*/
              if ( v39 ) /*0x852d96*/
              {
                v15 = RenderPass_Construct(v39, vtable, 0x47u, 1u, 1u, a3); /*0x852dad*/
                goto LABEL_243; /*0x852db5*/
              }
              goto LABEL_242; /*0x852d96*/
            }
            goto LABEL_244; /*0x852d78*/
          }
          result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x852dba*/
          if ( unk_B42E8C )
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_SFGFgAVc ( skinned & fo"
                                                   "g & glow & facegenblend & alpha & vertexcolors )",
                                                   0);
        }
        else
        {
          if ( !a12 ) /*0x852ddd*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x852de4*/
            {
              v40 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852dec*/
              a5 = v40; /*0x852df4*/
              if ( v40 ) /*0x852e02*/
              {
                v15 = RenderPass_Construct(v40, vtable, 0x2Eu, 1u, 1u, a3); /*0x852e19*/
                goto LABEL_243; /*0x852e21*/
              }
              goto LABEL_242; /*0x852e02*/
            }
            goto LABEL_244; /*0x852de4*/
          }
          result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x852e26*/
          if ( unk_B42E8C )
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_SGFgAVc ( skinned & glo"
                                                   "w & facegenblend & alpha & vertexcolors )",
                                                   0);
        }
      }
      else
      {
        if ( !a10 ) /*0x852f7e*/
        {
          if ( a11 ) /*0x85303a*/
          {
            if ( a12 ) /*0x853045*/
            {
              if ( (_BYTE)a5 == 1 ) /*0x853093*/
              {
                v47 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85309b*/
                a5 = v47; /*0x8530a3*/
                if ( v47 ) /*0x8530b1*/
                {
                  v15 = RenderPass_Construct(v47, vtable, 0x43u, 1u, 1u, a3); /*0x8530c8*/
                  goto LABEL_243; /*0x8530d0*/
                }
                goto LABEL_242; /*0x8530b1*/
              }
            }
            else if ( (_BYTE)a5 == 1 ) /*0x85304c*/
            {
              v46 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853054*/
              a5 = v46; /*0x85305c*/
              if ( v46 ) /*0x85306a*/
              {
                v15 = RenderPass_Construct(v46, vtable, 0x42u, 1u, 1u, a3); /*0x853081*/
                goto LABEL_243; /*0x853089*/
              }
              goto LABEL_242; /*0x85306a*/
            }
          }
          else if ( a12 ) /*0x8530da*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x853128*/
            {
              v49 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853130*/
              a5 = v49; /*0x853138*/
              if ( v49 ) /*0x853146*/
              {
                v15 = RenderPass_Construct(v49, vtable, 0x2Au, 1u, 1u, a3); /*0x85315d*/
                goto LABEL_243; /*0x853165*/
              }
              goto LABEL_242; /*0x853146*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x8530e1*/
          {
            v48 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8530e9*/
            a5 = v48; /*0x8530f1*/
            if ( v48 ) /*0x8530ff*/
            {
              v15 = RenderPass_Construct(v48, vtable, 0x29u, 1u, 1u, a3); /*0x853116*/
              goto LABEL_243; /*0x85311e*/
            }
            goto LABEL_242; /*0x8530ff*/
          }
          goto LABEL_244; /*0x85304c*/
        }
        if ( a11 )
        {
          result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x852f90*/
          if ( a12 )
          {
            if ( result )
              result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                     "SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgAVc ( skinned & f"
                                                     "og & facegenblend & alpha & vertexcolors )",
                                                     0);
          }
          else if ( result )
          {
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgA ( skinned & fog &"
                                                   " facegenblend & alpha )",
                                                   0);
          }
        }
        else
        {
          if ( !a12 ) /*0x852fce*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x852fd5*/
            {
              v45 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852fdd*/
              a5 = v45; /*0x852fe5*/
              if ( v45 ) /*0x852ff3*/
              {
                v15 = RenderPass_Construct(v45, vtable, 0x2Du, 1u, 1u, a3); /*0x85300a*/
                goto LABEL_243; /*0x853012*/
              }
              goto LABEL_242; /*0x852ff3*/
            }
            goto LABEL_244; /*0x852fd5*/
          }
          result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x853017*/
          if ( unk_B42E8C )
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_SFgAVc ( skinned & face"
                                                   "genblend & alpha & vertexcolors )",
                                                   0);
        }
      }
    }
    else if ( a9 )
    {
      if ( !a10 ) /*0x85317a*/
      {
        if ( a11 ) /*0x8531ff*/
        {
          if ( a12 ) /*0x85320a*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x853258*/
            {
              v51 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853260*/
              a5 = v51; /*0x853268*/
              if ( v51 ) /*0x853276*/
              {
                v15 = RenderPass_Construct(v51, vtable, 0x41u, 1u, 1u, a3); /*0x85328d*/
                goto LABEL_243; /*0x853295*/
              }
              goto LABEL_242; /*0x853276*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x853211*/
          {
            v50 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853219*/
            a5 = v50; /*0x853221*/
            if ( v50 ) /*0x85322f*/
            {
              v15 = RenderPass_Construct(v50, vtable, 0x40u, 1u, 1u, a3); /*0x853246*/
              goto LABEL_243; /*0x85324e*/
            }
            goto LABEL_242; /*0x85322f*/
          }
        }
        else if ( a12 ) /*0x85329f*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x8532ed*/
          {
            v53 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8532f5*/
            a5 = v53; /*0x8532fd*/
            if ( v53 ) /*0x85330b*/
            {
              v15 = RenderPass_Construct(v53, vtable, 0x27u, 1u, 1u, a3); /*0x853322*/
              goto LABEL_243; /*0x85332a*/
            }
            goto LABEL_242; /*0x85330b*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x8532a6*/
        {
          v52 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8532ae*/
          a5 = v52; /*0x8532b6*/
          if ( v52 ) /*0x8532c4*/
          {
            v15 = RenderPass_Construct(v52, vtable, 0x26u, 1u, 1u, a3); /*0x8532db*/
            goto LABEL_243; /*0x8532e3*/
          }
          goto LABEL_242; /*0x8532c4*/
        }
        goto LABEL_244; /*0x853211*/
      }
      result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x853181*/
      if ( a11 )
      {
        if ( a12 )
        {
          if ( result )
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgGVc ( skinned & fog"
                                                   " & glowmap & facegenblend & vertexcolors )",
                                                   0);
        }
        else if ( result )
        {
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgG ( skinned & fog & g"
                                                 "lowmap & facegenblend )",
                                                 0);
        }
      }
      else if ( a12 )
      {
        if ( result )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_SFgGVc ( skinned & glowma"
                                                 "p & facegenblend & vertexcolors )",
                                                 0);
      }
      else if ( result )
      {
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle AMBDIFFTEX_SFgG ( skinned & glowmap & facegenblend )",
                                               0);
      }
    }
    else
    {
      if ( !a10 ) /*0x853334*/
      {
        if ( a11 ) /*0x85341e*/
        {
          if ( a12 ) /*0x853429*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x853477*/
            {
              v57 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85347f*/
              a5 = v57; /*0x853487*/
              if ( v57 ) /*0x853495*/
              {
                v15 = RenderPass_Construct(v57, vtable, 0x3Fu, 1u, 1u, a3); /*0x8534ac*/
                goto LABEL_243; /*0x8534b4*/
              }
              goto LABEL_242; /*0x853495*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x853430*/
          {
            v56 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853438*/
            a5 = v56; /*0x853440*/
            if ( v56 ) /*0x85344e*/
            {
              v15 = RenderPass_Construct(v56, vtable, 0x3Eu, 1u, 1u, a3); /*0x853465*/
              goto LABEL_243; /*0x85346d*/
            }
            goto LABEL_242; /*0x85344e*/
          }
        }
        else if ( a12 ) /*0x8534be*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x853505*/
          {
            v59 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853509*/
            a5 = v59; /*0x853511*/
            if ( v59 ) /*0x85351f*/
            {
              v15 = RenderPass_Construct(v59, vtable, 0x25u, 1u, 1u, a3); /*0x853532*/
              goto LABEL_243; /*0x85353a*/
            }
            goto LABEL_242; /*0x85351f*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x8534c5*/
        {
          v58 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8534cd*/
          a5 = v58; /*0x8534d5*/
          if ( v58 ) /*0x8534e3*/
          {
            v15 = RenderPass_Construct(v58, vtable, 0x24u, 1u, 1u, a3); /*0x8534f6*/
            goto LABEL_243; /*0x8534fe*/
          }
          goto LABEL_242; /*0x8534e3*/
        }
        goto LABEL_244; /*0x853430*/
      }
      if ( a11 )
      {
        if ( !a12 ) /*0x853346*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x85334d*/
          {
            v54 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x853355*/
            a5 = v54; /*0x85335d*/
            if ( v54 ) /*0x85336b*/
            {
              v15 = RenderPass_Construct(v54, vtable, 0x44u, 1u, 1u, a3); /*0x853382*/
              goto LABEL_243; /*0x85338a*/
            }
            goto LABEL_242; /*0x85336b*/
          }
          goto LABEL_244; /*0x85334d*/
        }
        result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x85338f*/
        if ( unk_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgVc ( skinned & fog & "
                                                 "facegenblend & vertexcolors )",
                                                 0);
      }
      else
      {
        if ( !a12 ) /*0x8533b2*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x8533b9*/
          {
            v55 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8533c1*/
            a5 = v55; /*0x8533c9*/
            if ( v55 ) /*0x8533d7*/
            {
              v15 = RenderPass_Construct(v55, vtable, 0x28u, 1u, 1u, a3); /*0x8533ee*/
              goto LABEL_243; /*0x8533f6*/
            }
            goto LABEL_242; /*0x8533d7*/
          }
          goto LABEL_244; /*0x8533b9*/
        }
        result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x8533fb*/
        if ( unk_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_SFgVc ( skinned & facegen"
                                                 "blend & vertexcolors )",
                                                 0);
      }
    }
  }
  else if ( a8 )
  {
    if ( a9 )
    {
      if ( !a10 ) /*0x8524b9*/
      {
        if ( a11 ) /*0x8525a3*/
        {
          if ( a12 ) /*0x8525ae*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x8525fc*/
            {
              v19 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852604*/
              a5 = v19; /*0x85260c*/
              if ( v19 ) /*0x85261a*/
              {
                v15 = RenderPass_Construct(v19, vtable, 0x3Cu, 1u, 1u, a3); /*0x852631*/
                goto LABEL_243; /*0x852639*/
              }
              goto LABEL_242; /*0x85261a*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x8525b5*/
          {
            v18 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8525bd*/
            a5 = v18; /*0x8525c5*/
            if ( v18 ) /*0x8525d3*/
            {
              v15 = RenderPass_Construct(v18, vtable, 0x3Bu, 1u, 1u, a3); /*0x8525ea*/
              goto LABEL_243; /*0x8525f2*/
            }
            goto LABEL_242; /*0x8525d3*/
          }
        }
        else if ( a12 ) /*0x852643*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x852691*/
          {
            v21 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852699*/
            a5 = v21; /*0x8526a1*/
            if ( v21 ) /*0x8526af*/
            {
              v15 = RenderPass_Construct(v21, vtable, 0x21u, 1u, 1u, a3); /*0x8526c6*/
              goto LABEL_243; /*0x8526ce*/
            }
            goto LABEL_242; /*0x8526af*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x85264a*/
        {
          v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852652*/
          a5 = v20; /*0x85265a*/
          if ( v20 ) /*0x852668*/
          {
            v15 = RenderPass_Construct(v20, vtable, 0x20u, 1u, 1u, a3); /*0x85267f*/
            goto LABEL_243; /*0x852687*/
          }
          goto LABEL_242; /*0x852668*/
        }
        goto LABEL_244; /*0x8525b5*/
      }
      if ( a11 )
      {
        if ( !a12 ) /*0x8524cb*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x8524d2*/
          {
            v14 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8524da*/
            a5 = v14; /*0x8524e2*/
            if ( v14 ) /*0x8524f0*/
            {
              v15 = RenderPass_Construct(v14, vtable, 0x3Du, 1u, 1u, a3); /*0x852507*/
LABEL_243:
              a5 = v15; /*0x85353e*/
              result = NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a5); /*0x853552*/
              goto LABEL_245; /*0x853557*/
            }
            goto LABEL_242; /*0x8524f0*/
          }
          goto LABEL_244; /*0x8524d2*/
        }
        result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x852514*/
        if ( unk_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_FGFgAVc ( fog & glow & fa"
                                                 "cegen & alpha & vertexcolors )",
                                                 0);
      }
      else
      {
        if ( !a12 ) /*0x852537*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x85253e*/
          {
            v17 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852546*/
            a5 = v17; /*0x85254e*/
            if ( v17 ) /*0x85255c*/
            {
              v15 = RenderPass_Construct(v17, vtable, 0x23u, 1u, 1u, a3); /*0x852573*/
              goto LABEL_243; /*0x85257b*/
            }
LABEL_242:
            v15 = 0; /*0x85353c*/
            goto LABEL_243; /*0x85353c*/
          }
LABEL_244:
          result = a4; /*0x853559*/
          ++LOWORD(a4->next); /*0x85355d*/
          goto LABEL_245; /*0x85355d*/
        }
        result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x852580*/
        if ( unk_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_GFgAVc ( glow & facegen &"
                                                 " alpha & vertexcolors )",
                                                 0);
      }
    }
    else
    {
      if ( !a10 ) /*0x8526d8*/
      {
        if ( a11 ) /*0x852794*/
        {
          if ( a12 ) /*0x85279f*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x8527ed*/
            {
              v24 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8527f5*/
              a5 = v24; /*0x8527fd*/
              if ( v24 ) /*0x85280b*/
              {
                v15 = RenderPass_Construct(v24, vtable, 0x39u, 1u, 1u, a3); /*0x852822*/
                goto LABEL_243; /*0x85282a*/
              }
              goto LABEL_242; /*0x85280b*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x8527a6*/
          {
            v23 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8527ae*/
            a5 = v23; /*0x8527b6*/
            if ( v23 ) /*0x8527c4*/
            {
              v15 = RenderPass_Construct(v23, vtable, 0x38u, 1u, 1u, a3); /*0x8527db*/
              goto LABEL_243; /*0x8527e3*/
            }
            goto LABEL_242; /*0x8527c4*/
          }
        }
        else if ( a12 ) /*0x852834*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x852882*/
          {
            v26 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85288a*/
            a5 = v26; /*0x852892*/
            if ( v26 ) /*0x8528a0*/
            {
              v15 = RenderPass_Construct(v26, vtable, 0x1Fu, 1u, 1u, a3); /*0x8528b7*/
              goto LABEL_243; /*0x8528bf*/
            }
            goto LABEL_242; /*0x8528a0*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x85283b*/
        {
          v25 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852843*/
          a5 = v25; /*0x85284b*/
          if ( v25 ) /*0x852859*/
          {
            v15 = RenderPass_Construct(v25, vtable, 0x1Eu, 1u, 1u, a3); /*0x852870*/
            goto LABEL_243; /*0x852878*/
          }
          goto LABEL_242; /*0x852859*/
        }
        goto LABEL_244; /*0x8527a6*/
      }
      if ( a11 )
      {
        result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x8526ea*/
        if ( a12 )
        {
          if ( result )
            result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                   "SHADER ERROR : no shader to handle AMBDIFFTEX_FFgAVc ( fog & facegenb"
                                                   "lend & alpha & vertexcolors )",
                                                   0);
        }
        else if ( result )
        {
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_FFgA ( fog & facegenblend & alpha )",
                                                 0);
        }
      }
      else
      {
        if ( !a12 ) /*0x852728*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x85272f*/
          {
            v22 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852737*/
            a5 = v22; /*0x85273f*/
            if ( v22 ) /*0x85274d*/
            {
              v15 = RenderPass_Construct(v22, vtable, 0x22u, 1u, 1u, a3); /*0x852764*/
              goto LABEL_243; /*0x85276c*/
            }
            goto LABEL_242; /*0x85274d*/
          }
          goto LABEL_244; /*0x85272f*/
        }
        result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x852771*/
        if ( unk_B42E8C )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_FgAVc ( facegenblend & al"
                                                 "pha & vertexcolors )",
                                                 0);
      }
    }
  }
  else if ( a9 )
  {
    if ( !a10 ) /*0x8528d4*/
    {
      if ( a11 ) /*0x852959*/
      {
        if ( a12 ) /*0x852964*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x8529b2*/
          {
            v28 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8529ba*/
            a5 = v28; /*0x8529c2*/
            if ( v28 ) /*0x8529d0*/
            {
              v15 = RenderPass_Construct(v28, vtable, 0x37u, 1u, 1u, a3); /*0x8529e7*/
              goto LABEL_243; /*0x8529ef*/
            }
            goto LABEL_242; /*0x8529d0*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x85296b*/
        {
          v27 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852973*/
          a5 = v27; /*0x85297b*/
          if ( v27 ) /*0x852989*/
          {
            v15 = RenderPass_Construct(v27, vtable, 0x36u, 1u, 1u, a3); /*0x8529a0*/
            goto LABEL_243; /*0x8529a8*/
          }
          goto LABEL_242; /*0x852989*/
        }
      }
      else if ( a12 ) /*0x8529f9*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x852a47*/
        {
          v30 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852a4f*/
          a5 = v30; /*0x852a57*/
          if ( v30 ) /*0x852a65*/
          {
            v15 = RenderPass_Construct(v30, vtable, 0x1Cu, 1u, 1u, a3); /*0x852a7c*/
            goto LABEL_243; /*0x852a84*/
          }
          goto LABEL_242; /*0x852a65*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x852a00*/
      {
        v29 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852a08*/
        a5 = v29; /*0x852a10*/
        if ( v29 ) /*0x852a1e*/
        {
          v15 = RenderPass_Construct(v29, vtable, 0x1Bu, 1u, 1u, a3); /*0x852a35*/
          goto LABEL_243; /*0x852a3d*/
        }
        goto LABEL_242; /*0x852a1e*/
      }
      goto LABEL_244; /*0x85296b*/
    }
    result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x8528db*/
    if ( a11 )
    {
      if ( a12 )
      {
        if ( result )
          result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                                 "SHADER ERROR : no shader to handle AMBDIFFTEX_FFgGVc ( fog & glowmap & "
                                                 "facegenblend & vertexcolors )",
                                                 0);
      }
      else if ( result )
      {
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle AMBDIFFTEX_FFgG ( fog & glowmap & facegenblend )",
                                               0);
      }
    }
    else if ( a12 )
    {
      if ( result )
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle AMBDIFFTEX_FgGVc ( glowmap & facegenbl"
                                               "end & vertexcolors )",
                                               0);
    }
    else if ( result )
    {
      result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                             "SHADER ERROR : no shader to handle AMBDIFFTEX_FgG ( glowmap & facegenblend )",
                                             0);
    }
  }
  else
  {
    if ( !a10 ) /*0x852a8e*/
    {
      if ( a11 ) /*0x852b78*/
      {
        if ( a12 ) /*0x852b83*/
        {
          if ( a13 ) /*0x852bd1*/
          {
            if ( (_BYTE)a5 == 1 ) /*0x852c1f*/
            {
              v35 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852c27*/
              a5 = v35; /*0x852c2f*/
              if ( v35 ) /*0x852c3d*/
              {
                v15 = RenderPass_Construct(v35, vtable, 0x30u, 1u, 1u, a3); /*0x852c54*/
                goto LABEL_243; /*0x852c5c*/
              }
              goto LABEL_242; /*0x852c3d*/
            }
          }
          else if ( (_BYTE)a5 == 1 ) /*0x852bd8*/
          {
            v34 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852be0*/
            a5 = v34; /*0x852be8*/
            if ( v34 ) /*0x852bf6*/
            {
              v15 = RenderPass_Construct(v34, vtable, 0x35u, 1u, 1u, a3); /*0x852c0d*/
              goto LABEL_243; /*0x852c15*/
            }
            goto LABEL_242; /*0x852bf6*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x852b8a*/
        {
          v33 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852b92*/
          a5 = v33; /*0x852b9a*/
          if ( v33 ) /*0x852ba8*/
          {
            v15 = RenderPass_Construct(v33, vtable, 0x34u, 1u, 1u, a3); /*0x852bbf*/
            goto LABEL_243; /*0x852bc7*/
          }
          goto LABEL_242; /*0x852ba8*/
        }
      }
      else if ( a12 ) /*0x852c66*/
      {
        if ( a13 ) /*0x852cb4*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x852d02*/
          {
            v38 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852d0a*/
            a5 = v38; /*0x852d12*/
            if ( v38 ) /*0x852d20*/
            {
              v15 = RenderPass_Construct(v38, vtable, 0x2Fu, 1u, 1u, a3); /*0x852d37*/
              goto LABEL_243; /*0x852d3f*/
            }
            goto LABEL_242; /*0x852d20*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x852cbb*/
        {
          v37 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852cc3*/
          a5 = v37; /*0x852ccb*/
          if ( v37 ) /*0x852cd9*/
          {
            v15 = RenderPass_Construct(v37, vtable, 0x1Au, 1u, 1u, a3); /*0x852cf0*/
            goto LABEL_243; /*0x852cf8*/
          }
          goto LABEL_242; /*0x852cd9*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x852c6d*/
      {
        v36 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852c75*/
        a5 = v36; /*0x852c7d*/
        if ( v36 ) /*0x852c8b*/
        {
          v15 = RenderPass_Construct(v36, vtable, 0x19u, 1u, 1u, a3); /*0x852ca2*/
          goto LABEL_243; /*0x852caa*/
        }
        goto LABEL_242; /*0x852c8b*/
      }
      goto LABEL_244; /*0x852b8a*/
    }
    if ( a11 )
    {
      if ( !a12 ) /*0x852aa0*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x852aa7*/
        {
          v31 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852aaf*/
          a5 = v31; /*0x852ab7*/
          if ( v31 ) /*0x852ac5*/
          {
            v15 = RenderPass_Construct(v31, vtable, 0x3Au, 1u, 1u, a3); /*0x852adc*/
            goto LABEL_243; /*0x852ae4*/
          }
          goto LABEL_242; /*0x852ac5*/
        }
        goto LABEL_244; /*0x852aa7*/
      }
      result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x852ae9*/
      if ( unk_B42E8C )
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle AMBDIFFTEX_FFgVc ( fog & facegenblend "
                                               "& vertexcolors )",
                                               0);
    }
    else
    {
      if ( !a12 ) /*0x852b0c*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x852b13*/
        {
          v32 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x852b1b*/
          a5 = v32; /*0x852b23*/
          if ( v32 ) /*0x852b31*/
          {
            v15 = RenderPass_Construct(v32, vtable, 0x1Du, 1u, 1u, a3); /*0x852b48*/
            goto LABEL_243; /*0x852b50*/
          }
          goto LABEL_242; /*0x852b31*/
        }
        goto LABEL_244; /*0x852b13*/
      }
      result = (NiTPointerList_Node_void *)unk_B42E8C; /*0x852b55*/
      if ( unk_B42E8C )
        result = (NiTPointerList_Node_void *)((int (__cdecl *)(const char *, _DWORD))result)(
                                               "SHADER ERROR : no shader to handle AMBDIFFTEX_FgVc ( facegenblend & vertexcolors )",
                                               0);
    }
  }
LABEL_245:
  *a6 = 0; /*0x853561*/
  return result; /*0x853568*/
}
