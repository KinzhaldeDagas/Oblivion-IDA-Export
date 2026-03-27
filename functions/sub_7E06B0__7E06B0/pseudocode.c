int __thiscall sub_7E06B0(WaterShaderHeightMap *this, volatile LONG *a2)
{
  int v2; // edi
  WaterShaderHeightMap *v3; // ebx
  NiRenderedTexture *InnerTexture; // eax
  int v5; // ebp
  int v6; // esi
  float *v7; // edx
  int v8; // ecx
  float *v9; // eax
  BSRenderedTexture *Unk0DC; // eax
  volatile LONG *v11; // esi
  volatile LONG **p_RenderedTexture; // eax
  volatile LONG *v13; // edi
  volatile LONG *v14; // esi
  void (__stdcall *v15)(volatile LONG *, _DWORD, char *, _DWORD, _DWORD); // eax
  int v16; // edx
  float *v17; // eax
  int i; // edi
  int v19; // ecx
  UInt32 Unk0FC; // ebx
  float *v21; // esi
  float *v22; // eax
  double v23; // st7
  char v25; // [esp+30h] [ebp-10h]
  char v27[4]; // [esp+38h] [ebp-8h] BYREF
  float *v28; // [esp+3Ch] [ebp-4h]

  v2 = 0;
  v3 = this;
  v25 = 0;
  if ( *(_BYTE *)a2 )
  {
    InnerTexture = BSRenderedTexture::GetInnerTexture(this->Unk0D8);
    v5 = (*((int (__thiscall **)(NiDX9TextureData *))InnerTexture->member.super.rendererData->_vtbl + 5))(InnerTexture->member.super.rendererData);
    (*(void (__stdcall **)(int, _DWORD, char *, _DWORD, _DWORD))(*(_DWORD *)v5 + 0x4C))(v5, 0, v27, 0, 0);
    v6 = WaterSurfaceResolution;
    v7 = v28;
    if ( WaterSurfaceResolution > 0 )
    {
      do
      {
        v8 = 0;
        if ( v6 > 0 )
        {
          v9 = *(float **)(v3->Unk0F8 + 4 * v2);
          do
          {
            ++v8;
            *v7 = *v9;
            v6 = WaterSurfaceResolution;
            ++v7;
            ++v9;
          }
          while ( v8 < WaterSurfaceResolution );
        }
        ++v2;
      }
      while ( v2 < v6 );
    }
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v5 + 0x50))(v5, 0);
    *(_BYTE *)a2 = 0;
  }
  Unk0DC = v3->Unk0DC;
  if ( Unk0DC )
  {
    v11 = a2;
    p_RenderedTexture = (volatile LONG **)&Unk0DC->members.RenderedTexture;
  }
  else
  {
    v11 = 0;
    a2 = 0;
    p_RenderedTexture = &a2;
    v25 = 1;
  }
  v13 = *p_RenderedTexture;
  if ( (v25 & 1) != 0 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement(v11 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1);
    }
  }
  v14 = (volatile LONG *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)v13 + 9) + 0x14))(*((_DWORD *)v13 + 9));
  v15 = *(void (__stdcall **)(volatile LONG *, _DWORD, char *, _DWORD, _DWORD))(*v14 + 0x4C);
  a2 = v14;
  v15(v14, 0, v27, 0, 0);
  v16 = WaterSurfaceResolution;
  v17 = v28;
  for ( i = 0; i < v16; ++i )
  {
    v19 = 0;
    if ( v16 > 0 )
    {
      Unk0FC = v3->Unk0FC;
      v21 = *(float **)(Unk0FC + 4 * i);
      do
      {
        v22 = v17 + 1;
        v22[0xFFFFFFFF] = *(float *)(*(_DWORD *)(Unk0FC + 4 * (v16 - i)) + 4 * (v16 - v19));
        ++v22;
        v22[0xFFFFFFFF] = *(float *)(*(_DWORD *)(Unk0FC + 4 * (WaterSurfaceResolution - i))
                                   + 4 * (WaterSurfaceResolution - v19));
        ++v22;
        ++v19;
        v22[0xFFFFFFFF] = *v21;
        v17 = v22 + 1;
        v23 = *v21++;
        v17[0xFFFFFFFF] = v23;
        v16 = WaterSurfaceResolution;
      }
      while ( v19 < WaterSurfaceResolution );
      v3 = this;
      v14 = a2;
    }
  }
  return (*(int (__stdcall **)(volatile LONG *, _DWORD))(*v14 + 0x50))(v14, 0);
}
