// Recursively traverse a receiver tree while preserving ShadowSceneLight active-plane mask +0x1B0; accepted geometry reaches AssociateReceiverGeometry.
char __thiscall ShadowSceneLight_UpdateLightingProperty(int this, float *a2)
{
  int v4; // eax
  int v5; // esi
  unsigned int v6; // edi
  int v7; // eax
  float *v8; // eax
  float *v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // [esp+4h] [ebp-4h]

  if ( !*(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] ) /*0x7d59e1*/
    return 0; /*0x7d59f1*/
  v12 = *(_DWORD *)(this + 0x1B0); /*0x7d59ff*/
  if ( !ShadowSceneLight_TestReceiverEligibility((char *)this, a2, *(float **)(this + 0x100)) ) /*0x7d5a12*/
    goto LABEL_19;                              // Receiver traversal consumes the current native projector-plane/range state before shadow-map rendering. /*0x7d5a12*/
  v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 8))(a2); /*0x7d5a20*/
  v5 = v4; /*0x7d5a22*/
  if ( !v4 ) /*0x7d5a26*/
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 0x10))(a2) ) /*0x7d5aea*/
    {
      v11 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 0x10))(a2); /*0x7d5af7*/
      ShadowSceneLight_AssociateReceiverGeometry((_DWORD *)this, v11); /*0x7d5afc*/
    }
    goto LABEL_19; /*0x7d5afc*/
  }
  v6 = 0; /*0x7d5a33*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4) == (_DWORD)&MEMORY[0xB3F9B0][0xF0] ? v4 : 0;
  if ( v7 ) /*0x7d5a45*/
  {
    v8 = (float *)sub_7C59E0(v7); /*0x7d5a49*/
    v9 = v8; /*0x7d5a4e*/
    if ( v8 && sub_49FFC0(v8) && ((_BYTE)v9[6] & 1) == 0 ) /*0x7d5a6b*/
    {
      ShadowSceneLight_UpdateLightingProperty(this, v9); /*0x7d5a74*/
      *(_DWORD *)(this + 0x1B0) = v12; /*0x7d5a7f*/
      return 1; /*0x7d5a89*/
    }
    goto LABEL_19; /*0x7d5a6b*/
  }
  if ( !*(_WORD *)(v5 + 0xB6) ) /*0x7d5a95*/
  {
LABEL_19:
    *(_DWORD *)(this + 0x1B0) = v12; /*0x7d5b02*/
    return 1; /*0x7d5b0d*/
  }
  do /*0x7d5ace*/
  {
    v10 = *(_DWORD *)(*(_DWORD *)(v5 + 0xB0) + 4 * v6); /*0x7d5aa1*/
    if ( v10 ) /*0x7d5aa6*/
    {
      if ( 0.0 != *(float *)(v10 + 0x2C) && (*(_BYTE *)(v10 + 0x18) & 1) == 0 ) /*0x7d5ab8*/
        ShadowSceneLight_UpdateLightingProperty(this, *(float **)(*(_DWORD *)(v5 + 0xB0) + 4 * v6)); /*0x7d5abd*/
    }
    ++v6; /*0x7d5ac9*/
  }
  while ( *(unsigned __int16 *)(v5 + 0xB6) > v6 ); /*0x7d5ace*/
  *(_DWORD *)(this + 0x1B0) = v12; /*0x7d5ad6*/
  return 1; /*0x7d59ef*/
}
