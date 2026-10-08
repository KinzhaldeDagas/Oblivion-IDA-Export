float *__thiscall sub_4D6950(void *this, float *a2)
{
  float *result; // eax
  _BYTE v3[28]; // [esp+10h] [ebp-20h] BYREF

  result = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 0x90))(this, v3); /*0x4d6975*/
  a2[1] = *result; /*0x4d697d*/
  a2[2] = result[1]; /*0x4d6983*/
  a2[3] = result[2]; /*0x4d6989*/
  *a2 = result[3]; /*0x4d698f*/
  return result; /*0x4d6991*/
}
