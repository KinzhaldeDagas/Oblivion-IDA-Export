void __thiscall sub_8451B0(NiTArray_NiD3DPass *this, float *a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v7; // edi
  bool v8; // zf
  float *v9; // ecx
  double v10; // st7
  ShadowSceneLight *FirstActiveNonShadowLight; // eax
  float v12; // edx
  float v13; // eax
  float v14; // ecx
  ShadowSceneLight *v15; // eax
  float v16; // eax
  float v17; // ecx
  UInt32 Stage; // ebp
  int v19; // eax
  int v20; // ebx
  NiTexture *Texture; // ebp
  UInt32 m_uiRefCount; // ebx
  float v23; // eax
  float v24; // [esp+14h] [ebp-24h]
  int v25; // [esp+14h] [ebp-24h]
  float v26; // [esp+18h] [ebp-20h]
  float v27; // [esp+3Ch] [ebp+4h]
  float v28; // [esp+3Ch] [ebp+4h]

  v7 = (NiD3DPass *)unk_B45BBC; /*0x8451e5*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, float *, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, a2, 0, 0); /*0x8451f0*/
  v8 = unk_B42CE3 == 0; /*0x8451f5*/
  v9 = (float *)value; /*0x845207*/
  v27 = a2[8] - MEMORY[0xB3F92C]; /*0x84520b*/
  v24 = a2[9] - unk_B3F930; /*0x845218*/
  v26 = a2[0xA] - unk_B3F934; /*0x845225*/
  v10 = v27; /*0x845229*/
  v28 = flt_B43110[1]; /*0x84522d*/
  unk_B44F28 = v10; /*0x845231*/
  unk_B44F2C = v24; /*0x84523b*/
  unk_B44F30 = v26; /*0x845245*/
  if ( v8 ) /*0x84524b*/
  {
    flt_B464A0[1] = v9[0x29] * flt_B464A0[1]; /*0x845259*/
    FirstActiveNonShadowLight = BSShaderLightingProperty__GetFirstActiveNonShadowLight(v9); /*0x84525f*/
    if ( !FirstActiveNonShadowLight || !*((_BYTE *)FirstActiveNonShadowLight + 0xFC) ) /*0x845268*/
    {
      v12 = flt_B4649C; /*0x84527b*/
      v13 = flt_B464A0[0]; /*0x845281*/
      LODWORD(flt_B464A0[2]) = unk_B46498; /*0x845286*/
      v14 = flt_B464A0[1]; /*0x84528c*/
      flt_B464A0[3] = v12; /*0x845292*/
      flt_B464A0[4] = v13; /*0x845298*/
      flt_B464A0[5] = v14; /*0x84529d*/
    }
  }
  else
  {
    v15 = BSShaderLightingProperty__GetFirstActiveNonShadowLight(v9); /*0x8452a5*/
    if ( !v15 || !*((_BYTE *)v15 + 0xFC) ) /*0x8452ae*/
    {
      v16 = kHeadBodyNormalMatchRadius; /*0x8452c9*/
      v17 = kHeadBodyNormalMatchRadius; /*0x8452d1*/
      flt_B464A0[2] = kHeadBodyNormalMatchRadius; /*0x8452d7*/
      flt_B464A0[3] = v16; /*0x8452e1*/
      flt_B464A0[4] = v17; /*0x8452ea*/
      flt_B464A0[5] = 1.0; /*0x8452f0*/
    }
  }
  Stage = v7->Stages.data->Stage; /*0x8452fd*/
  v19 = sub_848FD0(value, 0); /*0x845304*/
  v20 = *(_DWORD *)(Stage + 4); /*0x845309*/
  v25 = v19; /*0x84530e*/
  if ( v20 != v19 ) /*0x845312*/
  {
    if ( v20 ) /*0x845316*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x84531c*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x845332*/
      v19 = v25; /*0x845334*/
    }
    *(_DWORD *)(Stage + 4) = v19; /*0x84533a*/
    if ( v19 ) /*0x84533d*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x845343*/
  }
  sub_848FA0((_DWORD **)Stage, (int)value); /*0x845351*/
  Texture = v7->Stages.data->Texture; /*0x845359*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x84535c*/
  v23 = v28; /*0x84535f*/
  if ( m_uiRefCount != LODWORD(v28) ) /*0x845365*/
  {
    if ( m_uiRefCount ) /*0x845369*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x84536f*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x845385*/
      v23 = v28; /*0x845387*/
    }
    *(float *)&Texture->members.super.super.m_uiRefCount = v23; /*0x84538d*/
    if ( v23 != 0.0 ) /*0x845390*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v23) + 4)); /*0x845396*/
  }
  ++v7->RefCount; /*0x8453a1*/
  value = v7; /*0x8453a4*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x8453bc*/
  v8 = v7->RefCount-- == 1; /*0x8453c4*/
  if ( v8 ) /*0x8453cb*/
    NiD3DPass_ReleaseToPool(v7); /*0x8453cf*/
  ++*((_DWORD *)this + 0xE); /*0x8453d4*/
}
