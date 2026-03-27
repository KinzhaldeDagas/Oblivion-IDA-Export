_DWORD *__thiscall sub_452670(_DWORD *this, unsigned int a2, int a3)
{
  int v4; // ecx
  __int64 v5; // rax

  *(this + 5) = a3;
  v4 = 0;
  *this = &NiTLargeArray<FormAndFlags *>::`vftable';
  *(this + 2) = a2;
  *(this + 3) = 0;
  *(this + 4) = 0;
  if ( a2 )
  {
    v5 = 4LL * a2;
    LOBYTE(v4) = HIDWORD(v5) != 0;
    *(this + 1) = FormHeapAlloc(v5 | -v4);
  }
  else
  {
    *(this + 1) = 0;
  }
  return this;
}
