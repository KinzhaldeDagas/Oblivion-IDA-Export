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

  v3 = (NiDX9TextureData *)FormHeapAlloc(0x64u);
  v4 = 0;
  if ( v3 )
  {
    sub_7616A0(v3, a2, a3);
    v3->_vtbl = &NiDX9RenderedCubeMapData::`vftable';
    v3[1]._vtbl = 0;
  }
  else
  {
    v3 = 0;
  }
  v3[1]._vtbl = 0;
  v20 = sub_779210(v3, a1, (int)a2, v18);
  if ( v20 )
  {
    v6 = 0;
    v3->parent->members.rendererData = v3;
    p_m_extraDataListLen = (Ni2DBuffer **)&a2[1].members.super.m_extraDataListLen;
    do
    {
      (*((void (__thiscall **)(NiDX9TextureData *))v3->_vtbl + 5))(v3);
      device = a3->member.device;
      vtbl = v3->_vtbl;
      a5 = *p_m_extraDataListLen;
      v17 = (int)device;
      v10 = (void *)((int (__thiscall *)(NiDX9TextureData *))vtbl[5])(v3);
      v11 = NiDX9TextureBufferData::NiDX9TextureBufferData(v10, v4, v6, v17, &a5);
      if ( !v11 )
      {
        TESTexture::ClearComponentReferences(v12);
        ((void (__thiscall *)(NiDX9TextureData *, int))*v3->_vtbl)(v3, 1);
        return 0;
      }
      if ( !v6 )
        v6 = (int)v11;
      ++v4;
      ++p_m_extraDataListLen;
    }
    while ( v4 < 6 );
    v13 = (*((int (__thiscall **)(NiDX9TextureData *))v3->_vtbl + 2))(v3);
    v14 = (*((int (__thiscall **)(NiDX9TextureData *))v3->_vtbl + 1))(v3);
    v15 = 6 * v14 * v13 * (*(unsigned __int8 *)(v20 + 1) >> 3);
    dword_B42860 += v15;
    v3[1]._vtbl = (void **)((char *)v3[1]._vtbl + v15);
    v16 = 0;
    if ( (v15 & 0xFFFFF000) != v15 )
      v16 = (v15 & 0xFFFFF000) - v15 + 0x1000;
    dword_B42864 += v16;
    return v3;
  }
  else
  {
    ((void (__thiscall *)(NiDX9TextureData *, int))*v3->_vtbl)(v3, 1);
    return 0;
  }
}
