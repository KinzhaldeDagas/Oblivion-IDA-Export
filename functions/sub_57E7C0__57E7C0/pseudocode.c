OSGlobals *__thiscall sub_57E7C0(float *this)
{
  OSGlobals *result; // eax
  InputGlobal *input; // edi
  double v4; // st7
  LONG v5; // eax
  _DWORD *v6; // edi
  int v7; // eax
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  float *v12; // eax
  double v13; // st7
  _DWORD *v14; // ecx
  float v15; // [esp+4h] [ebp-3Ch]
  LONG MouseAxisMovement; // [esp+10h] [ebp-30h]
  double v17; // [esp+10h] [ebp-30h]
  double v18; // [esp+10h] [ebp-30h]
  float v19; // [esp+10h] [ebp-30h]
  int v20; // [esp+1Ch] [ebp-24h]
  float v21; // [esp+1Ch] [ebp-24h]
  double v22; // [esp+20h] [ebp-20h]
  double v23; // [esp+20h] [ebp-20h]
  double v24; // [esp+20h] [ebp-20h]
  double v25; // [esp+28h] [ebp-18h]
  double v26; // [esp+28h] [ebp-18h]
  float v27; // [esp+34h] [ebp-Ch]
  float v28; // [esp+34h] [ebp-Ch]
  float v29; // [esp+38h] [ebp-8h]
  float v30; // [esp+3Ch] [ebp-4h]
  float v31; // [esp+3Ch] [ebp-4h]

  result = MEMORY[0xB33398]; /*0x57e7c6*/
  input = MEMORY[0xB33398]->input; /*0x57e7d0*/
  if ( (input->flags & 8) == 0 || g_bFullScreen ) /*0x57e7da*/
  {
    v4 = fConstant_2; /*0x57e7ea*/
    *(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 7) + 0x24) + 0x18) &= ~1u; /*0x57e7f3*/
    v15 = v4; /*0x57e7fd*/
    Tile_SetFloat(*((Tile **)this + 7), (_DWORD *)0xFA1, v15); /*0x57e805*/
    MouseAxisMovement = InputGlobals::GetMouseAxisMovement(input, 1); /*0x57e817*/
    v5 = InputGlobals::GetMouseAxisMovement(input, 2); /*0x57e81b*/
    v6 = *((_DWORD **)this + 7); /*0x57e820*/
    v20 = v5; /*0x57e823*/
    v7 = v6[9]; /*0x57e827*/
    v27 = *(float *)(v7 + 0x54); /*0x57e830*/
    v30 = *(float *)(v7 + 0x5C); /*0x57e83b*/
    v22 = sub_57E330() - dbl_A3D0C0; /*0x57e84a*/
    v8 = UI_GetVirtualScreenWidth() / (double)nWidth * (double)MouseAxisMovement + v27; /*0x57e85d*/
    v25 = v8; /*0x57e861*/
    if ( v22 < v8 ) /*0x57e870*/
      v8 = v22; /*0x57e872*/
    v17 = v8; /*0x57e878*/
    v9 = sub_57E2D0() - dbl_A3D0C0; /*0x57e881*/
    if ( v17 >= v9 ) /*0x57e892*/
    {
      v9 = v25; /*0x57e896*/
      if ( v22 < v25 ) /*0x57e8a5*/
        v9 = v22; /*0x57e8a7*/
    }
    v28 = v9; /*0x57e8b2*/
    v29 = Tile_GetFloat(v6, 0xFAB) * dbl_A68FD0; /*0x57e8c3*/
    v18 = sub_57E3F0() + dbl_A2F928; /*0x57e8d2*/
    v10 = v30 - UI_GetVirtualScreenHeight() / (double)nHeight * (double)v20; /*0x57e8ed*/
    v26 = v10; /*0x57e8f1*/
    if ( v18 < v10 ) /*0x57e900*/
      v10 = v18; /*0x57e902*/
    v23 = v10; /*0x57e908*/
    v11 = sub_57E390() + dbl_A2F928; /*0x57e911*/
    if ( v23 >= v11 ) /*0x57e922*/
    {
      v11 = v26; /*0x57e926*/
      if ( v18 < v26 ) /*0x57e935*/
        v11 = v18; /*0x57e937*/
    }
    v31 = v11; /*0x57e940*/
    v12 = (float *)(*(_DWORD *)(*((_DWORD *)this + 7) + 0x24) + 0x54); /*0x57e953*/
    *v12 = v28; /*0x57e956*/
    v12[1] = v29; /*0x57e958*/
    v12[2] = v31; /*0x57e95b*/
    if ( v28 != *(this + 8) || v31 != *(this + 0xA) ) /*0x57e97c*/
    {
      *(this + 8) = v28; /*0x57e982*/
      *(this + 9) = v29; /*0x57e985*/
      *(this + 0xA) = v31; /*0x57e988*/
      *((_BYTE *)this + 0xB9) = 1; /*0x57e98b*/
      v19 = (float)nWidth; /*0x57e998*/
      v13 = UI_GetVirtualScreenWidth(); /*0x57e9a4*/
      v14 = *((_DWORD **)this + 7); /*0x57e9ad*/
      *(this + 0xB) = v19 / v13 * *(this + 8) + v19 * dbl_A2FAA0; /*0x57e9c4*/
      *(this + 0xC) = Tile_GetFloat(v14, 0xFAB) * dbl_A68FD0; /*0x57e9d2*/
      v21 = (float)nHeight; /*0x57e9db*/
      v24 = dbl_A2FAA0 * v21; /*0x57e9eb*/
      *(this + 0xD) = v24 - v21 / UI_GetVirtualScreenHeight() * *(this + 0xA); /*0x57ea03*/
    }
    return (OSGlobals *)NiAVObject_UpdateNiAVObject(*(NiAVObject **)(*((_DWORD *)this + 7) + 0x24), 0.0, 1); /*0x57ea14*/
  }
  return result; /*0x57ea19*/
}
