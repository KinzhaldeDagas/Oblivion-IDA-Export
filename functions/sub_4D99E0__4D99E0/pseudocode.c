float *__thiscall sub_4D99E0(int *this, float *a2)
{
  float *result; // eax
  int v4; // edi
  float v5[7]; // [esp+Ch] [ebp-20h] BYREF

  result = a2; /*0x4d99f4*/
  v5[0] = *a2; /*0x4d99fa*/
  v5[1] = a2[1]; /*0x4d9a05*/
  v5[2] = a2[2]; /*0x4d9a0d*/
  if ( this ) /*0x4d9a11*/
  {
    v4 = *(this + 2); /*0x4d9a13*/
    if ( v4 ) /*0x4d9a18*/
    {
      bhkRefObject_UpdateHavokObject(this); /*0x4d9a1a*/
      sub_8A6410(v4); /*0x4d9a21*/
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v4 + 0x50) + 0x58))(*(_DWORD *)(v4 + 0x50), v5); /*0x4d9a33*/
      return (float *)bhkRefObject_UpdateHavokObject(this); /*0x4d9a37*/
    }
  }
  return result; /*0x4d9a41*/
}
