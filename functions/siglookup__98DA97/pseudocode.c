unsigned int __usercall siglookup@<eax>(int a1@<edx>, unsigned int a2)
{
  unsigned int result; // eax

  result = a2; /*0x98da97*/
  do /*0x98dab5*/
  {
    if ( *(_DWORD *)(result + 4) == a1 ) /*0x98daa5*/
      break; /*0x98daa5*/
    result += 0xC; /*0x98dab0*/
  }
  while ( result < a2 + 0xC * dword_B3134C ); /*0x98dab5*/
  if ( result >= a2 + 0xC * dword_B3134C || *(_DWORD *)(result + 4) != a1 ) /*0x98dac6*/
    return 0; /*0x98dac8*/
  return result; /*0x98dabe*/
}
