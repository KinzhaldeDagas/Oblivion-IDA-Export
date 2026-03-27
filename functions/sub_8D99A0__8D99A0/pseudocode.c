_DWORD *__thiscall sub_8D99A0(_DWORD *this, _WORD *a2, int a3, int a4, char a5, int a6)
{
  _WORD *v7; // ecx
  int v8; // eax

  *(this + 3) = a4;
  *((_WORD *)this + 3) = 1;
  *this = &off_A9A274;
  *(this + 2) = 0;
  *((_BYTE *)this + 0x18) = a5;
  *((_BYTE *)this + 0x19) = 0;
  *(this + 5) = a3;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 4) = a2;
  if ( a6 == 1 )
  {
    sub_8BC720(a2);
    v7 = (_WORD *)*(this + 5);
    if ( v7 )
      sub_8BC720(v7);
    v8 = *(this + 3);
    if ( *(_WORD *)(v8 + 4) )
      ++*(_WORD *)(v8 + 6);
  }
  return this;
}
