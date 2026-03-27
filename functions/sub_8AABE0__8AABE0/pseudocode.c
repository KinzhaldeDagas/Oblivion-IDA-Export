void __thiscall sub_8AABE0(int this)
{
  int v1; // edx
  float *v2; // esi
  double v3; // st7
  double v4; // st5
  double v5; // st7
  float v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+8h] [ebp-4h]
  float v10; // [esp+8h] [ebp-4h]

  v1 = *(_DWORD *)(this + 0x50);
  v6 = 0.0;
  v7 = 0.0;
  if ( !v1 )
    goto LABEL_6;
  v2 = *(float **)(this + 0x44);
  v9 = *v2;
  v6 = *(float *)(this + 0x14);
  v7 = *(float *)(this + 0x18);
  if ( v9 < (double)v6 )
  {
    v3 = flt_A7DEB4;
  }
  else
  {
    v3 = flt_A7DEB4;
    if ( v3 != v6 )
      goto LABEL_4;
  }
  v6 = v9;
LABEL_4:
  v10 = v2[3 * v1 - 3];
  if ( v10 < (double)v7 )
  {
    v5 = v10;
  }
  else
  {
    v4 = v3;
    v5 = v10;
    if ( -v4 != v7 )
    {
LABEL_6:
      *(float *)(this + 0x14) = v6;
      *(float *)(this + 0x18) = v7;
      return;
    }
  }
  v8 = v5;
  *(float *)(this + 0x14) = v6;
  *(float *)(this + 0x18) = v8;
}
