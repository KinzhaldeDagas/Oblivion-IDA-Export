double __cdecl sub_546C60(float a1, int a2, float a3)
{
  float v4; // [esp+Ch] [ebp+Ch]

  if ( LOBYTE(a3) )
    v4 = flt_B36D10;
  else
    v4 = fAIMeleeWeaponMult;
  return (float)(v4 * a1);
}
