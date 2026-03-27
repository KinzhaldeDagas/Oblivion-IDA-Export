float *__thiscall sub_6EA700(float *this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x40u);
  v4 = v3;
  if ( v3 )
  {
    sub_6CC4E0(v3);
    *(_DWORD *)v4 = &NiBlendQuaternionInterpolator::`vftable';
    *((_DWORD *)v4 + 0xC) = dword_B3EBA0;
    *((_DWORD *)v4 + 0xD) = dword_B3EBA4;
    *((_DWORD *)v4 + 0xE) = dword_B3EBA8;
    *((_DWORD *)v4 + 0xF) = dword_B3EBAC;
  }
  else
  {
    v4 = 0;
  }
  sub_6CD3D0(this, (int)v4, a2);
  v4[0xC] = *(this + 0xC);
  v4[0xD] = *(this + 0xD);
  v4[0xE] = *(this + 0xE);
  v4[0xF] = *(this + 0xF);
  return v4;
}
