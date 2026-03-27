_OWORD *__thiscall sub_94D100(_OWORD *this, int a2, _OWORD *a3, _OWORD *a4)
{
  int v4; // esi
  _OWORD *v5; // edx
  _OWORD *v7; // esi

  v4 = *(_DWORD *)(a2 + 0x10);
  v5 = *(_OWORD **)(*(_DWORD *)(a2 + 0x14) + 0x50);
  *a3 = v5[1];
  a3[1] = v5[2];
  a3[2] = v5[3];
  a3[3] = v5[4];
  v7 = *(_OWORD **)(v4 + 0x50);
  *a4 = v7[1];
  a4[1] = v7[2];
  a4[2] = v7[3];
  a4[3] = v7[4];
  *(this + 9) = *a3;
  *(this + 0xA) = a3[1];
  *(this + 0xB) = a3[2];
  *(this + 6) = *a4;
  *(this + 7) = a4[1];
  *(this + 8) = a4[2];
  *(this + 3) = a3[3];
  *(this + 2) = a4[3];
  return a3;
}
