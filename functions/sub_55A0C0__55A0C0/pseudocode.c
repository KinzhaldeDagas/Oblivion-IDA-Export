_DWORD *__thiscall sub_55A0C0(_DWORD *this, unsigned int a2)
{
  int v3; // ecx
  __int64 v4; // rax

  v3 = 0;
  *this = &BSFaceGenMorphDifferential::`vftable';
  *(this + 2) = a2;
  if ( a2 )
  {
    v4 = 0xCLL * a2;
    LOBYTE(v3) = HIDWORD(v4) != 0;
    *(this + 1) = FormHeapAlloc(v4 | -v3);
  }
  else
  {
    *(this + 1) = 0;
  }
  return this;
}
