_DWORD *__thiscall sub_911FD0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx

  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  v3 = this + 3;
  *a2 = *v3;
  a2[1] = v3[1];
  a2[2] = v3[2];
  a2[3] = v3[3];
  return a2;
}
