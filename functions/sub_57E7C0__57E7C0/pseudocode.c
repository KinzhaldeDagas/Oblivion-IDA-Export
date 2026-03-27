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

  result = OSGlobals;
  input = OSGlobals->input;
  if ( (input->flags & 8) == 0 || g_bFullScreen )
  {
    v4 = fConstant_2;
    *(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 7) + 0x24) + 0x18) &= ~1u;
    v15 = v4;
    Tile_SetFloat(*((Tile **)this + 7), (_DWORD *)0xFA1, v15);
    MouseAxisMovement = InputGlobals::GetMouseAxisMovement(input, 1);
    v5 = InputGlobals::GetMouseAxisMovement(input, 2);
    v6 = *((_DWORD **)this + 7);
    v20 = v5;
    v7 = v6[9];
    v27 = *(float *)(v7 + 0x54);
    v30 = *(float *)(v7 + 0x5C);
    v22 = sub_57E330() - dbl_A3D0C0;
    v8 = sub_57D7A0() / (double)nWidth * (double)MouseAxisMovement + v27;
    v25 = v8;
    if ( v22 < v8 )
      v8 = v22;
    v17 = v8;
    v9 = sub_57E2D0() - dbl_A3D0C0;
    if ( v17 >= v9 )
    {
      v9 = v25;
      if ( v22 < v25 )
        v9 = v22;
    }
    v28 = v9;
    v29 = Tile_GetFloat(v6, 0xFAB) * dbl_A68FD0;
    v18 = sub_57E3F0() + dbl_A2F928;
    v10 = v30 - sub_57D7F0() / (double)nHeight * (double)v20;
    v26 = v10;
    if ( v18 < v10 )
      v10 = v18;
    v23 = v10;
    v11 = sub_57E390() + dbl_A2F928;
    if ( v23 >= v11 )
    {
      v11 = v26;
      if ( v18 < v26 )
        v11 = v18;
    }
    v31 = v11;
    v12 = (float *)(*(_DWORD *)(*((_DWORD *)this + 7) + 0x24) + 0x54);
    *v12 = v28;
    v12[1] = v29;
    v12[2] = v31;
    if ( v28 != *(this + 8) || v31 != *(this + 0xA) )
    {
      *(this + 8) = v28;
      *(this + 9) = v29;
      *(this + 0xA) = v31;
      *((_BYTE *)this + 0xB9) = 1;
      v19 = (float)nWidth;
      v13 = sub_57D7A0();
      v14 = *((_DWORD **)this + 7);
      *(this + 0xB) = v19 / v13 * *(this + 8) + v19 * dbl_A2FAA0;
      *(this + 0xC) = Tile_GetFloat(v14, 0xFAB) * dbl_A68FD0;
      v21 = (float)nHeight;
      v24 = dbl_A2FAA0 * v21;
      *(this + 0xD) = v24 - v21 / sub_57D7F0() * *(this + 0xA);
    }
    return (OSGlobals *)NiAVObject_UpdateNiAVObject(*(NiAVObject **)(*((_DWORD *)this + 7) + 0x24), 0.0, 1);
  }
  return result;
}
