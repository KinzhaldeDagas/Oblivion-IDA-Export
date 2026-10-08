int __thiscall sub_7C6740(_DWORD *this)
{
  _DWORD *v1; // ecx
  int result; // eax
  int v3; // edx

  v1 = (_DWORD *)*(this + 0x3A); /*0x7c6740*/
  result = 0; /*0x7c6746*/
  while ( v1 ) /*0x7c674a*/
  {
    v3 = v1[2]; /*0x7c6753*/
    v1 = (_DWORD *)*v1; /*0x7c6757*/
    if ( v3 ) /*0x7c6759*/
    {
      if ( *(_WORD *)(v3 + 0x118) != 0xFF ) /*0x7c6764*/
        ++result; /*0x7c6766*/
    }
  }
  return result; /*0x7c676d*/
}
