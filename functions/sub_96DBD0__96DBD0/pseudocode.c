int __stdcall sub_96DBD0(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      result = *(_DWORD *)(result + 0x1C);
      if ( !result )
        break;
      if ( *(_DWORD *)(result + 0xA8) )
        return result;
    }
  }
  return 0;
}
