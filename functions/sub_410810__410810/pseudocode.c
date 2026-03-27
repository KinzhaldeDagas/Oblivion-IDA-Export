char __cdecl sub_410810(char a1, char a2)
{
  if ( ObjectPtr && *(_DWORD *)(ObjectPtr + 0x20) )
    return VideoPass((_DWORD *)ObjectPtr, a1, a2);
  else
    return 0;
}
