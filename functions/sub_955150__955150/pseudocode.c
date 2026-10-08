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

  v4 = a3; /*0x95515a*/
  v13 = this + 0x14; /*0x955162*/
  v5 = (_DWORD *)(a2 + 0x50); /*0x95516c*/
  v6 = (_DWORD *)(a3 + 0x10); /*0x95516f*/
  v7 = (float *)(a2 + 0xC); /*0x955172*/
  v17 = a3 - a2; /*0x955175*/
  v15 = 3; /*0x955179*/
  while ( 1 ) /*0x95519d*/
  {
    v14 = *(this + 0x12); /*0x95519d*/
    v8 = (double)(1 << *(_DWORD *)(v4 + 0x24)) / *(this + 0xF); /*0x9551a9*/
    if ( v8 <= v14 ) /*0x9551b5*/
      v8 = v14; /*0x9551b9*/
    v18 = *v13; /*0x9551c7*/
    v16 = v7[1] - *v7; /*0x955199*/
    if ( v16 < (double)*v13 && v8 >= v18 ) /*0x9551df*/
      v8 = v18; /*0x9551e3*/
    *(float *)&v12 = *(this + 0xF) * v8; /*0x9551ed*/
    v9 = sub_8ECB30(v12); /*0x9551f2*/
    v10 = *(_DWORD *)((char *)v7 + v17) - v9; /*0x955201*/
    *v5 = *v6 + v9 + 1; /*0x95520b*/
    v5[0xFFFFFFFD] = v10; /*0x955211*/
    ++v5; /*0x95521a*/
    v7 += 2; /*0x95521d*/
    v6 += 2; /*0x955220*/
    result = v15 - 1; /*0x955223*/
    ++v13; /*0x955224*/
    v15 = result; /*0x955228*/
    if ( !result ) /*0x95522c*/
      break; /*0x95522c*/
    v4 = a3; /*0x955183*/
  }
  return result; /*0x955232*/
}
