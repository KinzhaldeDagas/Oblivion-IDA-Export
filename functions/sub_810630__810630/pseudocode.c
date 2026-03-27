NiD3DShaderProgram *__thiscall sub_810630(NiD3DShaderProgram **this)
{
  int v2; // edi
  NiD3DShaderProgram **v3; // esi
  NiD3DShaderProgram **v4; // ebp
  NiD3DShaderProgram *result; // eax
  NiD3DShaderProgram *v6; // esi
  NiD3DShaderProgram *v7; // edi
  NiD3DShaderProgram *v8; // esi
  bool v9; // cc
  int v10; // [esp+20h] [ebp-670h]
  _DWORD *v11; // [esp+24h] [ebp-66Ch]
  _DWORD v12[190]; // [esp+2Ch] [ebp-664h] BYREF
  char DstBuf[352]; // [esp+324h] [ebp-36Ch] BYREF
  char v14[260]; // [esp+484h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+588h] [ebp-108h] BYREF

  _gcvt(flt_B2C2BC, 0xC, DstBuf);
  v12[0] = "lighting\\1x\\p\\base.p.hlsl";
  memset(&v12[1], 0, 0x48);
  v12[0x13] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  v12[0x14] = "VC";
  v12[0x15] = EmptyString;
  memset(&v12[0x16], 0, 0x40);
  v12[0x26] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  v12[0x27] = "VC";
  v12[0x28] = EmptyString;
  memset(&v12[0x29], 0, 0x40);
  v12[0x39] = "lighting\\1x\\p\\ambDiffDirAndPt.p.hlsl";
  memset(&v12[0x3A], 0, 0x48);
  v12[0x4C] = "lighting\\1x\\p\\diffuseDir.p.hlsl";
  memset(&v12[0x4D], 0, 0x48);
  v12[0x5F] = "lighting\\1x\\p\\diffusePt.p.hlsl";
  memset(&v12[0x60], 0, 0x48);
  v12[0x72] = "lighting\\1x\\p\\base.p.hlsl";
  v12[0x73] = &off_A8F8C4;
  v12[0x74] = EmptyString;
  v12[0x75] = "VC";
  v12[0x76] = EmptyString;
  memset(&v12[0x77], 0, 0x38);
  v12[0x85] = "lighting\\1x\\p\\specularDir.p.hlsl";
  v12[0x86] = "SPECMULT";
  v12[0x87] = DstBuf;
  memset(&v12[0x88], 0, 0x40);
  v12[0x98] = "lighting\\1x\\p\\specularPt.p.hlsl";
  v12[0x99] = "SPECMULT";
  v12[0x9A] = DstBuf;
  memset(&v12[0x9B], 0, 0x40);
  v12[0xAB] = "lighting\\1x\\p\\base.p.hlsl";
  v12[0xAC] = &off_A90D88;
  v12[0xAD] = EmptyString;
  memset(&v12[0xAE], 0, 0x40);
  v2 = 0;
  v3 = (NiD3DShaderProgram **)v12;
  v10 = 0;
  v11 = v12;
  v4 = this + 0x43;
  do
  {
    result = *v3;
    if ( *v3 )
    {
      sub_801030((char *)result, (int)FileName);
      _sprintf(v14, "STB1%03i.pso", v2);
      result = CreatePixelShader(FileName, v3 + 1, "ps_1_3", v14, 0, 0);
      v6 = *v4;
      v7 = result;
      if ( *v4 != result )
      {
        if ( v6 )
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v6 + 1);
          if ( !result )
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v6)(v6, 1);
        }
        *v4 = v7;
        if ( v7 )
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v7 + 1);
      }
    }
    else
    {
      v8 = *v4;
      if ( *v4 )
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v8 + 1);
        if ( !result )
        {
          if ( v8 )
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1);
        }
        *v4 = 0;
      }
    }
    v2 = v10 + 1;
    v3 = (NiD3DShaderProgram **)(v11 + 0x13);
    ++v4;
    v9 = ++v10 < 0xA;
    v11 += 0x13;
  }
  while ( v9 );
  return result;
}
