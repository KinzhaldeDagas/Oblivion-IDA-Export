int __thiscall sub_6B3560(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // ebp
  int v18; // eax
  int v19; // ecx
  int *v20; // ebp
  unsigned int *v21; // eax
  int v22; // ecx
  bool v23; // cc
  _DWORD *v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // ebp
  int *v29; // esi
  int v30; // edx
  unsigned int *v31; // ecx
  int result; // eax
  unsigned int v33; // [esp+10h] [ebp-1Ch]
  int v34; // [esp+14h] [ebp-18h] BYREF
  int v35; // [esp+18h] [ebp-14h] BYREF
  int v36; // [esp+1Ch] [ebp-10h]
  int v37; // [esp+20h] [ebp-Ch]
  int v38; // [esp+24h] [ebp-8h] BYREF
  int v39; // [esp+28h] [ebp-4h] BYREF
  int v40; // [esp+30h] [ebp+4h]

  v3 = *this; /*0x6b3572*/
  v4 = *(_DWORD *)(v3 + 4); /*0x6b3574*/
  v5 = 0x48 * a2; /*0x6b357f*/
  v6 = *(_DWORD *)(v4 + 0x48 * a2 + 0x2C) + *(this + 0x104A); /*0x6b3581*/
  v7 = 0x48 * a2 + v4; /*0x6b3585*/
  v40 = v6; /*0x6b358b*/
  if ( *(_DWORD *)(v7 + 0x3C) && *(_DWORD *)(*(_DWORD *)(v3 + 4) + v5 + 0x40) == 2 ) /*0x6b3599*/
  {
    v36 = 0x24; /*0x6b359b*/
    v37 = 0x240; /*0x6b35a3*/
  }
  else
  {
    v8 = *(_DWORD *)(v3 + 4); /*0x6b35ad*/
    v9 = *(_DWORD *)(v8 + v5 + 0x60); /*0x6b35b0*/
    v10 = *(_DWORD *)(v8 + v5 + 0x64); /*0x6b35bd*/
    v11 = 0x25 * *(this + 0x104E); /*0x6b35c0*/
    v39 = v9; /*0x6b35c3*/
    v12 = v9 + v10; /*0x6b35c7*/
    v13 = *(_DWORD *)(4 * (v11 + v9) + 0xB17F5C); /*0x6b35cd*/
    v14 = *(_DWORD *)(4 * (v11 + v12) + 0xB17F60); /*0x6b35d6*/
    v36 = v13; /*0x6b35dd*/
    v37 = v14; /*0x6b35e1*/
  }
  v15 = 0; /*0x6b35e8*/
  v16 = 0; /*0x6b35ea*/
  v33 = 0; /*0x6b35f4*/
  if ( (*(_DWORD *)(*(_DWORD *)(v3 + 4) + v5 + 0x30) & 0x7FFFFFFF) != 0 )
  {
    v17 = this + 7; /*0x6b35fe*/
    while ( 1 )
    {
      if ( v15 >= v36 )
        v18 = v15 >= v37
            ? *(_DWORD *)(*(_DWORD *)(*this + 4) + v5 + 0x50)
            : *(_DWORD *)(*(_DWORD *)(*this + 4) + v5 + 0x4C);
      else
        v18 = *(_DWORD *)(*(_DWORD *)(*this + 4) + v5 + 0x48); /*0x6b3612*/
      sub_6B32F0(0x28 * v18 + 0xB17A08, &v34, &v35, &v38, &v39, (unsigned int *)*(this + 1)); /*0x6b3655*/
      v19 = v35; /*0x6b365e*/
      *v17 = v34; /*0x6b3662*/
      v20 = v17 + 1; /*0x6b3669*/
      *v20 = v19; /*0x6b366c*/
      v16 += 2; /*0x6b3683*/
      v17 = v20 + 1; /*0x6b3686*/
      v33 += 2; /*0x6b368b*/
      if ( v33 >= 2 * *(_DWORD *)(*(_DWORD *)(*this + 4) + v5 + 0x30) ) /*0x6b368f*/
        break; /*0x6b368f*/
      v15 = v33; /*0x6b3603*/
    }
    v6 = v40; /*0x6b3695*/
  }
  v21 = (unsigned int *)*(this + 1); /*0x6b36ac*/
  v37 = 0x28 * *(_DWORD *)(*(_DWORD *)(*this + 4) + v5 + 0x70) + 0xB17F08; /*0x6b36af*/
  v22 = v21[1]; /*0x6b36b3*/
  v23 = v22 <= v6; /*0x6b36b6*/
  if ( v22 < v6 ) /*0x6b36b8*/
  {
    v24 = this + v16 + 7; /*0x6b36ba*/
    do /*0x6b3731*/
    {
      if ( v16 >= 0x240 ) /*0x6b36c6*/
        break; /*0x6b36c6*/
      sub_6B32F0(v37, &v34, &v35, &v38, &v39, v21); /*0x6b36e2*/
      v25 = v38; /*0x6b36e7*/
      v26 = v39; /*0x6b36eb*/
      v27 = v34; /*0x6b36ef*/
      v28 = v35; /*0x6b36f3*/
      *v24 = v38; /*0x6b36f7*/
      v24[1] = v26; /*0x6b36f9*/
      v29 = v24 + 1; /*0x6b36fc*/
      v29[1] = v27; /*0x6b36ff*/
      v30 = v25 + v28 + v27; /*0x6b370a*/
      v29 += 2; /*0x6b370c*/
      *v29 = v28; /*0x6b370f*/
      v21 = (unsigned int *)*(this + 1); /*0x6b3711*/
      *(this + 6) += v26 + v30; /*0x6b3716*/
      v22 = v21[1]; /*0x6b3719*/
      v6 = v40; /*0x6b371c*/
      v16 += 4; /*0x6b3729*/
      v24 = v29 + 1; /*0x6b372c*/
    }
    while ( v22 < v40 ); /*0x6b3731*/
    v23 = v22 <= v6; /*0x6b3733*/
  }
  if ( !v23 ) /*0x6b3735*/
  {
    sub_6AF7B0((_DWORD *)*(this + 1), v22 - v6); /*0x6b373d*/
    v6 = v40; /*0x6b3742*/
    v16 -= 4; /*0x6b3746*/
  }
  v31 = (unsigned int *)*(this + 1); /*0x6b3749*/
  result = v31[1]; /*0x6b374c*/
  if ( result < v6 ) /*0x6b3751*/
    result = sub_6AF6F0(v31, v6 - result); /*0x6b3756*/
  if ( v16 >= 0x240 ) /*0x6b3762*/
    *(this + 4) = 0x240; /*0x6b3769*/
  else
    *(this + 4) = v16; /*0x6b3764*/
  if ( v16 < 0x240 ) /*0x6b376e*/
  {
    memset(this + v16 + 7, 0, 4 * (0x240 - v16)); /*0x6b3778*/
    return 0; /*0x6b3776*/
  }
  return result; /*0x6b377a*/
}
