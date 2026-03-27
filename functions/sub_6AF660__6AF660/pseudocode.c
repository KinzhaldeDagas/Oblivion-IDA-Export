_DWORD *__thiscall sub_6AF660(_DWORD *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int i; // eax
  int v5; // ecx
  int v6; // edx
  _DWORD *v7; // ecx
  int v8; // edx

  v2 = 1;
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = FormHeapAlloc(0x4000u);
  *(this + 4) = 8;
  v3 = (_DWORD *)FormHeapAlloc(0x80u);
  *(this + 5) = v3;
  *v3 = 0;
  for ( i = 4; i < 0x80; i += 4 )
  {
    v5 = *(this + 5);
    v6 = *(_DWORD *)(v5 + i - 4);
    v7 = (_DWORD *)(i + v5);
    v8 = v2 + v6;
    v2 *= 2;
    *v7 = v8;
  }
  return this;
}
