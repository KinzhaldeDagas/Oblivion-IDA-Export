_DWORD *__thiscall sub_5598F0(int *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  int v5; // [esp+Ch] [ebp-8h] BYREF

  v2 = *(this + 2); /*0x5598f7*/
  if ( *(this + 1) > v2 ) /*0x5598fe*/
    _invalid_parameter_noinfo(); /*0x559900*/
  v3 = *(this + 1); /*0x559905*/
  if ( v3 > *(this + 2) ) /*0x55990b*/
    _invalid_parameter_noinfo(); /*0x55990d*/
  return sub_559240(this, &v5, (int)this, v3, (int)this, v2); /*0x559922*/
}
