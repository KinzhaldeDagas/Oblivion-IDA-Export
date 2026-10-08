double __thiscall sub_4BF160(_DWORD *this, float a2, __int16 a3)
{
  int v3; // eax
  bool v4; // zf
  _DWORD *v5; // eax
  float *v6; // eax
  float v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+8h] [ebp+4h]
  float v10; // [esp+8h] [ebp+4h]
  float v11; // [esp+8h] [ebp+4h]
  float v12; // [esp+8h] [ebp+4h]
  float v13; // [esp+8h] [ebp+4h]
  float v14; // [esp+8h] [ebp+4h]
  float v15; // [esp+8h] [ebp+4h]

  v8 = 0.0; /*0x4bf16a*/
  if ( LOBYTE(a2) < 4u && (unsigned __int16)a3 < 0x121u ) /*0x4bf17e*/
  {
    v3 = *(this + 9); /*0x4bf180*/
    if ( v3 ) /*0x4bf185*/
    {
      v4 = *(_DWORD *)(v3 + 4 * LOBYTE(a2) + 0x40) == 0; /*0x4bf18a*/
      v5 = (_DWORD *)(v3 + 4 * LOBYTE(a2) + 0x40); /*0x4bf18f*/
      if ( !v4 ) /*0x4bf193*/
      {
        v6 = *(float **)(*v5 + 4 * (unsigned __int16)a3); /*0x4bf19a*/
        v9 = *v6 + dbl_A2FC68; /*0x4bf1a5*/
        v10 = v9 + v6[1]; /*0x4bf1b0*/
        v11 = v10 + v6[2]; /*0x4bf1bb*/
        v12 = v11 + v6[3]; /*0x4bf1c6*/
        v13 = v12 + v6[4]; /*0x4bf1d1*/
        v14 = v13 + v6[5]; /*0x4bf1dc*/
        v15 = v14 + v6[6]; /*0x4bf1e7*/
        v8 = v15 + v6[7]; /*0x4bf1f2*/
      }
    }
  }
  return (float)(1.0 - v8); /*0x4bf207*/
}
