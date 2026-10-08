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

  v2 = renderer; /*0x779634*/
  v3 = (NiDX9TextureData *)FormHeapAlloc(0x68u); /*0x77963c*/
  v4 = v3; /*0x779645*/
  if ( v3 ) /*0x77964c*/
  {
    NiDX9TextureData::NiDX9TextureData(v3, a2a, v2); /*0x779652*/
    v4->_vtbl = &NiDX9DynamicTextureData::`vftable'; /*0x779657*/
    v4[1]._vtbl = 0; /*0x77965d*/
    LOBYTE(v4[1].parent) = 0; /*0x779664*/
  }
  else
  {
    v4 = 0; /*0x77966a*/
  }
  LOBYTE(v9) = v2->member.unk6E9; /*0x779672*/
  if ( sub_7794B0(v4, v1, (int)v2, a2a, v9, v6, v7, v8) ) /*0x77967e*/
  {
    v4->parent->members.rendererData = v4; /*0x7796a0*/
    return &v4->_vtbl; /*0x7796a3*/
  }
  else
  {
    if ( v4 ) /*0x779689*/
      (*(void (__thiscall **)(NiDX9TextureData *, int))v4->_vtbl)(v4, 1); /*0x779693*/
    return 0; /*0x779697*/
  }
}
