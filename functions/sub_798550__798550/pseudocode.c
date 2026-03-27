void __thiscall sub_798550(_DWORD *this, int a2, float *a3)
{
  double v5; // st7
  int v6; // eax
  float *v7; // eax
  float *v8; // eax
  float v9; // [esp+Ch] [ebp+8h]

  if ( *(this + 5) )
  {
    if ( a3 )
    {
      if ( sub_787680() )
        v5 = flt_A30634;
      else
        v5 = 1.0;
      v6 = *(this + 5);
      v9 = v5;
      *(float *)(v6 + (a2 << 6)) = *a3;
      v7 = (float *)((a2 << 6) + v6 + 0x18);
      v7[0xFFFFFFFB] = a3[1] * v9;
      v7[0xFFFFFFFC] = a3[2];
      v7[0xFFFFFFFD] = a3[3] * v9;
      v7[0xFFFFFFFE] = a3[4];
      v7[0xFFFFFFFF] = a3[5] * v9;
      *v7 = a3[6];
      v7[1] = v9 * a3[7];
      v8 = (float *)((a2 << 6) + *(this + 5) + 0x20);
      *v8 = a3[2];
      v8 += 5;
      v8[0xFFFFFFFC] = a3[1] * v9;
      ++v8;
      v8[0xFFFFFFFC] = *a3;
      v8[0xFFFFFFFD] = a3[3] * v9;
      v8[0xFFFFFFFE] = a3[6];
      v8[0xFFFFFFFF] = a3[5] * v9;
      *v8 = a3[4];
      v8[1] = v9 * a3[7];
    }
  }
}
