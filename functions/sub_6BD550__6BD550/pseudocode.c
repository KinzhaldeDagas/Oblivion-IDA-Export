signed int sub_6BD550()
{
  signed int result; // eax

  result = 0;
  if ( !byte_B3C3A0 )
  {
    dword_B3D148 = 0;
    dword_B3D268 = 0;
    dword_B3D680 = 0;
    dword_B3D1D8 = 0;
    byte_B3C3A0 = 1;
    dword_B3D0B8[0] = (int)nullsub_return0_0arg;
    dword_B3D5F0[0] = (int)TESTexture::ClearComponentReferences;
    dword_B3D560 = (int)TESTexture::ClearComponentReferences;
    dword_B3D388 = (int)nullsub_return0_0arg;
    dword_B3D2F8[0] = (int)TESTexture::ClearComponentReferences;
    byte_B3D3F4[0] = 0x14;
    dword_B3D028[0] = (int)sub_6BD2D0;
    dword_B3D4D0[0] = (int)sub_6BE360;
    dword_B3D440[0] = (int)sub_6BD310;
    return 1;
  }
  return result;
}
