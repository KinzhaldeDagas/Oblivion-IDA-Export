float *__thiscall sub_95F6D0(float *this)
{
  int v2; // eax
  float *v3; // esi

  v2 = FormHeapAlloc(0x20u);
  v3 = (float *)v2;
  if ( !v2 )
    return 0;
  *(_DWORD *)v2 = &NiHalfSpaceBV::`vftable';
  sub_716DB0((NiFrustumPlanes *)(v2 + 4));
  sub_95DB70(v3, this + 1);
  v3[5] = *(this + 5);
  v3[6] = *(this + 6);
  v3[7] = *(this + 7);
  return v3;
}
