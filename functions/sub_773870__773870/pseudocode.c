bool __thiscall sub_773870(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4, _BYTE *a5, _BYTE *a6)
{
  _DWORD *v6; // edx
  int v7; // edx

  v6 = this + 3 * a2;
  *a6 = *((_BYTE *)v6 + 0x1D);
  *a5 = *((_BYTE *)v6 + 0x1C);
  *a4 = *(this + 3 * a2 + 6);
  v7 = v6[5];
  *a3 = v7;
  return v7 != 0x13;
}
