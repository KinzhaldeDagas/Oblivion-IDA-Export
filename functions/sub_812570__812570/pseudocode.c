int __thiscall sub_812570(int this, unsigned __int16 a2)
{
  unsigned __int16 v2; // ax
  int v3; // edi
  _DWORD *v4; // edx
  _DWORD *v5; // eax

  v2 = *(_WORD *)(this + 0xE); /*0x812570*/
  if ( a2 < v2 ) /*0x81257c*/
  {
    if ( a2 != v2 - 1 ) /*0x81258e*/
    {
      v3 = *(_DWORD *)(this + 0x10); /*0x812591*/
      v4 = (_DWORD *)(0x10 * v2 + v3 - 0x10); /*0x812597*/
      v5 = (_DWORD *)(v3 + 0x10 * a2); /*0x8125a0*/
      *v5 = *v4; /*0x8125a4*/
      v5[1] = v4[1]; /*0x8125a9*/
      v5[2] = v4[2]; /*0x8125af*/
      v5[3] = v4[3]; /*0x8125b5*/
      *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * a2) = *(_DWORD *)(*(_DWORD *)(this + 0x14) /*0x8125c3*/
                                                                 + 4 * *(unsigned __int16 *)(this + 0xE)
                                                                 - 4);
    }
    *(float *)(0x10 * *(unsigned __int16 *)(this + 0xE) + *(_DWORD *)(this + 0x10) - 0x10) = 0.0; /*0x8125d4*/
    *(float *)(0x10 * *(unsigned __int16 *)(this + 0xE) + *(_DWORD *)(this + 0x10) - 0xC) = 0.0; /*0x8125e2*/
    *(float *)(0x10 * *(unsigned __int16 *)(this + 0xE) + *(_DWORD *)(this + 0x10) - 8) = flt_A418D8; /*0x8125f6*/
    *(float *)(0x10 * *(unsigned __int16 *)(this + 0xE) + *(_DWORD *)(this + 0x10) - 4) = 0.0; /*0x812604*/
    *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * (unsigned __int16)(*(_WORD *)(this + 0xE))-- - 4) = 0; /*0x81260f*/
    --unk_B4334C; /*0x81261d*/
  }
  return *(unsigned __int16 *)(this + 0xE); /*0x812628*/
}
