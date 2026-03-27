void __thiscall sub_759030(float *this, float a2, int a3)
{
  unsigned __int16 i; // si
  float *v5; // edx
  int v6; // [esp+10h] [ebp+8h]
  float v7; // [esp+10h] [ebp+8h]

  for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i )
  {
    v5 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * i);
    *(float *)&v6 = (a2 - v5[5]) * *(this + 7);
    if ( *(float *)&v6 >= 1.0 )
    {
      *v5 = Vector3_InitValue_;
      v5[1] = *(&Vector3_InitValue_ + 1);
      v5[2] = dword_B3F9B0;
    }
    else
    {
      v7 = 1.0 - *(float *)&v6;
      *v5 = *v5 * v7;
      v5[1] = v5[1] * v7;
      v5[2] = v7 * v5[2];
    }
  }
}
