char __thiscall sub_74B220(float *this, int a2, NiPoint3 *a3, int a4, NiPoint3 *a5)
{
  int v7; // eax
  int v9; // esi
  int v10; // eax
  int v11; // esi
  float y; // ecx
  int v13; // ecx
  int v14; // edx
  float *v15; // eax
  _BYTE v16[12]; // [esp+18h] [ebp-18h] BYREF
  int v17[3]; // [esp+24h] [ebp-Ch] BYREF
  float v18; // [esp+34h] [ebp+4h]
  float v19; // [esp+38h] [ebp+8h]
  int v20; // [esp+38h] [ebp+8h]
  float v21; // [esp+38h] [ebp+8h]

  if ( !a3 || !(*(int (__thiscall **)(NiPoint3 *))(LODWORD(a3->x) + 0x10))(a3) )
    return 0;
  v7 = *(_DWORD *)(a2 + 8);
  if ( !v7 )
    return 0;
  v9 = *(unsigned __int16 *)(v7 + 8);
  v19 = (double)rand() / dbl_A3D5A8;
  *(_QWORD *)v16 = (__int64)(v19 * (double)v9);
  v10 = *(_DWORD *)v16;
  if ( *(int *)v16 >= v9 - 1 )
    v10 = v9 - 1;
  v11 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 0xC) + 0x2C * v10;
  v20 = rand();
  y = a3[0xF].y;
  if ( y == 0.0 )
    return 0;
  v18 = (double)v20 / dbl_A3D5A8;
  *(_QWORD *)v16 = (__int64)((double)(*(unsigned __int16 *)(v11 + 0x1C) - 1) * v18);
  sub_74A390((float *)v16, (float *)v17, (int)a3, (_DWORD *)LODWORD(y), v11, *(int *)v16);
  v13 = *(_DWORD *)&v16[4];
  v14 = *(_DWORD *)&v16[8];
  *(_DWORD *)a4 = *(_DWORD *)v16;
  *(_DWORD *)(a4 + 4) = v13;
  *(_DWORD *)(a4 + 8) = v14;
  if ( !*((_DWORD *)this + 0x1C) )
  {
    if ( *(_DWORD *)(LODWORD(a3[0xF].x) + 0x20) )
    {
      v21 = sub_404C90(&a5->x);
      v15 = sub_47DA10((float *)v16, v21, (float *)v17);
      a5->x = *v15;
      a5->y = v15[1];
      a5->z = v15[2];
    }
  }
  sub_74A0A0(this, a3, (NiPoint3 *)a4, a5);
  return 1;
}
