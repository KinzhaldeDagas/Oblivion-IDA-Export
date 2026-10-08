//
// [24000 research 2026-10-07] Verified density control is native leafInfo+20 spacingTolerance multiplied by max(texture+48,+4C), followed by axis-aligned proximity tests. This is existing collision spacing, not proof of24002 placementDistance semantics. Distinguish the two fields and avoid aliasing a retained24000 scalar onto native spacingTolerance.
char __stdcall OB_CBranch_CheckLeafRoom_010201A0(float *a1, unsigned int a2, OB_stVector4_010201A0 *a3)
{
  int v3; // esi
  int v4; // eax
  char v5; // bl
  int v6; // eax
  _DWORD *v7; // ebp
  unsigned int v8; // edi
  double v9; // st7
  unsigned int v10; // edi
  double v11; // st7
  unsigned int *begin; // ecx
  unsigned int v13; // ecx
  double v14; // st5
  float *v15; // ecx
  float v17; // [esp+14h] [ebp+8h]
  float v18; // [esp+14h] [ebp+8h]

  v3 = unk_B429B8; /*0x78fd33*/
  v4 = *(_DWORD *)(unk_B429B8 + 0x14); /*0x78fd39*/
  v5 = 1; /*0x78fd3e*/
  if ( !v4 || !((*(_DWORD *)(v3 + 0x18) - v4) / 0x54) ) /*0x78fd5a*/
    return 0; /*0x78fe9b*/
  v6 = *(_DWORD *)(v3 + 0x14); /*0x78fd62*/
  v7 = (_DWORD *)(v3 + 0x14); /*0x78fd68*/
  if ( !v6 || a2 >= (*(_DWORD *)(v3 + 0x18) - v6) / 0x54 ) /*0x78fd8a*/
  {
    _invalid_parameter_noinfo(); /*0x78fd8c*/
    v3 = unk_B429B8; /*0x78fd91*/
  }
  v8 = *v7 + 0x54 * a2; /*0x78fd9a*/
  if ( *(float *)(v8 + 0x4C) >= (double)*(float *)(v8 + 0x48) ) /*0x78fdaa*/
    v9 = *(float *)(v8 + 0x4C); /*0x78fdb1*/
  else
    v9 = *(float *)(v8 + 0x48); /*0x78fdac*/
  v17 = v9; /*0x78fdb4*/
  v10 = 0; /*0x78fdb8*/
  v18 = *(float *)(v3 + 0x20) * v17; /*0x78fdc7*/
  if ( OB_stVector4_Size_010201A0(a3) ) /*0x78fdcb*/
  {
    while ( 1 ) /*0x78fde2*/
    {
      v11 = v18; /*0x78fde2*/
      if ( !v5 ) /*0x78fde6*/
        break; /*0x78fde6*/
      begin = a3->begin; /*0x78fdec*/
      if ( !begin || v10 >= a3->end - begin ) /*0x78fdfd*/
      {
        _invalid_parameter_noinfo(); /*0x78fe01*/
        v11 = v18; /*0x78fe06*/
      }
      v13 = a3->begin[v10]; /*0x78fe10*/
      v14 = *(float *)(v13 + 4); /*0x78fe13*/
      v15 = (float *)(v13 + 4); /*0x78fe16*/
      if ( v14 + v11 > *a1 /*0x78fe76*/
        && *v15 - v11 < *a1
        && v15[1] + v11 > a1[1]
        && v15[1] - v11 < a1[1]
        && v15[2] + v11 > a1[2]
        && a1[2] > v15[2] - v11 )
      {
        v5 = 0; /*0x78fe78*/
      }
      if ( ++v10 >= OB_stVector4_Size_010201A0(a3) ) /*0x78fe8a*/
        return v5; /*0x78fe97*/
    }
  }
  return v5; /*0x78fe92*/
}
