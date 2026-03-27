void __thiscall sub_753E20(float *this, int a2, int a3)
{
  unsigned __int16 i; // di
  float *v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float v10; // [esp+Ch] [ebp-18h]
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+18h] [ebp-Ch]
  float v14; // [esp+1Ch] [ebp-8h]
  float v15; // [esp+20h] [ebp-4h]
  float v16; // [esp+2Ch] [ebp+8h]

  for ( i = 0; i < *(_WORD *)(a3 + 0x48); v6[2] = v6[2] + v15 )
  {
    v6 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * i);
    v7 = rand();
    v10 = ((double)v7 + (double)v7) / dbl_A3D5A8 - dbl_A2F928;
    v8 = rand();
    v11 = ((double)v8 + (double)v8) / dbl_A3D5A8 - dbl_A2F928;
    v9 = rand();
    ++i;
    v12 = ((double)v9 + (double)v9) / dbl_A3D5A8 - dbl_A2F928;
    v16 = *(this + 7);
    v13 = v16 * v10;
    v14 = v16 * v11;
    v15 = v16 * v12;
    *v6 = *v6 + v13;
    v6[1] = v6[1] + v14;
  }
}
