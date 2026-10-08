int __thiscall sub_954AA0(unsigned int **this, _DWORD *a2, int a3, int a4)
{
  int result; // eax
  int v5; // edx

  result = a4; /*0x954aa6*/
  v5 = *(_DWORD *)(a4 + 0x44); /*0x954aac*/
  if ( *a2 ) /*0x954aa4*/
  {
    if ( !v5 ) /*0x954ab3*/
    {
      if ( *(_DWORD *)(a3 + 0x44) ) /*0x954aba*/
        return sub_9548D0(this, 0, *(_DWORD *)(a4 + 0x40)); /*0x954ac8*/
    }
  }
  else if ( !v5 ) /*0x954ad2*/
  {
    result = *(_DWORD *)(a4 + 0x40); /*0x954ad4*/
    if ( result ) /*0x954ad9*/
      return sub_9548D0(this, 0, result); /*0x954ade*/
  }
  return result; /*0x954acd*/
}
