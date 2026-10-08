double __cdecl sub_546D40(_DWORD *a1, SInt32 skillValue, SInt32 luckValue, char a4, float a5)
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

  v11 = Calc_LuckModifiedSkill(skillValue, luckValue) / fCostant_100; /*0x546d6b*/
  v12 = (double)(*(char (__thiscall **)(_DWORD *))(*a1 + 0x108))(a1); /*0x546d7e*/
  v13 = sub_4A9F70(a1) + v12; /*0x546d8d*/
  v5 = sub_4A9F30(a1); /*0x546d91*/
  v6 = LOBYTE(a5); /*0x546d9a*/
  *(float *)&v14 = v5 * v11 + v13; /*0x546da6*/
  if ( LOBYTE(a5) ) /*0x546daa*/
    v8 = sub_4A9FB0(a1); /*0x546dac*/
  else
    v8 = sub_4A9FF0(a1); /*0x546db3*/
  v16 = v8; /*0x546dbd*/
  *(float *)&v15 = v16 * *(float *)&v14; /*0x546dc9*/
  if ( a4 ) /*0x546dcd*/
    return *(float *)&v15; /*0x546dd9*/
  if ( v6 ) /*0x546de3*/
    v10 = 1.0; /*0x546de5*/
  else
    v10 = flt_A41304; /*0x546de9*/
  v17 = v10; /*0x546def*/
  return (float)(g_GameSettingStringPointers_B36CD8[0x8E] * *(float *)&v15 * v17); /*0x546ddd*/
}
