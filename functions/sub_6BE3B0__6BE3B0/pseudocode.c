signed int sub_6BE3B0()
{
  signed int result; // eax

  result = 0;
  if ( !byte_B3C4C1 )
  {
    dword_B3D160 = 0;
    dword_B3D280 = 0;
    dword_B3D698 = 0;
    dword_B3D458 = 0;
    dword_B3D1F0 = 0;
    byte_B3C4C1 = 1;
    dword_B3D0D0[0] = (int)nullsub_return0_0arg;
    dword_B3D608[0] = (int)TESTexture::ClearComponentReferences;
    dword_B3D578 = (int)TESTexture::ClearComponentReferences;
    dword_B3D3A0 = (int)nullsub_return0_0arg;
    dword_B3D310[0] = (int)TESTexture::ClearComponentReferences;
    byte_B3D3FA[0] = 0x14;
    dword_B3D040[0] = (int)sub_6BE010;
    dword_B3D4E8[0] = (int)sub_6BE360;
    return 1;
  }
  return result;
}
