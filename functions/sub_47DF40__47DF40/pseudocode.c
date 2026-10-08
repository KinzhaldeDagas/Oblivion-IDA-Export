bool __cdecl sub_47DF40(float a1, float a2, float a3)
{
  double v4; // st6
  double v5; // st5
  double v6; // st6

  if ( a3 < 0.0 ) /*0x47df4f*/
    return 0; /*0x47df53*/
  v4 = a1; /*0x47df56*/
  v5 = a2; /*0x47df5a*/
  if ( a2 >= (double)a1 ) /*0x47df65*/
    v6 = v5 - v4; /*0x47df6b*/
  else
    v6 = v4 - v5; /*0x47df67*/
  return v6 < a3; /*0x47df55*/
}
