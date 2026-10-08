int __cdecl __FrameUnwindFilter(int **a1)
{
  int v1; // eax
  DWORD *v2; // eax

  v1 = **a1; /*0x98aef5*/
  if ( v1 == 0xE0434F4D ) /*0x98aefc*/
  {
    if ( (int)_getptd()[0x24] > 0 ) /*0x98af22*/
    {
      v2 = _getptd(); /*0x98af24*/
      --v2[0x24]; /*0x98af2e*/
    }
  }
  else if ( v1 == 0xE06D7363 ) /*0x98af03*/
  {
    _getptd()[0x24] = 0; /*0x98af0a*/
    terminate(); /*0x98af11*/
  }
  return 0; /*0x98af32*/
}
