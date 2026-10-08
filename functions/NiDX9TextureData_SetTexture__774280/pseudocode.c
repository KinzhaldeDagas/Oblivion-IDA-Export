// DX10OBSE verified decode: NiDX9TextureData::SetTexture adopts D3D texture/cube/volume, records level count/dimensions, rejects palettized formats, and maps D3DFORMAT to NiSurfaceData.
char __thiscall NiDX9TextureData::SetTexture(NiDX9TextureData *this, IDirect3DTexture9 *a2)
{
  D3DRESOURCETYPE v3; // eax
  UInt32 v5; // edx
  UInt32 v6; // ecx
  UInt32 v7; // eax
  D3DFORMAT a1[6]; // [esp+14h] [ebp-20h] BYREF
  UInt32 v9; // [esp+2Ch] [ebp-8h]
  UInt32 v10; // [esp+30h] [ebp-4h]

  this->Levels = a2->lpVtbl->GetLevelCount(a2); /*0x774293*/
  v3 = a2->lpVtbl->GetType(a2); /*0x77429c*/
  switch ( v3 ) /*0x7742a1*/
  {
    case D3DRTYPE_TEXTURE: /*0x7742a1*/
      if ( (int)a2->lpVtbl->GetLevelDesc(a2, 0, a1) < 0 ) /*0x7742b4*/
        return 0; /*0x7742bd*/
      v5 = v10; /*0x7742c4*/
      this->Width = v9; /*0x7742c8*/
      this->Height = v5; /*0x7742cb*/
      break;
    case D3DRTYPE_CUBETEXTURE: /*0x7742a1*/
      if ( (int)a2->lpVtbl->GetLevelDesc(a2, 0, a1) < 0 ) /*0x7742e6*/
        return 0; /*0x7742e6*/
      v6 = v10; /*0x7742ec*/
      this->Width = v9; /*0x7742f0*/
      this->Height = v6; /*0x7742f3*/
      break;
    case D3DRTYPE_VOLUMETEXTURE: /*0x7742a1*/
      if ( (int)a2->lpVtbl->GetLevelDesc(a2, 0, a1) < 0 ) /*0x774331*/
        return 0; /*0x774331*/
      v7 = a1[5]; /*0x774337*/
      this->Width = a1[4]; /*0x77433b*/
      this->Height = v7; /*0x77433e*/
      break;
    default:
      return 1; /*0x77431e*/
  }
  if ( a1[0] == D3DFMT_A8P8 || a1[0] == D3DFMT_P8 ) /*0x774302*/
    return 0; /*0x774302*/
  D3DFMTToTextureFormat(a1[0], (NiSurfaceData *)&this->PixelFormat); /*0x774309*/
  return 1; /*0x7742b6*/
}
