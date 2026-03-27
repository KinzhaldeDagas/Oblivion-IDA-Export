bool __cdecl sub_47DF40(float a1, float a2, float a3)
{
  double v4; // st6
  double v5; // st5
  double v6; // st6

  if ( a3 < 0.0 )
    return 0;
  v4 = a1;
  v5 = a2;
  if ( a2 >= (double)a1 )
    v6 = v5 - v4;
  else
    v6 = v4 - v5;
  return v6 < a3;
}
