int (__cdecl *sub_717440())(__int16, int, int, int)
{
  int (__cdecl *result)(__int16, int, int, int); // eax

  if ( !byte_B3FCCC )
    sub_7170D0();
  sub_716F30((int (__cdecl *)(__int16, int, int, int))sub_717280);
  result = sub_716F20((int (__cdecl *)(__int16, int, int, int))sub_717370);
  if ( dword_B3FCC8 > 0 && dword_B3FCC8 <= 6 )
  {
    sub_716F30((int (__cdecl *)(__int16, int, int, int))sub_716FC0);
    return sub_716F20((int (__cdecl *)(__int16, int, int, int))sub_716F40);
  }
  return result;
}
