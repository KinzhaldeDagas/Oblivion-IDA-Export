float *__thiscall sub_4D6950(void *this, float *a2)
{
  float *result; // eax
  _BYTE v3[28]; // [esp+10h] [ebp-20h] BYREF

  result = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 0x90))(this, v3);
  a2[1] = *result;
  a2[2] = result[1];
  a2[3] = result[2];
  *a2 = result[3];
  return result;
}
