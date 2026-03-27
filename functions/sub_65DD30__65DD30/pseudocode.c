_WORD *__thiscall sub_65DD30(_WORD *this, unsigned __int16 a2, __int16 a3)
{
  int v4; // ecx
  __int64 v5; // rax

  *(this + 7) = a3;
  v4 = 0;
  *(_DWORD *)this = &NiTArray<TESRegion *>::`vftable';
  *((_DWORD *)this + 2) = a2;
  *(this + 6) = 0;
  if ( a2 )
  {
    v5 = 4LL * a2;
    LOBYTE(v4) = HIDWORD(v5) != 0;
    *((_DWORD *)this + 1) = FormHeapAlloc(v5 | -v4);
  }
  else
  {
    *((_DWORD *)this + 1) = 0;
  }
  return this;
}
