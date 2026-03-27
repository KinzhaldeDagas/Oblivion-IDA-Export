_DWORD *__thiscall sub_954760(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  result = this;
  v2 = *(this + 9);
  result[0x12] = (int)result[3] >> v2 << v2;
  result[0x15] = (((int)result[4] >> v2) + 1) << v2;
  v3 = result[9];
  result[0x13] = (int)result[5] >> v3 << v3;
  result[0x16] = (((int)result[6] >> v3) + 1) << v3;
  v4 = result[9];
  result[0x14] = (int)result[7] >> v4 << v4;
  result[0x17] = (((int)result[8] >> v4) + 1) << v4;
  return result;
}
