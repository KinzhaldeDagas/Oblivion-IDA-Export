_DWORD *__thiscall sub_589DF0(_DWORD *this, __int16 a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  *(this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 7) = 0;
  *((float *)this + 1) = 0.0;
  *((_WORD *)this + 0xC) = a2;
  *this = 0;
  v3 = (_DWORD *)FormHeapAlloc(0x18u);
  if ( v3 )
  {
    *v3 = 0;
    v3[1] = 0;
    v3[2] = this;
    v3[3] = 0x65;
    v3[4] = 0;
    v3[5] = 0;
  }
  else
  {
    v3 = 0;
  }
  *(this + 4) = v3;
  v4 = (_DWORD *)FormHeapAlloc(0x18u);
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = this;
    v4[3] = 0x65;
    v4[4] = 0;
    v4[5] = 0;
  }
  else
  {
    v4 = 0;
  }
  *(this + 5) = v4;
  *((_BYTE *)this + 0x1A) = 1;
  return this;
}
