NiSourceTexture *__cdecl sub_480000(_DWORD *a1, const void *a2)
{
  NiDX9Renderer *v2; // edi
  signed int v4; // eax
  IDirect3DDevice9 *device; // edi
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // eax
  HRESULT (__stdcall *CreateTexture)(IDirect3DDevice9 *, UINT, UINT, UINT, DWORD, D3DFORMAT, D3DPOOL, IDirect3DTexture9 **, HANDLE *); // ecx
  int v11; // eax
  NiPixelData *v12; // edi
  NiPixelData *v13; // eax
  unsigned int v14; // esi
  int v15; // edx
  _BYTE *v16; // eax
  unsigned int v17; // ecx
  char v18; // dl
  unsigned int v19; // eax
  NiSourceTexture *result; // eax
  size_t v21; // [esp+58h] [ebp-88h]
  int v22; // [esp+70h] [ebp-70h] BYREF
  D3DDDIFORMAT v23; // [esp+74h] [ebp-6Ch]
  _DWORD *v24; // [esp+78h] [ebp-68h] BYREF
  int v25; // [esp+7Ch] [ebp-64h] BYREF
  int v26; // [esp+80h] [ebp-60h]
  NiPixelData *v27; // [esp+84h] [ebp-5Ch]
  int v28; // [esp+88h] [ebp-58h] BYREF
  void *Src; // [esp+8Ch] [ebp-54h]
  _BYTE v30[68]; // [esp+90h] [ebp-50h] BYREF
  unsigned int i; // [esp+DCh] [ebp-4h]
  unsigned int v32; // [esp+E4h] [ebp+4h]

  v2 = g_Renderer;
  sub_70F010(v30, a2);
  if ( !a1 || !v2 )
    return 0;
  v4 = sub_76BEF0((int)v30);
  v23 = v4;
  if ( v4 > 0x31545844 )
  {
    if ( v4 != 0x33545844 && v4 != 0x35545844 )
      return 0;
  }
  else if ( v4 != 0x31545844 && v4 != 0x15 )
  {
    if ( v4 != 0x20 )
      return 0;
    v23 = D3DDDIFMT_A8R8G8B8;
  }
  device = v2->member.device;
  v6 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x4C))(a1);
  v7 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x50))(a1);
  v8 = a1[0xF];
  if ( v8 )
    v32 = *(_DWORD *)(v8 + 0x60);
  else
    v32 = 1;
  v9 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[9] + 0x14))(a1[9]);
  CreateTexture = device->lpVtbl->CreateTexture;
  v26 = v9;
  v11 = (int)CreateTexture(device, v6, v7, v32, 0, (D3DFORMAT)v23, D3DPOOL_SYSTEMMEM, (IDirect3DTexture9 **)&v24, 0);
  v12 = 0;
  if ( v11 || !v24 )
    return 0;
  v13 = (NiPixelData *)FormHeapAlloc(0x70u);
  v27 = v13;
  i = 0;
  if ( v13 )
    v12 = NiPixelData::NiPixelData(v13, v6, v7, (int)v30, v32, 1);
  v14 = 0;
  for ( i = 0xFFFFFFFF; v14 < v32; ++v14 )
  {
    (*(void (__stdcall **)(int, unsigned int, int *))(*(_DWORD *)v26 + 0x48))(v26, v14, &v25);
    (*(void (__stdcall **)(_DWORD *, unsigned int, int *))(*v24 + 0x48))(v24, v14, &v22);
    D3DXLoadSurfaceFromSurface_0(v22, 0, 0, v25, 0, 0, 0xFFFFFFFF, 0);
    (*(void (__stdcall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)v22 + 0x34))(v22, &v28, 0, 0);
    if ( v23 == D3DDDIFMT_A8R8G8B8 )
    {
      LODWORD(v21) = v28 * *(_DWORD *)(*((_DWORD *)v12 + 0x16) + 4 * v14);
      memcpy((void *)(*((_DWORD *)v12 + 0x14) + *(_DWORD *)(*((_DWORD *)v12 + 0x17) + 4 * v14)), Src, v21);
      v15 = *((_DWORD *)v12 + 0x16);
      if ( 4 * *(_DWORD *)(v15 + 4 * v14) * *(_DWORD *)(*((_DWORD *)v12 + 0x15) + 4 * v14) )
      {
        v16 = (_BYTE *)(*((_DWORD *)v12 + 0x14) + *(_DWORD *)(*((_DWORD *)v12 + 0x17) + 4 * v14) + 2);
        v17 = ((unsigned int)(4 * *(_DWORD *)(v15 + 4 * v14) * *(_DWORD *)(*((_DWORD *)v12 + 0x15) + 4 * v14) - 1) >> 2)
            + 1;
        do
        {
          v18 = v16[0xFFFFFFFE];
          v16[0xFFFFFFFE] = *v16;
          *v16 = v18;
          v16 += 4;
          --v17;
        }
        while ( v17 );
      }
    }
    else if ( v23 == D3DDDIFMT_DXT1 || v23 == D3DDDIFMT_DXT3 || v23 == D3DDDIFMT_DXT5 )
    {
      v19 = *(_DWORD *)(*((_DWORD *)v12 + 0x16) + 4 * v14);
      if ( v19 < 4 )
        v19 = 4;
      LODWORD(v21) = (v28 * v19) >> 2;
      memcpy((void *)(*((_DWORD *)v12 + 0x14) + *(_DWORD *)(*((_DWORD *)v12 + 0x17) + 4 * v14)), Src, v21);
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 0x38))(v22);
    (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22);
    (*(void (__stdcall **)(int))(*(_DWORD *)v25 + 8))(v25);
  }
  (*(void (__stdcall **)(_DWORD *))(*v24 + 8))(v24);
  result = NiSourceTexture::LoadTexturePixelData(v12, (PixelLayout *)dword_B256D0);
  byte_B256CD = v32 > 1;
  return result;
}
