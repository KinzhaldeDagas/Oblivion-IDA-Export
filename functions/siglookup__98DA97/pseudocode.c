unsigned int __usercall siglookup@<eax>(int a1@<edx>, unsigned int a2)
{
  unsigned int result; // eax

  result = a2;
  do
  {
    if ( *(_DWORD *)(result + 4) == a1 )
      break;
    result += 0xC;
  }
  while ( result < a2 + 0xC * dword_B3134C );
  if ( result >= a2 + 0xC * dword_B3134C || *(_DWORD *)(result + 4) != a1 )
    return 0;
  return result;
}
