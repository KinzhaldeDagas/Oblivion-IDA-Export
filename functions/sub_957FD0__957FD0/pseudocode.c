char *__thiscall sub_957FD0(char *this, _DWORD *a2)
{
  char *v3; // esi

  v3 = this + 8;
  *((_WORD *)this + 3) = 1;
  *(_DWORD *)this = &off_AA3588;
  sub_9438E0((_DWORD *)this + 2, 0);
  *(_DWORD *)v3 = *a2;
  *((_DWORD *)v3 + 1) = a2[1];
  *((_DWORD *)v3 + 2) = a2[2];
  *((_DWORD *)v3 + 3) = a2[3];
  *((_DWORD *)v3 + 4) = a2[4];
  *((_DWORD *)v3 + 5) = a2[5];
  return this;
}
