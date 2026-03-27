unsigned int __thiscall sub_72CD30(int *this)
{
  int v1; // edi
  unsigned int v2; // esi
  int v3; // eax
  unsigned int v4; // edx
  double v5; // st7
  float *v6; // edx
  unsigned int v7; // eax
  double v8; // st7
  unsigned int result; // eax
  float *v10; // edx
  float v11; // [esp+8h] [ebp-4h]
  float v12; // [esp+8h] [ebp-4h]
  float v13; // [esp+8h] [ebp-4h]
  float v14; // [esp+8h] [ebp-4h]
  float v15; // [esp+8h] [ebp-4h]

  v11 = 0.0;
  v1 = *(this + 2);
  v2 = 0;
  if ( v1 >= 4 )
  {
    v3 = *this + 0xC;
    v4 = ((unsigned int)(v1 - 4) >> 2) + 1;
    v2 = 4 * v4;
    do
    {
      v5 = *(float *)(v3 - 8);
      v3 += 0x20;
      --v4;
      v12 = v5 + v11;
      v13 = v12 + *(float *)(v3 - 0x20);
      v14 = v13 + *(float *)(v3 - 0x18);
      v11 = v14 + *(float *)(v3 - 0x10);
    }
    while ( v4 );
  }
  if ( v2 < v1 )
  {
    v6 = (float *)(*this + 8 * v2 + 4);
    v7 = v1 - v2;
    do
    {
      v8 = *v6;
      v6 += 2;
      --v7;
      v11 = v8 + v11;
    }
    while ( v7 );
  }
  result = 0;
  v15 = 1.0 / v11;
  if ( v1 )
  {
    do
    {
      v10 = (float *)(*this + 8 * result++ + 4);
      *v10 = *v10 * v15;
    }
    while ( result < *(this + 2) );
  }
  return result;
}
