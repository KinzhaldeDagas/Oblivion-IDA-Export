long double sub_6F6A80()
{
  double v0; // st7
  double v1; // st7
  double v3; // [esp+0h] [ebp-10h]
  double v4; // [esp+0h] [ebp-10h]
  double v5; // [esp+8h] [ebp-8h]

  do
  {
    do
    {
      v0 = sub_6F6A10();
      v3 = v0 + v0 - dbl_A2F928;
      v1 = sub_6F6A10();
      v5 = v1 + v1 - 1.0;
      v4 = v5 * v5 + v3 * v3;
    }
    while ( v4 > 1.0 );
  }
  while ( 0.0 == v4 );
  return sqrt(log(v4) * dbl_A3F400 / v4) * v5;
}
