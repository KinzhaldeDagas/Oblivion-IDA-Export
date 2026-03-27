signed int sub_6BDB00()
{
  signed int result; // eax

  result = 0;
  if ( !byte_B3C40C )
  {
    dword_B3D150 = 0;
    dword_B3D270 = 0;
    dword_B3D688 = 0;
    byte_B3C40C = 1;
    dword_B3D0C0 = (int)sub_6BDA10;
    dword_B3D5F8 = (int)sub_6BDAD0;
    dword_B3D568 = (int)sub_6BD610;
    dword_B3D390 = (int)sub_6BD790;
    dword_B3D300 = (int)sub_6BD830;
    byte_B3D3F6 = 0x24;
    dword_B3D030 = (int)sub_6BD660;
    dword_B3D4D8 = (int)sub_6BD5E0;
    dword_B3D448 = (int)sub_6BD6B0;
    dword_B3D1E0 = (int)sub_6BD860;
    return 1;
  }
  return result;
}
