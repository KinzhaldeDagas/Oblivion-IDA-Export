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

  v11 = 0.0; /*0x72cd35*/
  v1 = *(this + 2); /*0x72cd39*/
  v2 = 0; /*0x72cd3c*/
  if ( v1 >= 4 ) /*0x72cd41*/
  {
    v3 = *this + 0xC; /*0x72cd4b*/
    v4 = ((unsigned int)(v1 - 4) >> 2) + 1; /*0x72cd4e*/
    v2 = 4 * v4; /*0x72cd51*/
    do /*0x72cd92*/
    {
      v5 = *(float *)(v3 - 8); /*0x72cd60*/
      v3 += 0x20; /*0x72cd63*/
      --v4; /*0x72cd66*/
      v12 = v5 + v11; /*0x72cd6d*/
      v13 = v12 + *(float *)(v3 - 0x20); /*0x72cd78*/
      v14 = v13 + *(float *)(v3 - 0x18); /*0x72cd83*/
      v11 = v14 + *(float *)(v3 - 0x10); /*0x72cd8e*/
    }
    while ( v4 ); /*0x72cd92*/
  }
  if ( v2 < v1 ) /*0x72cd96*/
  {
    v6 = (float *)(*this + 8 * v2 + 4); /*0x72cd9a*/
    v7 = v1 - v2; /*0x72cda0*/
    do /*0x72cdb2*/
    {
      v8 = *v6; /*0x72cda2*/
      v6 += 2; /*0x72cda4*/
      --v7; /*0x72cda7*/
      v11 = v8 + v11; /*0x72cdae*/
    }
    while ( v7 ); /*0x72cdb2*/
  }
  result = 0; /*0x72cdb8*/
  v15 = 1.0 / v11; /*0x72cdc2*/
  if ( v1 ) /*0x72cdc5*/
  {
    do /*0x72cdde*/
    {
      v10 = (float *)(*this + 8 * result++ + 4); /*0x72cdd0*/
      *v10 = *v10 * v15; /*0x72cdd9*/
    }
    while ( result < *(this + 2) ); /*0x72cdde*/
  }
  return result; /*0x72cde2*/
}
