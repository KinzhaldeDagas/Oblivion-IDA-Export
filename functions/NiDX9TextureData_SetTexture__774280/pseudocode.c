char __thiscall NiDX9TextureData::SetTexture(NiDX9TextureData *this, IDirect3DTexture9 *a2)
{
  D3DRESOURCETYPE v3; // eax
  UInt32 v5; // edx
  UInt32 v6; // ecx
  UInt32 v7; // eax
  D3DFORMAT a1[6]; // [esp+14h] [ebp-20h] BYREF
  UInt32 v9; // [esp+2Ch] [ebp-8h]
  UInt32 v10; // [esp+30h] [ebp-4h]

  this->Levels = a2->lpVtbl->GetLevelCount(a2);
  v3 = a2->lpVtbl->GetType(a2);
  switch ( v3 )
  {
    case D3DRTYPE_TEXTURE:
      if ( (int)a2->lpVtbl->GetLevelDesc(a2, 0, a1) < 0 )
        return 0;
      v5 = v10;
      this->Width = v9;
      this->Height = v5;
      break;
    case D3DRTYPE_CUBETEXTURE:
      if ( (int)a2->lpVtbl->GetLevelDesc(a2, 0, a1) < 0 )
        return 0;
      v6 = v10;
      this->Width = v9;
      this->Height = v6;
      break;
    case D3DRTYPE_VOLUMETEXTURE:
      if ( (int)a2->lpVtbl->GetLevelDesc(a2, 0, a1) < 0 )
        return 0;
      v7 = a1[5];
      this->Width = a1[4];
      this->Height = v7;
      break;
    default:
      return 1;
  }
  if ( a1[0] == D3DFMT_A8P8 || a1[0] == D3DFMT_P8 )
    return 0;
  D3DFMTToTextureFormat(a1[0], (NiSurfaceData *)&this->PixelFormat);
  return 1;
}
