int (__cdecl *sub_717440())(__int16, int, int, int)
{
  int (__cdecl *result)(__int16, int, int, int); // eax

  if ( !unk_B3FCCC ) /*0x717444*/
    sub_7170D0(); /*0x71744f*/
  sub_716F30((int (__cdecl *)(__int16, int, int, int))sub_717280); /*0x717459*/
  result = sub_716F20((int (__cdecl *)(__int16, int, int, int))sub_717370); /*0x717466*/
  if ( unk_B3FCC8 > 0 && unk_B3FCC8 <= 6 ) /*0x717481*/
  {
    sub_716F30((int (__cdecl *)(__int16, int, int, int))sub_716FC0); /*0x71748c*/
    return sub_716F20((int (__cdecl *)(__int16, int, int, int))sub_716F40); /*0x717499*/
  }
  return result; /*0x7174a3*/
}
