void __thiscall sub_75C1C0(float *this, float *a2)
{
  float *v2; // esi

  *(this + 0x10) = *a2;
  *(this + 0x11) = a2[1];
  *(this + 0x12) = a2[2];
  v2 = this + 0x13;
  *(this + 0x13) = *a2;
  *(this + 0x14) = a2[1];
  *(this + 0x15) = a2[2];
  sub_43F350(this + 0x13);
  if ( Vector3_InitValue_ == *v2 && *(&Vector3_InitValue_ + 1) == v2[1] && dword_B3F9B0 == v2[2] )
  {
    *(_DWORD *)v2 = dword_B258D0;
    *((_DWORD *)v2 + 1) = dword_B258D4;
    *((_DWORD *)v2 + 2) = dword_B258D8;
  }
}
