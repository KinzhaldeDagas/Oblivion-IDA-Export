int _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_B310AC != 0xFFFFFFFF )
  {
    v2 = dword_B310AC;
    v0 = (void (__stdcall *)(int))_decode_pointer((void *)dword_BA9E24);
    v0(v2);
    dword_B310AC = 0xFFFFFFFF;
  }
  if ( dwTlsIndex != 0xFFFFFFFF )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = 0xFFFFFFFF;
  }
  return _mtterm_::__mtdeletelocks();
}
