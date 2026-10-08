NiDX9TextureData *__usercall sub_7792E0@<eax>(int a1@<ebp>, NiTexture *a2, NiDX9Renderer *a3)
{
  NiDX9TextureData *v3; // esi
  unsigned int v4; // edi
  int v6; // ebp
  Ni2DBuffer **p_m_extraDataListLen; // ebx
  IDirect3DDevice9 *device; // eax
  void **vtbl; // edx
  void *v10; // eax
  NiDX9TextureBufferData *v11; // eax
  void *v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edx
  int v17; // [esp-Ch] [ebp-20h]
  int v18; // [esp+0h] [ebp-14h]
  Ni2DBuffer *a5; // [esp+Ch] [ebp-8h] BYREF
  int v20; // [esp+10h] [ebp-4h]

  v3 = (NiDX9TextureData *)FormHeapAlloc(0x64u); /*0x7792f1*/
  v4 = 0; /*0x7792f3*/
  if ( v3 ) /*0x7792fa*/
  {
    sub_7616A0(v3, a2, a3); /*0x779304*/
    v3->_vtbl = &NiDX9RenderedCubeMapData::`vftable'; /*0x779309*/
    v3[1]._vtbl = 0; /*0x77930f*/
  }
  else
  {
    v3 = 0; /*0x779314*/
  }
  v3[1]._vtbl = 0; /*0x779319*/
  v20 = sub_779210(v3, a1, (int)a2, v18); /*0x779323*/
  if ( v20 ) /*0x779327*/
  {
    v6 = 0; /*0x779340*/
    v3->parent->members.rendererData = v3; /*0x779342*/
    p_m_extraDataListLen = (Ni2DBuffer **)&a2[1].members.super.m_extraDataListLen; /*0x779345*/
    do /*0x77938e*/
    {
      (*((void (__thiscall **)(NiDX9TextureData *))v3->_vtbl + 5))(v3); /*0x77934f*/
      device = a3->member.device; /*0x779357*/
      vtbl = v3->_vtbl; /*0x77935d*/
      a5 = *p_m_extraDataListLen; /*0x77935f*/
      v17 = (int)device; /*0x779368*/
      v10 = (void *)((int (__thiscall *)(NiDX9TextureData *))vtbl[5])(v3); /*0x779370*/
      v11 = NiDX9TextureBufferData::NiDX9TextureBufferData(v10, v4, v6, v17, &a5); /*0x779373*/
      if ( !v11 ) /*0x77937d*/
      {
        Shared_NoOpVirtual_60D0A0(v12); /*0x7793f5*/
        ((void (__thiscall *)(NiDX9TextureData *, int))*v3->_vtbl)(v3, 1); /*0x779405*/
        return 0; /*0x77940a*/
      }
      if ( !v6 ) /*0x779381*/
        v6 = (int)v11; /*0x779383*/
      ++v4; /*0x779385*/
      ++p_m_extraDataListLen; /*0x779388*/
    }
    while ( v4 < 6 ); /*0x77938e*/
    v13 = (*((int (__thiscall **)(NiDX9TextureData *))v3->_vtbl + 2))(v3); /*0x77939b*/
    v14 = (*((int (__thiscall **)(NiDX9TextureData *))v3->_vtbl + 1))(v3); /*0x7793a2*/
    v15 = 6 * v14 * v13 * (*(unsigned __int8 *)(v20 + 1) >> 3); /*0x7793b8*/
    unk_B42860 += v15; /*0x7793ba*/
    v3[1]._vtbl = (void **)((char *)v3[1]._vtbl + v15); /*0x7793c0*/
    v16 = 0; /*0x7793cb*/
    if ( (v15 & 0xFFFFF000) != v15 ) /*0x7793cf*/
      v16 = (v15 & 0xFFFFF000) - v15 + 0x1000; /*0x7793d9*/
    unk_B42864 += v16; /*0x7793db*/
    return v3; /*0x7793e3*/
  }
  else
  {
    ((void (__thiscall *)(NiDX9TextureData *, int))*v3->_vtbl)(v3, 1); /*0x779331*/
    return 0; /*0x779335*/
  }
}
