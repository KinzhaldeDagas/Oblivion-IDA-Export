// Oblivion Lighting30 type-0x1B light decode. Writes paired LightColor/LightData constants. The point/special flavor stores underlying light world position in LightData.xyz and light+0xF8 range/control in .w; selector 0x154/0x155 later applies rigid object-scale correction before SM3026.
// DX11 GPU-world verification 2026-10-01: current light rows start color B47008 and data B47018 with stride0x20, slot<20. Wrapper+0xFC distinguishes directional from point/special source. Color uses backing diffuse, dimmer (upper clamp1 in non-HDR), property dimmer and wrapper strength; wrapper+0xD8 supplies alpha. Point property dimmer<1 uses B3FA90 override. HDR directional scaling follows native enable/global factor. Null and unsupported sources must not be synthesized from prior shader-use masks. Full 1273-byte function retained as code contract.
// DX11 source-state audit 2026-10-01: writes all actual slots below20 before geometry setup. Color/data leaf helpers7FAB00/7FAAD0 independently enforce <=19 and write exactly one float4 at B47008/B47018 +20h*slot. Ordinary7FB6F0 later transforms only the declared directional/clamped-point prefix; written point slots above shader limit retain world XYZ and raw +F8 radius/control.
// DX11 integration boundary 2026-10-01: native LightColor c9/B47008 is distinct from the project G-buffer identity at DX11 constant-buffer slot b9 or an instanced record word. The new bulk deferred IDs are renderer-owned, one-based and scope-token validated; they are not Oblivion object IDs, native material members or native register semantics. Native c0..c39 values and pinned shader recipe identity still determine the resolve record.
void __cdecl sub_7EDCD0(int a1, int a2, float a3)
{
  int v3; // esi
  void (__thiscall ***v4)(_DWORD, int); // edi
  char v5; // bl
  double v6; // st7
  float v7; // edx
  float v8; // eax
  bool v9; // zf
  double v10; // st6
  float v11; // edx
  float v12; // eax
  double v13; // st6
  double v14; // st6
  float v15; // edx
  float v16; // eax
  float v17; // ecx
  double v18; // st7
  float v19; // edx
  double v20; // st7
  float v21; // eax
  double v22; // st2
  double v23; // st6
  double v24; // st3
  double v25; // st3
  char v26; // cl
  double v27; // st6
  float v28; // edx
  float v29; // ecx
  float v30; // edx
  int v31; // [esp+1Ch] [ebp-34h] BYREF
  float v32; // [esp+20h] [ebp-30h]
  NiPoint3 v33; // [esp+24h] [ebp-2Ch] BYREF
  float v34; // [esp+30h] [ebp-20h]
  NiPoint3 v35; // [esp+34h] [ebp-1Ch] BYREF
  float x; // [esp+40h] [ebp-10h]
  int y_low; // [esp+44h] [ebp-Ch]
  int z_low; // [esp+48h] [ebp-8h]
  float v39; // [esp+4Ch] [ebp-4h]

  if ( a1 < 0x14 ) /*0x7edcde*/
  {
    if ( !a2 ) /*0x7edcea*/
    {
      Lighting30Shader_WriteLightColorConstant((int *)a1, dword_B25AD0, dword_B25AD4, dword_B25AD8, dword_B25ADC); /*0x7edd15*/
      return; /*0x7edd24*/
    }
    v3 = *ShadowSceneLight_GetLightRef((_DWORD *)a2, &v31); /*0x7edd31*/
    if ( v31 ) /*0x7edd39*/
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v31; /*0x7edd3b*/
      if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) ) /*0x7edd41*/
        (**v4)(v4, 1); /*0x7edd57*/
    }
    v5 = *(_BYTE *)(a2 + 0xFC); /*0x7edd59*/
    v6 = a3; /*0x7edd5f*/
    if ( v5 ) /*0x7edd65*/
    {
      if ( !v3 ) /*0x7edf0f*/
      {
LABEL_28:
        v26 = OB_RendererGlobalState_010201A0[0x1D7]; /*0x7ee057*/
        v27 = *(float *)(v3 + 0xDC); /*0x7ee069*/
        if ( !OB_RendererGlobalState_010201A0[0x1D7] && v27 > dbl_A2F928 ) /*0x7ee07a*/
          v27 = (float)1.0; /*0x7ee084*/
        v28 = *(float *)(v3 + 0xF0); /*0x7ee090*/
        v35.x = *(float *)(v3 + 0xEC); /*0x7ee096*/
        v35.z = *(float *)(v3 + 0xF4); /*0x7ee0aa*/
        v35.x = v35.x * v27; /*0x7ee0ae*/
        v35.y = v28 * v27; /*0x7ee0c0*/
        v35.z = v27 * v35.z; /*0x7ee0d0*/
        v33.x = v35.x * v6; /*0x7ee0e2*/
        v33.y = v35.y * v6; /*0x7ee0ec*/
        v33.z = v35.z * v6; /*0x7ee0f6*/
        v32 = *(float *)(a2 + 0xD4); /*0x7ee100*/
        v33.x = v32 * v33.x; /*0x7ee10e*/
        v33.y = v32 * v33.y; /*0x7ee118*/
        v33.z = v32 * v33.z; /*0x7ee120*/
        if ( v5 ) /*0x7ee124*/
        {
          if ( v6 < 1.0 ) /*0x7ee12f*/
          {
            v29 = MEMORY[0xB3F9B0][0x39]; /*0x7ee136*/
            v30 = MEMORY[0xB3F9B0][0x3A]; /*0x7ee13c*/
            v33.x = MEMORY[0xB3F9B0][0x38]; /*0x7ee142*/
            v33.y = v29; /*0x7ee146*/
            v33.z = v30; /*0x7ee14a*/
          }
        }
        else if ( v26 ) /*0x7ee154*/
        {
          if ( !OB_RendererGlobalState_010201A0[0x1DB] ) /*0x7ee156*/
            NiPoint3::MutliplyByValue(&v33, *(float *)&OB_RendererGlobalState_010201A0[0xB3]); /*0x7ee16d*/
        }
        x = v33.x; /*0x7ee179*/
        y_low = SLODWORD(v33.y); /*0x7ee187*/
        z_low = SLODWORD(v33.z); /*0x7ee195*/
        Lighting30Shader_WriteLightColorConstant( /*0x7ee1b9*/
          (int *)a1,
          SLODWORD(v33.x),
          SLODWORD(v33.y),
          SLODWORD(v33.z),
          COERCE_INT(*(float *)(a2 + 0xD8)));   // Write LightColor from underlying light RGB, dimmer/property factors, and ShadowSceneLight+0xD8 alpha/strength.
        return; /*0x7ee1b9*/
      }
      v15 = *(float *)(v3 + 0x8C); /*0x7edf1d*/
      v16 = *(float *)(v3 + 0x90); /*0x7edf23*/
      v35.x = *(float *)(v3 + 0x88); /*0x7edf29*/
      v17 = *(float *)(v3 + 0xF8); /*0x7edf31*/
      x = v35.x; /*0x7edf37*/
      v35.y = v15; /*0x7edf3b*/
      v18 = v15; /*0x7edf3f*/
      v19 = *(float *)(v3 + 0xFC); /*0x7edf43*/
      *(float *)&y_low = v18; /*0x7edf49*/
      v35.z = v16; /*0x7edf4d*/
      v20 = v16; /*0x7edf51*/
      v21 = *(float *)(v3 + 0x100); /*0x7edf55*/
      *(float *)&z_low = v20; /*0x7edf5b*/
      v33.x = v17; /*0x7edf5f*/
      v39 = v17; /*0x7edf6b*/
      v33.z = v21; /*0x7edf6f*/
      v33.y = v19; /*0x7edf7e*/
      Lighting30Shader_WriteLightDataConstant(a1, SLODWORD(v35.x), y_low, z_low, SLODWORD(v17));// Point/special type-0x1B flavor writes light world position to LightData.xyz and underlying NiLight+0xF8 range/control to LightData.w. /*0x7edf98*/
    }
    else
    {
      if ( v3 ) /*0x7edd6d*/
      {
        v7 = *(float *)(v3 + 0x10C); /*0x7edd77*/
        v8 = *(float *)(v3 + 0x110); /*0x7edd7d*/
        v35.x = *(float *)(v3 + 0x108); /*0x7edd83*/
        v35.y = v7; /*0x7edd8b*/
        v35.z = v8; /*0x7edd8f*/
        Vector3_NormalizeInPlace(&v35.x); /*0x7edd93*/
        v33.x = v35.x; /*0x7edda1*/
        v33.y = v35.y; /*0x7eddaf*/
        v33.z = v35.z; /*0x7eddbd*/
        v34 = 1.0; /*0x7eddca*/
        Lighting30Shader_WriteLightDataConstant(a1, SLODWORD(v35.x), SLODWORD(v35.y), SLODWORD(v35.z), COERCE_INT(1.0));// Directional flavor writes normalized light direction and w=1 to LightData. /*0x7edddd*/
        v6 = a3; /*0x7edde2*/
      }
      if ( !OB_RendererGlobalState_010201A0[0xE] ) /*0x7eddf0*/
        goto LABEL_13; /*0x7eddf0*/
      if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB3F9B0][0x21D], (NiObject *)v3) ) /*0x7eddfa*/
      {
        v6 = a3; /*0x7ede0a*/
LABEL_13:
        v9 = OB_RendererGlobalState_010201A0[0x1D7] == 0; /*0x7ede0e*/
        v32 = OB_ShaderConstantStorage_010201A0[0x2C4]; /*0x7ede1b*/
        v10 = *(float *)(v3 + 0xDC); /*0x7ede29*/
        if ( v9 && v10 > dbl_A2F928 ) /*0x7ede3a*/
          v10 = (float)1.0; /*0x7ede44*/
        v11 = *(float *)(v3 + 0xE4); /*0x7ede4e*/
        v12 = *(float *)(v3 + 0xE8); /*0x7ede54*/
        v33.x = *(float *)(v3 + 0xE0); /*0x7ede5a*/
        v33.x = v33.x * v10; /*0x7ede6c*/
        v33.y = v11 * v10; /*0x7ede76*/
        v33.z = v10 * v12; /*0x7ede7e*/
        if ( v32 > 0.0 ) /*0x7ede8d*/
        {
          v32 = dbl_A924F0 + v33.x * dbl_A924F0 + dbl_A924F8 * v33.y + v33.z; /*0x7edebf*/
          v13 = v32; /*0x7edecb*/
          if ( v32 > 0.0 ) /*0x7eded0*/
          {
            v22 = OB_ShaderConstantStorage_010201A0[0x2C4]; /*0x7edfa5*/
            if ( v22 >= v13 ) /*0x7edfb2*/
            {
              v24 = v22 / v13; /*0x7edfbe*/
              v23 = v33.x; /*0x7edfbe*/
            }
            else
            {
              v23 = v33.x; /*0x7edfb6*/
              v24 = 1.0; /*0x7edfb8*/
            }
            v32 = v24; /*0x7edfc0*/
            v25 = dbl_A2FC80; /*0x7edfc4*/
            v35.x = (v23 + v25) * v32; /*0x7edfd6*/
            v35.y = (v33.y + v25) * v32; /*0x7edfe2*/
            v14 = v32 * (v25 + v33.z); /*0x7edfe8*/
          }
          else
          {
            v14 = OB_ShaderConstantStorage_010201A0[0x2C4]; /*0x7edede*/
            v35.x = v14; /*0x7edee4*/
            v35.y = v14; /*0x7edee8*/
          }
          v35.z = v14; /*0x7edef0*/
          v33 = v35; /*0x7edefc*/
        }
        v33.x = v33.x * v6; /*0x7edffc*/
        v33.y = v33.y * v6; /*0x7ee006*/
        v33.z = v6 * v33.z; /*0x7ee00e*/
        x = v33.x; /*0x7ee016*/
        y_low = SLODWORD(v33.y); /*0x7ee024*/
        z_low = SLODWORD(v33.z); /*0x7ee033*/
        v39 = 1.0; /*0x7ee040*/
        Lighting30Shader_WritePixelConstantC0(SLODWORD(v33.x), SLODWORD(v33.y), SLODWORD(v33.z), COERCE_INT(1.0)); /*0x7ee04b*/
      }
    }
    v6 = a3; /*0x7ee053*/
    goto LABEL_28; /*0x7ee053*/
  }
}
