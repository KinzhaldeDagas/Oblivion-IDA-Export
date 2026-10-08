// jumptable 007CB36B default case
// jumptable 007CB3E9 default case
int __usercall def_7CB36B@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3,
        __int16 a4,
        int a5,
        float a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        float a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        float value,
        int a27,
        float a28)
{
  NiD3DPass *v28; // ecx
  double v29; // st7
  NiD3DPass *v30; // ecx
  int v31; // esi
  int v32; // esi
  int v33; // eax
  _DWORD *v34; // esi
  _DWORD *v35; // eax
  float v36; // eax
  NiDX9Renderer *v37; // ecx
  int v38; // eax
  double v39; // st7
  int v40; // esi
  double v41; // st7
  double v42; // st7
  double v43; // st7
  double v44; // st6
  double v45; // st7
  int v46; // eax
  double v47; // st7
  double v48; // st6
  double v49; // st7
  int v50; // eax
  double v51; // st7
  double v52; // st7
  double v53; // st7
  int v54; // esi
  NiDX9Renderer *v55; // eax
  int v56; // ebp
  int v58; // [esp-8h] [ebp-24h]
  unsigned int v59; // [esp-4h] [ebp-20h]
  char v60; // [esp+0h] [ebp-1Ch]

  NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * a2 + 0xB455A0), 0x19, 1u, 0); /*0x7cb42b*/
  NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * a2 + 0xB455A0), 0x17, 4u, 0); /*0x7cb43d*/
  NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * a2 + 0xB455A0), v58, v59, v60); /*0x7cb550*/
  if ( a1 && (*(_DWORD *)(a1 + 0x1C) & 0x80000) != 0 ) /*0x7cb562*/
  {
    v28 = *(NiD3DPass **)(4 * a2 + 0xB455A0); /*0x7cb564*/
    value = 1.0; /*0x7cb571*/
    NiD3DPass_SetRenderState(v28, 0xAF, COERCE_UNSIGNED_INT(1.0), 0); /*0x7cb57f*/
    v29 = ShadowLightCasterDepthBias_Negative0005; /*0x7cb584*/
LABEL_6:
    v30 = *(NiD3DPass **)(4 * a2 + 0xB455A0); /*0x7cb5d6*/
    value = v29; /*0x7cb5dd*/
    NiD3DPass_SetRenderState(v30, 0xC3, LODWORD(value), 0); /*0x7cb5ed*/
    goto LABEL_12; /*0x7cb5f2*/
  }
  value = 0.0; /*0x7cb5af*/
  if ( (unsigned int)(a2 - 0x177) <= 3 ) /*0x7cb5b6*/
  {
    NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * a2 + 0xB455A0), 0xAF, LODWORD(value), 0); /*0x7cb5cb*/
    v29 = flt_A906F4; /*0x7cb5d0*/
    goto LABEL_6; /*0x7cb5d0*/
  }
  v31 = *(_DWORD *)(4 * a2 + 0xB455A0); /*0x7cb5f4*/
  if ( !*(_DWORD *)(v31 + 0x30) ) /*0x7cb5fb*/
    *(_DWORD *)(v31 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7cb606*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v31 + 0x30), 0xAFu, LODWORD(value), 0); /*0x7cb618*/
  v32 = *(_DWORD *)(4 * a2 + 0xB455A0); /*0x7cb61f*/
  value = 0.0; /*0x7cb626*/
  if ( !*(_DWORD *)(v32 + 0x30) ) /*0x7cb62a*/
    *(_DWORD *)(v32 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7cb635*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v32 + 0x30), 0xC3u, LODWORD(value), 0); /*0x7cb647*/
