LPVOID __set_flsgetvalue()
{
  LPVOID result; // eax
  PVOID v1; // eax

  result = TlsGetValue(dwTlsIndex); /*0x98bf5d*/
  if ( !result ) /*0x98bf65*/
  {
    v1 = _decode_pointer((void *)dword_BA9E10[3]); /*0x98bf6d*/
    return (LPVOID)TlsSetValue(dwTlsIndex, v1); /*0x98bf7a*/
  }
  return result; /*0x98bf80*/
}
