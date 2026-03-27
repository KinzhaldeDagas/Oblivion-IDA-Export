float *__thiscall sub_758C80(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  float *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x34u);
  if ( v3 )
    v4 = (float *)sub_758910(v3);
  else
    v4 = 0;
  sub_752C40(this, (int)v4, a2);
  *((_DWORD *)v4 + 7) = *(this + 7);
  *((_DWORD *)v4 + 8) = *(this + 8);
  *((_DWORD *)v4 + 9) = *(this + 9);
  v4[0xA] = *((float *)this + 0xA);
  v4[0xB] = *((float *)this + 0xB);
  v4[0xC] = *((float *)this + 0xC);
  return v4;
}
