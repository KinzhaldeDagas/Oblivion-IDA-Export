int __thiscall sub_8029C0(int this, unsigned __int16 a2)
{
  unsigned __int16 v2; // dx
  unsigned __int16 v3; // bp
  unsigned __int16 v4; // dx
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  int v8; // eax

  v2 = *(_WORD *)(this + 0xE); /*0x8029c0*/
  if ( a2 < v2 ) /*0x8029cc*/
  {
    v3 = v2 - 1; /*0x8029d2*/
    v4 = a2; /*0x8029d8*/
    if ( a2 != v3 ) /*0x8029db*/
    {
      v5 = *(_DWORD *)(this + 0x10); /*0x8029e6*/
      v6 = (_DWORD *)(v5 + 0x10 * v3); /*0x8029ee*/
      v7 = (_DWORD *)(v5 + 0x10 * a2); /*0x8029f5*/
      *v7 = *v6; /*0x8029f9*/
      v7[1] = v6[1]; /*0x8029fe*/
      v7[2] = v6[2]; /*0x802a04*/
      v7[3] = v6[3]; /*0x802a0a*/
      *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * a2) = *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * v3); /*0x802a14*/
      v4 = v3; /*0x802a18*/
    }
    v8 = 0x10 * v4; /*0x802a22*/
    *(float *)(v8 + *(_DWORD *)(this + 0x10) + 8) = *(float *)(v8 + *(_DWORD *)(this + 0x10) + 8) - dbl_A3F3E8; /*0x802a32*/
    *(float *)(v8 + *(_DWORD *)(this + 0x10) + 0xC) = 0.0; /*0x802a39*/
    --*(_WORD *)(this + 0xE); /*0x802a3d*/
    --unk_B42D60; /*0x802a43*/
  }
  return *(unsigned __int16 *)(this + 0xE); /*0x802a4e*/
}
