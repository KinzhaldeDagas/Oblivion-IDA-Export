signed int sub_6C2650()
{
  signed int result; // eax

  result = 0;
  if ( !byte_B3C8C4 )
  {
    dword_B3D12C = 0;
    dword_B3D24C = 0;
    dword_B3D664 = 0;
    byte_B3C8C4 = 1;
    dword_B3D09C = (int)sub_6C2590;
    dword_B3D5D4 = (int)sub_6BF300;
    dword_B3D544 = (int)sub_6C23F0;
    dword_B3D36C = (int)sub_6BF0B0;
    dword_B3D2DC = (int)sub_6BF150;
    byte_B3D3ED = 8;
    dword_B3D00C = (int)sub_6C23C0;
    dword_B3D4B4 = (int)sub_6BF060;
    dword_B3D424 = (int)TESTexture::ClearComponentReferences;
    dword_B3D1BC = (int)sub_6C2410;
    return 1;
  }
  return result;
}
