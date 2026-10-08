_DWORD *__thiscall sub_93F0E0(_DWORD *this, int a2, int a3, int a4)
{
  __m128 *v5; // edi
  int v6; // ecx
  int i; // eax
  int v8; // ecx
  int j; // eax
  double v10; // st7
  int *v12; // [esp+Ch] [ebp-44h]
  float v13; // [esp+Ch] [ebp-44h]
  __m128 v14[4]; // [esp+10h] [ebp-40h] BYREF

  *(this + 2) = a4; /*0x93f0f3*/
  *((_WORD *)this + 3) = 1; /*0x93f0f9*/
  *this = &off_AA1E18; /*0x93f0ff*/
  v5 = *(__m128 **)a3; /*0x93f10b*/
  v12 = *(int **)a2; /*0x93f111*/
  sub_8B1FF0(v14, *(__m128 **)(a2 + 8), *(__m128 **)(a3 + 8)); /*0x93f11a*/
  if ( (*(int (__thiscall **)(__m128 *))(v5->m128_i32[0] + 8))(v5) == 6 ) /*0x93f129*/
    sub_93EF30((_WORD *)this + 6, (int)v5, v12, v5, v14); /*0x93f139*/
  else
    sub_93EE40((_WORD *)this + 6, v12, (int *)v5, v14); /*0x93f14e*/
  *((_OWORD *)this + 2) = 0; /*0x93f15b*/
  *(this + 0xB) = 0xBF800000; /*0x93f15f*/
  *(this + 6) = 0xBF800000; /*0x93f162*/
  v6 = *(_DWORD *)(a2 + 0xC); /*0x93f165*/
  for ( i = a2; v6; v6 = *(_DWORD *)(v6 + 0xC) ) /*0x93f16c*/
    i = v6; /*0x93f170*/
  v13 = *(float *)(i + 0x20); /*0x93f17c*/
  v8 = a3; /*0x93f180*/
  for ( j = *(_DWORD *)(a3 + 0xC); j; j = *(_DWORD *)(j + 0xC) ) /*0x93f188*/
    v8 = j; /*0x93f190*/
  v10 = *(float *)(v8 + 0x20); /*0x93f199*/
  if ( v13 < v10 ) /*0x93f1a7*/
    v10 = v13; /*0x93f1ab*/
  *((float *)this + 7) = v10; /*0x93f1b0*/
  return this; /*0x93f1b5*/
}
