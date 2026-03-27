double __cdecl sub_546D40(_DWORD *a1, int a2, int a3, char a4, float a5)
{
  double v5; // st7
  char v6; // bl
  double v8; // st7
  double v10; // st7
  float v11; // [esp+8h] [ebp-Ch]
  double v12; // [esp+Ch] [ebp-8h]
  double v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+18h] [ebp+4h]
  int v15; // [esp+18h] [ebp+4h]
  float v16; // [esp+28h] [ebp+14h]
  float v17; // [esp+28h] [ebp+14h]

  v11 = Calc_LuckModifiedSkill(a2, a3) / fCostant_100;
  v12 = (double)(*(char (__thiscall **)(_DWORD *))(*a1 + 0x108))(a1);
  v13 = sub_4A9F70(a1) + v12;
  v5 = sub_4A9F30(a1);
  v6 = LOBYTE(a5);
  *(float *)&v14 = v5 * v11 + v13;
  if ( LOBYTE(a5) )
    v8 = sub_4A9FB0(a1);
  else
    v8 = sub_4A9FF0(a1);
  v16 = v8;
  *(float *)&v15 = v16 * *(float *)&v14;
  if ( a4 )
    return *(float *)&v15;
  if ( v6 )
    v10 = 1.0;
  else
    v10 = flt_A41304;
  v17 = v10;
  return (float)(fBlockScoreNoShieldMult * *(float *)&v15 * v17);
}
