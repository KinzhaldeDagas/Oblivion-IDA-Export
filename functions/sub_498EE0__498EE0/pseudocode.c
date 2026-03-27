void __cdecl sub_498EE0(DWORD dwMilliseconds, char a2)
{
  if ( a2 )
    Sleep(dwMilliseconds);
  else
    ::dwMilliseconds += dwMilliseconds;
}
