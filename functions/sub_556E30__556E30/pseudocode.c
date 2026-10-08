_DWORD *__thiscall sub_556E30(int *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  int v5; // [esp+Ch] [ebp-8h] BYREF

  v2 = *(this + 2); /*0x556e37*/
  if ( *(this + 1) > v2 ) /*0x556e3e*/
    _invalid_parameter_noinfo(); /*0x556e40*/
  v3 = *(this + 1); /*0x556e45*/
  if ( v3 > *(this + 2) ) /*0x556e4b*/
    _invalid_parameter_noinfo(); /*0x556e4d*/
  return sub_556D00(this, &v5, (int)this, v3, (int)this, v2); /*0x556e62*/
}
