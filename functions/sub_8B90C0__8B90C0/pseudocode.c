float *__thiscall sub_8B90C0(void *this, float *a2)
{
  float v4[7]; // [esp+10h] [ebp-20h] BYREF

  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x8C))(this, a2 + 0xC); /*0x8b90e9*/
  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x90))(this, v4); /*0x8b90fa*/
  hkMatrix3_SetFromQuaternion(a2, v4); /*0x8b9103*/
  return a2; /*0x8b9108*/
}
