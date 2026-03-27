int __thiscall sub_8029C0(int this, unsigned __int16 a2)
{
  unsigned __int16 v2; // dx
  unsigned __int16 v3; // bp
  unsigned __int16 v4; // dx
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  int v8; // eax

  v2 = *(_WORD *)(this + 0xE);
  if ( a2 < v2 )
  {
    v3 = v2 - 1;
    v4 = a2;
    if ( a2 != v3 )
    {
      v5 = *(_DWORD *)(this + 0x10);
      v6 = (_DWORD *)(v5 + 0x10 * v3);
      v7 = (_DWORD *)(v5 + 0x10 * a2);
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      v7[3] = v6[3];
      *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * a2) = *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * v3);
      v4 = v3;
    }
    v8 = 0x10 * v4;
    *(float *)(v8 + *(_DWORD *)(this + 0x10) + 8) = *(float *)(v8 + *(_DWORD *)(this + 0x10) + 8) - dbl_A3F3E8;
    *(float *)(v8 + *(_DWORD *)(this + 0x10) + 0xC) = 0.0;
    --*(_WORD *)(this + 0xE);
    --dword_B42D60;
  }
  return *(unsigned __int16 *)(this + 0xE);
}
