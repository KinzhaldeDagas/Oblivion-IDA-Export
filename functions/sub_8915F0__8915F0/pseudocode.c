char __thiscall sub_8915F0(_DWORD *this, int a2, float *a3)
{
  __int128 v4; // xmm0
  double v5; // st7
  __int128 v6; // xmm0
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  char result; // al
  char v12; // [esp+1Fh] [ebp-E5h]
  float v13; // [esp+20h] [ebp-E4h] BYREF
  _DWORD v14[9]; // [esp+24h] [ebp-E0h] BYREF
  float v15; // [esp+48h] [ebp-BCh]
  int v16; // [esp+54h] [ebp-B0h]
  _OWORD v17[2]; // [esp+64h] [ebp-A0h] BYREF
  char v18; // [esp+84h] [ebp-80h]
  float v19; // [esp+88h] [ebp-7Ch]
  float v20; // [esp+A8h] [ebp-5Ch]
  int v21; // [esp+B4h] [ebp-50h]
  hkVector4 v22; // [esp+C4h] [ebp-40h]
  int v23; // [esp+D4h] [ebp-30h]
  _DWORD *v24; // [esp+D8h] [ebp-2Ch]
  int v25; // [esp+DCh] [ebp-28h]
  int v26; // [esp+100h] [ebp-4h]

  v20 = 1.0;
  v15 = 1.0;
  *(float *)&v14[1] = 1.0;
  v18 = 0;
  v19 = 0.0;
  v21 = 0;
  v23 = 0;
  v14[0] = &hkClosestRayHitCollector::`vftable';
  v16 = 0;
  v4 = *((_OWORD *)this + a2 + 0x38);
  *(_OWORD *)a3 = v4;
  v5 = a3[2] - dbl_A492B0;
  v17[0] = v4;
  a3[2] = v5;
  v22 = stru_BA7A40;
  v6 = *(_OWORD *)a3;
  v26 = 0;
  v24 = v14;
  v25 = 0;
  v17[1] = v6;
  sub_57E270(this, &v13);
  v19 = v13;
  if ( this && (v7 = (_DWORD *)*(this + 2)) != 0 )
    v8 = sub_8AC0C0(v7);
  else
    v8 = 0;
  v9 = *(_DWORD *)(v8 + 8);
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 0x2B0);
  else
    v10 = 0;
  if ( v10 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 0x58))(v10);
  v12 = (*(int (__thiscall **)(int, _OWORD *))(*(_DWORD *)v10 + 0x88))(v10, v17);
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 0x58))(v10);
  result = v12;
  if ( v12 )
  {
    v13 = 1.0 - v15;
    a3[2] = v13 * dbl_A492B0 + a3[2];
  }
  return result;
}
