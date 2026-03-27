signed int sub_6BB550()
{
  signed int result; // eax

  result = 0;
  if ( !byte_B3C27C )
  {
    dword_B3D118[0] = 0;
    dword_B3D238[0] = 0;
    dword_B3D650[0] = 0;
    dword_B3D1A8[0] = 0;
    byte_B3C27C = 1;
    dword_B3D088[0] = (int)nullsub_return0_0arg;
    dword_B3D5C0[0] = (int)TESTexture::ClearComponentReferences;
    dword_B3D530[0] = (int)TESTexture::ClearComponentReferences;
    dword_B3D358[0] = (int)nullsub_return0_0arg;
    dword_B3D2C8[0] = (int)TESTexture::ClearComponentReferences;
    byte_B3D3E8[0] = 8;
    dword_B3CFF8[0] = (int)TESTexture::ClearComponentReferences;
    dword_B3D4A0[0] = (int)sub_6BB490;
    dword_B3D410[0] = (int)TESTexture::ClearComponentReferences;
    return 1;
  }
  return result;
}
