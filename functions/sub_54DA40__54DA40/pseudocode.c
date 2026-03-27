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
  char *v24; // esi
  NiSourceTexture *TexturePixelData; // eax
  UInt32 v26; // esi
  int *v27; // edi
  NiSourceTexture *v28; // eax
  int v29; // [esp+4h] [ebp-A84h]
  int v30; // [esp+8h] [ebp-A80h]
  int v31; // [esp+Ch] [ebp-A7Ch]
  int v32; // [esp+10h] [ebp-A78h]
  int v33; // [esp+14h] [ebp-A74h]
  int v34; // [esp+18h] [ebp-A70h]
  int v35; // [esp+1Ch] [ebp-A6Ch]
  float v36; // [esp+64h] [ebp-A24h]
  float v37; // [esp+64h] [ebp-A24h]
  float v38; // [esp+64h] [ebp-A24h]
  float v39; // [esp+64h] [ebp-A24h]
  float v40; // [esp+64h] [ebp-A24h]
  float v41; // [esp+64h] [ebp-A24h]
  float v42; // [esp+64h] [ebp-A24h]
  NiPixelData *v43; // [esp+6Ch] [ebp-A1Ch]
  UInt32 v44; // [esp+70h] [ebp-A18h] BYREF
  int v45; // [esp+74h] [ebp-A14h]
  Ni2DBuffer **v46; // [esp+78h] [ebp-A10h]
  const void *v47; // [esp+7Ch] [ebp-A0Ch]
  unsigned int *v48; // [esp+80h] [ebp-A08h] BYREF
  _BYTE v49[2428]; // [esp+88h] [ebp-A00h] BYREF
  int v50; // [esp+A84h] [ebp-4h]

  v6 = (Ni2DBuffer **)(this + 2);
  v47 = a5;
  result = *v6;
  v8 = *v6 == 0;
  v46 = v6;
  if ( v8 )
  {
    v9 = *(this + 4);
    if ( v9 && (int)(*(this + 5) - v9) >> 4 && *(this + 7) && *(this + 8) && a3 > (double)a2 )
    {
      NiDevImageConverter::NiDevImageConverter((NiDevImageConverter *)v49);
      v50 = 1;
      v44 = 0;
      v10 = sub_54DA10(this + 3, &v48);
      v11 = *v10;
      v12 = (float *)v10[1];
      v45 = *(this + 7) * *(this + 8);
      v13 = (NiPixelData *)FormHeapAlloc(0x70u);
      LOBYTE(v50) = 2;
      if ( v13 )
      {
        v14 = NiPixelData::NiPixelData(v13, *(this + 7), *(this + 8), (int)&unk_B25E00, 1u, 1);
        v43 = v14;
      }
      else
      {
        v43 = 0;
        v14 = 0;
      }
      v15 = (_BYTE *)(*((_DWORD *)v14 + 0x14) + **((_DWORD **)v14 + 0x17));
      LOBYTE(v50) = 1;
      if ( v45 )
      {
        do
        {
          if ( !v11 )
            _invalid_parameter_noinfo();
          if ( (unsigned int)v12 >= v11[2] )
            _invalid_parameter_noinfo();
          v16 = *v12;
          v17 = a2;
          if ( a2 > v16 || (v17 = a3, a3 < v16) )
            v16 = v17;
          v36 = v16;
          v18 = (FloatFloor(v36) - a2) * a4;
          v19 = a2;
          *v15 = (int)v18;
          if ( (unsigned int)v12 >= v11[2] )
          {
            _invalid_parameter_noinfo();
            v19 = a2;
          }
          v37 = v12[1];
          if ( v37 >= v19 )
          {
            v19 = v37;
            if ( a3 < (double)v37 )
              v19 = a3;
          }
          v38 = v19;
          v20 = (FloatFloor(v38) - a2) * a4;
          v21 = a2;
          v15[1] = (int)v20;
          if ( (unsigned int)v12 >= v11[2] )
          {
            _invalid_parameter_noinfo();
            v21 = a2;
          }
          v39 = v12[2];
          if ( v39 >= v21 )
          {
            v21 = v39;
            if ( a3 < (double)v39 )
              v21 = a3;
          }
          v40 = v21;
          v22 = (FloatFloor(v40) - a2) * a4;
          v23 = a2;
          v15[2] = (int)v22;
          if ( (unsigned int)v12 >= v11[2] )
          {
            _invalid_parameter_noinfo();
            v23 = a2;
          }
          v41 = v12[3];
          if ( v41 >= v23 )
          {
            v23 = v41;
            if ( a3 < (double)v41 )
              v23 = a3;
          }
          v42 = v23;
          v15 += 4;
          v15[0xFFFFFFFF] = (int)((FloatFloor(v42) - a2) * a4);
          if ( (unsigned int)v12 >= v11[2] )
            _invalid_parameter_noinfo();
          v12 += 4;
          --v45;
        }
        while ( v45 );
        v14 = v43;
      }
      if ( bFaceMipmaps )
      {
        v24 = sub_71B8D0(v49, (int)v14, 0);
        (**(void (__thiscall ***)(NiPixelData *, int))v43)(v43, 1);
        if ( byte_B05244 )
          sub_47F590(v24, v29, v30, v31, v32, v33, v34, v35);
        TexturePixelData = NiSourceTexture::LoadTexturePixelData((NiPixelData *)v24, (PixelLayout *)dword_B256D0);
      }
      else
      {
        if ( byte_B05244 )
        {
          sub_47F590(v14, v29, v30, v31, v32, v33, v34, v35);
          v14 = v43;
        }
        TexturePixelData = NiSourceTexture::LoadTexturePixelData(v14, (PixelLayout *)dword_B256D0);
      }
      NiSmartPointer_Set__((Ni2DBuffer **)&v44, (Ni2DBuffer *)TexturePixelData);
      v26 = v44;
      if ( *((_DWORD *)v47 + 1) == 1 )
      {
        v27 = (int *)v46;
        sub_55E2A0((int *)v46, (int *)&v44);
      }
      else
      {
        v28 = sub_480000((_DWORD *)v44, v47);
        NiSmartPointer_Set__(v46, (Ni2DBuffer *)v28);
        v27 = (int *)v46;
      }
      if ( !*v27 )
        sub_55E2A0(v27, (int *)&v44);
      LOBYTE(v50) = 0;
      if ( v26 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) )
          (**(void (__thiscall ***)(UInt32, int))v26)(v26, 1);
      }
      v50 = 0xFFFFFFFF;
      NiDevImageConverter::~NiDevImageConverter((NiDevImageConverter *)v49);
      return (Ni2DBuffer *)*v27;
    }
    else
    {
      return *v6;
    }
  }
  return result;
}
