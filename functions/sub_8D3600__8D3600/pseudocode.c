int __thiscall sub_8D3600(const void **this, int a2, _DWORD *a3)
{
  const void **v3; // esi
  int result; // eax

  v3 = this + 5; /*0x8d3604*/
  if ( *(this + 6) == (const void *)((unsigned int)*(this + 7) & 0x3FFFFFFF) ) /*0x8d3612*/
    sub_8A6EE0(v3, 0x40); /*0x8d3617*/
  result = (int)*v3 + 0x40 * (_DWORD)v3[1]; /*0x8d3629*/
  v3[1] = (char *)v3[1] + 1; /*0x8d362c*/
  *(_DWORD *)result = *(_DWORD *)(a2 + 0x3034); /*0x8d3639*/
  *(_DWORD *)(result + 0xC) = *(_DWORD *)(a2 + 0x3030); /*0x8d3641*/
  *(_OWORD *)(result + 0x20) = *(_OWORD *)(a2 + 0x10); /*0x8d364c*/
  *(_OWORD *)(result + 0x30) = *(_OWORD *)(a2 + 0x20); /*0x8d3654*/
  *(_DWORD *)(result + 4) = a3[5] + *(_DWORD *)(a3[5] + 0x10); /*0x8d3660*/
  *(_DWORD *)(result + 8) = a3[6] + *(_DWORD *)(a3[6] + 0x10); /*0x8d366b*/
  *(_DWORD *)(result + 0x10) = *(_DWORD *)(a2 + 0x3038); /*0x8d3674*/
  *(_DWORD *)(result + 0x14) = *(_DWORD *)(a2 + 0x303C); /*0x8d367d*/
  *(_DWORD *)(result + 0x18) = a3[4]; /*0x8d3684*/
  return result; /*0x8d3683*/
}
