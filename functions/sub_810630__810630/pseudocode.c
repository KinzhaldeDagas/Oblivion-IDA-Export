// SpeedTreeBranchShader 1x pixel program loader: fills ten STB1 ps_1_3 slots at +0x10C..+0x133, including SPECMULT define derived from flt_B2C2BC for specular variants.
NiD3DShaderProgram *__thiscall OB_SpeedTreeBranchShader_LoadPixelPrograms_010201A0(NiD3DShaderProgram **this)
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

  _gcvt(flt_B2C2BC, 0xC, DstBuf); /*0x810664*/
  v12[0] = "lighting\\1x\\p\\base.p.hlsl"; /*0x810673*/
  memset(&v12[1], 0, 0x48); /*0x81067b*/
  v12[0x13] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x810699*/
  v12[0x14] = "VC"; /*0x8106a4*/
  v12[0x15] = EmptyString; /*0x8106ab*/
  memset(&v12[0x16], 0, 0x40); /*0x8106b2*/
  v12[0x26] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x8106c9*/
  v12[0x27] = "VC"; /*0x8106d4*/
  v12[0x28] = EmptyString; /*0x8106db*/
  memset(&v12[0x29], 0, 0x40); /*0x8106e2*/
  v12[0x39] = "lighting\\1x\\p\\ambDiffDirAndPt.p.hlsl"; /*0x8106f9*/
  memset(&v12[0x3A], 0, 0x48); /*0x810704*/
  v12[0x4C] = "lighting\\1x\\p\\diffuseDir.p.hlsl"; /*0x81071e*/
  memset(&v12[0x4D], 0, 0x48); /*0x810729*/
  v12[0x5F] = "lighting\\1x\\p\\diffusePt.p.hlsl"; /*0x810740*/
  memset(&v12[0x60], 0, 0x48); /*0x81074b*/
  v12[0x72] = "lighting\\1x\\p\\base.p.hlsl"; /*0x810762*/
  v12[0x73] = &off_A8F8C4; /*0x81076d*/
  v12[0x74] = EmptyString; /*0x810778*/
  v12[0x75] = "VC"; /*0x81077f*/
  v12[0x76] = EmptyString; /*0x810786*/
  memset(&v12[0x77], 0, 0x38); /*0x81078d*/
  v12[0x85] = "lighting\\1x\\p\\specularDir.p.hlsl"; /*0x8107a5*/
  v12[0x86] = "SPECMULT"; /*0x8107b0*/
  v12[0x87] = DstBuf; /*0x8107b7*/
  memset(&v12[0x88], 0, 0x40); /*0x8107be*/
  v12[0x98] = "lighting\\1x\\p\\specularPt.p.hlsl"; /*0x8107e7*/
  v12[0x99] = "SPECMULT"; /*0x8107f2*/
  v12[0x9A] = DstBuf; /*0x8107f9*/
  memset(&v12[0x9B], 0, 0x40); /*0x810800*/
  v12[0xAB] = "lighting\\1x\\p\\base.p.hlsl"; /*0x810817*/
  v12[0xAC] = &off_A90D88; /*0x810822*/
  v12[0xAD] = EmptyString; /*0x81082d*/
  memset(&v12[0xAE], 0, 0x40); /*0x810834*/
  v2 = 0; /*0x810840*/
  v3 = (NiD3DShaderProgram **)v12; /*0x810842*/
  v10 = 0; /*0x810849*/
  v11 = v12; /*0x81084d*/
  v4 = this + 0x43; /*0x810851*/
  do /*0x810930*/
  {
    result = *v3; /*0x810860*/
    if ( *v3 ) /*0x810860*/
    {
      sub_801030((char *)result, (int)FileName); /*0x810873*/
      _sprintf(v14, "STB1%03i.pso", v2); /*0x810886*/
      result = CreatePixelShader(FileName, v3 + 1, "ps_1_3", v14, 0, 0); /*0x8108ad*/
      v6 = *v4; /*0x8108b2*/
      v7 = result; /*0x8108b5*/
      if ( *v4 != result ) /*0x8108b9*/
      {
        if ( v6 ) /*0x8108bd*/
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v6 + 1); /*0x8108c3*/
          if ( !result ) /*0x8108cb*/
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v6)(v6, 1); /*0x8108d9*/
        }
        *v4 = v7; /*0x8108dd*/
        if ( v7 ) /*0x8108e0*/
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v7 + 1); /*0x8108e6*/
      }
    }
    else
    {
      v8 = *v4; /*0x8108ee*/
      if ( *v4 ) /*0x8108ee*/
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v8 + 1); /*0x8108f9*/
        if ( !result ) /*0x810901*/
        {
          if ( v8 ) /*0x810905*/
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1); /*0x81090f*/
        }
        *v4 = 0; /*0x810911*/
      }
    }
    v2 = v10 + 1; /*0x81091c*/
    v3 = (NiD3DShaderProgram **)(v11 + 0x13); /*0x81091f*/
    ++v4; /*0x810922*/
    v9 = ++v10 < 0xA; /*0x810925*/
    v11 += 0x13; /*0x81092c*/
  }
  while ( v9 ); /*0x810930*/
  return result; /*0x810936*/
}
