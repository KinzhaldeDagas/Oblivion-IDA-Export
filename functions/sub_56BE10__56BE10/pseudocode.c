bool __thiscall sub_56BE10(float *this, float a2)
{
  bool result; // al
  float v4; // [esp+Ch] [ebp+4h]

  result = sub_56BC70(this, a2);
  v4 = *(this + 4) / *(this + 2);
  *(float *)(*((_DWORD *)this + 6) + 0x40) = v4;
  return result;
}
