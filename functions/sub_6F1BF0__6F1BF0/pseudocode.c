char __thiscall sub_6F1BF0(_DWORD *this, unsigned int a2)
{
  unsigned int *_010201A0; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  *(this + 1) = 0; /*0x6f1bfc*/
  *(this + 2) = 0; /*0x6f1bff*/
  *(this + 3) = 0; /*0x6f1c02*/
  if ( !a2 ) /*0x6f1c05*/
    return 0; /*0x6f1c08*/
  if ( a2 > 0x3FFFFFFF ) /*0x6f1c14*/
    sub_6F1780(v5, v6); /*0x6f1c16*/
  _010201A0 = OB_stVector4_Allocate_010201A0(a2); /*0x6f1c1d*/
  *(this + 1) = _010201A0; /*0x6f1c22*/
  *(this + 2) = _010201A0; /*0x6f1c25*/
  *(this + 3) = &_010201A0[a2]; /*0x6f1c2e*/
  return 1; /*0x6f1c07*/
}
