float *__thiscall sub_8B90C0(void *this, float *a2)
{
  float v4[7]; // [esp+10h] [ebp-20h] BYREF

  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x8C))(this, a2 + 0xC);
  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x90))(this, v4);
  sub_8B1DD0(a2, v4);
  return a2;
}
