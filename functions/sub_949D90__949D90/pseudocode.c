int __thiscall sub_949D90(__m128 *this, int a2)
{
  int v2; // eax
  int v3; // ebx
  __m128 *v4; // esi
  int v5; // esi
  int v6; // edx
  int v7; // ebx
  int v8; // ecx
  int result; // eax
  int v10; // ecx
  _OWORD *v11; // edx
  __m128 *v12; // [esp+14h] [ebp-9Ch]
  _OWORD *v13; // [esp+14h] [ebp-9Ch]
  int v14; // [esp+18h] [ebp-98h]
  int v15; // [esp+1Ch] [ebp-94h]
  __m128 v16; // [esp+20h] [ebp-90h] BYREF
  _OWORD v17[8]; // [esp+30h] [ebp-80h] BYREF

  v12 = this;
  if ( (*(_DWORD *)(a2 + 8) & 0x3FFFFFFFu) < 0x18 )
  {
    v2 = 2 * (*(_DWORD *)(a2 + 8) & 0x3FFFFFFF);
    if ( v2 <= 0x18 )
      v2 = 0x18;
    sub_8A6E40((const void **)a2, v2, 0x10);
    this = v12;
  }
  *(_DWORD *)(a2 + 4) = 0x18;
  v3 = 0;
  v4 = (__m128 *)v17;
  while ( 1 )
  {
    v16 = *(this + 6);
    if ( (v3 & 1) != 0 )
      v16.m128_f32[0] = v16.m128_f32[0] * flt_A30634;
    if ( (v3 & 2) != 0 )
      v16.m128_f32[1] = v16.m128_f32[1] * flt_A30634;
    if ( (v3 & 4) != 0 )
      v16.m128_f32[2] = v16.m128_f32[2] * flt_A30634;
    sub_88FCC0(v4, this + 1, &v16);
    ++v3;
    ++v4;
    if ( v3 >= 8 )
      break;
    this = v12;
  }
  v5 = 0;
  v6 = 0;
  v14 = 0;
  v13 = v17;
  do
  {
    v7 = 1;
    v15 = 1;
    v8 = 0x10 * v5;
    do
    {
      result = v6 ^ v7;
      if ( v6 < (v6 ^ v7) )
      {
        v7 = v15;
        *(_OWORD *)(v8 + *(_DWORD *)a2) = *v13;
        v10 = v8 + 0x10;
        v11 = (_OWORD *)(v10 + *(_DWORD *)a2);
        v5 += 2;
        v8 = v10 + 0x10;
        result *= 0x10;
        *v11 = *(_OWORD *)((char *)v17 + result);
        v6 = v14;
      }
      v7 *= 2;
      v15 = v7;
    }
    while ( v7 < 8 );
    v14 = ++v6;
    ++v13;
  }
  while ( v6 < 8 );
  return result;
}
