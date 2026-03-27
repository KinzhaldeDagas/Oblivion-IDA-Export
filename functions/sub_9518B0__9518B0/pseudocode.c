signed int __thiscall sub_9518B0(__m128 *this, int a2, int a3, __m128 *a4, _DWORD *a5)
{
  __m128 *v5; // edx
  __m128 v6; // xmm0
  __m128 *v8; // ecx
  int v10; // [esp+14h] [ebp-48h] BYREF
  int v11; // [esp+18h] [ebp-44h] BYREF
  __m128 v12; // [esp+1Ch] [ebp-40h] BYREF
  __m128 v13[3]; // [esp+2Ch] [ebp-30h] BYREF

  v5 = *(__m128 **)(a3 + 0x34);
  v6 = *a4;
  v8 = *(__m128 **)(a3 + 0x24);
  v13[0] = _mm_sub_ps(*a4, *(__m128 *)*(_DWORD *)(a3 + 0x14));
  v13[1] = _mm_sub_ps(v6, *v8);
  v13[2] = _mm_sub_ps(v6, *v5);
  sub_88FD90(&v12, v13, (__m128 *)a3);
  if ( (_mm_movemask_ps(_mm_cmplt_ps(v12, *(this + 4))) & 7) != 0 )
  {
    *a5 = 0;
    return 1;
  }
  v10 = 0;
  if ( sub_959410((float *)a2, a3, a4, &v10, &v11) )
    goto LABEL_7;
  if ( *(_DWORD *)(a2 + 0xC) - *(_DWORD *)(a2 + 0x10) + 0x37 < v10 )
  {
    *a5 = 2;
    return 1;
  }
  if ( !sub_9595A0((_DWORD *)a2, v10, v11, (char)a4) )
    return 0;
LABEL_7:
  *a5 = 3;
  return 1;
}
