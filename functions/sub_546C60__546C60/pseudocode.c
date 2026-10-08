double __cdecl sub_546C60(float a1, int a2, float a3)
{
  float v4; // [esp+Ch] [ebp+Ch]

  if ( LOBYTE(a3) ) /*0x546c65*/
    v4 = g_GameSettingStringPointers_B36CD8[0xE]; /*0x546c6d*/
  else
    v4 = g_GameSettingStringPointers_B36CD8[0xA]; /*0x546c88*/
  return (float)(v4 * a1); /*0x546c81*/
}
