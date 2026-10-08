double __cdecl Calc_BaseMagickaCost(float a1, int a2, int a3, int a4, float a5)
{
  double v5; // st7
  double v6; // st7
  float v8; // [esp+0h] [ebp-4h]
  int v9; // [esp+Ch] [ebp+8h]
  float v10; // [esp+10h] [ebp+Ch]
  int v11; // [esp+10h] [ebp+Ch]
  int v12; // [esp+10h] [ebp+Ch]
  float v13; // [esp+18h] [ebp+14h]

  v5 = (double)a2 * MEMORY[0xB37DD0]; /*0x548b55*/
  if ( v5 <= 1.0 ) /*0x548b64*/
    v5 = 1.0; /*0x548b6a*/
  v8 = v5; /*0x548b71*/
  v6 = 1.0; /*0x548b74*/
  if ( a3 ) /*0x548b76*/
    v10 = (float)a3; /*0x548b82*/
  else
    v10 = 1.0; /*0x548b78*/
  *(float *)&v9 = MEMORY[0xB37DD8] * a1 * v10; /*0x548b99*/
  if ( a4 ) /*0x548b9d*/
  {
    *(float *)&v11 = pow((double)a4, flt_B37ED0[0xE8]); /*0x548bb6*/
    v6 = 1.0; /*0x548bc2*/
  }
  else
  {
    *(float *)&v11 = 1.0; /*0x548b9f*/
  }
  *(float *)&v12 = *(float *)&v9 * v8 * *(float *)&v11; /*0x548bd4*/
  if ( LOBYTE(a5) ) /*0x548bd8*/
    v6 = MEMORY[0xB37DE0]; /*0x548bdc*/
  v13 = v6; /*0x548be2*/
  return (float)(v13 * *(float *)&v12); /*0x548bf7*/
}
