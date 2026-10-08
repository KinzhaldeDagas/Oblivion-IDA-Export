int *__thiscall sub_4A19F0(int *this, int *a2)
{
  int v2; // eax
  bool v3; // zf

  v2 = *a2; /*0x4a19f4*/
  v3 = *a2 == 0; /*0x4a19f6*/
  *this = *a2; /*0x4a19fb*/
  if ( !v3 ) /*0x4a19fd*/
    InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x4a1a03*/
  return this; /*0x4a1a0b*/
}
