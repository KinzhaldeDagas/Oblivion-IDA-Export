int sub_77C270()
{
  NiD3DShaderFactory *v0; // ecx
  int result; // eax

  v0 = unk_B42898; /*0x77c270*/
  if ( unk_B42898 ) /*0x77c270*/
  {
    if ( unk_B40120 == v0 ) /*0x77c280*/
      unk_B40120 = 0; /*0x77c282*/
    result = (**(int (__thiscall ***)(NiD3DShaderFactory *, int))v0)(v0, 1); /*0x77c292*/
    unk_B42898 = 0; /*0x77c294*/
  }
  return result; /*0x77c29e*/
}
