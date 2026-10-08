signed int __thiscall sub_75AA90(_WORD *this, int a2, int a3)
{
  unsigned __int16 v3; // bx
  int v4; // edi
  signed int v6; // ebp
  int v7; // edx
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  _DWORD *v12; // eax
  double v13; // st7
  int v14; // edx
  int v15; // ecx
  float *v16; // eax
  int v17; // edi
  int v18; // ebp
  int v19; // ecx
  bool v20; // c3
  float *v21; // ecx
  signed int result; // eax
  int v23; // [esp+Ch] [ebp-14h]
  int v24; // [esp+10h] [ebp-10h] BYREF
  int v25; // [esp+14h] [ebp-Ch]
  int v26; // [esp+18h] [ebp-8h]
  float i; // [esp+1Ch] [ebp-4h]

  v3 = *(_WORD *)(a3 + 0x48); /*0x75aa98*/
  v4 = *(_DWORD *)(a3 + 0x68); /*0x75aa9e*/
  v23 = v4; /*0x75aaa8*/
  if ( *(this + 0xC) == 0xFFFF ) /*0x75aaac*/
    sub_75A870((int)this, *(unsigned __int16 *)(a3 + 8) / 0x14 + 1); /*0x75aac8*/
  v6 = v3; /*0x75aad2*/
  v7 = v3 / 0x14; /*0x75aadc*/
  v8 = (__int16)*(this + 0xC); /*0x75aaea*/
  if ( v8 >= v7 + 1 ) /*0x75aaec*/
    v8 = v7 + 1; /*0x75aaee*/
  if ( v8 <= 1 ) /*0x75aaf3*/
    v8 = 1; /*0x75aaf5*/
  if ( *(_WORD *)(v4 + 0xB6) ) /*0x75aafa*/
    v9 = **(_DWORD **)(v4 + 0xB0); /*0x75ab0e*/
  else
    v9 = 0; /*0x75ab04*/
  v10 = (unsigned __int16)*(this + 0xD); /*0x75ab13*/
  v24 = *(_DWORD *)(v9 + 0x20); /*0x75ab19*/
  v25 = *(_DWORD *)(v9 + 0x24); /*0x75ab20*/
  v26 = *(_DWORD *)(v9 + 0x28); /*0x75ab27*/
  for ( i = *(float *)(v9 + 0x2C); (int)v10 < v6; v10 += v8 ) /*0x75ab32*/
  {
    if ( *(unsigned __int16 *)(v23 + 0xB6) > v10 ) /*0x75ab4d*/
      v11 = *(_DWORD *)(*(_DWORD *)(v23 + 0xB0) + 4 * v10); /*0x75ab59*/
    else
      v11 = 0; /*0x75ab4f*/
    NiSphere_Merge((float *)&v24, (float *)(v11 + 0x20)); /*0x75ab64*/
  }
  v12 = (_DWORD *)(*((_DWORD *)this + 7) + 0x10 * (unsigned __int16)*(this + 0xD)); /*0x75ab7a*/
  *v12 = v24; /*0x75ab7d*/
  v12[1] = v25; /*0x75ab83*/
  v12[2] = v26; /*0x75ab8a*/
  *(float *)(0x10 * (unsigned __int16)*(this + 0xD) + *((_DWORD *)this + 7) + 0xC) = i; /*0x75ab9b*/
  v13 = 0.0; /*0x75aba5*/
  v14 = v8; /*0x75aba7*/
  if ( v8 < (__int16)*(this + 0xC) ) /*0x75aba9*/
  {
    v15 = 0x10 * v8; /*0x75abad*/
    do /*0x75abe2*/
    {
      v16 = (float *)(v15 + *((_DWORD *)this + 7)); /*0x75abb9*/
      *v16 = g_zeroNiPoint3.x; /*0x75abbb*/
      v16[1] = g_zeroNiPoint3.y; /*0x75abc3*/
      v16[2] = g_zeroNiPoint3.z; /*0x75abcc*/
      *(float *)(v15 + *((_DWORD *)this + 7) + 0xC) = 0.0; /*0x75abd2*/
      ++v14; /*0x75abda*/
      v15 += 0x10; /*0x75abdd*/
    }
    while ( v14 < (__int16)*(this + 0xC) ); /*0x75abe2*/
  }
  if ( v8 > 1 ) /*0x75abe7*/
  {
    v17 = 0x10; /*0x75abe9*/
    v18 = v8 - 1; /*0x75abee*/
    do /*0x75ac15*/
    {
      v19 = *((_DWORD *)this + 7); /*0x75abf1*/
      v20 = v13 == *(float *)(v19 + v17 + 0xC); /*0x75abf4*/
      v21 = (float *)(v17 + v19); /*0x75abf8*/
      if ( !v20 ) /*0x75abff*/
      {
        NiSphere_Merge((float *)&v24, v21); /*0x75ac08*/
        v13 = 0.0; /*0x75ac0d*/
      }
      v17 += 0x10; /*0x75ac0f*/
      --v18; /*0x75ac12*/
    }
    while ( v18 ); /*0x75ac15*/
  }
  if ( v13 == i ) /*0x75ac21*/
    i = **(float **)(a3 + 0x4C) * **(float **)(a3 + 0x44); /*0x75ac31*/
  *(_DWORD *)(v23 + 0x20) = v24; /*0x75ac3d*/
  *(_DWORD *)(v23 + 0x24) = v25; /*0x75ac44*/
  *(_DWORD *)(v23 + 0x28) = v26; /*0x75ac4b*/
  *(float *)(v23 + 0x2C) = i; /*0x75ac52*/
  result = (unsigned __int16)++*(this + 0xD); /*0x75ac5e*/
  if ( result >= v8 ) /*0x75ac63*/
    *(this + 0xD) = 0; /*0x75ac65*/
  return result; /*0x75ac6b*/
}
