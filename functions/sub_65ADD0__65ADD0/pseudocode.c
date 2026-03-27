float *__thiscall sub_65ADD0(NiObjectNET **this, float *a2)
{
  float *v3; // eax
  float v4; // ecx
  double v5; // st7

  if ( *(this + 0x16) && (*((int (__thiscall **)(_DWORD))(*(this + 0x16))->vtbl + 0x11B))(*(this + 0x16)) )
  {
    v3 = (float *)(*((int (__thiscall **)(_DWORD))(*(this + 0x16))->vtbl + 0x11B))(*(this + 0x16));
    flt_B3BAAC = -v3[6];
    flt_B3BAB0 = -v3[7];
    flt_B3BAB4 = -v3[8];
    flt_B3BAAC = v3[3] + flt_B3BAAC;
    v4 = flt_B3BAAC;
    flt_B3BAB0 = v3[4] + flt_B3BAB0;
    v5 = v3[5];
    flt_B3BAB4 = v5 + flt_B3BAB4;
    *a2 = v4;
    a2[1] = flt_B3BAB0;
    a2[2] = flt_B3BAB4;
    return a2;
  }
  else
  {
    sub_4DC360(this, a2);
    return a2;
  }
}
