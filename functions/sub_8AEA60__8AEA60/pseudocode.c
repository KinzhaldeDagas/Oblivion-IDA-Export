int __thiscall sub_8AEA60(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // esi

  result = sub_8A2690(this, (_DWORD *)a2); /*0x8aea69*/
  if ( this && (v4 = *(this + 2)) != 0 ) /*0x8aea77*/
    *(float *)(a2 + 4) = *(float *)(v4 + 0xC); /*0x8aea84*/
  else
    *(float *)(a2 + 4) = flt_B2EFC4; /*0x8aea9a*/
  return result; /*0x8aea87*/
}
