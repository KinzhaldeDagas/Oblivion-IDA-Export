Ni2DBuffer *__thiscall sub_54DA40(unsigned int *this, float a2, float a3, float a4, const void *a5)
{
  Ni2DBuffer **v6; // ecx
  Ni2DBuffer *result; // eax
  bool v8; // zf
  int v9; // eax
  unsigned int **v10; // eax
  unsigned int *v11; // ebx
  float *v12; // esi
  NiPixelData *v13; // eax
  NiPixelData *v14; // eax
  _BYTE *v15; // edi
  double v16; // st7
  double v17; // st6
  double v18; // st6
  double v19; // st7
  double v20; // st6
  double v21; // st7
  double v22; // st6
  double v23; // st7
  NiPixelData *MipChain_Box_010201A0; // esi
  NiSourceTexture *TexturePixelData; // eax
  UInt32 v26; // esi
  int *v27; // edi
  NiSourceTexture *v28; // eax
  float v29; // [esp+64h] [ebp-A24h]
  float v30; // [esp+64h] [ebp-A24h]
  float v31; // [esp+64h] [ebp-A24h]
  float v32; // [esp+64h] [ebp-A24h]
  float v33; // [esp+64h] [ebp-A24h]
  float v34; // [esp+64h] [ebp-A24h]
  float v35; // [esp+64h] [ebp-A24h]
  NiPixelData *v36; // [esp+6Ch] [ebp-A1Ch]
  UInt32 v37; // [esp+70h] [ebp-A18h] BYREF
  unsigned int v38; // [esp+74h] [ebp-A14h]
  Ni2DBuffer **v39; // [esp+78h] [ebp-A10h]
  const void *v40; // [esp+7Ch] [ebp-A0Ch]
  unsigned int *v41; // [esp+80h] [ebp-A08h] BYREF
  _BYTE v42[2428]; // [esp+88h] [ebp-A00h] BYREF
  int v43; // [esp+A84h] [ebp-4h]

  v6 = (Ni2DBuffer **)(this + 2); /*0x54da85*/
  v40 = a5; /*0x54da88*/
  result = *v6; /*0x54da8c*/
  v8 = *v6 == 0; /*0x54da90*/
  v39 = v6; /*0x54da92*/
  if ( v8 ) /*0x54da96*/
  {
    v9 = *(this + 4); /*0x54da9c*/
    if ( v9 && (int)(*(this + 5) - v9) >> 4 && *(this + 7) && *(this + 8) && a3 > (double)a2 ) /*0x54dad7*/
    {
      NiDevImageConverter::NiDevImageConverter((NiDevImageConverter *)v42); /*0x54dae4*/
      v43 = 1; /*0x54dae9*/
      v37 = 0; /*0x54daf0*/
      v10 = sub_54DA10(this + 3, &v41); /*0x54db03*/
      v11 = *v10; /*0x54db08*/
      v12 = (float *)v10[1]; /*0x54db0a*/
      v38 = *(this + 7) * *(this + 8); /*0x54db16*/
      v13 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x54db1a*/
      LOBYTE(v43) = 2; /*0x54db28*/
      if ( v13 ) /*0x54db30*/
      {
        v14 = NiPixelData::NiPixelData(v13, *(this + 7), *(this + 8), (int)&unk_B25E00, 1u, 1); /*0x54db45*/
        v36 = v14; /*0x54db4a*/
      }
      else
      {
        v36 = 0; /*0x54db50*/
        v14 = 0; /*0x54db58*/
      }
      v15 = (_BYTE *)(*((_DWORD *)v14 + 0x14) + **((_DWORD **)v14 + 0x17)); /*0x54db65*/
      LOBYTE(v43) = 1; /*0x54db6a*/
      if ( v38 ) /*0x54db72*/
      {
        do /*0x54dd86*/
        {
          if ( !v11 ) /*0x54db7e*/
            _invalid_parameter_noinfo(); /*0x54db80*/
          if ( (unsigned int)v12 >= v11[2] ) /*0x54db88*/
            _invalid_parameter_noinfo(); /*0x54db8a*/
          v16 = *v12; /*0x54db95*/
          v17 = a2; /*0x54db99*/
          if ( a2 > v16 || (v17 = a3, a3 < v16) ) /*0x54dbb1*/
            v16 = v17; /*0x54dbb7*/
          v29 = v16; /*0x54dbb9*/
          v18 = (FloatFloor(v29) - a2) * a4; /*0x54dbef*/
          v19 = a2; /*0x54dbef*/
          *v15 = (int)v18; /*0x54dbf9*/
          if ( (unsigned int)v12 >= v11[2] ) /*0x54dc02*/
          {
            _invalid_parameter_noinfo(); /*0x54dc06*/
            v19 = a2; /*0x54dc0b*/
          }
          v30 = v12[1]; /*0x54dc11*/
          if ( v30 >= v19 ) /*0x54dc20*/
          {
            v19 = v30; /*0x54dc22*/
            if ( a3 < (double)v30 ) /*0x54dc2e*/
              v19 = a3; /*0x54dc30*/
          }
          v31 = v19; /*0x54dc36*/
          v20 = (FloatFloor(v31) - a2) * a4; /*0x54dc6c*/
          v21 = a2; /*0x54dc6c*/
          v15[1] = (int)v20; /*0x54dc76*/
          if ( (unsigned int)v12 >= v11[2] ) /*0x54dc80*/
          {
            _invalid_parameter_noinfo(); /*0x54dc84*/
            v21 = a2; /*0x54dc89*/
          }
          v32 = v12[2]; /*0x54dc8f*/
          if ( v32 >= v21 ) /*0x54dc9e*/
          {
            v21 = v32; /*0x54dca0*/
            if ( a3 < (double)v32 ) /*0x54dcac*/
              v21 = a3; /*0x54dcae*/
          }
          v33 = v21; /*0x54dcb4*/
          v22 = (FloatFloor(v33) - a2) * a4; /*0x54dcea*/
          v23 = a2; /*0x54dcea*/
          v15[2] = (int)v22; /*0x54dcf4*/
          if ( (unsigned int)v12 >= v11[2] ) /*0x54dcfe*/
          {
            _invalid_parameter_noinfo(); /*0x54dd02*/
            v23 = a2; /*0x54dd07*/
          }
          v34 = v12[3]; /*0x54dd0d*/
          if ( v34 >= v23 ) /*0x54dd1c*/
          {
            v23 = v34; /*0x54dd1e*/
            if ( a3 < (double)v34 ) /*0x54dd2a*/
              v23 = a3; /*0x54dd2c*/
          }
          v35 = v23; /*0x54dd32*/
          v15 += 4; /*0x54dd4d*/
          v15[0xFFFFFFFF] = (int)((FloatFloor(v35) - a2) * a4); /*0x54dd6d*/
          if ( (unsigned int)v12 >= v11[2] ) /*0x54dd77*/
            _invalid_parameter_noinfo(); /*0x54dd79*/
          v12 += 4; /*0x54dd7e*/
          --v38; /*0x54dd81*/
        }
        while ( v38 ); /*0x54dd86*/
        v14 = v36; /*0x54dd8c*/
      }
      if ( bFaceMipmaps ) /*0x54dd90*/
      {
        MipChain_Box_010201A0 = (NiPixelData *)OB_NiDevImageConverter_GenerateMipChain_Box_010201A0(v42, v14, 0); /*0x54ddac*/
        (**(void (__thiscall ***)(NiPixelData *, int))v36)(v36, 1); /*0x54ddb4*/
        if ( byte_B05244 ) /*0x54ddb6*/
          sub_47F590(MipChain_Box_010201A0); /*0x54ddc0*/
        TexturePixelData = NiSourceTexture::LoadTexturePixelData( /*0x54ddce*/
                             MipChain_Box_010201A0,
                             &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout);
      }
      else
      {
        if ( byte_B05244 ) /*0x54ddd0*/
        {
          sub_47F590(v14); /*0x54ddda*/
          v14 = v36; /*0x54dddf*/
        }
        TexturePixelData = NiSourceTexture::LoadTexturePixelData( /*0x54ddec*/
                             v14,
                             &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout);
      }
      NiSmartPointer_Set__((Ni2DBuffer **)&v37, (Ni2DBuffer *)TexturePixelData); /*0x54ddf9*/
      v26 = v37; /*0x54de06*/
      if ( *((_DWORD *)v40 + 1) == 1 ) /*0x54de0a*/
      {
        v27 = (int *)v39; /*0x54de0c*/
        OB_NiSmartPointer_Assign_010201A0((int *)v39, (int *)&v37); /*0x54de17*/
      }
      else
      {
        v28 = sub_480000((_DWORD *)v37, v40); /*0x54de20*/
        NiSmartPointer_Set__(v39, (Ni2DBuffer *)v28); /*0x54de2d*/
        v27 = (int *)v39; /*0x54de32*/
      }
      if ( !*v27 ) /*0x54de36*/
        OB_NiSmartPointer_Assign_010201A0(v27, (int *)&v37); /*0x54de42*/
      LOBYTE(v43) = 0; /*0x54de49*/
      if ( v26 ) /*0x54de51*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x54de57*/
          (**(void (__thiscall ***)(UInt32, int))v26)(v26, 1); /*0x54de69*/
      }
      v43 = 0xFFFFFFFF; /*0x54de72*/
      NiDevImageConverter::~NiDevImageConverter((NiDevImageConverter *)v42); /*0x54de7d*/
      return (Ni2DBuffer *)*v27; /*0x54de82*/
    }
    else
    {
      return *v6; /*0x54de86*/
    }
  }
  return result; /*0x54de88*/
}
