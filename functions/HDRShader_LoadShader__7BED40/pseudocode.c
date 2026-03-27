NiD3DShaderProgram *__thiscall HDRShader::LoadShader(HDRShader *this)
{
  int i; // esi
  int v3; // edi
  NiD3DShaderProgram *result; // eax
  volatile LONG *v5; // edi
  volatile LONG *v6; // edi
  NiD3DShaderProgram *v7; // [esp+10h] [ebp-6D4h]
  NiD3DShaderProgram *v8; // [esp+14h] [ebp-6D0h] BYREF
  char *v9; // [esp+18h] [ebp-6CCh]
  int v10; // [esp+1Ch] [ebp-6C8h] BYREF
  NiD3DShaderProgram **v11; // [esp+20h] [ebp-6C4h]
  int v12; // [esp+24h] [ebp-6C0h]
  _BYTE v13[60]; // [esp+28h] [ebp-6BCh] BYREF
  const char *v14; // [esp+64h] [ebp-680h]
  const char *v15; // [esp+68h] [ebp-67Ch]
  const char *v16; // [esp+6Ch] [ebp-678h]
  int v17; // [esp+70h] [ebp-674h]
  _BYTE v18[60]; // [esp+74h] [ebp-670h] BYREF
  const char *v19; // [esp+B0h] [ebp-634h]
  const char *v20; // [esp+B4h] [ebp-630h]
  __int16 *v21; // [esp+B8h] [ebp-62Ch]
  int v22; // [esp+BCh] [ebp-628h]
  _BYTE v23[60]; // [esp+C0h] [ebp-624h] BYREF
  const char *v24; // [esp+FCh] [ebp-5E8h]
  int v25; // [esp+100h] [ebp-5E4h]
  _BYTE v26[68]; // [esp+104h] [ebp-5E0h] BYREF
  const char *v27; // [esp+148h] [ebp-59Ch]
  const char *v28; // [esp+14Ch] [ebp-598h]
  int v29; // [esp+150h] [ebp-594h]
  const char *v30; // [esp+154h] [ebp-590h]
  int v31; // [esp+158h] [ebp-58Ch]
  const char *v32; // [esp+15Ch] [ebp-588h]
  int v33; // [esp+160h] [ebp-584h]
  int v34; // [esp+164h] [ebp-580h]
  _BYTE v35[44]; // [esp+168h] [ebp-57Ch] BYREF
  const char *v36; // [esp+194h] [ebp-550h]
  const char *v37; // [esp+198h] [ebp-54Ch]
  int v38; // [esp+19Ch] [ebp-548h]
  int v39; // [esp+1A0h] [ebp-544h]
  _BYTE v40[60]; // [esp+1A4h] [ebp-540h] BYREF
  const char *v41; // [esp+1E0h] [ebp-504h]
  const char *v42; // [esp+1E4h] [ebp-500h]
  int v43; // [esp+1E8h] [ebp-4FCh]
  int v44; // [esp+1ECh] [ebp-4F8h]
  _BYTE v45[60]; // [esp+1F0h] [ebp-4F4h] BYREF
  const char *v46; // [esp+22Ch] [ebp-4B8h]
  const char *v47; // [esp+230h] [ebp-4B4h]
  int v48; // [esp+234h] [ebp-4B0h]
  int v49; // [esp+238h] [ebp-4ACh]
  _BYTE v50[60]; // [esp+23Ch] [ebp-4A8h] BYREF
  char *FullPath; // [esp+278h] [ebp-46Ch]
  int v52[151]; // [esp+27Ch] [ebp-468h] BYREF
  char v53[260]; // [esp+4D8h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+5DCh] [ebp-108h] BYREF

  FullPath = "imagespace\\2x\\v\\HDRbase.v.hlsl";
  memset(v52, 0, 0x48);
  v52[0x12] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl";
  memset(&v52[0x13], 0, 0x48);
  v52[0x25] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl";
  memset(&v52[0x26], 0, 0x48);
  v52[0x38] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl";
  memset(&v52[0x39], 0, 0x48);
  v52[0x4B] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl";
  v52[0x4C] = (int)"TEX2";
  memset(&v52[0x4D], 0, 0x44);
  v52[0x5E] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl";
  memset(&v52[0x5F], 0, 0x48);
  v52[0x71] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl";
  memset(&v52[0x72], 0, 0x48);
  v52[0x84] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl";
  memset(&v52[0x85], 0, 0x48);
  v9 = "imagespace\\2x\\p\\HDRblur.p.hlsl";
  v10 = (int)"TEXTAP";
  v11 = (NiD3DShaderProgram **)&a16;
  v12 = 0;
  _memset(v13, 0, sizeof(v13));
  v14 = "imagespace\\2x\\p\\HDRblur.p.hlsl";
  v15 = "TEXTAP";
  v16 = "9";
  v17 = 0;
  _memset(v18, 0, sizeof(v18));
  v19 = "imagespace\\2x\\p\\HDRblur.p.hlsl";
  v20 = "TEXTAP";
  v21 = &a15;
  v22 = 0;
  _memset(v23, 0, sizeof(v23));
  v24 = "imagespace\\2x\\p\\HDRblur.p.hlsl";
  v25 = 0;
  _memset(v26, 0, sizeof(v26));
  v27 = "imagespace\\2x\\p\\HDRblur.p.hlsl";
  v28 = "SHBLEND";
  v29 = 0;
  v30 = "TONEMAP";
  v31 = 0;
  v32 = "SWFILTER";
  v33 = 0;
  v34 = 0;
  _memset(v35, 0, sizeof(v35));
  v36 = "imagespace\\2x\\p\\HDRblur.p.hlsl";
  v37 = "BRIGHTFILTER";
  v38 = 0;
  v39 = 0;
  _memset(v40, 0, sizeof(v40));
  v41 = "imagespace\\2x\\p\\HDRblur.p.hlsl";
  v42 = "ADAPT";
  v43 = 0;
  v44 = 0;
  _memset(v45, 0, sizeof(v45));
  v46 = "imagespace\\2x\\p\\HDRblur.p.hlsl";
  v47 = "LUMCLAMP";
  v48 = 0;
  v49 = 0;
  _memset(v50, 0, sizeof(v50));
  for ( i = 0; i < 8; ++i )
  {
    v3 = 0x13 * i;
    result = (NiD3DShaderProgram *)v52[0x13 * i - 1];
    if ( result )
    {
      sub_801030((char *)result, (int)FileName);
      _sprintf(v53, "HDR%03i.vso", i);
      result = CreateVertexShader(FileName, &v52[v3], "vs_1_1", v53, 0, 0);
      v5 = (volatile LONG *)this->Vertex[i];
      v8 = result;
      if ( v5 != (volatile LONG *)result )
      {
        if ( v5 )
        {
          if ( !InterlockedDecrement(v5 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1);
          result = v8;
        }
        this->Vertex[i] = result;
        if ( result )
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)result + 1);
      }
      v3 = 0x13 * i;
    }
    if ( (&v9)[v3] )
    {
      LOWORD(v8) = 0x34;
      if ( i )
      {
        if ( i == 4 )
        {
          if ( byte_B43071 )
            v32 = 0;
        }
      }
      else if ( byte_B43071 )
      {
        v11 = &v8;
      }
      sub_801030((&v9)[v3], (int)FileName);
      _sprintf(v53, "HDR%03i.pso", i);
      result = CreatePixelShader(FileName, (int *)((char *)&v10 + v3 * 4), "ps_2_0", v53, 0, 0);
      v6 = (volatile LONG *)this->Pixel[i];
      v7 = result;
      if ( v6 != (volatile LONG *)result )
      {
        if ( v6 )
        {
          if ( !InterlockedDecrement(v6 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
          result = v7;
        }
        this->Pixel[i] = result;
        if ( result )
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)result + 1);
      }
    }
  }
  return result;
}
