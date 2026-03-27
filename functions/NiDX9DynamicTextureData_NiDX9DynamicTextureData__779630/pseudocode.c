_DWORD *__thiscall NiDX9DynamicTextureData::NiDX9DynamicTextureData(_DWORD *a2)
{
  int v1; // ebx
  NiDX9Renderer *v2; // edi
  NiDX9TextureData *v3; // eax
  NiDX9TextureData *v4; // esi
  int v6; // [esp+0h] [ebp-10h]
  int v7; // [esp+4h] [ebp-Ch]
  char v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]
  NiTexture *a2a; // [esp+14h] [ebp+4h]

  v2 = g_Renderer;
  v3 = (NiDX9TextureData *)FormHeapAlloc(0x68u);
  v4 = v3;
  if ( v3 )
  {
    NiDX9TextureData::NiDX9TextureData(v3, a2a, v2);
    v4->_vtbl = &NiDX9DynamicTextureData::`vftable';
    v4[1]._vtbl = 0;
    LOBYTE(v4[1].parent) = 0;
  }
  else
  {
    v4 = 0;
  }
  LOBYTE(v9) = v2->member.unk6E9;
  if ( sub_7794B0(v4, v1, (int)v2, a2a, v9, v6, v7, v8) )
  {
    v4->parent->members.rendererData = v4;
    return &v4->_vtbl;
  }
  else
  {
    if ( v4 )
      (*(void (__thiscall **)(NiDX9TextureData *, int))v4->_vtbl)(v4, 1);
    return 0;
  }
}
