// positive sp value has been detected, the output may be wrong!
int *__userpurge def_5AFE9C@<eax>(int a1@<edi>, int a2)
{
  unsigned int v2; // esi
  double v3; // st7
  double v4; // st6
  int v6; // ecx
  int *result; // eax
  int *sound; // ebx
  int v9; // edx
  UInt32 *v10; // ecx
  int **v11; // esi
  int *v12; // edi
  float v13; // [esp-14h] [ebp-14h]
  int v14; // [esp-14h] [ebp-14h]
  float v15; // [esp-10h] [ebp-10h]
  float v16; // [esp-Ch] [ebp-Ch]
  float v17; // [esp-8h] [ebp-8h]
  float v18; // [esp-8h] [ebp-8h]
  float v19; // [esp+4h] [ebp+4h]

  v13 = (float)1.0 * dbl_A2FC70; /*0x5b007a*/
  v16 = v13 / dbl_A3F3F0; /*0x5b0088*/
  v2 = Game_RandomLargeInteger(0); /*0x5b0098*/
  dword_B3B0B4[0xD2] = Game_RandomLargeInteger(*(_DWORD *)&MEMORY[0xB33E90][0x10]); /*0x5b00a0*/
  Game_RandomLargeInteger(v2); /*0x5b00a5*/
  v14 = Double_To_SInt32((double)(2 * dword_B3B0B4[0xD3]) * v16 + (double)(int)(dword_B3B0B4[0xD2] /*0x5b0106*/
                                                                              % (unsigned int)(__int64)v16));
  v17 = *(float *)(a1 + 0x64) + (*(float *)(a1 + 0x68) - *(float *)(a1 + 0x64)) * (((float)1.0 - 0.0) / (1.0 - 0.0)); /*0x5b012b*/
  v3 = ((double)v14 - 0.0) / (dbl_A2FC70 - 0.0); /*0x5b0144*/
  v15 = *(float *)(a1 + 0x64) + (*(float *)(a1 + 0x60) - *(float *)(a1 + 0x64)) * v3; /*0x5b0157*/
  if ( v15 >= (double)v17 ) /*0x5b016a*/
    v4 = v15; /*0x5b0178*/
  else
    v4 = v17; /*0x5b0172*/
  v6 = a1 + 0x28 * a2; /*0x5b0184*/
  v18 = (float)*(int *)(a1 + 0x54); /*0x5b0187*/
  v19 = v3 * ((double)*(int *)(a1 + 0x50) - v18) + v18; /*0x5b019e*/
  result = (int *)(__int64)v19; /*0x5b01c0*/
  *(_DWORD *)(v6 + 0x84) = result; /*0x5b01c4*/
  *(float *)(v6 + 0x88) = v4; /*0x5b01ce*/
  *(float *)(v6 + 0x8C) = v4 * (*(float *)(a1 + 0x70) / *(float *)(a1 + 0x64)); /*0x5b01dc*/
  sound = (int *)MEMORY[0xB33398]->sound; /*0x5b01e8*/
  if ( sound ) /*0x5b01ed*/
  {
    v9 = 5 * a2 + 0x14; /*0x5b01ef*/
    v10 = *(UInt32 **)(a1 + 8 * v9); /*0x5b01f3*/
    v11 = (int **)(a1 + 8 * v9); /*0x5b01f8*/
    if ( v10 ) /*0x5b01fb*/
    {
      if ( !SoundHandle::IsPlaying(v10) ) /*0x5b01fd*/
      {
        sub_6B73C0(*v11); /*0x5b0208*/
        v12 = *v11; /*0x5b020d*/
        if ( *v11 ) /*0x5b020d*/
        {
          sub_6B73E0(*v11); /*0x5b0215*/
          FormHeapFree((unsigned int)v12); /*0x5b021b*/
        }
      }
    }
    result = PlaySound___(sound, "UILockTumblerMoveLP", 0x31, 1); /*0x5b022e*/
    *v11 = result; /*0x5b0233*/
  }
  return result; /*0x5b023b*/
}
