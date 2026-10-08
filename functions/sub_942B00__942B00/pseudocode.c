signed int __thiscall sub_942B00(int *this, char *a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // ecx

  v4 = sub_942A80(this, a2); /*0x942b08*/
  v5 = *(this + 2); /*0x942b0d*/
  if ( v4 > v5 ) /*0x942b12*/
    return 1; /*0x942b29*/
  *a3 = *(_DWORD *)(*this + 4 * (v4 + 2 * v5 + 2)); /*0x942b21*/
  return 0; /*0x942b25*/
}
