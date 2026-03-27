double sub_6F6A10()
{
  unsigned int v0; // eax
  int v1; // esi
  double v2; // st7
  double v4; // [esp+8h] [ebp-8h]

  if ( !byte_B3F058 )
  {
    v0 = _time64(0);
    srand(v0);
    byte_B3F058 = 1;
  }
  v1 = 4;
  v4 = 0.0;
  do
  {
    --v1;
    v2 = (double)rand() + v4 * dbl_A47A50;
    v4 = v2;
  }
  while ( v1 );
  return v2 * dbl_A7CDD8;
}
