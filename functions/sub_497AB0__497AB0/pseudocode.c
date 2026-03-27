unsigned int __cdecl sub_497AB0(unsigned int a1)
{
  unsigned int result; // eax

  result = ShaderPackage < 5 ? 0 : 2;
  dword_B430B0 = result;
  if ( result >= a1 )
    dword_B430B0 = a1;
  return result;
}
