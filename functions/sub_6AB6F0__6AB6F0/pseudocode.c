int __thiscall sub_6AB6F0(float *this, int a2, int a3)
{
  _DWORD *v4; // ecx
  float *v5; // esi
  float v6; // eax
  float v7; // ecx
  double v8; // st7
  double v9; // st6
  float *v11; // [esp+Ch] [ebp-1Ch] BYREF
  float v12; // [esp+10h] [ebp-18h]
  float v13; // [esp+14h] [ebp-14h]
  float v14; // [esp+18h] [ebp-10h]
  float v15; // [esp+1Ch] [ebp-Ch]
  float v16; // [esp+20h] [ebp-8h]
  float v17; // [esp+24h] [ebp-4h]
  float v18; // [esp+2Ch] [ebp+4h]
  float v19; // [esp+2Ch] [ebp+4h]
  float v20; // [esp+2Ch] [ebp+4h]

  v4 = *((_DWORD **)this + 0xC0); /*0x6ab700*/
  v11 = 0; /*0x6ab706*/
  NiTMap_GetAt(v4, a2, &v11); /*0x6ab70e*/
  if ( bSoundEnabled_Audio ) /*0x6ab713*/
  {
    v5 = v11; /*0x6ab728*/
    if ( !*((_BYTE *)this + 0xA4) || v11 && (*(_BYTE *)v11 & 0x21) != 0 ) /*0x6ab739*/
    {
      if ( v11 ) /*0x6ab741*/
      {
        if ( !*((_BYTE *)this + 0xA5) /*0x6ab77b*/
          || (*(_BYTE *)v11 & 0x20) != 0
          || (v18 = sub_6B6B90(v11) - flt_B161B8, sub_6B6B20((int)v5, v18), (*(_DWORD *)v5 & 0x1000) == 0) )
        {
          sub_6B6F20(v5, v5[0xF]); /*0x6ab78a*/
          if ( (*(_BYTE *)v5 & 2) != 0 ) /*0x6ab792*/
          {
            v6 = v5[9]; /*0x6ab79b*/
            v7 = v5[0xA]; /*0x6ab79e*/
            v12 = v5[8]; /*0x6ab7a1*/
            v8 = v12 - *(this + 0x20); /*0x6ab7a9*/
            v13 = v6; /*0x6ab7af*/
            v14 = v7; /*0x6ab7b3*/
            v15 = v8; /*0x6ab7b7*/
            v16 = v6 - *(this + 0x21); /*0x6ab7c5*/
            v17 = v7 - *(this + 0x22); /*0x6ab7d3*/
            v19 = v16 * v16 + v15 * v15 + v17 * v17; /*0x6ab7f3*/
            v20 = sqrt(v19); /*0x6ab800*/
            v9 = (double)*((int *)v5 + 0xE); /*0x6ab80d*/
            if ( *((int *)v5 + 0xE) < 0 ) /*0x6ab810*/
              v9 = v9 + flt_A2FC78; /*0x6ab812*/
            sub_6B7130((int)v5, v9 < v20); /*0x6ab82a*/
          }
          sub_6B6A50(v5, a3); /*0x6ab836*/
        }
      }
    }
  }
  return 0; /*0x6ab83e*/
}
