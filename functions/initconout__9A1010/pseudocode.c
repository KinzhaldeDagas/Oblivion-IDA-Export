HANDLE __initconout()
{
  HANDLE result; // eax

  result = CreateFileA("CONOUT$", 0x40000000u, 3u, 0, 3u, 0, 0); /*0x9a1023*/
  hConsoleOutput = result; /*0x9a1029*/
  return result; /*0x9a102e*/
}
