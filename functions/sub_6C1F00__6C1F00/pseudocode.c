signed int sub_6C1F00()
{
  signed int result; // eax

  result = 0;
  if ( !byte_B3C80C )
  {
    dword_B3D1A4 = 0;
    dword_B3D2C4 = 0;
    dword_B3D6DC = 0;
    byte_B3C80C = 1;
    dword_B3D114 = (int)sub_6C1E10;
    dword_B3D64C = (int)sub_6C1ED0;
    dword_B3D5BC = (int)sub_6C1C80;
    dword_B3D3E4 = (int)sub_6BF0B0;
    dword_B3D354 = (int)sub_6BF150;
    byte_B3D40B = 8;
    dword_B3D084 = (int)sub_6C1C60;
    dword_B3D52C = (int)sub_6C1C50;
    dword_B3D49C = (int)TESTexture::ClearComponentReferences;
    dword_B3D234 = (int)sub_6C1CA0;
    return 1;
  }
  return result;
}
