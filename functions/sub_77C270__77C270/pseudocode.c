int sub_77C270()
{
  NiD3DShaderFactory *v0; // ecx
  int result; // eax

  v0 = dword_B42898;
  if ( dword_B42898 )
  {
    if ( dword_B40120 == v0 )
      dword_B40120 = 0;
    result = (**(int (__thiscall ***)(NiD3DShaderFactory *, int))v0)(v0, 1);
    dword_B42898 = 0;
  }
  return result;
}
