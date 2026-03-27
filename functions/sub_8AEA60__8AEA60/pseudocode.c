int __thiscall sub_8AEA60(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // esi

  result = sub_8A2690(this, (_DWORD *)a2);
  if ( this && (v4 = *(this + 2)) != 0 )
    *(float *)(a2 + 4) = *(float *)(v4 + 0xC);
  else
    *(float *)(a2 + 4) = flt_B2EFC4;
  return result;
}
