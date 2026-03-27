float *__thiscall sub_88EC10(float *this, int a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x28u);
  v4 = v3;
  if ( v3 )
  {
    sub_897600(v3);
    *(_DWORD *)v4 = &bhkBlendCollisionObject::`vftable';
    ++dword_BA7A1C;
    v4[5] = 0.0;
    *((_WORD *)v4 + 6) &= ~0x100u;
    v4[6] = 1.0;
    *((_DWORD *)v4 + 7) = 8;
    v4[8] = 0.0;
    v4[9] = 0.0;
  }
  else
  {
    v4 = 0;
  }
  sub_89E930(v4, a2);
  v4[6] = *(this + 6);
  v4[5] = *(this + 5);
  v4[8] = *(this + 8);
  return v4;
}
