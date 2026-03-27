ShaderDefinition *__cdecl GetShaderDefinition(unsigned int a1)
{
  ShaderDefinition *result; // eax

  if ( a1 > 0x1B )
    return 0;
  if ( *(_DWORD *)(4 * a1 + 0xB42EC0) )
    return *(ShaderDefinition **)(4 * a1 + 0xB42EC0);
  switch ( a1 )
  {
    case 1u:
      result = sub_7CBDC0();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 2u:
      result = sub_7E9840();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 3u:
      result = sub_8122A0();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 4u:
      GetShaderDefinition(1u);
      result = sub_810B90();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 5u:
      result = (ShaderDefinition *)sub_80EE10();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 6u:
      result = (ShaderDefinition *)sub_7F1410();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 7u:
      if ( ShaderPackage < 2 )
        result = (ShaderDefinition *)BlurshaderOld();
      else
        result = (ShaderDefinition *)BlurShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 8u:
      if ( !UseHDR )
        goto LABEL_16;
      result = (ShaderDefinition *)HdrShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      break;
    case 9u:
      result = (ShaderDefinition *)DebugShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0xAu:
      result = (ShaderDefinition *)SkyShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0xBu:
      if ( ShaderPackage < 2 )
        goto LABEL_16;
      result = (ShaderDefinition *)HitShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      break;
    case 0xCu:
      result = (ShaderDefinition *)CopyShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0xDu:
      result = HairShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0xEu:
      result = SkinShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0xFu:
      result = ParallaxShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0x10u:
      result = (ShaderDefinition *)GeometryDecalShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0x11u:
      result = (ShaderDefinition *)Watershader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0x12u:
      result = (ShaderDefinition *)NightEyeShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0x13u:
      result = (ShaderDefinition *)WaterShaderHeightMap();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0x14u:
      result = (ShaderDefinition *)WaterShaderDisplacement();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0x15u:
      if ( ShaderPackage < 2 )
        goto LABEL_16;
      result = RefractionShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      break;
    case 0x16u:
      result = ParticleShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0x17u:
      result = BoltShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0x18u:
      if ( ShaderPackage < 2 )
        goto LABEL_16;
      result = (ShaderDefinition *)MapShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      break;
    case 0x19u:
      result = (ShaderDefinition *)MenuBackGroundShader();
      *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      return result;
    case 0x1Au:
      if ( UsePS3Shaders )
      {
        result = (ShaderDefinition *)LighteningShaders_();
        *(_DWORD *)(4 * a1 + 0xB42EC0) = result;
      }
      else
      {
LABEL_16:
        *(_DWORD *)(4 * a1 + 0xB42EC0) = 0;
        result = 0;
      }
      break;
    case 0x1Bu:
      *(_DWORD *)(4 * a1 + 0xB42EC0) = PrecipShader_();
      return *(ShaderDefinition **)(4 * a1 + 0xB42EC0);
    default:
      return *(ShaderDefinition **)(4 * a1 + 0xB42EC0);
  }
  return result;
}
