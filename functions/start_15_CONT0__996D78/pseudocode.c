int __cdecl start_15_::CONT0(unsigned int a1)
{
  unsigned int v1; // ecx

  if ( v1 < 0x80000000 )
    return start_15_::OVERFLOW();
  if ( v1 < 0xC086232B || v1 <= 0xC086232B && a1 < 0xFEFA39EF )
    return start_15_::RETURN_1();
  return start_15_::UNDERFLOW();
}
