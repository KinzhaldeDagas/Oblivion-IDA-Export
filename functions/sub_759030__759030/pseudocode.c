void __thiscall sub_759030(float *this, float a2, int a3)
{
  unsigned __int16 i; // si
  float *v5; // edx
  int v6; // [esp+10h] [ebp+8h]
  float v7; // [esp+10h] [ebp+8h]

  for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i ) /*0x759038*/
  {
    v5 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * i); /*0x759057*/
    *(float *)&v6 = (a2 - v5[5]) * *(this + 7); /*0x759060*/
    if ( *(float *)&v6 >= 1.0 ) /*0x75906f*/
    {
      *v5 = g_zeroNiPoint3.x; /*0x75909c*/
      v5[1] = g_zeroNiPoint3.y; /*0x7590a3*/
      v5[2] = g_zeroNiPoint3.z; /*0x7590ab*/
    }
    else
    {
      v7 = 1.0 - *(float *)&v6; /*0x759073*/
      *v5 = *v5 * v7; /*0x759083*/
      v5[1] = v5[1] * v7; /*0x75908a*/
      v5[2] = v7 * v5[2]; /*0x759090*/
    }
  }
}
