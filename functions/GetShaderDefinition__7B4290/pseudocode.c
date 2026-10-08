//
// [2026-10-03 frond readiness] Nonzero cached definition is returned unconditionally at7B42A0/7B449B. Native factory returning an object therefore does not establish complete programs. Plugin shader5 attachment now requires declaration capacity8/stream1, frond vtable, constant map/c12 binding, four VS wrappers with D3D handles+30, two PS wrappers with handles+28, and pass+94 with three populated stages. Incomplete cached definitions are rejected; map absence is only a new-creation prerequisite.
ShaderDefinition *__cdecl GetShaderDefinition(unsigned int a1)
{
  ShaderDefinition *result; // eax

  if ( a1 > 0x1B ) /*0x7b4298*/
    return 0; /*0x7b44a4*/
  if ( *(_DWORD *)(4 * a1 + 0xB42EC0) ) /*0x7b42a0*/
    return *(ShaderDefinition **)(4 * a1 + 0xB42EC0); /*0x7b449b*/
  switch ( a1 ) /*0x7b42b9*/
  {
    case 1u: /*0x7b42b9*/
      result = sub_7CBDC0(); /*0x7b42c0*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b42c5*/
      return result; /*0x7b42cd*/
    case 2u: /*0x7b42b9*/
      result = sub_7E9840(); /*0x7b42ce*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b42d3*/
      return result; /*0x7b42db*/
    case 3u: /*0x7b42b9*/
      result = sub_8122A0(); /*0x7b42dc*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b42e1*/
      return result; /*0x7b42e9*/
    case 4u: /*0x7b42b9*/
      GetShaderDefinition(1u); /*0x7b42ec*/
      result = OB_CreateSpeedTreeBranchShaderDefinition_010201A0(); /*0x7b42f4*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b42f9*/
      return result; /*0x7b4301*/
    case 5u: /*0x7b42b9*/
      result = OB_SpeedTreeFrondShader_CreateDefinition_010201A0(); /*0x7b4302*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b4307*/
      return result; /*0x7b430f*/
    case 6u: /*0x7b42b9*/
      result = (ShaderDefinition *)OB_CreateSpeedTreeLeafShaderDefinition_010201A0(); /*0x7b4310*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b4315*/
      return result; /*0x7b431d*/
    case 7u: /*0x7b42b9*/
      if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7b4325*/
        result = (ShaderDefinition *)BlurshaderOld(); /*0x7b4335*/
      else
        result = (ShaderDefinition *)BlurShader(); /*0x7b4327*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b432c*/
      return result; /*0x7b4334*/
    case 8u: /*0x7b42b9*/
      if ( !OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7b4349*/
        goto LABEL_16;                          // [Verified] GetShaderDefinition creates the HDRShader definition (ID 8) only when RendererGlobalState+0x1D7 is nonzero; this independently confirms the field's HDR-mode behavior. /*0x7b4349*/
      result = (ShaderDefinition *)HdrShader(); /*0x7b434b*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b4350*/
      break; /*0x7b4358*/
    case 9u: /*0x7b42b9*/
      result = (ShaderDefinition *)DebugShader(); /*0x7b4364*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b4369*/
      return result; /*0x7b4371*/
    case 0xAu: /*0x7b42b9*/
      result = (ShaderDefinition *)SkyShader(); /*0x7b4372*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b4377*/
      return result; /*0x7b437f*/
    case 0xBu: /*0x7b42b9*/
      if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7b4387*/
        goto LABEL_16; /*0x7b4387*/
      result = (ShaderDefinition *)HitShader(); /*0x7b4389*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b438e*/
      break; /*0x7b4396*/
    case 0xCu: /*0x7b42b9*/
      result = (ShaderDefinition *)CopyShader(); /*0x7b443e*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b4443*/
      return result; /*0x7b444b*/
    case 0xDu: /*0x7b42b9*/
      result = HairShader(); /*0x7b4397*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b439c*/
      return result; /*0x7b43a4*/
    case 0xEu: /*0x7b42b9*/
      result = SkinShader(); /*0x7b43a5*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b43aa*/
      return result; /*0x7b43b2*/
    case 0xFu: /*0x7b42b9*/
      result = ParallaxShader(); /*0x7b43b3*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b43b8*/
      return result; /*0x7b43c0*/
    case 0x10u: /*0x7b42b9*/
      result = GeometryDecalShader(); /*0x7b43c1*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b43c6*/
      return result; /*0x7b43ce*/
    case 0x11u: /*0x7b42b9*/
      result = (ShaderDefinition *)Watershader(); /*0x7b43cf*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b43d4*/
      return result; /*0x7b43dc*/
    case 0x12u: /*0x7b42b9*/
      result = (ShaderDefinition *)NightEyeShader(); /*0x7b43dd*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b43e2*/
      return result; /*0x7b43ea*/
    case 0x13u: /*0x7b42b9*/
      result = (ShaderDefinition *)WaterShaderHeightMap(); /*0x7b43eb*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b43f0*/
      return result; /*0x7b43f8*/
    case 0x14u: /*0x7b42b9*/
      result = (ShaderDefinition *)WaterShaderDisplacement(); /*0x7b43f9*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b43fe*/
      return result; /*0x7b4406*/
    case 0x15u: /*0x7b42b9*/
      if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7b440e*/
        goto LABEL_16; /*0x7b440e*/
      result = RefractionShader(); /*0x7b4414*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b4419*/
      break; /*0x7b4421*/
    case 0x16u: /*0x7b42b9*/
      result = ParticleShader(); /*0x7b4422*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b4427*/
      return result; /*0x7b442f*/
    case 0x17u: /*0x7b42b9*/
      result = BoltShader(); /*0x7b4430*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b4435*/
      return result; /*0x7b443d*/
    case 0x18u: /*0x7b42b9*/
      if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7b4453*/
        goto LABEL_16; /*0x7b4453*/
      result = (ShaderDefinition *)MapShader(); /*0x7b4459*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b445e*/
      break; /*0x7b4466*/
    case 0x19u: /*0x7b42b9*/
      result = (ShaderDefinition *)MenuBackGroundShader(); /*0x7b4467*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b446c*/
      return result; /*0x7b4474*/
    case 0x1Au: /*0x7b42b9*/
      if ( OB_RendererGlobalState_010201A0[0xC] )// [Verified] RendererGlobalState+0xC gates creation of ShaderDefinition ID 0x1A (Lighting30); the same byte changes package variants in GetShaderProgramPackageIndex. [Unknown] Its originating setting/configuration name is not established. /*0x7b4475*/
      {
        result = Lighting30ShaderDefinition_Create();// Create the concrete Lighting30 ShaderDefinition and Lighting30Shader for definition ID 0x1A. /*0x7b4481*/
        *(_DWORD *)(4 * a1 + 0xB42EC0) = result; /*0x7b4486*/
      }
      else
      {
LABEL_16:
        *(_DWORD *)(4 * a1 + 0xB42EC0) = 0; /*0x7b4359*/
        result = 0; /*0x7b4360*/
      }
      break; /*0x7b448e*/
    case 0x1Bu: /*0x7b42b9*/
      *(_DWORD *)(4 * a1 + 0xB42EC0) = PrecipShader_(); /*0x7b4494*/
      return *(ShaderDefinition **)(4 * a1 + 0xB42EC0); /*0x7b4494*/
    default:
      return *(ShaderDefinition **)(4 * a1 + 0xB42EC0);
  }
  return result; /*0x7b42cc*/
}
