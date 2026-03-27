int __cdecl sub_980D85(int a1)
{
  int result; // eax

  if ( !dword_B30A4C )
    abort();
  result = dword_B30A4C - 1;
  dword_B30A4C = result;
  *(_DWORD *)(4 * result + 0xBA9C6C) = a1;
  return result;
}
