// Resolve NiTexture to D3D texture and report render-data creation, actual mip-count>1, and NPOT/special dimensions.
// DX11 GPU-world verified 2026-09-30: texture+24 renderer-data; source table A883C4, rendered table A88464. Width/height accessors read data+54/+58; NPOT true for zero or non-power-of-two dimensions. Rendered +18 identity branch returns GetTexture early with hasMultipleMipLevels still false, regardless of stored levels. Ordinary source +18/+20 return zero, +1C returns this; data+50 nonnull AND texture+40 nonzero skips upload. Otherwise source creation/upload side effects require a separate publication path. Ordinary mip count data+5C >1 only after source branch. Captured COM association is not lifetime ownership.
// DX11 additional classes verified 2026-09-30: NiDX9DynamicTextureData table A8A92C: +18 returns0, +20 returns this; resolver then returns GetTexture early with hasMultipleMipLevels still0. Base NiDX9TextureData table A89F54: +18,+20,+1C all return0; no upload path, reads levels+5C then returns texture+50, including null. Neither branch reads source texture flag+40. Both share width+54, height+58, texture+50 accessors. Code and dispatch checked before capture; COM lifetime remains separate.
// DX11 independent ordinary texture resources 2026-09-30: rechecked77AC90 against its existing resident source/rendered/dynamic/base profiles. A fresh property-selected NiTexture may be resolved from texture+24/data+50 without consulting old stage+4. Source requires nonnull native backing and texture+40 upload-current flag; otherwise native creation/upload remains an explicit unsatisfied obligation. Native association capture and DX11 publication/lifetime acquisition must be separate; neither observing data+50 nor holding a DX11 view proves the NiTexture association remains current across scene mutations.
void *__thiscall OB_NiDX9TextureManager_ResolveTextureForStage_010201A0(
        void *this,
        void *texture,
        unsigned __int8 *renderDataCreated,
        unsigned __int8 *hasMultipleMipLevels,
        unsigned __int8 *needsNPOTFallback)
{
  _RTL_CRITICAL_SECTION_0 *p_SourceDataCriticalSection; // edi
  DWORD CurrentThreadId; // eax
  NiDX9SourceTextureData *v9; // esi
  NiSourceTexture *v10; // eax
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  unsigned __int8 v14; // al
  int v15; // eax
  int v16; // edi

  *renderDataCreated = 0; /*0x77aca6*/
  *hasMultipleMipLevels = 0; /*0x77aca9*/
  *needsNPOTFallback = 0; /*0x77acac*/
  if ( !texture ) /*0x77acaf*/
    return 0; /*0x77acb5*/
  p_SourceDataCriticalSection = (_RTL_CRITICAL_SECTION_0 *)&renderer->member.super.SourceDataCriticalSection; /*0x77acbf*/
  EnterCriticalSection(p_SourceDataCriticalSection); /*0x77acc6*/
  CurrentThreadId = GetCurrentThreadId(); /*0x77accc*/
  ++HIDWORD(p_SourceDataCriticalSection[3].SpinCount); /*0x77acd2*/
  LODWORD(p_SourceDataCriticalSection[3].SpinCount) = CurrentThreadId; /*0x77acd6*/
  v9 = *((NiDX9SourceTextureData **)texture + 9); /*0x77acd9*/
  if ( v9 ) /*0x77acde*/
    goto LABEL_6; /*0x77acde*/
  v10 = (NiSourceTexture *)NiRTTI_Cast((BSStringT *)stru_B3F95C, (NiObject *)texture); /*0x77ace6*/
  if ( v10 ) /*0x77acf0*/
  {
    v9 = OB_NiDX9SourceTextureData_CreateFromSourceTexture_010201A0(v10, *((NiDX9Renderer **)this + 3)); /*0x77ad03*/
    *renderDataCreated = 1; /*0x77ad05*/
LABEL_6:
    v11 = HIDWORD(p_SourceDataCriticalSection[3].SpinCount)-- == 1; /*0x77ad08*/
    if ( v11 ) /*0x77ad0c*/
      LODWORD(p_SourceDataCriticalSection[3].SpinCount) = 0; /*0x77ad0e*/
    LeaveCriticalSection(p_SourceDataCriticalSection); /*0x77ad16*/
    v12 = (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 1))(v9); /*0x77ad23*/
    v14 = 1; /*0x77ad6f*/
    if ( v12 ) /*0x77ad27*/
    {
      if ( ((v12 - 1) & v12) == 0 ) /*0x77ad33*/
      {
        v13 = (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 2))(v9); /*0x77ad3c*/
        if ( v13 ) /*0x77ad40*/
        {
          if ( ((v13 - 1) & v13) == 0 ) /*0x77ad4c*/
            v14 = 0; /*0x77ad27*/
        }
      }
    }
    *needsNPOTFallback = v14;                   // Resolver output needsNPOTFallback is true when width or height is zero/non-power-of-two; false only when both dimensions are nonzero powers of two. /*0x77ad75*/
    v15 = (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 6))(v9); /*0x77ad7e*/
    if ( v15 ) /*0x77ad82*/
      return (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x14))(v15); /*0x77ad82*/
    v15 = (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 8))(v9); /*0x77ad8b*/
    if ( v15 ) /*0x77ad8f*/
      return (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x14))(v15); /*0x77ad98*/
    v16 = (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 7))(v9); /*0x77adaa*/
    if ( v16 ) /*0x77adae*/
    {
      if ( (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 5))(v9) ) /*0x77adb7*/
      {
        if ( !*((_BYTE *)texture + 0x40) ) /*0x77adcf*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 0x28))(v16); /*0x77addc*/
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 0x28))(v16); /*0x77adc4*/
        *renderDataCreated = 1; /*0x77adca*/
      }
    }
    *hasMultipleMipLevels = (unsigned int)(*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 4))(v9) > 1;// Resolver output hasMultipleMipLevels is exact underlying texture level-count > 1. /*0x77adf1*/
    return (void *)(*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 5))(v9); /*0x77ad9e*/
  }
  v11 = HIDWORD(p_SourceDataCriticalSection[3].SpinCount)-- == 1; /*0x77ad52*/
  if ( v11 ) /*0x77ad56*/
    LODWORD(p_SourceDataCriticalSection[3].SpinCount) = 0; /*0x77ad58*/
  LeaveCriticalSection(p_SourceDataCriticalSection); /*0x77ad60*/
  return 0; /*0x77acb1*/
}
