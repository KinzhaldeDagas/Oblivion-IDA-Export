int __thiscall sub_585620(_DWORD *this)
{
  int result; // eax
  _DWORD *v5; // edi
  int v6; // ecx
  int v7; // esi
  int v8; // ebx
  int v9; // ebp
  float *v10; // eax
  int v11; // ebx
  float *v12; // eax
  float v13; // [esp+0h] [ebp-30h]
  char *v14; // [esp+0h] [ebp-30h]
  float v15; // [esp+4h] [ebp-2Ch]
  float v16; // [esp+4h] [ebp-2Ch]
  float v17; // [esp+8h] [ebp-28h]
  float v18; // [esp+10h] [ebp-20h]
  float v19; // [esp+14h] [ebp-1Ch]
  int v20; // [esp+18h] [ebp-18h]
  int v21; // [esp+28h] [ebp-8h]
  int v22; // [esp+2Ch] [ebp-4h]

  result = dword_B1398C; /*0x585623*/
  v5 = (_DWORD *)*(this + 2); /*0x58563a*/
  v6 = *(this + 0xB); /*0x58563d*/
  v7 = unk_B3A704 - dword_B13980 * dword_B1398C; /*0x585640*/
  v8 = v6 - dword_B1398C; /*0x585644*/
  v21 = v7; /*0x585646*/
  v22 = v6; /*0x58564a*/
  if ( v8 < 0 ) /*0x58564e*/
  {
    v9 = dword_B1398C - v6; /*0x585653*/
    v8 = 0; /*0x585655*/
    do /*0x58569b*/
    {
      v18 = kTerrainLODQuadRayDirectionZ; /*0x585660*/
      v15 = (float)v21; /*0x58566e*/
      v13 = (float)unk_B3A700; /*0x585678*/
      v10 = sub_571F90(1); /*0x58567f*/
      result = sub_5723E0((char *)v10, 0, v13, v15, 1, 0xFFFFFFFF, v18, 0); /*0x585689*/
      v7 += dword_B13980; /*0x58568e*/
      --v9; /*0x585694*/
      v21 = v7; /*0x585697*/
    }
    while ( v9 ); /*0x58569b*/
    v6 = v22; /*0x58569d*/
  }
  if ( v8 > 0 ) /*0x5856a4*/
  {
    result = v8; /*0x5856a6*/
    do /*0x5856b5*/
    {
      if ( v5 ) /*0x5856aa*/
        v5 = (_DWORD *)*v5; /*0x5856ac*/
      else
        v5 = 0; /*0x5856b0*/
      --result; /*0x5856b2*/
    }
    while ( result ); /*0x5856b5*/
  }
  if ( v8 < v6 ) /*0x5856b9*/
  {
    v11 = v6 - v8; /*0x5856bd*/
    do /*0x58570d*/
    {
      v20 = dword_B13994; /*0x5856cf*/
      v19 = kTerrainLODQuadRayDirectionZ; /*0x5856d1*/
      v17 = (float)v21; /*0x5856df*/
      v16 = (float)unk_B3A700; /*0x5856e9*/
      v14 = (char *)v5[2]; /*0x5856ec*/
      v12 = sub_571F90(1); /*0x5856ef*/
      result = sub_5723E0((char *)v12, v14, v16, v17, 1, 0xFFFFFFFF, v19, v20); /*0x5856f9*/
      v7 += dword_B13980; /*0x5856fe*/
      --v11; /*0x585704*/
      v5 = (_DWORD *)*v5; /*0x585707*/
      v21 = v7; /*0x585709*/
    }
    while ( v11 ); /*0x58570d*/
  }
  return result; /*0x58570f*/
}
