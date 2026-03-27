float *__thiscall sub_588A70(float *this, int a2, int a3, float a4, float a5, float a6)
{
  float v7; // eax

  *(this + 2) = a4;
  *(this + 3) = a5;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  *(this + 4) = a6;
  sub_584300((int)this, a6);
  v7 = *this;
  *(this + 5) = *(float *)(*(_DWORD *)this + 0x28);
  *(_DWORD *)(LODWORD(v7) + 0x28) = this;
  *(_DWORD *)(*(_DWORD *)this + 0x2C) |= 0x80u;
  return this;
}
