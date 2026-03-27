float *__thiscall sub_6E2CB0(unsigned int *this, int a2)
{
  float *v3; // edi
  float *result; // eax
  float v5; // [esp+0h] [ebp-20h]

  v3 = (float *)FormHeapAlloc(0x18u);
  result = 0;
  if ( v3 )
  {
    v5 = sub_7300B0((_DWORD *)*(this + 0x11), *(this + 0x12));
    return sub_6D29E0(v3, v5);
  }
  return result;
}
