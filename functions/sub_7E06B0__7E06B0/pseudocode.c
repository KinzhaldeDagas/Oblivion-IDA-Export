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

  v2 = 0; /*0x7e06bb*/
  v3 = this; /*0x7e06c0*/
  v25 = 0; /*0x7e06c6*/
  if ( *(_BYTE *)a2 ) /*0x7e06bd*/
  {
    InnerTexture = BSRenderedTexture::GetInnerTexture(this->Unk0D8); /*0x7e06d2*/
    v5 = (*((int (__thiscall **)(NiDX9TextureData *))InnerTexture->member.super.rendererData->_vtbl + 5))(InnerTexture->member.super.rendererData); /*0x7e06e3*/
    (*(void (__stdcall **)(int, _DWORD, char *, _DWORD, _DWORD))(*(_DWORD *)v5 + 0x4C))(v5, 0, v27, 0, 0); /*0x7e06f2*/
    v6 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e06f4*/
    v7 = v28; /*0x7e06fc*/
    if ( SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) > 0 ) /*0x7e0700*/
    {
      do /*0x7e072d*/
      {
        v8 = 0; /*0x7e0702*/
        if ( v6 > 0 ) /*0x7e0706*/
        {
          v9 = *(float **)(v3->Unk0F8 + 4 * v2); /*0x7e070e*/
          do /*0x7e0726*/
          {
            ++v8; /*0x7e0713*/
            *v7 = *v9; /*0x7e0716*/
            v6 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e0718*/
            ++v7; /*0x7e071e*/
            ++v9; /*0x7e0721*/
          }
          while ( v8 < SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) ); /*0x7e0726*/
        }
        ++v2; /*0x7e0728*/
      }
      while ( v2 < v6 ); /*0x7e072d*/
    }
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v5 + 0x50))(v5, 0); /*0x7e0738*/
    *(_BYTE *)a2 = 0; /*0x7e073e*/
  }
  Unk0DC = v3->Unk0DC; /*0x7e0741*/
  if ( Unk0DC ) /*0x7e0749*/
  {
    v11 = a2; /*0x7e074b*/
    p_RenderedTexture = (volatile LONG **)&Unk0DC->members.RenderedTexture; /*0x7e074f*/
  }
  else
  {
    v11 = 0; /*0x7e0754*/
    a2 = 0; /*0x7e0756*/
    p_RenderedTexture = &a2; /*0x7e075a*/
    v25 = 1; /*0x7e075e*/
  }
  v13 = *p_RenderedTexture; /*0x7e076b*/
  if ( (v25 & 1) != 0 ) /*0x7e076d*/
  {
    if ( v11 ) /*0x7e0771*/
    {
      if ( !InterlockedDecrement(v11 + 1) ) /*0x7e0777*/
        (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1); /*0x7e0789*/
    }
  }
  v14 = (volatile LONG *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)v13 + 9) + 0x14))(*((_DWORD *)v13 + 9)); /*0x7e0799*/
  v15 = *(void (__stdcall **)(volatile LONG *, _DWORD, char *, _DWORD, _DWORD))(*v14 + 0x4C); /*0x7e079d*/
  a2 = v14; /*0x7e07a8*/
  v15(v14, 0, v27, 0, 0); /*0x7e07ac*/
  v16 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e07ae*/
  v17 = v28; /*0x7e07b4*/
  for ( i = 0; i < v16; ++i ) /*0x7e07bc*/
  {
    v19 = 0; /*0x7e07c0*/
    if ( v16 > 0 ) /*0x7e07c4*/
    {
      Unk0FC = v3->Unk0FC; /*0x7e07c6*/
      v21 = *(float **)(Unk0FC + 4 * i); /*0x7e07cc*/
      do /*0x7e081a*/
      {
        v22 = v17 + 1; /*0x7e07dd*/
        v22[0xFFFFFFFF] = *(float *)(*(_DWORD *)(Unk0FC + 4 * (v16 - i)) + 4 * (v16 - v19)); /*0x7e07e0*/
        ++v22; /*0x7e07f6*/
        v22[0xFFFFFFFF] = *(float *)(*(_DWORD *)(Unk0FC + 4 * (LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) - i)) /*0x7e07f9*/
                                   + 4 * (LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) - v19));
        ++v22; /*0x7e07fc*/
        ++v19; /*0x7e0801*/
        v22[0xFFFFFFFF] = *v21; /*0x7e0804*/
        v17 = v22 + 1; /*0x7e0807*/
        v23 = *v21++; /*0x7e080a*/
        v17[0xFFFFFFFF] = v23; /*0x7e080f*/
        v16 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e0812*/
      }
      while ( v19 < SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) ); /*0x7e081a*/
      v3 = this; /*0x7e081c*/
      v14 = a2; /*0x7e0820*/
    }
  }
  return (*(int (__stdcall **)(volatile LONG *, _DWORD))(*v14 + 0x50))(v14, 0); /*0x7e0835*/
}
