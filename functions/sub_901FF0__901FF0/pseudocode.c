_DWORD *__thiscall sub_901FF0(_DWORD *this, int **a2, _DWORD *a3, _DWORD *a4, int a5)
{
  float v6; // ecx
  int v7; // eax
  double v8; // st7
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  __m128 *v13; // edx
  int *v14; // eax
  __m128 *v16; // [esp-4h] [ebp-94h]
  int *v17; // [esp+Ch] [ebp-84h]
  _DWORD v18[4]; // [esp+10h] [ebp-80h] BYREF
  int (__stdcall **v19)(char); // [esp+20h] [ebp-70h] BYREF
  __int16 v20; // [esp+26h] [ebp-6Ah]
  int v21; // [esp+28h] [ebp-68h]
  float v22; // [esp+2Ch] [ebp-64h]
  int v23; // [esp+30h] [ebp-60h]
  int v24; // [esp+34h] [ebp-5Ch]
  int (__stdcall **v25)(char); // [esp+38h] [ebp-58h] BYREF
  __int16 v26; // [esp+3Eh] [ebp-52h]
  int v27; // [esp+40h] [ebp-50h]
  float v28; // [esp+44h] [ebp-4Ch]
  int v29; // [esp+48h] [ebp-48h]
  int v30; // [esp+4Ch] [ebp-44h]
  __m128 v31[4]; // [esp+50h] [ebp-40h] BYREF

  v6 = flt_B2FFE4; /*0x90200a*/
  v18[2] = a3[2]; /*0x902010*/
  v7 = *a3; /*0x902014*/
  v22 = v6; /*0x902016*/
  v18[3] = a3; /*0x90201a*/
  v20 = 1; /*0x90201e*/
  v21 = 0; /*0x902025*/
  v19 = &off_A9BB94; /*0x90202d*/
  v8 = *(float *)(**(_DWORD **)(v7 + 0x10) + 0xC); /*0x90203a*/
  v9 = a3[1]; /*0x90203d*/
  v23 = *(_DWORD *)(v7 + 0x10); /*0x902040*/
  v10 = *(_DWORD *)(v7 + 0x14); /*0x902044*/
  v22 = v8; /*0x902047*/
  v24 = v10; /*0x90204b*/
  v18[0] = &v19; /*0x902056*/
  v18[1] = v9; /*0x902063*/
  sub_9393B0(this, (int)a2, (int)v18, a5); /*0x902067*/
  *this = &off_A9BBC8; /*0x90206f*/
  *(this + 0x20) = *a4; /*0x902077*/
  *((_BYTE *)this + 0x84) = 1; /*0x90207d*/
  v11 = *(_DWORD *)(*a3 + 0x10); /*0x902086*/
  v12 = *(_DWORD *)(*a3 + 0x14); /*0x90208e*/
  v13 = (__m128 *)a2[2]; /*0x902091*/
  v28 = *(float *)(*(_DWORD *)v11 + 0xC); /*0x902094*/
  v29 = v11; /*0x902098*/
  v16 = (__m128 *)a3[2]; /*0x90209f*/
  v30 = v12; /*0x9020a0*/
  v14 = *a2; /*0x9020a4*/
  v26 = 1; /*0x9020ab*/
  v27 = 0; /*0x9020b2*/
  v25 = &off_A9BB94; /*0x9020ba*/
  v17 = v14; /*0x9020c2*/
  sub_8B1FF0(v31, v13, v16); /*0x9020c6*/
  sub_93EE40((_WORD *)this + 6, v17, (int *)&v25, v31); /*0x9020dd*/
  *(this + 0xB) = 0xBF800000; /*0x9020e7*/
  *(this + 6) = 0xBF800000; /*0x9020ea*/
  return this; /*0x9020ed*/
}
