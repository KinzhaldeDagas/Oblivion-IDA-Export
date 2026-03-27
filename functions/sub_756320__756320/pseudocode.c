float *__thiscall sub_756320(float *this, _DWORD **a2)
{
  char *v3; // eax
  float *v4; // esi

  v3 = (char *)FormHeapAlloc(0x100u);
  if ( v3 )
    v4 = (float *)sub_7561F0(
                    v3,
                    1.0,
                    0,
                    0,
                    0,
                    0,
                    1.0,
                    1.0,
                    dword_B258D0,
                    dword_B258D4,
                    dword_B258D8,
                    dword_B258DC,
                    qword_B258E0,
                    HIDWORD(qword_B258E0));
  else
    v4 = 0;
  sub_75ED50(this, (int)v4, a2);
  v4[0xC] = *(this + 0xC);
  v4[0xD] = *(this + 0xD);
  v4[0xE] = *(this + 0xE);
  v4[0xF] = *(this + 0xF);
  v4[0x10] = *(this + 0x10);
  v4[0x11] = *(this + 0x11);
  v4[0x12] = *(this + 0x12);
  v4[0x13] = *(this + 0x13);
  return v4;
}
