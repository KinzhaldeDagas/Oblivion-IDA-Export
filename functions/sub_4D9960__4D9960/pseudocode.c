float *__thiscall sub_4D9960(int *this, float *a2)
{
  float *result; // eax
  double v4; // rt0
  int v5; // edi
  float v6[7]; // [esp+10h] [ebp-20h] BYREF

  result = a2;
  v4 = hkFactor;
  v6[0] = *a2 * v4;
  v6[1] = a2[1] * v4;
  v6[2] = v4 * a2[2];
  if ( this )
  {
    v5 = *(this + 2);
    if ( v5 )
    {
      sub_89F570(this);
      sub_8A6410(v5);
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v5 + 0x50) + 0x54))(*(_DWORD *)(v5 + 0x50), v6);
      return (float *)sub_89F570(this);
    }
  }
  return result;
}
