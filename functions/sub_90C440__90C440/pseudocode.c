int __cdecl sub_90C440(int a1)
{
  int result; // eax

  result = a1; /*0x90c440*/
  if ( a1 ) /*0x90c446*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x90c448*/
    *(_DWORD *)a1 = &off_A9C324; /*0x90c44e*/
  }
  return result; /*0x90c454*/
}
