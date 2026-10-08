float *__thiscall sub_95F6D0(float *this)
{
  int v2; // eax
  float *v3; // esi

  v2 = FormHeapAlloc(0x20u); /*0x95f6d6*/
  v3 = (float *)v2; /*0x95f6db*/
  if ( !v2 ) /*0x95f6e2*/
    return 0; /*0x95f718*/
  *(_DWORD *)v2 = &NiHalfSpaceBV::`vftable'; /*0x95f6e7*/
  sub_716DB0((NiFrustumPlanes *)(v2 + 4)); /*0x95f6ed*/
  sub_95DB70(v3, this + 1); /*0x95f6f8*/
  v3[5] = *(this + 5); /*0x95f703*/
  v3[6] = *(this + 6); /*0x95f709*/
  v3[7] = *(this + 7); /*0x95f70f*/
  return v3; /*0x95f712*/
}
