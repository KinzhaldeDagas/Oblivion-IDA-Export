_DWORD *__thiscall sub_5A3E80(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  *(this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 7) = 0;
  *((float *)this + 1) = 0.0;
  *((_WORD *)this + 0xC) = 0xFAE;
  *this = 0;
  v2 = (_DWORD *)FormHeapAlloc(0x18u);
  if ( v2 )
    v3 = sub_5888C0(v2, (int)this);
  else
    v3 = 0;
  *(this + 4) = v3;
  v4 = (_DWORD *)FormHeapAlloc(0x18u);
  if ( v4 )
    v5 = sub_5888C0(v4, (int)this);
  else
    v5 = 0;
  *(this + 5) = v5;
  *((_BYTE *)this + 0x1A) = 1;
  return this;
}
