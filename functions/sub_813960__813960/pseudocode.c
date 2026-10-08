// BSCubeMapCamera mode-3 alternate six-face renderer. ShadowPass special-light dispatch uses mode 0, not this image-space path.
LONG __thiscall BSCubeMapCamera_RenderMode3Faces(float *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  NiDX9Renderer *v7; // ecx
  void (__thiscall *GetClearColor)(NiRenderer *, NiRenderer *, float *); // edx
  float v9; // ecx
  NiDX9Renderer *v10; // ecx
  int v11; // eax
  float v12; // esi
  float *v13; // eax
  _DWORD *v14; // ebp
  int v15; // esi
  int v16; // eax
  void (__stdcall *v17)(volatile LONG *); // ebp
  NiRenderTargetGroup *v18; // eax
  char v20; // [esp+14h] [ebp-144h]
  float v21[3]; // [esp+1Ch] [ebp-13Ch] BYREF
  float v22[32]; // [esp+28h] [ebp-130h] BYREF
  _DWORD v23[41]; // [esp+A8h] [ebp-B0h] BYREF
  int v24; // [esp+154h] [ebp-4h]

  v4 = dword_B25AD4; /*0x813994*/
  v5 = dword_B25AD8; /*0x81399a*/
  v23[0] = dword_B25AD0; /*0x8139a0*/
  v6 = dword_B25ADC; /*0x8139a7*/
  v23[1] = v4; /*0x8139ac*/
  v7 = unk_B43104; /*0x8139b3*/
  v23[2] = v5; /*0x8139b9*/
  v23[3] = v6; /*0x8139c0*/
  GetClearColor = v7->__vftable->super.GetClearColor; /*0x8139c9*/
  v21[0] = 0.0; /*0x8139d6*/
  v22[3] = 0.0; /*0x8139da*/
  ((void (__thiscall *)(NiDX9Renderer *, _DWORD *))GetClearColor)(v7, v23); /*0x8139de*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 5 ) /*0x8139e8*/
  {
    LODWORD(v9) = *(unsigned __int16 *)(*((_DWORD *)this + 0x51) + 0x118); /*0x8139f6*/
    v21[0] = flt_A3765C; /*0x8139fd*/
    v21[1] = v21[0]; /*0x813a01*/
    v22[2] = v9; /*0x813a05*/
    v10 = unk_B43104; /*0x813a09*/
    v21[2] = v21[0]; /*0x813a0f*/
    v22[0] = 1.0; /*0x813a19*/
    ((void (__thiscall *)(NiDX9Renderer *, float *))v10->__vftable->super.SetClearColor4)(v10, v21); /*0x813a23*/
  }
  if ( v24 != 0xFFFFFFFF ) /*0x813a33*/
  {
    if ( v24 ) /*0x813a37*/
      JUMPOUT(0x8140B0); /*0x8140b0*/
  }
  BSCubeMapCamera_OrientFace((BSCubeMapCamera_ShadowLayout *)this, 0); /*0x813a40*/
  v11 = *((_DWORD *)this + 0x50); /*0x813a45*/
  if ( v11 ) /*0x813a4d*/
  {
    v12 = v22[0]; /*0x813a4f*/
    v13 = (float *)(v11 + 0x20); /*0x813a53*/
  }
  else
  {
    v12 = 0.0; /*0x813a58*/
    v20 |= 1u; /*0x813a5a*/
    v22[0] = 0.0; /*0x813a5f*/
    v13 = v22; /*0x813a63*/
  }
  v14 = *(_DWORD **)v13; /*0x813a6c*/
  if ( (v20 & 1) != 0 && v12 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v12) + 4)) ) /*0x813a7d*/
    (**(void (__thiscall ***)(float, int))LODWORD(v12))(COERCE_FLOAT(LODWORD(v12)), 1); /*0x813a8f*/
  v14[0x10] = 0; /*0x813a91*/
  v15 = v14[0xC]; /*0x813a94*/
  if ( v15 == v14[0x11] ) /*0x813a9b*/
    goto LABEL_18; /*0x813a9b*/
  if ( v15 ) /*0x813a9f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x813aa5*/
      (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x813abb*/
  }
  v16 = v14[0x11]; /*0x813abd*/
  v14[0xC] = v16; /*0x813ac3*/
  if ( !v16 ) /*0x813ac6*/
  {
LABEL_18:
    v17 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x813ad6*/
  }
  else
  {
    v17 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x813ac8*/
    InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x813ad2*/
  }
  v18 = BSRenderedTexture::UseTextureToRender(*((BSRenderedTexture **)this + 0x50)); /*0x813ae2*/
  NiRenderer_BeginScene(kClear_ALL, v18); /*0x813aea*/
  NiSmartPointer_Set__((Ni2DBuffer **)&OB_ShaderConstantStorage_010201A0[0x5B6], (Ni2DBuffer *)unk_B43100); /*0x813b28*/
  return def_813AFD(1u, 0, v17, (int)this, a2); /*0x813aef*/
}
