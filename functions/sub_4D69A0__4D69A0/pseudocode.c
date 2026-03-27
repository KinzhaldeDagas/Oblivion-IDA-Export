int __thiscall sub_4D69A0(void *this, float *a2)
{
  double v2; // rt0
  int (__thiscall *v3)(void *, float *); // eax
  float v5[7]; // [esp+0h] [ebp-20h] BYREF

  v2 = hkFactor;
  v5[0] = *a2 * v2;
  v5[1] = a2[1] * v2;
  v3 = *(int (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x94);
  v5[2] = v2 * a2[2];
  return v3(this, v5);
}
