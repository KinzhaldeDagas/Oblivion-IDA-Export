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

  v6 = flt_B2FFE4;
  v18[2] = a3[2];
  v7 = *a3;
  v22 = v6;
  v18[3] = a3;
  v20 = 1;
  v21 = 0;
  v19 = &off_A9BB94;
  v8 = *(float *)(**(_DWORD **)(v7 + 0x10) + 0xC);
  v9 = a3[1];
  v23 = *(_DWORD *)(v7 + 0x10);
  v10 = *(_DWORD *)(v7 + 0x14);
  v22 = v8;
  v24 = v10;
  v18[0] = &v19;
  v18[1] = v9;
  sub_9393B0(this, (int)a2, (int)v18, a5);
  *this = &off_A9BBC8;
  *(this + 0x20) = *a4;
  *((_BYTE *)this + 0x84) = 1;
  v11 = *(_DWORD *)(*a3 + 0x10);
  v12 = *(_DWORD *)(*a3 + 0x14);
  v13 = (__m128 *)a2[2];
  v28 = *(float *)(*(_DWORD *)v11 + 0xC);
  v29 = v11;
  v16 = (__m128 *)a3[2];
  v30 = v12;
  v14 = *a2;
  v26 = 1;
  v27 = 0;
  v25 = &off_A9BB94;
  v17 = v14;
  sub_8B1FF0(v31, v13, v16);
  sub_93EE40((_WORD *)this + 6, v17, (int *)&v25, v31);
  *(this + 0xB) = 0xBF800000;
  *(this + 6) = 0xBF800000;
  return this;
}
