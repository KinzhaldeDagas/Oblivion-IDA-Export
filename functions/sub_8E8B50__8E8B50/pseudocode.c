char *__thiscall sub_8E8B50(char *this, int a2, _OWORD *a3)
{
  int v4; // eax

  *((_DWORD *)this + 3) = a2;
  *((_WORD *)this + 3) = 1;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &off_A9ACB0;
  *((_OWORD *)this + 2) = *a3;
  *((_OWORD *)this + 3) = a3[1];
  *((_OWORD *)this + 4) = a3[2];
  *((_OWORD *)this + 5) = a3[3];
  sub_8B1B40((float *)this + 4, (float *)this + 8);
  v4 = *((_DWORD *)this + 3);
  if ( *(_WORD *)(v4 + 4) )
    ++*(_WORD *)(v4 + 6);
  return this;
}
