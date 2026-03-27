int __stdcall sub_6F8EC0(int a1, int a2, int a3, unsigned int a4)
{
  int result; // eax

  result = a3 - a2;
  if ( a4 < a3 - a2 )
    return a4;
  return result;
}
