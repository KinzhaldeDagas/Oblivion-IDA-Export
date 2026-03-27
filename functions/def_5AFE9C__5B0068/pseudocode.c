// positive sp value has been detected, the output may be wrong!
int *__userpurge def_5AFE9C@<eax>(int a1@<edi>, int a2)
{
  unsigned int RandomLargeInteger; // esi
  double v3; // st7
  double v4; // st6
  int v6; // ecx
  int *result; // eax
  _DWORD *sound; // ebx
  int v9; // edx
  int *v10; // ecx
  int **v11; // esi
  int *v12; // edi
  float v13; // [esp-14h] [ebp-14h]
  int v14; // [esp-14h] [ebp-14h]
  float v15; // [esp-10h] [ebp-10h]
  float v16; // [esp-Ch] [ebp-Ch]
  float v17; // [esp-8h] [ebp-8h]
  float v18; // [esp-8h] [ebp-8h]
  float v19; // [esp+4h] [ebp+4h]

  v13 = (float)1.0 * dbl_A2FC70;
  v16 = v13 / dbl_A3F3F0;
  RandomLargeInteger = GetRandomLargeInteger_(0);
  dword_B3B3FC = GetRandomLargeInteger_(Seed);
  GetRandomLargeInteger_(RandomLargeInteger);
  v14 = Double_To_SInt32((double)(2 * dword_B3B400) * v16 + (double)(int)(dword_B3B3FC % (unsigned int)(__int64)v16));
  v17 = *(float *)(a1 + 0x64) + (*(float *)(a1 + 0x68) - *(float *)(a1 + 0x64)) * (((float)1.0 - 0.0) / (1.0 - 0.0));
  v3 = ((double)v14 - 0.0) / (dbl_A2FC70 - 0.0);
  v15 = *(float *)(a1 + 0x64) + (*(float *)(a1 + 0x60) - *(float *)(a1 + 0x64)) * v3;
  if ( v15 >= (double)v17 )
    v4 = v15;
  else
    v4 = v17;
  v6 = a1 + 0x28 * a2;
  v18 = (float)*(int *)(a1 + 0x54);
  v19 = v3 * ((double)*(int *)(a1 + 0x50) - v18) + v18;
  result = (int *)(__int64)v19;
  *(_DWORD *)(v6 + 0x84) = result;
  *(float *)(v6 + 0x88) = v4;
  *(float *)(v6 + 0x8C) = v4 * (*(float *)(a1 + 0x70) / *(float *)(a1 + 0x64));
  sound = OSGlobals->sound;
  if ( sound )
  {
    v9 = 5 * a2 + 0x14;
    v10 = *(int **)(a1 + 8 * v9);
    v11 = (int **)(a1 + 8 * v9);
    if ( v10 )
    {
      if ( !sub_6B7260(v10) )
      {
        sub_6B73C0(*v11);
        v12 = *v11;
        if ( *v11 )
        {
          sub_6B73E0(*v11);
          FormHeapFree((unsigned int)v12);
        }
      }
    }
    result = PlaySound___(sound, "UILockTumblerMoveLP", 0x31, 1);
    *v11 = result;
  }
  return result;
}
