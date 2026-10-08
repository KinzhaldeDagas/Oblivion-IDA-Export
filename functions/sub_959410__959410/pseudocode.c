signed int __thiscall sub_959410(float *this, int a2, __m128 *a3, _DWORD *a4, _DWORD *a5)
{
  signed int v6; // eax

  *a5 = 0; /*0x959422*/
  *a4 = 0; /*0x95942c*/
  *(this + 1) = 3.4028235e38; /*0x959433*/
  *this = 0.0000001; /*0x959441*/
  v6 = sub_958A30(a2, a3, this, this + 1); /*0x959447*/
  *(_DWORD *)(a2 + 0x44) = v6; /*0x95944f*/
  if ( v6 == 1 ) /*0x959452*/
    return sub_958AD0(this, *(float *)&a2, a3, a4, a5); /*0x95945e*/
  else
    return 2; /*0x95946d*/
}