LABEL_12:
  v33 = *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12]; /*0x7cb64c*/
  if ( *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] ) /*0x7cb64c*/
  {
    if ( !*(_BYTE *)(v33 + 7) ) /*0x7cb655*/
      flt_B46638[0x15] = 0.0; /*0x7cb65d*/
  }
  if ( (unsigned int)(a2 - 0x123) <= 6 && OB_RendererGlobalState_010201A0.pad_1DB[2] ) /*0x7cb672*/
  {
    v34 = **(_DWORD ***)(v33 + 0xC); /*0x7cb682*/
    v35 = (_DWORD *)*ShadowSceneLight_GetLightRef(v34, &value); /*0x7cb690*/
    a13 = v35[0x22]; /*0x7cb698*/
    a14 = v35[0x23]; /*0x7cb6a2*/
    a15 = v35[0x24]; /*0x7cb6b0*/
    NiPointerSlot_Release((void **)&value); /*0x7cb6b4*/
    a16 = *(float *)(*ShadowSceneLight_GetLightRef(v34, &value) + 0xF8) * dbl_A43310; /*0x7cb6d7*/
    NiPointerSlot_Release((void **)&value); /*0x7cb6db*/
    sub_70C720(unk_B43124, (float *)&a13, (float *)&a9, (float *)&a5, flt_A3C778); /*0x7cb6ff*/
    v36 = COERCE_FLOAT(sub_701640(unk_B43104)); /*0x7cb70a*/
    v37 = unk_B43104; /*0x7cb70f*/
    value = v36; /*0x7cb715*/
    *(float *)&v38 = COERCE_FLOAT(sub_701670(v37)); /*0x7cb719*/
    v39 = *(float *)&a9 + dbl_A2F928; /*0x7cb722*/
    v40 = v38; /*0x7cb728*/
    a25 = v38; /*0x7cb72a*/
    v41 = v39 * dbl_A2FAA0; /*0x7cb72e*/
    if ( v41 <= 0.0 ) /*0x7cb73d*/
      v41 = 0.0; /*0x7cb743*/
    value = (float)SLODWORD(value); /*0x7cb74a*/
    a28 = v41 * value; /*0x7cb752*/
    v42 = FloatFloor(a28); /*0x7cb763*/
    a17 = Double_To_SInt32(v42); /*0x7cb776*/
    v43 = 1.0; /*0x7cb77c*/
    v44 = (a6 + 1.0) * dbl_A2FAA0; /*0x7cb77e*/
    if ( v44 < 1.0 ) /*0x7cb78b*/
      v43 = v44; /*0x7cb78d*/
    a28 = (float)a25; /*0x7cb798*/
    *(float *)&a25 = v43 * a28; /*0x7cb7a6*/
    v45 = sub_484370(*(float *)&a25); /*0x7cb7b1*/
    v46 = Double_To_SInt32(v45); /*0x7cb7b9*/
    v47 = 1.0; /*0x7cb7ca*/
    a18 = v40 - v46; /*0x7cb7cc*/
    v48 = (*(float *)&a5 + 1.0) * dbl_A2FAA0; /*0x7cb7d0*/
    if ( v48 < 1.0 ) /*0x7cb7dd*/
      v47 = v48; /*0x7cb7df*/
    value = v47 * value; /*0x7cb7ea*/
    v49 = sub_484370(value); /*0x7cb7f5*/
    v50 = Double_To_SInt32(v49); /*0x7cb7fd*/
    v51 = a10 + dbl_A2F928; /*0x7cb806*/
    a19 = v50; /*0x7cb80c*/
    v52 = v51 * dbl_A2FAA0; /*0x7cb810*/
    if ( v52 <= 0.0 ) /*0x7cb81f*/
      v52 = 0.0; /*0x7cb825*/
    value = v52 * a28; /*0x7cb82f*/
    v53 = FloatFloor(value); /*0x7cb83a*/
    v54 = v40 - Double_To_SInt32(v53); /*0x7cb847*/
    v55 = unk_B43104; /*0x7cb849*/
    a20 = v54; /*0x7cb84e*/
    ((void (__cdecl *)(IDirect3DDevice9 *, int *))v55->member.device->lpVtbl->SetScissorRect)(v55->member.device, &a17); /*0x7cb866*/
  }
  else
  {
    v56 = *(_DWORD *)(4 * a2 + 0xB455A0); /*0x7cb86a*/
    if ( !*(_DWORD *)(v56 + 0x30) ) /*0x7cb871*/
      *(_DWORD *)(v56 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7cb87c*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v56 + 0x30), 0xAEu, 0, 0); /*0x7cb88b*/
  }
  return 0; /*0x7cb892*/
}
