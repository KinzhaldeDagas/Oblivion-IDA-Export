signed int sub_7E2D60()
{
  signed int result; // eax

  result = dword_B4600C;
  if ( !dword_B4600C )
  {
    result = ShaderPackage < 2 ? 0x28 : 0x78;
    dword_B4600C = result;
  }
  return result;
}
