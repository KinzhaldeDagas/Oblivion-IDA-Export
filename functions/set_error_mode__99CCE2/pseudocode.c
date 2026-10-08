int __cdecl _set_error_mode(int Mode)
{
  int v1; // ebx
  int v2; // edi
  int result; // eax

  if ( Mode >= 0 ) /*0x99cceb*/
  {
    if ( Mode <= 2 ) /*0x99ccf0*/
    {
      result = dword_BA9E00[0]; /*0x99ccfe*/
      dword_BA9E00[0] = Mode; /*0x99cd03*/
      return result; /*0x99cd0a*/
    }
    if ( Mode == 3 ) /*0x99ccf5*/
      return dword_BA9E00[0]; /*0x99ccfd*/
  }
  *_errno() = 0x16; /*0x99cd15*/
  _invalid_parameter(v1, v2, 0); /*0x99cd1b*/
  return 0xFFFFFFFF; /*0x99ccfc*/
}
