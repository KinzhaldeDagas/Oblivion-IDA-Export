int __thiscall sub_955150(float *this, int a2, int a3)
{
  int v4; // ecx
  _DWORD *v5; // esi
  _DWORD *v6; // ebp
  float *v7; // edi
  double v8; // st7
  int v9; // eax
  int v10; // edx
  int result; // eax
  unsigned int v12; // [esp+0h] [ebp-2Ch]
  float *v13; // [esp+14h] [ebp-18h]
  float v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h]
  float v16; // [esp+24h] [ebp-8h]
  int v17; // [esp+28h] [ebp-4h]
  float v18; // [esp+30h] [ebp+4h]

  v4 = a3;
  v13 = this + 0x14;
  v5 = (_DWORD *)(a2 + 0x50);
  v6 = (_DWORD *)(a3 + 0x10);
  v7 = (float *)(a2 + 0xC);
  v17 = a3 - a2;
  v15 = 3;
  while ( 1 )
  {
    v14 = *(this + 0x12);
    v8 = (double)(1 << *(_DWORD *)(v4 + 0x24)) / *(this + 0xF);
    if ( v8 <= v14 )
      v8 = v14;
    v18 = *v13;
    v16 = v7[1] - *v7;
    if ( v16 < (double)*v13 && v8 >= v18 )
      v8 = v18;
    *(float *)&v12 = *(this + 0xF) * v8;
    v9 = sub_8ECB30(v12);
    v10 = *(_DWORD *)((char *)v7 + v17) - v9;
    *v5 = *v6 + v9 + 1;
    v5[0xFFFFFFFD] = v10;
    ++v5;
    v7 += 2;
    v6 += 2;
    result = v15 - 1;
    ++v13;
    v15 = result;
    if ( !result )
      break;
    v4 = a3;
  }
  return result;
}
