int __stdcall sub_96DBD0(int a1)
{
  int result; // eax

  result = a1; /*0x96dbd0*/
  if ( a1 ) /*0x96dbd6*/
  {
    while ( 1 ) /*0x96dbd8*/
    {
      result = *(_DWORD *)(result + 0x1C); /*0x96dbd8*/
      if ( !result ) /*0x96dbdd*/
        break; /*0x96dbdd*/
      if ( *(_DWORD *)(result + 0xA8) ) /*0x96dbdf*/
        return result; /*0x96dbe6*/
    }
  }
  return 0; /*0x96dbec*/
}
