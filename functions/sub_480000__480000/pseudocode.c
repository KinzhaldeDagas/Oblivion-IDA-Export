NiSourceTexture *__cdecl sub_480000(_DWORD *a1, const void *a2)
{
  NiDX9Renderer *v2; // edi
  D3DFORMAT v4; // eax
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
  int v21; // [esp+70h] [ebp-70h] BYREF
  D3DDDIFORMAT v22; // [esp+74h] [ebp-6Ch]
  _DWORD *v23; // [esp+78h] [ebp-68h] BYREF
  int v24; // [esp+7Ch] [ebp-64h] BYREF
  int v25; // [esp+80h] [ebp-60h]
  NiPixelData *v26; // [esp+84h] [ebp-5Ch]
  int v27; // [esp+88h] [ebp-58h] BYREF
  void *Src; // [esp+8Ch] [ebp-54h]
  _BYTE pixelFormat[68]; // [esp+90h] [ebp-50h] BYREF
  unsigned int i; // [esp+DCh] [ebp-4h]
  unsigned int v31; // [esp+E4h] [ebp+4h]

  v2 = renderer; /*0x48002e*/
  sub_70F010(pixelFormat, a2); /*0x480039*/
  if ( !a1 || !v2 ) /*0x48004f*/
    return 0; /*0x48004f*/
  v4 = NiDX9Renderer_ConvertPixelFormatToD3DFormat(pixelFormat); /*0x48005a*/
  v22 = v4; /*0x480067*/
  if ( v4 > D3DFMT_DXT1 ) /*0x48006b*/
  {
    if ( v4 != D3DFMT_DXT3 && v4 != D3DFMT_DXT5 ) /*0x480093*/
      return 0; /*0x480093*/
  }
  else if ( v4 != D3DFMT_DXT1 && v4 != D3DFMT_A8R8G8B8 ) /*0x480072*/
  {
    if ( v4 != D3DFMT_A8B8G8R8 ) /*0x480077*/
      return 0; /*0x4802c9*/
    v22 = D3DDDIFMT_A8R8G8B8; /*0x48007d*/
  }
  device = v2->member.device; /*0x48009e*/
  v6 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x4C))(a1); /*0x4800aa*/
  v7 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x50))(a1); /*0x4800b3*/
  v8 = a1[0xF]; /*0x4800b5*/
  if ( v8 ) /*0x4800ba*/
    v31 = *(_DWORD *)(v8 + 0x60); /*0x4800bf*/
  else
    v31 = 1; /*0x4800c8*/
  v9 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[9] + 0x14))(a1[9]); /*0x4800db*/
  CreateTexture = device->lpVtbl->CreateTexture; /*0x4800e6*/
  v25 = v9; /*0x4800f2*/
  v11 = (int)CreateTexture(device, v6, v7, v31, 0, (D3DFORMAT)v22, D3DPOOL_SYSTEMMEM, (IDirect3DTexture9 **)&v23, 0); /*0x480101*/
  v12 = 0; /*0x480103*/
  if ( v11 || !v23 ) /*0x480111*/
    return 0; /*0x480111*/
  v13 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x480119*/
  v26 = v13; /*0x480121*/
  i = 0; /*0x480127*/
  if ( v13 ) /*0x48012e*/
    v12 = NiPixelData::NiPixelData(v13, v6, v7, (int)pixelFormat, v31, 1); /*0x480141*/
  v14 = 0; /*0x48014a*/
  for ( i = 0xFFFFFFFF; v14 < v31; ++v14 ) /*0x480159*/
  {
    (*(void (__stdcall **)(int, unsigned int, int *))(*(_DWORD *)v25 + 0x48))(v25, v14, &v24); /*0x48016f*/
    (*(void (__stdcall **)(_DWORD *, unsigned int, int *))(*v23 + 0x48))(v23, v14, &v21); /*0x480181*/
    D3DXLoadSurfaceFromSurface_0(v21, 0, 0, v24, 0, 0, 0xFFFFFFFF, 0); /*0x480199*/
    (*(void (__stdcall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)v21 + 0x34))(v21, &v27, 0, 0); /*0x4801b1*/
    if ( v22 == D3DDDIFMT_A8R8G8B8 ) /*0x4801ba*/
    {
      memcpy( /*0x4801d7*/
        (void *)(*((_DWORD *)v12 + 0x14) + *(_DWORD *)(*((_DWORD *)v12 + 0x17) + 4 * v14)),
        Src,
        v27 * *(_DWORD *)(*((_DWORD *)v12 + 0x16) + 4 * v14));
      v15 = *((_DWORD *)v12 + 0x16); /*0x4801e2*/
      if ( 4 * *(_DWORD *)(v15 + 4 * v14) * *(_DWORD *)(*((_DWORD *)v12 + 0x15) + 4 * v14) ) /*0x4801f7*/
      {
        v16 = (_BYTE *)(*((_DWORD *)v12 + 0x14) + *(_DWORD *)(*((_DWORD *)v12 + 0x17) + 4 * v14) + 2); /*0x480201*/
        v17 = ((unsigned int)(4 * *(_DWORD *)(v15 + 4 * v14) * *(_DWORD *)(*((_DWORD *)v12 + 0x15) + 4 * v14) - 1) >> 2) /*0x480204*/
            + 1;
        do /*0x480217*/
        {
          v18 = v16[0xFFFFFFFE]; /*0x480207*/
          v16[0xFFFFFFFE] = *v16; /*0x48020c*/
          *v16 = v18; /*0x48020f*/
          v16 += 4; /*0x480211*/
          --v17; /*0x480214*/
        }
        while ( v17 ); /*0x480217*/
      }
    }
    else if ( v22 == D3DDDIFMT_DXT1 || v22 == D3DDDIFMT_DXT3 || v22 == D3DDDIFMT_DXT5 ) /*0x48022e*/
    {
      v19 = *(_DWORD *)(*((_DWORD *)v12 + 0x16) + 4 * v14); /*0x480239*/
      if ( v19 < 4 ) /*0x480242*/
        v19 = 4; /*0x480244*/
      memcpy((void *)(*((_DWORD *)v12 + 0x14) + *(_DWORD *)(*((_DWORD *)v12 + 0x17) + 4 * v14)), Src, (v27 * v19) >> 2); /*0x480258*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 0x38))(v21); /*0x48026a*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 8))(v21); /*0x480276*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v24 + 8))(v24); /*0x480282*/
  }
  (*(void (__stdcall **)(_DWORD *))(*v23 + 8))(v23); /*0x480299*/
  result = NiSourceTexture::LoadTexturePixelData(v12, &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout); /*0x4802a1*/
  byte_B256CD = v31 > 1; /*0x4802af*/
  return result; /*0x4802b5*/
}
