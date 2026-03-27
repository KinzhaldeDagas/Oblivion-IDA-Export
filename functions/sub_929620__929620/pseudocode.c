_OWORD *__thiscall sub_929620(int this, int a2, int a3)
{
  _OWORD *result; // eax
  double v4; // st7

  result = (_OWORD *)a3;
  if ( a3 )
  {
    v4 = *(float *)(this + 0x34);
    *(_WORD *)(a3 + 6) = 1;
    *(float *)(a3 + 0xC) = v4;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = &hkTriangleShape::`vftable';
  }
  else
  {
    result = 0;
  }
  result[1] = *(_OWORD *)(0x10 * *(_DWORD *)(0xC * a2 + *(_DWORD *)(this + 0x1C)) + *(_DWORD *)(this + 0x10));
  result[2] = *(_OWORD *)(0x10 * *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0xC * a2 + 4) + *(_DWORD *)(this + 0x10));
  result[3] = *(_OWORD *)(0x10 * *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0xC * a2 + 8) + *(_DWORD *)(this + 0x10));
  return result;
}
