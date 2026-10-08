int __thiscall sub_7E3E00(char *this, float *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // ebx
  BOOL v11; // esi
  int v12; // esi
  char *v13; // ebx
  NiD3DTextureStage *v14; // ebp
  double v15; // st7
  int v16; // eax
  int v17; // ebp
  int v18; // ebp
  int v19; // ebp
  int v20; // ebp
  unsigned int v21; // esi
  unsigned int v23; // [esp+1Ch] [ebp+10h]
  unsigned int v24; // [esp+1Ch] [ebp+10h]
  unsigned int v25; // [esp+1Ch] [ebp+10h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x80))(this); /*0x7e3e0d*/
  v10 = *(_DWORD *)(a5 + 0x18); /*0x7e3e13*/
  if ( v10 ) /*0x7e3e18*/
    v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 0x54))(*(_DWORD *)(a5 + 0x18)) == 0xE; /*0x7e3e2f*/
  else
    v11 = 0; /*0x7e3e1a*/
  v12 = v11 ? v10 : 0;
  if ( v12 )
  {
    v13 = this + 0x84; /*0x7e3e4c*/
    v14 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x21) + 0x24); /*0x7e3e53*/
    NiD3DTextureStage_SetTexture(v14, *(NiTexture **)(v12 + 0x10C)); /*0x7e3e58*/
    NiD3DTextureStage_ApplyAddressModePreset(v14, 3u); /*0x7e3e61*/
    *((float *)this + 0x2D) = *(float *)(v12 + 0xF8); /*0x7e3e6c*/
    *((float *)this + 0x2E) = *(float *)(v12 + 0x84); /*0x7e3e78*/
    *((float *)this + 0x2F) = *(float *)(v12 + 0x8C); /*0x7e3e84*/
    *((float *)this + 0x30) = *(float *)(v12 + 0x90); /*0x7e3e90*/
    *((_DWORD *)this + 0x3D) = *(_DWORD *)(v12 + 0x94); /*0x7e3e9c*/
    *((_DWORD *)this + 0x3E) = *(_DWORD *)(v12 + 0x98); /*0x7e3ea8*/
    *((_DWORD *)this + 0x3F) = *(_DWORD *)(v12 + 0x9C); /*0x7e3eb4*/
    *((_DWORD *)this + 0x40) = *(_DWORD *)(v12 + 0xA0); /*0x7e3ec0*/
    *((_DWORD *)this + 0x41) = *(_DWORD *)(v12 + 0xA4); /*0x7e3ecc*/
    *((_DWORD *)this + 0x42) = *(_DWORD *)(v12 + 0xA8); /*0x7e3ed8*/
    *((_DWORD *)this + 0x46) = *(_DWORD *)(v12 + 0xB8); /*0x7e3ee4*/
    *((_DWORD *)this + 0x47) = *(_DWORD *)(v12 + 0xBC); /*0x7e3ef0*/
    *((_DWORD *)this + 0x48) = *(_DWORD *)(v12 + 0xC0); /*0x7e3efc*/
    *((_DWORD *)this + 0x49) = *(_DWORD *)(v12 + 0xC4); /*0x7e3f08*/
    *((_DWORD *)this + 0x4A) = *(_DWORD *)(v12 + 0xC8); /*0x7e3f14*/
    *((_DWORD *)this + 0x4B) = *(_DWORD *)(v12 + 0xCC); /*0x7e3f20*/
    *((_DWORD *)this + 0x4C) = *(_DWORD *)(v12 + 0xD0); /*0x7e3f2c*/
    *((_DWORD *)this + 0x4D) = *(_DWORD *)(v12 + 0xD4); /*0x7e3f38*/
    *((_DWORD *)this + 0x4E) = *(_DWORD *)(v12 + 0xD8); /*0x7e3f44*/
    *((_DWORD *)this + 0x4F) = *(_DWORD *)(v12 + 0xDC); /*0x7e3f50*/
    *((_DWORD *)this + 0x50) = *(_DWORD *)(v12 + 0xE0); /*0x7e3f5c*/
    *((_DWORD *)this + 0x51) = *(_DWORD *)(v12 + 0xE4); /*0x7e3f68*/
    *((float *)this + 0x31) = *(float *)(v12 + 0xAC); /*0x7e3f74*/
    *((float *)this + 0x32) = *(float *)(v12 + 0xB0); /*0x7e3f80*/
    *((float *)this + 0x33) = *(float *)(v12 + 0xB4); /*0x7e3f8c*/
    *((float *)this + 0x34) = flt_B2D80C; /*0x7e3f98*/
    *((float *)this + 0x35) = *(float *)(v12 + 0xE8); /*0x7e3fa4*/
    *((float *)this + 0x36) = *(float *)(v12 + 0xEC); /*0x7e3fb0*/
    *((float *)this + 0x37) = *(float *)(v12 + 0xF0); /*0x7e3fbc*/
    *((float *)this + 0x38) = *(float *)(v12 + 0xF4); /*0x7e3fc8*/
    if ( *(_BYTE *)(v12 + 0x78) ) /*0x7e3fce*/
    {
      *((float *)this + 0x39) = a2[0x22]; /*0x7e3fde*/
      *((float *)this + 0x3A) = a2[0x23]; /*0x7e3fea*/
      v15 = a2[0x24]; /*0x7e3ff0*/
    }
    else
    {
      v15 = 0.0; /*0x7e3ff8*/
      *((float *)this + 0x39) = 0.0; /*0x7e3ffa*/
      *((float *)this + 0x3A) = 0.0; /*0x7e4000*/
    }
    *((float *)this + 0x3B) = v15; /*0x7e4006*/
    *((float *)this + 0x3C) = *(float *)(v12 + 0x124); /*0x7e4012*/
    v16 = unk_B4600C; /*0x7e4018*/
    if ( !unk_B4600C )
    {
      v16 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ? 0x28 : 0x78;
      unk_B4600C = v16; /*0x7e4034*/
    }
    memcpy(*((void **)this + 0x20), *(const void **)(v12 + 0x6C), 0x20 * v16); /*0x7e4048*/
    v17 = *(_DWORD *)v13; /*0x7e404d*/
    v23 = *(_DWORD *)(v12 + 0xFC); /*0x7e405c*/
    if ( !*(_DWORD *)(*(_DWORD *)v13 + 0x30) ) /*0x7e4058*/
      *(_DWORD *)(v17 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e4067*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v17 + 0x30), 0x13u, v23, 0); /*0x7e4076*/
    v18 = *(_DWORD *)v13; /*0x7e407b*/
    v24 = *(_DWORD *)(v12 + 0x100); /*0x7e4087*/
    if ( !*(_DWORD *)(*(_DWORD *)v13 + 0x30) ) /*0x7e407d*/
      *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e4092*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v18 + 0x30), 0x14u, v24, 0); /*0x7e40a1*/
    v19 = *(_DWORD *)v13; /*0x7e40a6*/
    v25 = *(_DWORD *)(v12 + 0x104); /*0x7e40b2*/
    if ( !*(_DWORD *)(*(_DWORD *)v13 + 0x30) ) /*0x7e40a8*/
      *(_DWORD *)(v19 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e40bd*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v19 + 0x30), 0xABu, v25, 1u); /*0x7e40cf*/
    v20 = *(_DWORD *)v13; /*0x7e40d4*/
    v21 = *(_DWORD *)(v12 + 0x108); /*0x7e40da*/
    if ( !*(_DWORD *)(*(_DWORD *)v13 + 0x30) ) /*0x7e40d6*/
      *(_DWORD *)(v20 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e40e7*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v20 + 0x30), 0x17u, v21, 0); /*0x7e40f2*/
    NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)this + 0x21); /*0x7e40ff*/
    ++*((_DWORD *)this + 0xE); /*0x7e4104*/
  }
  return 0; /*0x7e4109*/
}
