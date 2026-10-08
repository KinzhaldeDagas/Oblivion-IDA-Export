float *__thiscall sub_4D9960(int *this, float *a2)
{
  float *result; // eax
  double v4; // rt0
  int v5; // edi
  float v6[7]; // [esp+10h] [ebp-20h] BYREF

  result = a2; /*0x4d9974*/
  v4 = hkFactor; /*0x4d9986*/
  v6[0] = *a2 * v4; /*0x4d9989*/
  v6[1] = a2[1] * v4; /*0x4d9992*/
  v6[2] = v4 * a2[2]; /*0x4d9999*/
  if ( this ) /*0x4d999d*/
  {
    v5 = *(this + 2); /*0x4d999f*/
    if ( v5 ) /*0x4d99a4*/
    {
      bhkRefObject_UpdateHavokObject(this); /*0x4d99a6*/
      sub_8A6410(v5); /*0x4d99ad*/
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v5 + 0x50) + 0x54))(*(_DWORD *)(v5 + 0x50), v6); /*0x4d99bf*/
      return (float *)bhkRefObject_UpdateHavokObject(this); /*0x4d99c3*/
    }
  }
  return result; /*0x4d99c8*/
}
