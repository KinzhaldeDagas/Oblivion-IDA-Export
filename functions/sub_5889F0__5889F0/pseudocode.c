double __thiscall sub_5889F0(void (__thiscall ***this)(float **, int))
{
  int v2; // ecx
  float *v3; // eax
  bool v4; // zf
  float v6; // [esp+4h] [ebp-4h]

  v2 = (int)*(this + 1); /*0x5889f4*/
  v3 = *(float **)v2; /*0x5889f7*/
  v4 = *(_DWORD *)v2 == 0; /*0x5889fb*/
  *(this + 1) = *(void (__thiscall ***)(float **, int))v2; /*0x5889fd*/
  if ( v4 ) /*0x588a00*/
    *(this + 2) = 0; /*0x588a07*/
  else
    v3[1] = 0.0; /*0x588a02*/
  v6 = *(float *)(v2 + 8); /*0x588a12*/
  (*this)[2]((float **)this, v2); /*0x588a19*/
  *(this + 3) = (void (__thiscall **)(float **, int))((char *)*(this + 3) + 0xFFFFFFFF); /*0x588a1f*/
  return v6; /*0x588a23*/
}
