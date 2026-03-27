char __thiscall sub_74AD30(float *this, int a2, int a3, NiPoint3 *a4)
{
  int v5; // eax
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  int v10; // esi
  float v12; // [esp+10h] [ebp-14h]
  float v13; // [esp+14h] [ebp-10h]
  float v14; // [esp+18h] [ebp-Ch]
  float v15; // [esp+1Ch] [ebp-8h]
  float v16; // [esp+20h] [ebp-4h]
  float v17; // [esp+28h] [ebp+4h]
  float v18; // [esp+28h] [ebp+4h]

  v5 = rand();
  v7 = *(_DWORD *)(a2 + 0xB4);
  v8 = v5 % *(unsigned __int16 *)(v7 + 8);
  v9 = *(_DWORD *)(v7 + 0x1C);
  v10 = *(_DWORD *)(v7 + 0x20);
  if ( !v9 )
    return 0;
  *(_DWORD *)a3 = *(_DWORD *)(0xC * v8 + v9);
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(0xC * v8 + v9 + 4);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(0xC * v8 + v9 + 8);
  v12 = *(float *)(0xC * v8 + v10 + 4);
  v13 = *(float *)(0xC * v8 + v10 + 8);
  if ( !*((_DWORD *)this + 0x1C) )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 0xB4) + 0x20) )
    {
      v17 = a4->y * a4->y + a4->x * a4->x + a4->z * a4->z;
      v18 = sqrt(v17);
      v14 = *(float *)(0xC * v8 + v10) * v18;
      a4->x = v14;
      v15 = v12 * v18;
      a4->y = v15;
      v16 = v18 * v13;
      a4->z = v16;
    }
  }
  sub_74A0A0(this, (NiPoint3 *)a2, (NiPoint3 *)a3, a4);
  return 1;
}
