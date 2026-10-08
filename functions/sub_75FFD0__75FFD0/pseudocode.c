_DWORD *sub_75FFD0()
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x18u); /*0x75ffd2*/
  if ( result ) /*0x75ffde*/
  {
    *result = 0; /*0x75ffe5*/
    result[1] = 0; /*0x75ffe7*/
    result[2] = 0; /*0x75ffea*/
    result[3] = 8; /*0x75ffed*/
    result[4] = 8; /*0x75fff0*/
    result[5] = 0; /*0x75fff3*/
    g_NiD3DPassPool = (int)result; /*0x75fff6*/
  }
  else
  {
    g_NiD3DPassPool = 0; /*0x75fffc*/
  }
  return result; /*0x75fffb*/
}
