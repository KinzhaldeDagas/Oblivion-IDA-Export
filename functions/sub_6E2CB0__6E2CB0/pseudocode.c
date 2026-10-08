NiObject *__thiscall sub_6E2CB0(unsigned int *this, int a2)
{
  NiObject *v3; // edi
  NiObject *result; // eax
  float v5; // [esp+0h] [ebp-20h]

  v3 = (NiObject *)FormHeapAlloc(0x18u); /*0x6e2cdc*/
  result = 0; /*0x6e2ce5*/
  if ( v3 ) /*0x6e2ced*/
  {
    v5 = sub_7300B0((_DWORD *)*(this + 0x11), *(this + 0x12)); /*0x6e2cfe*/
    return sub_6D29E0(v3, v5); /*0x6e2d01*/
  }
  return result; /*0x6e2d06*/
}
