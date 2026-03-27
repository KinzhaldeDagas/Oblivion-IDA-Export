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

  *(this + 2) = a4;
  *((_WORD *)this + 3) = 1;
  *this = &off_AA1E18;
  v5 = *(__m128 **)a3;
  v12 = *(int **)a2;
  sub_8B1FF0(v14, *(__m128 **)(a2 + 8), *(__m128 **)(a3 + 8));
  if ( (*(int (__thiscall **)(__m128 *))(v5->m128_i32[0] + 8))(v5) == 6 )
    sub_93EF30((_WORD *)this + 6, (int)v5, v12, v5, v14);
  else
    sub_93EE40((_WORD *)this + 6, v12, (int *)v5, v14);
  *((_OWORD *)this + 2) = 0;
  *(this + 0xB) = 0xBF800000;
  *(this + 6) = 0xBF800000;
  v6 = *(_DWORD *)(a2 + 0xC);
  for ( i = a2; v6; v6 = *(_DWORD *)(v6 + 0xC) )
    i = v6;
  v13 = *(float *)(i + 0x20);
  v8 = a3;
  for ( j = *(_DWORD *)(a3 + 0xC); j; j = *(_DWORD *)(j + 0xC) )
    v8 = j;
  v10 = *(float *)(v8 + 0x20);
  if ( v13 < v10 )
    v10 = v13;
  *((float *)this + 7) = v10;
  return this;
}
