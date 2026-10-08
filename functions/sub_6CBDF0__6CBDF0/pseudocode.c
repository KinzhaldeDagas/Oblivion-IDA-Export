// Oblivion: evaluates the sole active 0x18-byte blend item. Honors the blend time-override flag, writes invalid TRS sentinels on failure/sentinel time, and normalizes a valid quaternion.
char __thiscall NiBlendTransformInterpolator_UpdateSingle(int this, float a2, int a3, int a4)
{
  float v5; // edx
  float v6; // eax
  float v7[4]; // [esp+10h] [ebp-10h] BYREF

  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6cbdf7*/
    a2 = *(float *)(this + 0x20); /*0x6cbdfc*/
  if ( flt_A79F00 == a2 ) /*0x6cbe13*/
  {
    *(float *)a4 = -flt_A7DEB4; /*0x6cbe23*/
    *(float *)(a4 + 0x10) = -flt_A7DEB4; /*0x6cbe2d*/
    *(float *)(a4 + 0x1C) = -flt_A7DEB4; /*0x6cbe38*/
    return 0; /*0x6cbe3b*/
  }
  else if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, int))(**(_DWORD **)(this + 0x18) + 0x4C))( /*0x6cbe5a*/
              LODWORD(a2),
              a3,
              a4) )
  {
    if ( -flt_A7DEB4 != *(float *)(a4 + 0x10) ) /*0x6cbe72*/
    {
      v5 = *(float *)(a4 + 0x10); /*0x6cbe77*/
      v6 = *(float *)(a4 + 0x14); /*0x6cbe7a*/
      v7[0] = *(float *)(a4 + 0xC); /*0x6cbe7d*/
      v7[3] = *(float *)(a4 + 0x18); /*0x6cbe84*/
      v7[1] = v5; /*0x6cbe8c*/
      v7[2] = v6; /*0x6cbe90*/
      sub_715340(v7); /*0x6cbe94*/
      sub_471430((_DWORD *)a4, v7); /*0x6cbea0*/
    }
    return 1; /*0x6cbea5*/
  }
  else
  {
    *(float *)a4 = -flt_A7DEB4; /*0x6cbeb8*/
    *(float *)(a4 + 0x10) = -flt_A7DEB4; /*0x6cbec2*/
    *(float *)(a4 + 0x1C) = -flt_A7DEB4; /*0x6cbecd*/
    return 0; /*0x6cbeb4*/
  }
}
