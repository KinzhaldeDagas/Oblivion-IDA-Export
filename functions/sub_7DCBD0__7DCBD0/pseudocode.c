int __thiscall sub_7DCBD0(WaterShader *this, int a2, int a3, int a4, float a5, int a6, int a7, int a8)
{
  int v9; // ebp
  char v10; // cl
  char v11; // dl
  NiD3DPass *v12; // esi
  char v13; // al
  NiD3DTextureStage *data; // edx
  UInt32 Stage; // ebx
  int v16; // ebp
  NiTexture *Texture; // ebx
  UInt32 m_uiRefCount; // ebp
  UInt32 Unk08; // ebx
  int v20; // ebp
  UInt32 v21; // ebx
  int v22; // ebp
  NiTexture *v23; // ebx
  UInt32 v24; // ebp
  double v25; // st7
  int v26; // eax
  double v27; // st6
  double v28; // st6
  NiD3DTextureStage *v29; // edx
  UInt32 v30; // ebx
  int v31; // ebp
  bool v32; // zf
  int v33; // ecx
  double v34; // st7
  float v35; // edx
  float v36; // eax
  float v37; // ecx
  int v39; // [esp+18h] [ebp-30h]
  int v40; // [esp+20h] [ebp-28h]
  int v41; // [esp+24h] [ebp-24h]
  int v42; // [esp+28h] [ebp-20h]
  int v43; // [esp+2Ch] [ebp-1Ch]
  int v44; // [esp+30h] [ebp-18h]

  this->super.__vftable->super.RemoveShaderPassesMaybe((NiD3DShader *)this);
  v9 = *(_DWORD *)(LODWORD(a5) + 0x18);
  v10 = byte_B45DC0;
  v11 = IsLavaReal;
  v12 = 0;
  v39 = v9;
  switch ( dword_B42E90 )
  {
    case 0x17C:
      if ( v11 )
      {
        v12 = (NiD3DPass *)this->Unk07C[0xE];
      }
      else if ( v10 )
      {
        v12 = (NiD3DPass *)this->Unk07C[0xD];
      }
      else
      {
        v12 = (NiD3DPass *)this->Unk07C[0xC];
      }
      break;
    case 0x198:
      if ( byte_B45DB8 )
      {
        if ( v10 )
          v12 = (NiD3DPass *)this->Unk07C[0xA];
        else
          v12 = (NiD3DPass *)this->Unk07C[9];
      }
      else if ( v10 )
      {
        v12 = (NiD3DPass *)this->Unk07C[8];
      }
      else
      {
        v12 = (NiD3DPass *)this->Unk07C[7];
      }
      break;
    case 0x199:
      if ( v10 )
      {
        if ( byte_B45DB8 )
          v12 = (NiD3DPass *)this->Unk07C[5];
        else
          v12 = (NiD3DPass *)this->Unk07C[2];
      }
      else if ( byte_B45DB8 )
      {
        v12 = (NiD3DPass *)this->Unk07C[4];
      }
      else
      {
        v12 = (NiD3DPass *)this->Unk07C[0];
      }
      break;
    case 0x19A:
      v12 = (NiD3DPass *)this->Unk07C[0xB];
      break;
    default:
      break;
  }
  if ( (!byte_B45DB9 || !this->Unk104[2] || !*(_BYTE *)(v9 + 0x72))
    && (v12 == (NiD3DPass *)this->Unk07C[0] || v12 == (NiD3DPass *)this->Unk07C[2]) )
  {
    if ( v10 )
      v12 = (NiD3DPass *)this->Unk07C[3];
    else
      v12 = (NiD3DPass *)this->Unk07C[1];
  }
  v13 = byte_B45DBB;
  if ( byte_B45DBB )
    v12 = (NiD3DPass *)this->Unk07C[6];
  if ( v11 )
  {
    if ( !v13 )
      v12 = (NiD3DPass *)this->Unk07C[0xB];
  }
  if ( *(_BYTE *)(v9 + 0x71) )
  {
    if ( !v13 )
    {
      if ( v11 )
      {
        v12 = (NiD3DPass *)this->Unk07C[0xE];
      }
      else if ( v10 )
      {
        v12 = (NiD3DPass *)this->Unk07C[0xD];
      }
      else
      {
        v12 = (NiD3DPass *)this->Unk07C[0xC];
      }
    }
  }
  if ( byte_B45DD0 )
    v12 = (NiD3DPass *)this->Unk07C[0xF];
  if ( v12 == (NiD3DPass *)this->Unk07C[7]
    || v12 == (NiD3DPass *)this->Unk07C[9]
    || v12 == (NiD3DPass *)this->Unk07C[8]
    || v12 == (NiD3DPass *)this->Unk07C[0xA] )
  {
    flt_B45EB4 = *(float *)(v9 + 0x7C);
  }
  flt_B45EB8 = *(float *)(v9 + 0x80);
  data = v12->Stages.data;
  Stage = data->Stage;
  v16 = *(_DWORD *)(data->Stage + 4);
  if ( v16 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
      (**(void (__thiscall ***)(int, int))v16)(v16, 1);
    *(_DWORD *)(Stage + 4) = 0;
  }
  Texture = v12->Stages.data->Texture;
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  if ( m_uiRefCount )
  {
    if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
      (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    Texture->members.super.super.m_uiRefCount = 0;
  }
  Unk08 = v12->Stages.data->Unk08;
  v20 = *(_DWORD *)(Unk08 + 4);
  if ( v20 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
      (**(void (__thiscall ***)(int, int))v20)(v20, 1);
    *(_DWORD *)(Unk08 + 4) = 0;
  }
  v21 = v12->Stages.data[1].Stage;
  v22 = *(_DWORD *)(v21 + 4);
  if ( v22 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
      (**(void (__thiscall ***)(int, int))v22)(v22, 1);
    *(_DWORD *)(v21 + 4) = 0;
  }
  v23 = v12->Stages.data[1].Texture;
  v24 = v23->members.super.super.m_uiRefCount;
  if ( v24 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v24)(v24, 1);
    v23->members.super.super.m_uiRefCount = 0;
  }
  v25 = 0.0;
  v26 = *(_DWORD *)(LODWORD(a5) + 0xC);
  if ( v26 )
  {
    v40 = *(_DWORD *)(v26 + 0x20);
    v27 = *(float *)(v26 + 0x30);
    v41 = *(_DWORD *)(v26 + 0x24);
    v42 = *(_DWORD *)(v26 + 0x28);
    a5 = v27 - *(float *)(v26 + 0x2C);
    *(float *)&v43 = v27;
    v28 = a5;
    dword_B45E74 = v43;
    *(float *)&v44 = v28;
    dword_B45E78 = v44;
    *(float *)&dword_B45E7C = 0.0;
    *(float *)&dword_B45E80 = 0.0;
    dword_B45E84 = v40;
    dword_B45E88 = v41;
    dword_B45E8C = v42;
    *(float *)&dword_B45E90 = 0.0;
  }
  if ( !this->Unk104[1] || byte_B45DB8 )
  {
    if ( this->Unk104[3] && byte_B45DB8 )
    {
      sub_76C910(v12->Stages.data->Stage, (NiRenderedTexture *)this->Unk104[3]);
    }
    else
    {
      v29 = v12->Stages.data;
      v30 = v29->Stage;
      v31 = *(_DWORD *)(v29->Stage + 4);
      v32 = v31 == dword_B430DC;
      v33 = dword_B430DC;
      a5 = *(float *)&dword_B430DC;
      if ( !v32 )
      {
        if ( v31 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) )
            (**(void (__thiscall ***)(int, int))v31)(v31, 1);
          v33 = LODWORD(a5);
        }
        *(_DWORD *)(v30 + 4) = v33;
        if ( v33 )
          InterlockedIncrement((volatile LONG *)(v33 + 4));
      }
    }
  }
  else
  {
    sub_76C910(v12->Stages.data->Stage, (NiRenderedTexture *)this->Unk104[1]);
  }
  if ( !*(_BYTE *)(v39 + 0x71) )
    sub_76C910(&v12->Stages.data->Texture->__vftable, (NiRenderedTexture *)this->Unk104[0]);
  if ( this->Unk104[4] )
    sub_76C910((_DWORD *)v12->Stages.data->Unk08, (NiRenderedTexture *)this->Unk104[4]);
  if ( byte_B45DB9 )
  {
    if ( *(_BYTE *)(v39 + 0x72) && this->Unk104[2] )
    {
      sub_76C910((_DWORD *)v12->Stages.data[1].Stage, (NiRenderedTexture *)this->Unk104[2]);
      *(float *)&dword_B45EE4 = (float)*(int *)(v39 + 0x74);
      v25 = (double)*(int *)(v39 + 0x78);
      *(float *)&dword_B45EE8 = v25;
    }
    else if ( this->Unk104[2] )
    {
      if ( v12 == (NiD3DPass *)this->Unk07C[7] || v12 == (NiD3DPass *)this->Unk07C[8] )
        sub_76C910((_DWORD *)v12->Stages.data[1].Stage, (NiRenderedTexture *)this->Unk104[2]);
    }
  }
  if ( *(_BYTE *)(v39 + 0x70) )
  {
    if ( *(_DWORD *)(v39 + 0x6C) )
      sub_76C910(&v12->Stages.data[1].Texture->__vftable, *(NiRenderedTexture **)(v39 + 0x6C));
  }
  if ( dword_B42D78 )
    ((void (__cdecl *)(int, int))dword_B42D78)(1, 1);
  else
    v25 = 0.0;
  v32 = dword_B42D78 == 0;
  a5 = v25;
  v34 = a5 * WaterShader_ScrollX + flt_B45E64;
  flt_B45E64 = v34;
  if ( v32 )
    v34 = 0.0;
  else
    ((void (__cdecl *)(int, int))dword_B42D78)(1, 1);
  a5 = v34;
  flt_B45E68 = a5 * WaterShader_ScrollY + flt_B45E68;
  if ( flt_B45E64 >= 1.0 )
    flt_B45E64 = 0.0;
  if ( flt_B45E68 >= 1.0 )
    flt_B45E68 = 0.0;
  v35 = CameraWorldTranslate;
  v36 = flt_B3F930;
  flt_B45E94 = WaterShader_Fresnel;
  v37 = flt_B3F934;
  flt_B45ED4 = v35;
  flt_B45ED8 = v36;
  a5 = *(float *)&v12;
  flt_B45EDC = v37;
  ++v12->RefCount;
  sub_76CE40(&this->super.member.super.Passes, (NiD3DPass *)this->super.member.super.PassCount, (NiD3DPass **)&a5);
  v32 = v12->RefCount-- == 1;
  if ( v32 )
    sub_7604D0(v12);
  ++this->super.member.super.PassCount;
  return 0;
}
