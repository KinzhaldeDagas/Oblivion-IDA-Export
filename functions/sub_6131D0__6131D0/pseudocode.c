char __cdecl sub_6131D0(int a1, int a2, float *a3)
{
  char v4; // bl
  float *v5; // edi
  float *v6; // eax
  double v7; // st7
  bool v8; // c0
  bool v9; // c3
  double v10; // st7
  float v12[3]; // [esp+Ch] [ebp-Ch] BYREF
  float v13; // [esp+1Ch] [ebp+4h]
  float v14; // [esp+1Ch] [ebp+4h]
  float v15; // [esp+1Ch] [ebp+4h]
  float v16; // [esp+1Ch] [ebp+4h]
  float v17; // [esp+1Ch] [ebp+4h]
  float v18; // [esp+1Ch] [ebp+4h]
  float v19; // [esp+1Ch] [ebp+4h]
  float v20; // [esp+20h] [ebp+8h]

  v4 = 0;
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2);
  v13 = v6[1] - v5[1];
  v20 = v6[2] - v5[2];
  v12[0] = *v6 - *v5;
  v12[1] = v13;
  v12[2] = v20;
  v14 = sub_683CB0(v12);
  v15 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 0x1E0))(a1) - v14;
  v16 = fabs(v15);
  v17 = v16 * dbl_A30DC8;
  v7 = flt_A3F420;
  v8 = v17 < v7;
  v9 = v17 == v7;
  v10 = v17;
  if ( !v8 && !v9 )
  {
    v18 = v10 - dbl_A56CA0;
    v19 = fabs(v18);
    v10 = v19;
  }
  if ( fCombatHitConeAngle > v10 )
    v4 = 1;
  if ( a3 )
    *a3 = v10;
  return v4;
}
