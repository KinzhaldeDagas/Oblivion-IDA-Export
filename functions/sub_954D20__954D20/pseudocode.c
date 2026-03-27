int *__thiscall sub_954D20(int *this, _DWORD *a2, _DWORD *a3, int a4)
{
  qmemcpy(this, a2, 0x48u);
  sub_954710(this, a3);
  sub_954C10(this, (int)a3, a4);
  *this = *a2 + 1;
  *((_BYTE *)this + 4) = 0;
  sub_954CA0(this);
  return this;
}
