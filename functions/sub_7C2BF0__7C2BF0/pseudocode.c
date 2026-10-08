_DWORD *__thiscall sub_7C2BF0(int this, _DWORD *a2)
{
  int v2; // eax

  if ( *(_DWORD *)(this + 0x238) ) /*0x7c2bf1*/
    v2 = **(_DWORD **)(this + 0x230); /*0x7c2c07*/
  else
    v2 = 0; /*0x7c2c0b*/
  *a2 = v2; /*0x7c2c14*/
  if ( v2 ) /*0x7c2c16*/
    InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7c2c1c*/
  return a2; /*0x7c2c26*/
}
