// TESObjectREFR/Actor vtable slot 0x57. Fills output with bound center + extents (bound max); surface distance consumes scaled Y.
float *__thiscall Actor_GetBoundMax(NiObjectNET **this, float *a2)
{
  float *v3; // eax
  float v4; // ecx
  double v5; // st7

  if ( *(this + 0x16) && (*((int (__thiscall **)(_DWORD))(*(this + 0x16))->vtbl + 0x11B))(*(this + 0x16)) ) /*0x65ae98*/
  {
    v3 = (float *)(*((int (__thiscall **)(_DWORD))(*(this + 0x16))->vtbl + 0x11B))(*(this + 0x16)); /*0x65aea9*/
    unk_B3BAB8 = v3[6];                         // High-process bound maximum = collision bound center plus extents; values are local to reference position. /*0x65aeae*/
    unk_B3BABC = v3[7]; /*0x65aeb8*/
    unk_B3BAC0 = v3[8]; /*0x65aec1*/
    unk_B3BAB8 = v3[3] + unk_B3BAB8; /*0x65aed0*/
    v4 = unk_B3BAB8; /*0x65aed6*/
    unk_B3BABC = v3[4] + unk_B3BABC; /*0x65aee5*/
    v5 = v3[5]; /*0x65aeeb*/
    unk_B3BAC0 = v5 + unk_B3BAC0; /*0x65aef8*/
    *a2 = v4; /*0x65aefe*/
    a2[1] = unk_B3BABC; /*0x65af06*/
    a2[2] = unk_B3BAC0; /*0x65af0f*/
    return a2; /*0x65aeee*/
  }
  else
  {
    sub_4DC410(this, a2); /*0x65af1d*/
    return a2; /*0x65af22*/
  }
}
