signed int sub_6BF330()
{
  signed int result; // eax

  result = 0;
  if ( !byte_B3C5E4 )
  {
    dword_B3D11C = 0;
    dword_B3D23C = 0;
    dword_B3D654 = 0;
    byte_B3C5E4 = 1;
    dword_B3D08C = (int)sub_6C2590;
    dword_B3D5C4 = (int)sub_6BF300;
    dword_B3D534 = (int)sub_6C23F0;
    dword_B3D35C = (int)sub_6BF0B0;
    dword_B3D2CC = (int)sub_6BF150;
    byte_B3D3E9 = 8;
    dword_B3CFFC = (int)sub_6BF070;
    dword_B3D4A4 = (int)sub_6BF060;
    dword_B3D414 = (int)TESTexture::ClearComponentReferences;
    dword_B3D1AC = (int)sub_6BF180;
    return 1;
  }
  return result;
}
