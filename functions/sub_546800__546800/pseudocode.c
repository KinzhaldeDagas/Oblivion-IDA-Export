double __cdecl sub_546800(_DWORD *a1, int a2, int a3, char a4, float a5, float a6, float a7, char a8)
{
  double v8; // st7
  double v9; // st7
  float v11; // [esp+4h] [ebp-8h]
  double v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+20h] [ebp+14h]
  float v14; // [esp+24h] [ebp+18h]
  float v15; // [esp+24h] [ebp+18h]
  float v16; // [esp+24h] [ebp+18h]
  float v18; // [esp+28h] [ebp+1Ch]
  float v19; // [esp+28h] [ebp+1Ch]
  float AttackDuringBlockMult; // [esp+28h] [ebp+1Ch]

  v8 = Calc_LuckModifiedSkill(a2, a3) / fCostant_100;
  v11 = v8;
  if ( LOBYTE(a6) )
    (*(void (__thiscall **)(_DWORD *))(*a1 + 0x110))(a1);
  else
    v8 = 0.0;
  v14 = v8;
  if ( LOBYTE(a7) )
    (*(void (__thiscall **)(_DWORD *))(*a1 + 0x114))(a1);
  else
    v8 = 0.0;
  v18 = v8;
  if ( LOBYTE(a5) )
    (*(void (__thiscall **)(_DWORD *))(*a1 + 0x118))(a1);
  else
    v8 = 0.0;
  v13 = v8;
  v12 = sub_4AA030(a1) * v11;
  *(float *)&v12 = sub_4AA070(a1) + v12;
  v15 = (double)(*(char (__thiscall **)(_DWORD *))(*a1 + 0x10C))(a1) + v14 + v18 + v13 + *(float *)&v12;
  if ( a4 )
    v9 = sub_4AA0B0(a1);
  else
    v9 = sub_4AA130(a1);
  v19 = v9;
  v16 = v19 * v15;
  if ( a8 )
  {
    AttackDuringBlockMult = CombatStyle_GetAttackDuringBlockMult(a1);
    return (float)(AttackDuringBlockMult * v16);
  }
  else
  {
    return (float)((float)1.0 * v16);
  }
}
