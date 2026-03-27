_DWORD *__thiscall sub_4F32A0(_DWORD *this, _DWORD *a2)
{
  int v3; // esi
  _DWORD *v4; // edx
  int v5; // edi
  int v6; // edx

  v3 = *(this + 0x80);
  v4 = this + 4 * v3;
  *a2 = *v4;
  a2[1] = v4[1];
  v5 = v4[2];
  v6 = v4[3];
  a2[2] = v5;
  *(this + 0x80) = v3 - 1;
  a2[3] = v6;
  return a2;
}
