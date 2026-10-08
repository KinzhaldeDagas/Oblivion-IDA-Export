double __cdecl CombatStyle_CalculateDodgeScore(_DWORD *a1, int a2, float a3, float a4)
{
  char v4; // al
  double v7; // [esp+4h] [ebp-8h]
  double v8; // [esp+4h] [ebp-8h]
  int v9; // [esp+10h] [ebp+4h]
  float v10; // [esp+14h] [ebp+8h]
  float v11; // [esp+18h] [ebp+Ch]
  float v12; // [esp+1Ch] [ebp+10h]

  v7 = sub_4A9D70(a1) * (double)a2; /*0x546a55*/
  v10 = sub_4A9D30(a1) + v7; /*0x546a64*/
  v8 = sub_4A9CB0(a1) * (1.0 - a3); /*0x546a79*/
  v11 = sub_4A9CF0(a1) + v8; /*0x546a90*/
  v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0xDC))(a1); /*0x546a94*/
  *(float *)&v9 = (double)v4 + v10 + v11; /*0x546ab0*/
  if ( LOBYTE(a4) ) /*0x546ab4*/
    v12 = sub_4A9DB0(a1); /*0x546abb*/
  else
    v12 = sub_4A9DF0(a1); /*0x546ad9*/
  return (float)(v12 * *(float *)&v9); /*0x546ad0*/
}
