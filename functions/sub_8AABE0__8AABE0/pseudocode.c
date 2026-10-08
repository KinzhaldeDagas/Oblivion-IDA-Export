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

  v1 = *(_DWORD *)(this + 0x50); /*0x8aabe5*/
  v6 = 0.0; /*0x8aabea*/
  v7 = 0.0; /*0x8aabed*/
  if ( !v1 ) /*0x8aabf1*/
    goto LABEL_6; /*0x8aabf1*/
  v2 = *(float **)(this + 0x44); /*0x8aabf4*/
  v9 = *v2; /*0x8aabf9*/
  v6 = *(float *)(this + 0x14); /*0x8aac00*/
  v7 = *(float *)(this + 0x18); /*0x8aac07*/
  if ( v9 < (double)v6 ) /*0x8aac20*/
  {
    v3 = flt_A7DEB4; /*0x8aac6e*/
  }
  else
  {
    v3 = flt_A7DEB4; /*0x8aac28*/
    if ( v3 != v6 ) /*0x8aac2d*/
      goto LABEL_4; /*0x8aac2d*/
  }
  v6 = v9; /*0x8aac70*/
LABEL_4:
  v10 = v2[3 * v1 - 3]; /*0x8aac31*/
  if ( v10 < (double)v7 ) /*0x8aac4c*/
  {
    v5 = v10; /*0x8aac76*/
  }
  else
  {
    v4 = v3; /*0x8aac4e*/
    v5 = v10; /*0x8aac4e*/
    if ( -v4 != v7 ) /*0x8aac59*/
    {
LABEL_6:
      *(float *)(this + 0x14) = v6; /*0x8aac5d*/
      *(float *)(this + 0x18) = v7; /*0x8aac67*/
      return; /*0x8aac6d*/
    }
  }
  v8 = v5; /*0x8aac7a*/
  *(float *)(this + 0x14) = v6; /*0x8aac81*/
  *(float *)(this + 0x18) = v8; /*0x8aac88*/
}
