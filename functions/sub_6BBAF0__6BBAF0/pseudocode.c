signed int sub_6BBAF0()
{
  signed int result; // eax

  result = 0;
  if ( !byte_B3C27D )
  {
    dword_B3D120 = 0;
    dword_B3D240 = 0;
    dword_B3D658 = 0;
    byte_B3C27D = 1;
    dword_B3D090 = (int)sub_6BB960;
    dword_B3D5C8 = (int)sub_6BBA80;
    dword_B3D538 = (int)sub_6BB710;
    dword_B3D360 = (int)sub_6BF4D0;
    dword_B3D2D0 = (int)sub_6BF570;
    byte_B3D3EA = 0x10;
    dword_B3D000 = (int)sub_6BB6B0;
    dword_B3D4A8 = (int)sub_6BB660;
    dword_B3D418 = (int)TESTexture::ClearComponentReferences;
    dword_B3D1B0 = (int)sub_6BB730;
    return 1;
  }
  return result;
}
