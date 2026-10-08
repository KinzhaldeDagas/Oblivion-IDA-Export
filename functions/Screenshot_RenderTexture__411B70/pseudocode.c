// DX11 readback contract verified 2026-09-24: source texture level 0 is copied via GetRenderTargetData into a separate SYSTEMMEM surface, then immediately locked with NOSYSLOCK and converted from four-byte input pixels to RGB24 without consulting Pitch. Readback/Lock/Unlock HRESULTs are ignored by this caller. Device/resource validation and synchronous native-format CPU commit remain necessary in a DX11 implementation. Numeric runtime format and pitch require runtime evidence.
NiPixelData *__usercall Screenshot_RenderTexture@<eax>(
        double st5_0@<st2>,
        double st7_0@<st0>,
        double a3@<st1>,
        unsigned int *a4,
        unsigned int *a5)
{
  int v5; // ebp
  int v6; // ecx
  const void *v7; // eax
  BSRenderedTexture *v8; // esi
  double v10; // st7
  NiCamera *camera; // eax
  double v12; // st7
  float v13; // edx
  NiCamera *v14; // eax
  NiRenderedTexture *InnerTexture; // eax
  int v16; // eax
  int v17; // esi
  BSRenderedTexture *v18; // esi
  NiPixelData *v19; // eax
  NiPixelData *v20; // ebp
  _BYTE *v21; // eax
  unsigned int v22; // edx
  signed int v23; // ecx
  bool v24; // sf
  int v25; // esi
  _BYTE *v26; // eax
  BSRenderedTexture *v27; // esi
  int v28; // [esp+30h] [ebp-D0h]
  int v29; // [esp+34h] [ebp-CCh]
  int v30; // [esp+58h] [ebp-A8h] BYREF
  float v31; // [esp+5Ch] [ebp-A4h]
  float v32; // [esp+60h] [ebp-A0h]
  float v33; // [esp+64h] [ebp-9Ch]
  float v34; // [esp+68h] [ebp-98h]
  int v35; // [esp+6Ch] [ebp-94h]
  float v36; // [esp+70h] [ebp-90h]
  int v37; // [esp+74h] [ebp-8Ch] BYREF
  BSRenderedTexture *v38; // [esp+78h] [ebp-88h]
  FormatPrefs v39; // [esp+7Ch] [ebp-84h] BYREF
  char v40[4]; // [esp+88h] [ebp-78h] BYREF
  int v41; // [esp+8Ch] [ebp-74h]
  int v42[8]; // [esp+90h] [ebp-70h] BYREF
  char v43[68]; // [esp+B0h] [ebp-50h] BYREF
  unsigned int v44; // [esp+FCh] [ebp-4h]

  v5 = *(_DWORD *)(MEMORY[0xB350D8] + 0x280); /*0x411bab*/
  v6 = *(_DWORD *)((*(int (__usercall **)@<eax>(double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)MEMORY[0xB350D8] /*0x411bb3*/
                                                                                         + 0x8C))(
                     st7_0,
                     a3,
                     st5_0)
                 + 0x10);
  if ( v6 ) /*0x411bba*/
    v7 = (const void *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0xC))(v6); /*0x411bc1*/
  else
    v7 = 0; /*0x411bc5*/
  sub_70F010(v43, v7); /*0x411bcc*/
  v29 = *a4; /*0x411beb*/
  v28 = *a5; /*0x411bec*/
  v39.pixelLayout = kPixelLayout_PixDefault; /*0x411bed*/
  v39.mipmapFormat = kMipMap_Disabled; /*0x411bf5*/
  v39.alphaFormat = kAlpha_None; /*0x411bf9*/
  v8 = sub_7D6F40(v28, v29, &v39, 1, 0); /*0x411c02*/
  v38 = v8; /*0x411c09*/
  if ( v8 ) /*0x411c0d*/
    InterlockedIncrement((volatile LONG *)&v8->members); /*0x411c13*/
  v44 = 0; /*0x411c1b*/
  if ( v8 )
  {
    v36 = (double)nHeight / (double)nWidth; /*0x411c48*/
    v10 = (double)(int)*a5 * v36; /*0x411c4e*/
    v35 = Double_To_SInt32(v10); /*0x411c5f*/
    sub_66B710(reference, v10, 0); /*0x411c63*/
    v31 = 0.0; /*0x411c70*/
    camera = g_WorldSceneReceiverRoot->camera; /*0x411c76*/
    v32 = 1.0; /*0x411c80*/
    v33 = 1.0; /*0x411c84*/
    camera->members.ViewPort.l = 0.0; /*0x411c88*/
    v12 = v36; /*0x411c8e*/
    v13 = v33; /*0x411c98*/
    camera->members.ViewPort.r = v32; /*0x411c9c*/
    camera->members.ViewPort.t = v13; /*0x411ca4*/
    v34 = 1.0 - v12; /*0x411cab*/
    camera->members.ViewPort.b = v34; /*0x411cb3*/
    NiRenderer_Render((NiDX9Renderer *)MEMORY[0xB33398], v8); /*0x411cbf*/
    v31 = 0.0; /*0x411ccc*/
    v14 = g_WorldSceneReceiverRoot->camera; /*0x411cd0*/
    v32 = 1.0; /*0x411cdc*/
    v14->members.ViewPort.l = 0.0; /*0x411ce0*/
    v33 = 1.0; /*0x411ce6*/
    v14->members.ViewPort.r = v32; /*0x411cf2*/
    v14->members.ViewPort.t = 1.0; /*0x411cf8*/
    v34 = 0.0; /*0x411cfe*/
    v14->members.ViewPort.b = 0.0; /*0x411d08*/
    InnerTexture = BSRenderedTexture::GetInnerTexture(v8); /*0x411d0e*/
    v16 = (*((int (__thiscall **)(NiDX9TextureData *))InnerTexture->member.super.rendererData->_vtbl + 6))(InnerTexture->member.super.rendererData); /*0x411d1b*/
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x14))(v16); /*0x411d26*/
    (*(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v17 + 0x44))(v17, 0, v42); /*0x411d35*/
    (*(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v17 + 0x48))(v17, 0, &v37); /*0x411d44*/
    if ( (*(int (__stdcall **)(int, _DWORD, _DWORD, int, int, int *, _DWORD))(*(_DWORD *)v5 + 0x90))(
           v5,
           *a5,
           *a4,
           v42[0],
           2,
           &v30,
           0) )
    {
      PrintError("ScreenShot: Unable to create image surface.");
      v18 = v38; /*0x411d74*/
      v44 = 0xFFFFFFFF; /*0x411d7f*/
      if ( !InterlockedDecrement((volatile LONG *)&v38->members) ) /*0x411d8a*/
        ((void (__thiscall *)(BSRenderedTexture *, int))*v18->vtbl)(v18, 1); /*0x411d9c*/
      return 0; /*0x411d9e*/
    }
    else
    {
      (*(void (__stdcall **)(int, int, int))(*(_DWORD *)v5 + 0x80))(v5, v37, v30); /*0x411db9*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v37 + 8))(v37); /*0x411dc5*/
      (*(void (__stdcall **)(int, char *, _DWORD, int))(*(_DWORD *)v30 + 0x34))(v30, v40, 0, 0x800); /*0x411ddd*/
      *a5 = v35; /*0x411de5*/
      v19 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x411de7*/
      v35 = (int)v19; /*0x411def*/
      LOBYTE(v44) = 1; /*0x411df5*/
      if ( v19 ) /*0x411dfd*/
        v20 = NiPixelData::NiPixelData(v19, *a4, *a5, (int)&unk_B25E48, 1u, 1); /*0x411e15*/
      else
        v20 = 0; /*0x411e19*/
      v21 = (_BYTE *)(*((_DWORD *)v20 + 0x14) + **((_DWORD **)v20 + 0x17)); /*0x411e25*/
      v22 = 4 * *a5 * *a4; /*0x411e2a*/
      v23 = 0; /*0x411e2c*/
      v24 = ((*a5 * *a4) & 0x20000000) != 0; /*0x411e2e*/
      LOBYTE(v44) = 0; /*0x411e30*/
      if ( !v24 && v22 != 0 ) /*0x411e2e*/
      {
        v25 = v41 + 1; /*0x411e3e*/
        do /*0x411e6d*/
        {
          *v21 = *(_BYTE *)(v25 + v23 + 1); /*0x411e46*/
          v21[1] = *(_BYTE *)(v25 + v23); /*0x411e4c*/
          v26 = v21 + 2; /*0x411e57*/
          *v26 = *(_BYTE *)(v25 + v23 - 1); /*0x411e5a*/
          v23 += 4; /*0x411e63*/
          v21 = v26 + 1; /*0x411e68*/
        }
        while ( v23 < (int)(4 * *a5 * *a4) ); /*0x411e6d*/
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)v30 + 0x38))(v30); /*0x411e79*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v30 + 8))(v30); /*0x411e85*/
      v27 = v38; /*0x411e87*/
      if ( !InterlockedDecrement((volatile LONG *)&v38->members) ) /*0x411e8f*/
        ((void (__thiscall *)(BSRenderedTexture *, int))*v27->vtbl)(v27, 1); /*0x411ea1*/
      return v20; /*0x411ea3*/
    }
  }
  else
  {
    PrintError("ScreenShot: Unable to create render texture.");
    return 0; /*0x411c35*/
  }
}
