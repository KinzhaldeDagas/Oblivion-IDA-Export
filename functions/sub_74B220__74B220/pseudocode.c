char __thiscall sub_74B220(float *this, int a2, NiPoint3 *a3, int a4, NiPoint3 *a5)
{
  int v7; // eax
  int v9; // esi
  int v10; // eax
  int v11; // esi
  float y; // ecx
  int v13; // ecx
  int v14; // edx
  _BYTE v15[12]; // [esp+18h] [ebp-18h] BYREF
  int v16[3]; // [esp+24h] [ebp-Ch] BYREF
  float v17; // [esp+34h] [ebp+4h]
  float v18; // [esp+38h] [ebp+8h]
  int v19; // [esp+38h] [ebp+8h]
  float v20; // [esp+38h] [ebp+8h]

  if ( !a3 || !(*(int (__thiscall **)(NiPoint3 *))(LODWORD(a3->x) + 0x10))(a3) ) /*0x74b23a*/
    return 0; /*0x74b3ae*/
  v7 = *(_DWORD *)(a2 + 8); /*0x74b249*/
  if ( !v7 ) /*0x74b24e*/
    return 0; /*0x74b252*/
  v9 = *(unsigned __int16 *)(v7 + 8); /*0x74b260*/
  v18 = (double)rand() / dbl_A3D5A8; /*0x74b27d*/
  *(_QWORD *)v15 = (__int64)(v18 * (double)v9); /*0x74b29f*/
  v10 = *(_DWORD *)v15; /*0x74b2a3*/
  if ( *(int *)v15 >= v9 - 1 ) /*0x74b2ad*/
    v10 = v9 - 1; /*0x74b2af*/
  v11 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 0xC) + 0x2C * v10; /*0x74b2ba*/
  v19 = rand(); /*0x74b2c1*/
  y = a3[0xF].y; /*0x74b2c9*/
  if ( y == 0.0 ) /*0x74b2db*/
    return 0; /*0x74b2e0*/
  v17 = (double)v19 / dbl_A3D5A8; /*0x74b2d7*/
  *(_QWORD *)v15 = (__int64)((double)(*(unsigned __int16 *)(v11 + 0x1C) - 1) * v17); /*0x74b316*/
  sub_74A390((float *)v15, (float *)v16, (int)a3, (_DWORD *)LODWORD(y), v11, *(int *)v15); /*0x74b32e*/
  v13 = *(_DWORD *)&v15[4]; /*0x74b33b*/
  v14 = *(_DWORD *)&v15[8]; /*0x74b33f*/
  *(_DWORD *)a4 = *(_DWORD *)v15; /*0x74b347*/
  *(_DWORD *)(a4 + 4) = v13; /*0x74b349*/
  *(_DWORD *)(a4 + 8) = v14; /*0x74b34c*/
  if ( !*((_DWORD *)this + 0x1C) ) /*0x74b34f*/
  {
    if ( *(_DWORD *)(LODWORD(a3[0xF].x) + 0x20) ) /*0x74b35b*/
    {
      v20 = NiPoint3_Length(&a5->x); /*0x74b368*/
      *a5 = *(NiPoint3 *)sub_47DA10((float *)v15, v20, (float *)v16); /*0x74b385*/
    }
  }
  sub_74A0A0(this, a3, (NiPoint3 *)a4, a5); /*0x74b39c*/
  return 1; /*0x74b251*/
}
