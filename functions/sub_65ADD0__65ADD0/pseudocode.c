float *__thiscall Actor_GetBoundMin(NiObjectNET **this, float *a2)
{
  float *v3; // eax
  float v4; // ecx
  double v5; // st7

  if ( *(this + 0x16) && (*((int (__thiscall **)(_DWORD))(*(this + 0x16))->vtbl + 0x11B))(*(this + 0x16)) ) /*0x65ade8*/
  {
    v3 = (float *)(*((int (__thiscall **)(_DWORD))(*(this + 0x16))->vtbl + 0x11B))(*(this + 0x16)); /*0x65adf9*/
    unk_B3BAAC = -v3[6];                        // High-process bound minimum = collision bound center minus extents; values are local to reference position. /*0x65ae01*/
    unk_B3BAB0 = -v3[7]; /*0x65ae0c*/
    unk_B3BAB4 = -v3[8]; /*0x65ae17*/
    unk_B3BAAC = v3[3] + unk_B3BAAC; /*0x65ae26*/
    v4 = unk_B3BAAC; /*0x65ae2c*/
    unk_B3BAB0 = v3[4] + unk_B3BAB0; /*0x65ae3b*/
    v5 = v3[5]; /*0x65ae41*/
    unk_B3BAB4 = v5 + unk_B3BAB4; /*0x65ae4e*/
    *a2 = v4; /*0x65ae54*/
    a2[1] = unk_B3BAB0; /*0x65ae5c*/
    a2[2] = unk_B3BAB4; /*0x65ae65*/
    return a2; /*0x65ae44*/
  }
  else
  {
    sub_4DC360(this, a2); /*0x65ae73*/
    return a2; /*0x65ae78*/
  }
}
