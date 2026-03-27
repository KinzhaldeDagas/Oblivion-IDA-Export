int sub_7F3760()
{
  int result; // eax

  result = dword_B468FC;
  if ( !dword_B468FC )
  {
    result = ShaderPackage < 2 ? 0x4B : 0xEB;
    dword_B468FC = result;
  }
  return result;
}
