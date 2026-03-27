void __thiscall sub_78F690(int this)
{
  int v1; // esi
  int v2; // edx
  int v3; // eax
  double v4; // st7
  double v5; // st4
  double v6; // st5
  int v7; // [esp+4h] [ebp-8h]

  v1 = *(_DWORD *)(this + 0x18);
  if ( v1 )
  {
    if ( *(int *)(this + 0x1C) > 1 )
    {
      v2 = 0;
      *(float *)(this + 0x28) = 0.0;
      v3 = v1 + 0x5C;
      do
      {
        ++v2;
        v4 = *(float *)(v3 - 4) - *(float *)(v3 - 0x4C);
        v3 += 0x48;
        v5 = *(float *)(v3 - 0x50) - *(float *)(v3 - 0x98);
        v6 = *(float *)(v3 - 0x48) - *(float *)(v3 - 0x90);
        *(float *)&v7 = v6 * v6 + v5 * v5 + v4 * v4;
        *(float *)(this + 0x28) = (*(float *)(v3 - 0x8C) + *(float *)(v3 - 0x44)) * COERCE_FLOAT((v7 >> 1) + 0x1FC00000)
                                + *(float *)(this + 0x28);
      }
      while ( v2 < *(_DWORD *)(this + 0x1C) - 1 );
    }
  }
}
