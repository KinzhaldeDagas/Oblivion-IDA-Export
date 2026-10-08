void __thiscall sub_859880(
        _DWORD *this,
        void *vtable,
        int a3,
        _WORD *a4,
        RenderPass_DecodedLayout *a5,
        char *a6,
        char a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  _DWORD *LightRef; // eax
  int v16; // ecx
  bool v17; // bl
  void (__thiscall ***v18)(_DWORD, int); // edi
  unsigned __int8 *v19; // edi
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
  int v42; // [esp+14h] [ebp-10h] BYREF
  int v43; // [esp+20h] [ebp-4h]
  char v44; // [esp+2Ch] [ebp+8h]

  v44 = *(_BYTE *)(a3 + 0xFC); /*0x8598b8*/
  LightRef = ShadowSceneLight_GetLightRef((_DWORD *)a3, &v42); /*0x8598bc*/
  v16 = *LightRef; /*0x8598c1*/
  v17 = stru_B3FA90.x == *(float *)(*LightRef + 0xEC) /*0x859902*/
     && stru_B3FA90.y == *(float *)(v16 + 0xF0)
     && stru_B3FA90.z == *(float *)(v16 + 0xF4);
  v18 = (void (__thiscall ***)(_DWORD, int))v42; /*0x859908*/
  if ( v42 ) /*0x85990e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v42 + 4)) ) /*0x859914*/
    {
      if ( v18 ) /*0x859920*/
        (**v18)(v18, 1); /*0x85992a*/
    }
  }
  if ( !v17 ) /*0x85992e*/
  {
    v19 = (unsigned __int8 *)a6; /*0x859938*/
    if ( a7 ) /*0x85993c*/
    {
      if ( v44 ) /*0x859d0b*/
      {
        if ( a10 ) /*0x859ef1*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x859f8c*/
          {
            v41 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859f90*/
            a5 = v41; /*0x859f98*/
            v43 = 0x14; /*0x859f9e*/
            if ( v41 ) /*0x859fa6*/
            {
              v21 = RenderPass_Construct(v41, vtable, 0x128u, *v19, 1u, a3); /*0x859fba*/
              goto LABEL_95; /*0x859fc2*/
            }
            goto LABEL_94; /*0x859fa6*/
          }
        }
        else if ( a12 ) /*0x859efc*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x859f4b*/
          {
            v40 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859f53*/
            a5 = v40; /*0x859f5b*/
            v43 = 0x13; /*0x859f61*/
            if ( v40 ) /*0x859f69*/
            {
              v21 = RenderPass_Construct(v40, vtable, 0x127u, *v19, 1u, a3); /*0x859f7d*/
              goto LABEL_95; /*0x859f85*/
            }
            goto LABEL_94; /*0x859f69*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x859f03*/
        {
          v39 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859f0b*/
          a5 = v39; /*0x859f13*/
          v43 = 0x12; /*0x859f19*/
          if ( v39 ) /*0x859f21*/
          {
            v21 = RenderPass_Construct(v39, vtable, 0x126u, *v19, 1u, a3); /*0x859f39*/
            goto LABEL_95; /*0x859f41*/
          }
          goto LABEL_94; /*0x859f21*/
        }
      }
      else if ( a10 ) /*0x859d16*/
      {
        if ( a9 ) /*0x859e5a*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x859ea9*/
          {
            v38 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859eb1*/
            a5 = v38; /*0x859eb9*/
            v43 = 0x11; /*0x859ebf*/
            if ( v38 ) /*0x859ec7*/
            {
              v21 = RenderPass_Construct(v38, vtable, 0x121u, *v19, 1u, a3); /*0x859edf*/
              goto LABEL_95; /*0x859ee7*/
            }
            goto LABEL_94; /*0x859ec7*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x859e61*/
        {
          v37 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859e69*/
          a5 = v37; /*0x859e71*/
          v43 = 0x10; /*0x859e77*/
          if ( v37 ) /*0x859e7f*/
          {
            v21 = RenderPass_Construct(v37, vtable, 0x11Au, *v19, 1u, a3); /*0x859e97*/
            goto LABEL_95; /*0x859e9f*/
          }
          goto LABEL_94; /*0x859e7f*/
        }
      }
      else if ( a9 ) /*0x859d21*/
      {
        if ( a12 ) /*0x859dc3*/
        {
          if ( (_BYTE)a5 == 1 ) /*0x859e12*/
          {
            v36 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859e1a*/
            a5 = v36; /*0x859e22*/
            v43 = 0xF; /*0x859e28*/
            if ( v36 ) /*0x859e30*/
            {
              v21 = RenderPass_Construct(v36, vtable, 0x120u, *v19, 1u, a3); /*0x859e48*/
              goto LABEL_95; /*0x859e50*/
            }
            goto LABEL_94; /*0x859e30*/
          }
        }
        else if ( (_BYTE)a5 == 1 ) /*0x859dca*/
        {
          v35 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859dd2*/
          a5 = v35; /*0x859dda*/
          v43 = 0xE; /*0x859de0*/
          if ( v35 ) /*0x859de8*/
          {
            v21 = RenderPass_Construct(v35, vtable, 0x11Fu, *v19, 1u, a3); /*0x859e00*/
            goto LABEL_95; /*0x859e08*/
          }
          goto LABEL_94; /*0x859de8*/
        }
      }
      else if ( a12 ) /*0x859d2c*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x859d7b*/
        {
          v34 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859d83*/
          a5 = v34; /*0x859d8b*/
          v43 = 0xD; /*0x859d91*/
          if ( v34 ) /*0x859d99*/
          {
            v21 = RenderPass_Construct(v34, vtable, 0x119u, *v19, 1u, a3); /*0x859db1*/
            goto LABEL_95; /*0x859db9*/
          }
          goto LABEL_94; /*0x859d99*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x859d33*/
      {
        v33 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859d3b*/
        a5 = v33; /*0x859d43*/
        v43 = 0xC; /*0x859d49*/
        if ( v33 ) /*0x859d51*/
        {
          v21 = RenderPass_Construct(v33, vtable, 0x118u, *v19, 1u, a3); /*0x859d69*/
          goto LABEL_95; /*0x859d71*/
        }
        goto LABEL_94; /*0x859d51*/
      }
    }
    else if ( v44 ) /*0x859946*/
    {
      if ( a10 ) /*0x859bce*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x859cc3*/
        {
          v32 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859ccb*/
          a5 = v32; /*0x859cd3*/
          v43 = 0xB; /*0x859cd9*/
          if ( v32 ) /*0x859ce1*/
          {
            v21 = RenderPass_Construct(v32, vtable, 0x125u, *v19, 1u, a3); /*0x859cf9*/
            goto LABEL_95; /*0x859d01*/
          }
          goto LABEL_94; /*0x859ce1*/
        }
      }
      else if ( a11 ) /*0x859bd9*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x859c7b*/
        {
          v31 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859c83*/
          a5 = v31; /*0x859c8b*/
          v43 = 0xA; /*0x859c91*/
          if ( v31 ) /*0x859c99*/
          {
            v21 = RenderPass_Construct(v31, vtable, 0x129u, *v19, 1u, a3); /*0x859cb1*/
            goto LABEL_95; /*0x859cb9*/
          }
          goto LABEL_94; /*0x859c99*/
        }
      }
      else if ( a12 ) /*0x859be4*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x859c33*/
        {
          v30 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859c3b*/
          a5 = v30; /*0x859c43*/
          v43 = 9; /*0x859c49*/
          if ( v30 ) /*0x859c51*/
          {
            v21 = RenderPass_Construct(v30, vtable, 0x124u, *v19, 1u, a3); /*0x859c69*/
            goto LABEL_95; /*0x859c71*/
          }
          goto LABEL_94; /*0x859c51*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x859beb*/
      {
        v29 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859bf3*/
        a5 = v29; /*0x859bfb*/
        v43 = 8; /*0x859c01*/
        if ( v29 ) /*0x859c09*/
        {
          v21 = RenderPass_Construct(v29, vtable, 0x123u, *v19, 1u, a3); /*0x859c21*/
          goto LABEL_95; /*0x859c29*/
        }
        goto LABEL_94; /*0x859c09*/
      }
    }
    else if ( a10 ) /*0x859950*/
    {
      if ( a9 ) /*0x859b37*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x859b86*/
        {
          v28 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859b8e*/
          a5 = v28; /*0x859b96*/
          v43 = 7; /*0x859b9c*/
          if ( v28 ) /*0x859ba4*/
          {
            v21 = RenderPass_Construct(v28, vtable, 0x11Eu, *v19, 1u, a3); /*0x859bbc*/
            goto LABEL_95; /*0x859bc4*/
          }
          goto LABEL_94; /*0x859ba4*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x859b3e*/
      {
        v27 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859b46*/
        a5 = v27; /*0x859b4e*/
        v43 = 6; /*0x859b54*/
        if ( v27 ) /*0x859b5c*/
        {
          v21 = RenderPass_Construct(v27, vtable, 0x117u, *v19, 1u, a3); /*0x859b74*/
          goto LABEL_95; /*0x859b7c*/
        }
        goto LABEL_94; /*0x859b5c*/
      }
    }
    else if ( a9 ) /*0x85995a*/
    {
      if ( a11 ) /*0x859a4d*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x859aef*/
        {
          v26 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859af7*/
          a5 = v26; /*0x859aff*/
          v43 = 5; /*0x859b05*/
          if ( v26 ) /*0x859b0d*/
          {
            v21 = RenderPass_Construct(v26, vtable, 0x122u, *v19, 1u, a3); /*0x859b25*/
            goto LABEL_95; /*0x859b2d*/
          }
          goto LABEL_94; /*0x859b0d*/
        }
      }
      else if ( a12 ) /*0x859a58*/
      {
        if ( (_BYTE)a5 == 1 ) /*0x859aa7*/
        {
          v25 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859aaf*/
          a5 = v25; /*0x859ab7*/
          v43 = 4; /*0x859abd*/
          if ( v25 ) /*0x859ac5*/
          {
            v21 = RenderPass_Construct(v25, vtable, 0x11Du, *v19, 1u, a3); /*0x859add*/
            goto LABEL_95; /*0x859ae5*/
          }
          goto LABEL_94; /*0x859ac5*/
        }
      }
      else if ( (_BYTE)a5 == 1 ) /*0x859a5f*/
      {
        v24 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859a67*/
        a5 = v24; /*0x859a6f*/
        v43 = 3; /*0x859a75*/
        if ( v24 ) /*0x859a7d*/
        {
          v21 = RenderPass_Construct(v24, vtable, 0x11Cu, *v19, 1u, a3); /*0x859a95*/
          goto LABEL_95; /*0x859a9d*/
        }
        goto LABEL_94; /*0x859a7d*/
      }
    }
    else if ( a11 ) /*0x859964*/
    {
      if ( (_BYTE)a5 == 1 ) /*0x859a05*/
      {
        v23 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x859a0d*/
        a5 = v23; /*0x859a15*/
        v43 = 2; /*0x859a1b*/
        if ( v23 ) /*0x859a23*/
        {
          v21 = RenderPass_Construct(v23, vtable, 0x11Bu, *v19, 1u, a3); /*0x859a3b*/
          goto LABEL_95; /*0x859a43*/
        }
        goto LABEL_94; /*0x859a23*/
      }
    }
    else if ( a12 ) /*0x85996e*/
    {
      if ( (_BYTE)a5 == 1 ) /*0x8599bd*/
      {
        v22 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8599c5*/
        a5 = v22; /*0x8599cd*/
        v43 = 1; /*0x8599d3*/
        if ( v22 ) /*0x8599db*/
        {
          v21 = RenderPass_Construct(v22, vtable, 0x116u, *v19, 1u, a3); /*0x8599f3*/
          goto LABEL_95; /*0x8599fb*/
        }
LABEL_94:
        v21 = 0; /*0x859fc4*/
        goto LABEL_95; /*0x859fc4*/
      }
    }
    else if ( (_BYTE)a5 == 1 ) /*0x859975*/
    {
      v20 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85997d*/
      a5 = v20; /*0x859985*/
      v43 = 0; /*0x85998b*/
      if ( v20 ) /*0x859993*/
      {
        v21 = RenderPass_Construct(v20, vtable, 0x115u, *v19, 1u, a3); /*0x8599ab*/
LABEL_95:
        a5 = v21; /*0x859fc6*/
        v43 = 0xFFFFFFFF; /*0x859fd2*/
        NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&a5); /*0x859fda*/
LABEL_97:
        *v19 = 0; /*0x859fe9*/
        return; /*0x859fe9*/
      }
      goto LABEL_94; /*0x859993*/
    }
    ++*a4; /*0x859fe5*/
    goto LABEL_97; /*0x859fe5*/
  }
}
