void _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v1; // [esp-4h] [ebp-4h]

  if ( dword_B310AC != 0xFFFFFFFF ) /*0x98bf89*/
  {
    v1 = dword_B310AC; /*0x98bf8b*/
    v0 = (void (__stdcall *)(int))_decode_pointer((void *)dword_BA9E10[5]); /*0x98bf92*/
    v0(v1); /*0x98bf98*/
    dword_B310AC = 0xFFFFFFFF; /*0x98bf9a*/
  }
  if ( dwTlsIndex != 0xFFFFFFFF ) /*0x98bfa9*/
  {
    TlsFree(dwTlsIndex); /*0x98bfac*/
    dwTlsIndex = 0xFFFFFFFF; /*0x98bfb2*/
  }
  _mtterm_::__mtdeletelocks(); /*0x98bfb9*/
}
