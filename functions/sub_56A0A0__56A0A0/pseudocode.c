unsigned __int8 *__thiscall sub_56A0A0(unsigned __int8 *this, unsigned __int8 *a2)
{
  unsigned __int8 *result; // eax
  int v3; // ecx

  result = this; /*0x56a0a4*/
  v3 = *a2; /*0x56a0a6*/
  if ( *result != v3 ) /*0x56a0af*/
  {
    *result = v3; /*0x56a0b1*/
    if ( !(_BYTE)v3 || (unsigned int)(unsigned __int8)v3 - 1 <= 1 ) /*0x56a0bf*/
      *((_DWORD *)result + 1) = 0; /*0x56a0c6*/
  }
  *((_DWORD *)result + 2) = *((_DWORD *)a2 + 2); /*0x56a0cc*/
  if ( *result <= 1u ) /*0x56a0d5*/
  {
    *((_DWORD *)result + 1) = *((_DWORD *)a2 + 1); /*0x56a0e8*/
  }
  else if ( *result == 2 ) /*0x56a0da*/
  {
    *((_DWORD *)result + 1) = *((_DWORD *)a2 + 1); /*0x56a0df*/
  }
  return result; /*0x56a0d4*/
}
