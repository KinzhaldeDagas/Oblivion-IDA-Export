int __thiscall sub_812570(int this, unsigned __int16 a2)
{
  unsigned __int16 v2; // ax
  int v3; // edi
  _DWORD *v4; // edx
  _DWORD *v5; // eax

  v2 = *(_WORD *)(this + 0xE);
  if ( a2 < v2 )
  {
    if ( a2 != v2 - 1 )
    {
      v3 = *(_DWORD *)(this + 0x10);
      v4 = (_DWORD *)(0x10 * v2 + v3 - 0x10);
      v5 = (_DWORD *)(v3 + 0x10 * a2);
      *v5 = *v4;
      v5[1] = v4[1];
      v5[2] = v4[2];
      v5[3] = v4[3];
      *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * a2) = *(_DWORD *)(*(_DWORD *)(this + 0x14)
                                                                 + 4 * *(unsigned __int16 *)(this + 0xE)
                                                                 - 4);
    }
    *(float *)(0x10 * *(unsigned __int16 *)(this + 0xE) + *(_DWORD *)(this + 0x10) - 0x10) = 0.0;
    *(float *)(0x10 * *(unsigned __int16 *)(this + 0xE) + *(_DWORD *)(this + 0x10) - 0xC) = 0.0;
    *(float *)(0x10 * *(unsigned __int16 *)(this + 0xE) + *(_DWORD *)(this + 0x10) - 8) = flt_A418D8;
    *(float *)(0x10 * *(unsigned __int16 *)(this + 0xE) + *(_DWORD *)(this + 0x10) - 4) = 0.0;
    *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * (unsigned __int16)(*(_WORD *)(this + 0xE))-- - 4) = 0;
    --dword_B4334C;
  }
  return *(unsigned __int16 *)(this + 0xE);
}
