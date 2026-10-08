void __thiscall sub_60E1C0(int this, int a2)
{
  float *v3; // esi
  float *v4; // eax
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( *(float *)(this + 0x3C) >= 0.0 ) /*0x60e1d0*/
  {
    if ( *(_DWORD *)(this + 0x40) ) /*0x60e1d2*/
    {
      if ( reference ) /*0x60e1d8*/
      {
        v3 = (float *)NiRTTI_Cast((BSStringT *)&stru_B3FA80, *(NiObject **)(this + 0x30)); /*0x60e1f0*/
        if ( v3 ) /*0x60e1f7*/
        {
          v4 = reference->vtbl->super.super.super.GetPos(reference); /*0x60e207*/
          v5[0] = *v4 - v3[0x22]; /*0x60e215*/
          v5[1] = v4[1] - v3[0x23]; /*0x60e222*/
          v5[2] = v4[2] - v3[0x24]; /*0x60e22f*/
          if ( *(float *)(this + 0x3C) > NiPoint3_Length(v5) ) /*0x60e242*/
            (*(void (__cdecl **)(float *))(this + 0x40))(v3); /*0x60e248*/
        }
      }
    }
  }
}
