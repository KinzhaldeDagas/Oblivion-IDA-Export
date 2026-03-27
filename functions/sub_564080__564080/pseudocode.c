int __thiscall sub_564080(void *this, __m128 *a2)
{
  _DWORD v4[4]; // [esp+Ch] [ebp-20h] BYREF
  float v5[4]; // [esp+1Ch] [ebp-10h] BYREF

  *(float *)&v4[1] = flt_B2EFC4;
  v5[3] = 0.0;
  v5[0] = 1.0;
  v4[0] = 0;
  v5[1] = 1.0;
  v5[2] = 1.0;
  sub_47DCD0(v5, a2);
  return (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x70))(this, v4);
}
