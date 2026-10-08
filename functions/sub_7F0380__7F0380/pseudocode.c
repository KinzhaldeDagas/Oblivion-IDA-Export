// OBLIVION AUTHORITY (2026-08-24): Declares SpeedTree leaf vertex input. v3.z carries a nonnegative packed selector: integer part = corner + 4*leafCardIndex for LeafBase addressing; fractional part = packed-color green/255 (255 forced to 0.99). VS1.1 EXPP.y extracts the fractional component; it is not exponentiation/exp2.
void *__thiscall OB_SpeedTreeLeafShader_LoadPrograms_010201A0(void *self)
{
  int v1; // esi
  char **v2; // edi
  NiD3DShaderProgram **v3; // ebx
  NiD3DShaderProgram *VertexShader; // eax
  NiD3DShaderProgram *v5; // esi
  NiD3DShaderProgram *v6; // edi
  NiD3DShaderProgram *v7; // esi
  bool v8; // cc
  int v9; // esi
  void **v10; // ebx
  void **v11; // edi
  void *result; // eax
  volatile LONG *v13; // esi
  volatile LONG *v14; // edi
  volatile LONG *v15; // esi
  volatile LONG *v16; // esi
  volatile LONG *v17; // edi
  volatile LONG *v18; // esi
  _DWORD *v19; // [esp+10h] [ebp-3E0h]
  _DWORD *v20; // [esp+10h] [ebp-3E0h]
  _DWORD *v21; // [esp+10h] [ebp-3E0h]
  int v22; // [esp+14h] [ebp-3DCh]
  int v23; // [esp+14h] [ebp-3DCh]
  _DWORD v25[38]; // [esp+1Ch] [ebp-3D4h] BYREF
  _DWORD v26[76]; // [esp+B4h] [ebp-33Ch] BYREF
  char FileName[260]; // [esp+1E4h] [ebp-20Ch] BYREF
  char v28[260]; // [esp+2E8h] [ebp-108h] BYREF

  v26[0] = "speedtree\\leaf.v.hlsl";            // OBLIVION AUTHORITY (2026-08-24): Leaf shader descriptor for v3.z packing. Legacy VS1.1 EXPP.y extracts frac(v3.z), not exp/exp2. Base VS multiplies the complete ambient+directional result by that fraction; point variants add their point-light term separately. Packed green 0 therefore yields RGB black when no nonzero point term survives, while sampled alpha can remain nonzero. /*0x7f03b0*/
  memset(&v26[1], 0, 0x48); /*0x7f03b7*/
  v26[0x13] = "speedtree\\leaf.v.hlsl"; /*0x7f03e1*/
  v26[0x14] = &off_A90D88; /*0x7f03e8*/
  v26[0x15] = EmptyString; /*0x7f03f3*/
  memset(&v26[0x16], 0, 0x40); /*0x7f03fa*/
  v26[0x26] = "speedtree\\leaf.v.hlsl"; /*0x7f0418*/
  v26[0x27] = "PT"; /*0x7f041f*/
  v26[0x28] = EmptyString; /*0x7f042a*/
  memset(&v26[0x29], 0, 0x40); /*0x7f0431*/
  v26[0x39] = "speedtree\\leaf.v.hlsl"; /*0x7f044f*/
  v26[0x3A] = "PT"; /*0x7f0456*/
  v26[0x3B] = EmptyString; /*0x7f0461*/
  v26[0x3C] = &off_A90D88; /*0x7f0468*/
  v26[0x3D] = EmptyString; /*0x7f0473*/
  memset(&v26[0x3E], 0, 0x38); /*0x7f047a*/
  v25[0] = "speedtree\\leaf.p.hlsl";            // Oblivion leaf PS variants load from speedtree\\leaf.p.hlsl. Runtime chooses legacy STLEAF%03i.pso ps_1_3 when shader-package class <2, otherwise STLEAF2%03i.pso ps_2_0. /*0x7f0493*/
  memset(&v25[1], 0, 0x48); /*0x7f0497*/
  v25[0x13] = "speedtree\\leaf.p.hlsl";         // Second fog pixel descriptor is always constructed. Installed Oblivion shaderpackage001 contains STLEAF000.pso only (no STLEAF001.pso); packages 002..019 contain both STLEAF2000/2001 and their bytecode hashes are identical across all 18 modern packages. /*0x7f04b3*/
  v25[0x14] = &off_A90D88; /*0x7f04ba*/
  v25[0x15] = EmptyString; /*0x7f04c5*/
  memset(&v25[0x16], 0, 0x40); /*0x7f04cc*/
  v1 = 0; /*0x7f04df*/
  v2 = (char **)v26; /*0x7f04e1*/
  v22 = 0; /*0x7f04eb*/
  v19 = v26; /*0x7f04ef*/
  v3 = (NiD3DShaderProgram **)((char *)self + 0x37C); /*0x7f04f3*/
  do /*0x7f05cc*/
  {
    if ( *v2 ) /*0x7f0500*/
    {
      sub_801030(*v2, (int)FileName); /*0x7f0513*/
      _sprintf(v28, "STLEAF%03i.vso", v1); /*0x7f0526*/
      VertexShader = CreateVertexShader(FileName, v2 + 1, "vs_1_1", v28, 0, 0);// Creates one of four vs_1_1 leaf variants. Indices map to {base, fog, point, point+fog}; all emit texture UV in oT0 and lighting in oT1. /*0x7f054d*/
      v5 = *v3; /*0x7f0552*/
      v6 = VertexShader; /*0x7f0554*/
      if ( *v3 != VertexShader ) /*0x7f0558*/
      {
        if ( v5 ) /*0x7f055c*/
        {
          if ( !InterlockedDecrement((volatile LONG *)v5 + 1) ) /*0x7f0562*/
            (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v5)(v5, 1); /*0x7f0578*/
        }
        *v3 = v6; /*0x7f057c*/
        if ( v6 ) /*0x7f057e*/
          InterlockedIncrement((volatile LONG *)v6 + 1); /*0x7f0584*/
      }
    }
    else
    {
      v7 = *v3; /*0x7f058c*/
      if ( *v3 ) /*0x7f058c*/
      {
        if ( !InterlockedDecrement((volatile LONG *)v7 + 1) ) /*0x7f0596*/
        {
          if ( v7 ) /*0x7f05a2*/
            (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v7)(v7, 1); /*0x7f05ac*/
        }
        *v3 = 0; /*0x7f05ae*/
      }
    }
    v1 = v22 + 1; /*0x7f05b8*/
    v2 = (char **)(v19 + 0x13); /*0x7f05bb*/
    ++v3; /*0x7f05be*/
    v8 = ++v22 < 4; /*0x7f05c1*/
    v19 += 0x13; /*0x7f05c8*/
  }
  while ( v8 ); /*0x7f05cc*/
  v9 = 0; /*0x7f05d6*/
  v10 = (void **)((char *)self + 0x38C); /*0x7f05d8*/
  v11 = (void **)v25; /*0x7f05e5*/
  v23 = 0; /*0x7f05e9*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7f05ed*/
  {
    v21 = v25; /*0x7f06d7*/
    do /*0x7f07ac*/
    {
      result = *v11; /*0x7f06e0*/
      if ( *v11 ) /*0x7f06e0*/
      {
        sub_801030((char *)result, (int)FileName); /*0x7f06f3*/
        _sprintf(v28, "STLEAF%03i.pso", v9); /*0x7f0706*/
        result = CreatePixelShader(FileName, v11 + 1, "ps_1_3", v28, 0, 0);// Creates legacy STLEAF%03i.pso (ps_1_3). STLEAF000 has the same contract: r0.rgb=t0.rgb*t1.rgb; r0.a=t0.a. /*0x7f072d*/
        v16 = (volatile LONG *)*v10; /*0x7f0732*/
        v17 = (volatile LONG *)result; /*0x7f0734*/
        if ( *v10 != result ) /*0x7f0738*/
        {
          if ( v16 ) /*0x7f073c*/
          {
            result = (void *)InterlockedDecrement(v16 + 1); /*0x7f0742*/
            if ( !result ) /*0x7f074a*/
              result = (void *)(**(int (__thiscall ***)(void *, int))v16)((void *)v16, 1); /*0x7f0758*/
          }
          *v10 = (void *)v17; /*0x7f075c*/
          if ( v17 ) /*0x7f075e*/
            result = (void *)InterlockedIncrement(v17 + 1); /*0x7f0764*/
        }
      }
      else
      {
        v18 = (volatile LONG *)*v10; /*0x7f076c*/
        if ( *v10 ) /*0x7f076c*/
        {
          result = (void *)InterlockedDecrement(v18 + 1); /*0x7f0776*/
          if ( !result ) /*0x7f077e*/
          {
            if ( v18 ) /*0x7f0782*/
              result = (void *)(**(int (__thiscall ***)(void *, int))v18)((void *)v18, 1); /*0x7f078c*/
          }
          *v10 = 0; /*0x7f078e*/
        }
      }
      v9 = v23 + 1; /*0x7f0798*/
      v11 = (void **)(v21 + 0x13); /*0x7f079b*/
      ++v10; /*0x7f079e*/
      v8 = ++v23 < 2; /*0x7f07a1*/
      v21 += 0x13; /*0x7f07a8*/
    }
    while ( v8 ); /*0x7f07ac*/
  }
  else
  {
    v20 = v25; /*0x7f05f3*/
    do /*0x7f06cc*/
    {
      result = *v11; /*0x7f0600*/
      if ( *v11 ) /*0x7f0600*/
      {
        sub_801030((char *)result, (int)FileName); /*0x7f0613*/
        _sprintf(v28, "STLEAF2%03i.pso", v9); /*0x7f0626*/
        result = CreatePixelShader(FileName, v11 + 1, "ps_2_0", v28, 0, 0);// Creates modern STLEAF2%03i.pso (ps_2_0). Variant 0: out.rgb=sample(s0,t0).rgb*t1.rgb and out.a=sample.a. Variant 1 applies shader fog: lerp(litTexture.rgb,t2.rgb,t2.w), preserving sample alpha. /*0x7f064d*/
        v13 = (volatile LONG *)*v10; /*0x7f0652*/
        v14 = (volatile LONG *)result; /*0x7f0654*/
        if ( *v10 != result ) /*0x7f0658*/
        {
          if ( v13 ) /*0x7f065c*/
          {
            result = (void *)InterlockedDecrement(v13 + 1); /*0x7f0662*/
            if ( !result ) /*0x7f066a*/
              result = (void *)(**(int (__thiscall ***)(void *, int))v13)((void *)v13, 1); /*0x7f0678*/
          }
          *v10 = (void *)v14; /*0x7f067c*/
          if ( v14 ) /*0x7f067e*/
            result = (void *)InterlockedIncrement(v14 + 1); /*0x7f0684*/
        }
      }
      else
      {
        v15 = (volatile LONG *)*v10; /*0x7f068c*/
        if ( *v10 ) /*0x7f068c*/
        {
          result = (void *)InterlockedDecrement(v15 + 1); /*0x7f0696*/
          if ( !result ) /*0x7f069e*/
          {
            if ( v15 ) /*0x7f06a2*/
              result = (void *)(**(int (__thiscall ***)(void *, int))v15)((void *)v15, 1); /*0x7f06ac*/
          }
          *v10 = 0; /*0x7f06ae*/
        }
      }
      v9 = v23 + 1; /*0x7f06b8*/
      v11 = (void **)(v20 + 0x13); /*0x7f06bb*/
      ++v10; /*0x7f06be*/
      v8 = ++v23 < 2; /*0x7f06c1*/
      v20 += 0x13; /*0x7f06c8*/
    }
    while ( v8 ); /*0x7f06cc*/
  }
  return result; /*0x7f07b2*/
}
