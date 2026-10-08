double __cdecl sub_547560(float a1, char a2)
{
  float v3; // [esp+4h] [ebp+4h]

  v3 = g_GameSettingStringPointers_B36CD8[0xC2] * a1 + g_GameSettingStringPointers_B36CD8[0xC0]; /*0x547575*/
  if ( a2 ) /*0x547579*/
    return (float)(g_GameSettingStringPointers_B36CD8[0xC4] * v3); /*0x547585*/
  return v3; /*0x54758d*/
}
