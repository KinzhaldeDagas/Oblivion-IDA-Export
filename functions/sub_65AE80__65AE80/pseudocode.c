float *__thiscall sub_65AE80(NiObjectNET **this, float *a2)
{
  float *v3; // eax
  float v4; // ecx
  double v5; // st7

  if ( *(this + 0x16) && (*((int (__thiscall **)(_DWORD))(*(this + 0x16))->vtbl + 0x11B))(*(this + 0x16)) )
  {
    v3 = (float *)(*((int (__thiscall **)(_DWORD))(*(this + 0x16))->vtbl + 0x11B))(*(this + 0x16));
    flt_B3BAB8 = v3[6];
    flt_B3BABC = v3[7];
    flt_B3BAC0 = v3[8];
    flt_B3BAB8 = v3[3] + flt_B3BAB8;
    v4 = flt_B3BAB8;
    flt_B3BABC = v3[4] + flt_B3BABC;
    v5 = v3[5];
    flt_B3BAC0 = v5 + flt_B3BAC0;
    *a2 = v4;
    a2[1] = flt_B3BABC;
    a2[2] = flt_B3BAC0;
    return a2;
  }
  else
  {
    sub_4DC410(this, a2);
    return a2;
  }
}
