signed int __thiscall sub_9518B0(__m128 *this, int a2, int a3, __m128 *a4, _DWORD *a5)
{
  __m128 *v5; // edx
  __m128 v6; // xmm0
  __m128 *v8; // ecx
  int v10; // [esp+14h] [ebp-48h] BYREF
  int v11; // [esp+18h] [ebp-44h] BYREF
  __m128 v12; // [esp+1Ch] [ebp-40h] BYREF
  __m128 v13[3]; // [esp+2Ch] [ebp-30h] BYREF

  v5 = *(__m128 **)(a3 + 0x34); /*0x9518c4*/
  v6 = *a4; /*0x9518cb*/
  v8 = *(__m128 **)(a3 + 0x24); /*0x9518d0*/
  v13[0] = _mm_sub_ps(*a4, *(__m128 *)*(_DWORD *)(a3 + 0x14)); /*0x9518d9*/
  v13[1] = _mm_sub_ps(v6, *v8); /*0x9518e7*/
  v13[2] = _mm_sub_ps(v6, *v5); /*0x9518fc*/
  hkBasis_ProjectVector(&v12, v13, (__m128 *)a3); /*0x951901*/
  if ( (_mm_movemask_ps(_mm_cmplt_ps(v12, *(this + 4))) & 7) != 0 ) /*0x951919*/
  {
    *a5 = 0; /*0x95191e*/
    return 1; /*0x95192f*/
  }
  v10 = 0; /*0x951943*/
  if ( sub_959410((float *)a2, a3, a4, &v10, &v11) ) /*0x95194b*/
    goto LABEL_7; /*0x95194b*/
  if ( *(_DWORD *)(a2 + 0xC) - *(_DWORD *)(a2 + 0x10) + 0x37 < v10 ) /*0x951965*/
  {
    *a5 = 2; /*0x95196a*/
    return 1; /*0x95197b*/
  }
  if ( !sub_9595A0((_DWORD *)a2, v10, v11, (__int32)a4) ) /*0x951987*/
    return 0; /*0x9519a9*/
LABEL_7:
  *a5 = 3; /*0x951993*/
  return 1; /*0x95192a*/
}
