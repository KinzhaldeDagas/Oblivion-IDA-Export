// [Verified] Selects and publishes the renderer shader-package version at RendererGlobalState+0xAF from adapter/version inputs and vendor prefix. The third argument is bForce1XShaders; when true and a shader version is available, the function forces package version 1. Argument maxPS20Instructions is the same value logged as maxPS20inst; ATI/NVIDIA paths choose versions 3–6 and set +0xC when it exceeds 0xFF. Fallback branches choose version 0/1 and clear HDR mode at +0x1D7. [Verified] +0xC gates Lighting30 definition 0x1A; [Probable] it represents shader-feature capability. This native selector emits versions 0–6 only; [Unknown] the writer/source of version 7, which the package-index switch handles, has not yet been identified.
int __cdecl SetShaderPackage(
        __int16 shaderCapsA,
        __int16 shaderCapsB,
        char bForce1XShaders,
        int adapterCaps,
        const char *adapterVendorPrefix,
        int maxPS20Instructions)
{
  int v6; // eax
  int v7; // edx
  int result; // eax
  int v9; // edx
  UInt32 v10; // [esp-4h] [ebp-8h]
  size_t v11; // [esp-4h] [ebp-8h]

  if ( HIBYTE(shaderCapsA) < 2u || HIBYTE(shaderCapsB) < 2u ) /*0x7b4605*/
  {
    if ( HIBYTE(shaderCapsA) && HIBYTE(shaderCapsB) ) /*0x7b46b6*/
    {
      *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le = 1; /*0x7b46bd*/
      OB_RendererGlobalState_010201A0.bHighDynamicRangeMode = 0;// [Verified] SetShaderPackage's reduced-capability branch clears RendererGlobalState+0x1D7 (HDR mode) and selects package version 1. /*0x7b46c3*/
      *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x9A] = 0xF; /*0x7b46ca*/
    }
    else
    {
      *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le = 0; /*0x7b46d8*/
      OB_RendererGlobalState_010201A0.bHighDynamicRangeMode = 0;// [Verified] SetShaderPackage's no-capability fallback clears RendererGlobalState+0x1D7 (HDR mode) and selects package version 0. /*0x7b46de*/
    }
LABEL_13:
    *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x9A] &= ~0x10u; /*0x7b4687*/
    goto LABEL_14; /*0x7b4687*/
  }
  *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le = 2; /*0x7b4615*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x9A] = 0x2F; /*0x7b461b*/
  if ( adapterCaps && adapterVendorPrefix ) /*0x7b462d*/
  {
    v10 = 3; /*0x7b462f*/
    if ( !_strnicmp(adapterVendorPrefix, byte_A3E274, *(size_t *)&v10) ) /*0x7b4637*/
    {
      v6 = maxPS20Instructions; /*0x7b4647*/
      v7 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le; /*0x7b464e*/
      if ( maxPS20Instructions > 96 ) /*0x7b4654*/
      {
        if ( v7 == 2 ) /*0x7b465d*/
        {
          v7 = 6; /*0x7b465f*/
          *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le = 6; /*0x7b4664*/
        }
        MEMORY[0xB42D74] = 6; /*0x7b466a*/
LABEL_10:
        if ( v6 > 255 ) /*0x7b4679*/
          OB_RendererGlobalState_010201A0.bLighting30ShaderEnabled = 1;// [Verified] On the ATI/vendor path, SetShaderPackage sets RendererGlobalState+0xC when maxPS20Instructions exceeds 0xFF; GetShaderDefinition uses this byte to permit Lighting30 definition 0x1A. /*0x7b467b*/
        goto LABEL_12; /*0x7b467b*/
      }
      if ( v7 == 2 ) /*0x7b46e9*/
      {
        v7 = 4; /*0x7b46eb*/
        *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le = 4; /*0x7b46f0*/
      }
      MEMORY[0xB42D74] = 6; /*0x7b46f6*/
      goto LABEL_12; /*0x7b4700*/
    }
    LODWORD(v11) = 2; /*0x7b4702*/
    if ( !_strnicmp(adapterVendorPrefix, "nv", v11) ) /*0x7b470a*/
    {
      v6 = maxPS20Instructions; /*0x7b4716*/
      v7 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le; /*0x7b471d*/
      if ( maxPS20Instructions > 96 ) /*0x7b4723*/
      {
        if ( v7 == 2 ) /*0x7b4728*/
        {
          v7 = 5; /*0x7b472a*/
          *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le = 5; /*0x7b472f*/
        }
        MEMORY[0xB42D74] = 5; /*0x7b4735*/
        goto LABEL_10;                          // [Verified] On the NVIDIA/vendor path, SetShaderPackage reaches the same maxPS20Instructions > 0xFF check and sets RendererGlobalState+0xC, the Lighting30 definition gate. /*0x7b473f*/
      }
      if ( v7 == 2 ) /*0x7b4747*/
      {
        v7 = 3; /*0x7b4749*/
        *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le = 3; /*0x7b474e*/
      }
      MEMORY[0xB42D74] = 5; /*0x7b4754*/
LABEL_12:
      if ( v7 >= 2 ) /*0x7b4685*/
        goto LABEL_14; /*0x7b4685*/
      goto LABEL_13; /*0x7b4685*/
    }
    *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le = 2; /*0x7b4768*/
    MEMORY[0xB42D74] = 2; /*0x7b476e*/
  }
LABEL_14:
  result = UpdateDisplayDebugFlagsForShaderPackageVersion();// [Verified] SetShaderPackage calls UpdateDisplayDebugFlagsForShaderPackageVersion after selecting the renderer package version; it synchronizes the display-debug flag word with the selected version. /*0x7b468e*/
  if ( bForce1XShaders ) /*0x7b469d*/
  {
    if ( v9 ) /*0x7b46a1*/
      *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le = 1; /*0x7b46a3*/
  }
  return result; /*0x7b469c*/
}
