_WORD *__thiscall sub_953530(_WORD *this, _DWORD *a2, _DWORD *a3)
{
  _WORD *result; // eax
  char v4; // cl

  result = this;
  *(this + 3) = 1;
  *(_DWORD *)this = &off_AA33BC;
  *((_DWORD *)this + 2) = *a2;
  v4 = *((_BYTE *)this + 9);
  *((_DWORD *)result + 3) = *a3;
  *((_BYTE *)result + 0x10) = v4 != *((_BYTE *)result + 0xD);
  return result;
}
