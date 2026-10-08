// NiTransformInterpolator virtual transform update (+0x4C). Returns cached 0x20-byte transform when time equals +0x08; otherwise evaluates translation, rotation, and scale tracks from data +0x2C, maintaining key cursors at +0x30/+0x32/+0x34, updates cached transform +0x0C, copies it to the caller, and caches time only when the transform is valid.
bool __thiscall NiTransformInterpolator_Update(int this, float a2, int a3, void *a4)
{
  double v5; // st7
  int v7; // eax
  int v8; // esi
  char v9; // cl
  int v10; // edi
  int v11; // eax
  float *v12; // eax
  int v13; // eax
  int v14; // esi
  char v15; // dl
  int v16; // edi
  int v17; // eax
  float *v18; // eax
  int v19; // eax
  int v20; // esi
  char v21; // cl
  int v22; // edi
  float *v23; // eax
  float v24; // [esp+0h] [ebp-3Ch]
  float v25; // [esp+0h] [ebp-3Ch]
  float v26; // [esp+14h] [ebp-28h]
  int v27; // [esp+24h] [ebp-18h] BYREF
  char v28[4]; // [esp+28h] [ebp-14h]
  int v29[4]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = a2; /*0x6d60c5*/
  if ( a2 == *(float *)(this + 8) ) /*0x6d60ca*/
  {
    qmemcpy(a4, (const void *)(this + 0xC), 0x20u); /*0x6d60dc*/
    return !NiTransform_IsInvalid((float *)(this + 0xC)); /*0x6d60e9*/
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x2C); /*0x6d60f3*/
    if ( v7 ) /*0x6d60f8*/
    {
      v8 = *(unsigned __int16 *)(v7 + 0xA); /*0x6d60fa*/
      v9 = *(_BYTE *)(v7 + 0x1D); /*0x6d6100*/
      v10 = *(_DWORD *)(v7 + 0x14); /*0x6d6103*/
      v11 = *(_DWORD *)(v7 + 0x24); /*0x6d6106*/
      v28[0] = v9; /*0x6d6109*/
      if ( v8 ) /*0x6d610d*/
      {
        v27 = *(unsigned __int16 *)(this + 0x30); /*0x6d6118*/
        v12 = (float *)NiPosKey_EvaluateTrack(v29, a2, v11, v10, v8, &v27, v28[0]); /*0x6d612d*/
        sub_471390((_DWORD *)(this + 0xC), v12); /*0x6d6139*/
        v5 = a2; /*0x6d613e*/
        *(_WORD *)(this + 0x30) = v27; /*0x6d6147*/
      }
    }
    v13 = *(_DWORD *)(this + 0x2C); /*0x6d614b*/
    if ( v13 ) /*0x6d6150*/
    {
      v14 = *(unsigned __int16 *)(v13 + 8); /*0x6d6152*/
      v15 = *(_BYTE *)(v13 + 0x1C); /*0x6d6158*/
      v16 = *(_DWORD *)(v13 + 0x10); /*0x6d615b*/
      v17 = *(_DWORD *)(v13 + 0x20); /*0x6d615e*/
      v28[0] = v15; /*0x6d6161*/
      if ( v14 ) /*0x6d6165*/
      {
        v27 = *(unsigned __int16 *)(this + 0x32); /*0x6d6170*/
        v24 = v5; /*0x6d6181*/
        v18 = (float *)NiRotKey_EvaluateTrack(v29, v24, v17, v16, v14, &v27, v28[0]); /*0x6d6185*/
        sub_471430((_DWORD *)(this + 0xC), v18); /*0x6d6191*/
        v5 = a2; /*0x6d6196*/
        *(_WORD *)(this + 0x32) = v27; /*0x6d619f*/
      }
    }
    v19 = *(_DWORD *)(this + 0x2C); /*0x6d61a3*/
    if ( v19 ) /*0x6d61a8*/
    {
      v20 = *(unsigned __int16 *)(v19 + 0xC); /*0x6d61aa*/
      v21 = *(_BYTE *)(v19 + 0x1E); /*0x6d61b0*/
      v22 = *(_DWORD *)(v19 + 0x18); /*0x6d61b3*/
      v23 = *(float **)(v19 + 0x28); /*0x6d61b6*/
      v28[0] = v21; /*0x6d61b9*/
      if ( v20 ) /*0x6d61bd*/
      {
        v27 = *(unsigned __int16 *)(this + 0x34); /*0x6d61c8*/
        v25 = v5; /*0x6d61d5*/
        v26 = NiFloatKey_EvaluateTrack(v25, v23, v22, v20, &v27, v28[0]); /*0x6d61e3*/
        sub_471560((float *)(this + 0xC), v26); /*0x6d61e6*/
        *(_WORD *)(this + 0x34) = v27; /*0x6d61f0*/
      }
    }
    qmemcpy(a4, (const void *)(this + 0xC), 0x20u); /*0x6d6206*/
    if ( NiTransform_IsInvalid((float *)(this + 0xC)) ) /*0x6d620a*/
    {
      return 0; /*0x6d6215*/
    }
    else
    {
      *(float *)(this + 8) = a2; /*0x6d6224*/
      return 1; /*0x6d6227*/
    }
  }
}
