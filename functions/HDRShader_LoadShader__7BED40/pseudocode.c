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

  FullPath = "imagespace\\2x\\v\\HDRbase.v.hlsl"; /*0x7bed6c*/
  memset(v52, 0, 0x48); /*0x7bed73*/
  v52[0x12] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl"; /*0x7bed8a*/
  memset(&v52[0x13], 0, 0x48); /*0x7bed91*/
  v52[0x25] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl"; /*0x7beda8*/
  memset(&v52[0x26], 0, 0x48); /*0x7bedaf*/
  v52[0x38] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl"; /*0x7bedc6*/
  memset(&v52[0x39], 0, 0x48); /*0x7bedcd*/
  v52[0x4B] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl"; /*0x7bede4*/
  v52[0x4C] = (int)"TEX2"; /*0x7bedeb*/
  memset(&v52[0x4D], 0, 0x44); /*0x7bedf6*/
  v52[0x5E] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl"; /*0x7bee14*/
  memset(&v52[0x5F], 0, 0x48); /*0x7bee1b*/
  v52[0x71] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl"; /*0x7bee35*/
  memset(&v52[0x72], 0, 0x48); /*0x7bee3c*/
  v52[0x84] = (int)"imagespace\\2x\\v\\HDRbase.v.hlsl"; /*0x7bee53*/
  memset(&v52[0x85], 0, 0x48); /*0x7bee5a*/
  v9 = "imagespace\\2x\\p\\HDRblur.p.hlsl"; /*0x7bee78*/
  v10 = (int)"TEXTAP"; /*0x7bee7c*/
  v11 = (NiD3DShaderProgram **)&a16; /*0x7bee80*/
  v12 = 0; /*0x7bee88*/
  _memset((int)v13, 0, sizeof(v13)); /*0x7bee8c*/
  v14 = "imagespace\\2x\\p\\HDRblur.p.hlsl"; /*0x7bee91*/
  v15 = "TEXTAP"; /*0x7bee98*/
  v16 = "9"; /*0x7bee9f*/
  v17 = 0; /*0x7beeaa*/
  _memset((int)v18, 0, sizeof(v18)); /*0x7beebc*/
  v19 = "imagespace\\2x\\p\\HDRblur.p.hlsl"; /*0x7beecc*/
  v20 = "TEXTAP"; /*0x7beed3*/
  v21 = &a15; /*0x7beeda*/
  v22 = 0; /*0x7beee5*/
  _memset((int)v23, 0, sizeof(v23)); /*0x7beeec*/
  v24 = "imagespace\\2x\\p\\HDRblur.p.hlsl"; /*0x7beefc*/
  v25 = 0; /*0x7bef03*/
  _memset((int)v26, 0, sizeof(v26)); /*0x7bef0a*/
  v27 = "imagespace\\2x\\p\\HDRblur.p.hlsl"; /*0x7bef1d*/
  v28 = "SHBLEND"; /*0x7bef24*/
  v29 = 0; /*0x7bef2f*/
  v30 = "TONEMAP"; /*0x7bef36*/
  v31 = 0; /*0x7bef41*/
  v32 = "SWFILTER"; /*0x7bef48*/
  v33 = 0; /*0x7bef53*/
  v34 = 0; /*0x7bef5a*/
  _memset((int)v35, 0, sizeof(v35)); /*0x7bef61*/
  v36 = "imagespace\\2x\\p\\HDRblur.p.hlsl"; /*0x7bef71*/
  v37 = "BRIGHTFILTER"; /*0x7bef78*/
  v38 = 0; /*0x7bef83*/
  v39 = 0; /*0x7bef8a*/
  _memset((int)v40, 0, sizeof(v40)); /*0x7bef91*/
  v41 = "imagespace\\2x\\p\\HDRblur.p.hlsl"; /*0x7befa1*/
  v42 = "ADAPT"; /*0x7befa8*/
  v43 = 0; /*0x7befb3*/
  v44 = 0; /*0x7befba*/
  _memset((int)v45, 0, sizeof(v45)); /*0x7befc1*/
  v46 = "imagespace\\2x\\p\\HDRblur.p.hlsl"; /*0x7befd1*/
  v47 = "LUMCLAMP"; /*0x7befd8*/
  v48 = 0; /*0x7befe3*/
  v49 = 0; /*0x7befea*/
  _memset((int)v50, 0, sizeof(v50)); /*0x7beff1*/
  for ( i = 0; i < 8; ++i ) /*0x7beff9*/
  {
    v3 = 0x13 * i; /*0x7bf002*/
    result = (NiD3DShaderProgram *)v52[0x13 * i - 1]; /*0x7bf005*/
    if ( result ) /*0x7bf012*/
    {
      sub_801030((char *)result, (int)FileName); /*0x7bf021*/
      _sprintf(v53, "HDR%03i.vso", i); /*0x7bf034*/
      result = CreateVertexShader(FileName, &v52[v3], "vs_1_1", v53, 0, 0); /*0x7bf05d*/
      v5 = (volatile LONG *)this->Vertex[i]; /*0x7bf062*/
      v8 = result; /*0x7bf06b*/
      if ( v5 != (volatile LONG *)result ) /*0x7bf06f*/
      {
        if ( v5 ) /*0x7bf073*/
        {
          if ( !InterlockedDecrement(v5 + 1) ) /*0x7bf079*/
            (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1); /*0x7bf08f*/
          result = v8; /*0x7bf091*/
        }
        this->Vertex[i] = result; /*0x7bf097*/
        if ( result ) /*0x7bf09e*/
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)result + 1); /*0x7bf0a4*/
      }
      v3 = 0x13 * i; /*0x7bf0aa*/
    }
    if ( (&v9)[v3] ) /*0x7bf0ae*/
    {
      LOWORD(v8) = 0x34; /*0x7bf0ba*/
      if ( i ) /*0x7bf0c1*/
      {
        if ( i == 4 ) /*0x7bf0d8*/
        {                                       // [Verified] HDRShader::LoadShader uses the FP16ARGB filtering capability at RendererGlobalState+0x1D8 to change the SWFILTER configuration for HDR pixel-program index 4.
          if ( OB_RendererGlobalState_010201A0.bFP16ARGBFiltering ) /*0x7bf0da*/
            v32 = 0; /*0x7bf0e2*/
        }
      }
      else if ( OB_RendererGlobalState_010201A0.bFP16ARGBFiltering )// [Verified] HDRShader::LoadShader uses the FP16ARGB filtering capability at RendererGlobalState+0x1D8 to choose an alternate configuration for HDR pixel-program index 0 before CreatePixelShader. /*0x7bf0c3*/
      {
        v11 = &v8; /*0x7bf0cf*/
      }
      sub_801030((&v9)[v3], (int)FileName); /*0x7bf0f6*/
      _sprintf(v53, "HDR%03i.pso", i); /*0x7bf109*/
      result = CreatePixelShader(FileName, (int *)((char *)&v10 + v3 * 4), "ps_2_0", v53, 0, 0); /*0x7bf12f*/
      v6 = (volatile LONG *)this->Pixel[i]; /*0x7bf134*/
      v7 = result; /*0x7bf13d*/
      if ( v6 != (volatile LONG *)result ) /*0x7bf141*/
      {
        if ( v6 ) /*0x7bf145*/
        {
          if ( !InterlockedDecrement(v6 + 1) ) /*0x7bf14b*/
            (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x7bf161*/
          result = v7; /*0x7bf163*/
        }
        this->Pixel[i] = result; /*0x7bf169*/
        if ( result ) /*0x7bf170*/
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)result + 1); /*0x7bf176*/
      }
    }
  }
  return result; /*0x7bf188*/
}
