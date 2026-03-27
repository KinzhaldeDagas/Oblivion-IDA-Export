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
  _DWORD v39[3]; // [esp+7Ch] [ebp-84h] BYREF
  char v40[4]; // [esp+88h] [ebp-78h] BYREF
  int v41; // [esp+8Ch] [ebp-74h]
  int v42[8]; // [esp+90h] [ebp-70h] BYREF
  char v43[68]; // [esp+B0h] [ebp-50h] BYREF
  unsigned int v44; // [esp+FCh] [ebp-4h]

  v5 = *(_DWORD *)(dword_B350D8 + 0x280);
  v6 = *(_DWORD *)((*(int (__usercall **)@<eax>(double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)dword_B350D8 + 0x8C))(
                     st7_0,
                     a3,
                     st5_0)
                 + 0x10);
  if ( v6 )
    v7 = (const void *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0xC))(v6);
  else
    v7 = 0;
  sub_70F010(v43, v7);
  v29 = *a4;
  v28 = *a5;
  v39[0] = 6;
  v39[2] = 0;
  v39[1] = 0;
  v8 = sub_7D6F40(v28, v29, v39, 1, 0);
  v38 = v8;
  if ( v8 )
    InterlockedIncrement((volatile LONG *)&v8->members);
  v44 = 0;
  if ( v8 )
  {
    v36 = (double)nHeight / (double)nWidth;
    v10 = (double)(int)*a5 * v36;
    v35 = Double_To_SInt32(v10);
    sub_66B710(TESDataHandler_g_PlayerRef, v10, st5_0, 0);
    v31 = 0.0;
    camera = g_worldScenegraph->camera;
    v32 = 1.0;
    v33 = 1.0;
    camera->members.ViewPort.l = 0.0;
    v12 = v36;
    v13 = v33;
    camera->members.ViewPort.r = v32;
    camera->members.ViewPort.t = v13;
    v34 = 1.0 - v12;
    camera->members.ViewPort.b = v34;
    NiRenderer_Render((NiDX9Renderer *)OSGlobals, v8);
    v31 = 0.0;
    v14 = g_worldScenegraph->camera;
    v32 = 1.0;
    v14->members.ViewPort.l = 0.0;
    v33 = 1.0;
    v14->members.ViewPort.r = v32;
    v14->members.ViewPort.t = 1.0;
    v34 = 0.0;
    v14->members.ViewPort.b = 0.0;
    InnerTexture = BSRenderedTexture::GetInnerTexture(v8);
    v16 = (*((int (__thiscall **)(NiDX9TextureData *))InnerTexture->member.super.rendererData->_vtbl + 6))(InnerTexture->member.super.rendererData);
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x14))(v16);
    (*(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v17 + 0x44))(v17, 0, v42);
    (*(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v17 + 0x48))(v17, 0, &v37);
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
      v18 = v38;
      v44 = 0xFFFFFFFF;
      if ( !InterlockedDecrement((volatile LONG *)&v38->members) )
        ((void (__thiscall *)(BSRenderedTexture *, int))*v18->vtbl)(v18, 1);
      return 0;
    }
    else
    {
      (*(void (__stdcall **)(int, int, int))(*(_DWORD *)v5 + 0x80))(v5, v37, v30);
      (*(void (__stdcall **)(int))(*(_DWORD *)v37 + 8))(v37);
      (*(void (__stdcall **)(int, char *, _DWORD, int))(*(_DWORD *)v30 + 0x34))(v30, v40, 0, 0x800);
      *a5 = v35;
      v19 = (NiPixelData *)FormHeapAlloc(0x70u);
      v35 = (int)v19;
      LOBYTE(v44) = 1;
      if ( v19 )
        v20 = NiPixelData::NiPixelData(v19, *a4, *a5, (int)&unk_B25E48, 1u, 1);
      else
        v20 = 0;
      v21 = (_BYTE *)(*((_DWORD *)v20 + 0x14) + **((_DWORD **)v20 + 0x17));
      v22 = 4 * *a5 * *a4;
      v23 = 0;
      v24 = ((*a5 * *a4) & 0x20000000) != 0;
      LOBYTE(v44) = 0;
      if ( !v24 && v22 != 0 )
      {
        v25 = v41 + 1;
        do
        {
          *v21 = *(_BYTE *)(v25 + v23 + 1);
          v21[1] = *(_BYTE *)(v25 + v23);
          v26 = v21 + 2;
          *v26 = *(_BYTE *)(v25 + v23 - 1);
          v23 += 4;
          v21 = v26 + 1;
        }
        while ( v23 < (int)(4 * *a5 * *a4) );
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)v30 + 0x38))(v30);
      (*(void (__stdcall **)(int))(*(_DWORD *)v30 + 8))(v30);
      v27 = v38;
      if ( !InterlockedDecrement((volatile LONG *)&v38->members) )
        ((void (__thiscall *)(BSRenderedTexture *, int))*v27->vtbl)(v27, 1);
      return v20;
    }
  }
  else
  {
    PrintError("ScreenShot: Unable to create render texture.");
    return 0;
  }
}
