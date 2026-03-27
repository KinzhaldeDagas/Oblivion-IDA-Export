LPVOID __set_flsgetvalue()
{
  LPVOID result; // eax
  PVOID v1; // eax

  result = TlsGetValue(dwTlsIndex);
  if ( !result )
  {
    v1 = _decode_pointer(lpTlsValue);
    return (LPVOID)TlsSetValue(dwTlsIndex, v1);
  }
  return result;
}
