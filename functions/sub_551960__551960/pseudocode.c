char __cdecl sub_551960(unsigned int **a1)
{
  char **v1; // eax

  v1 = (char **)g_faceGenManager; /*0x551960*/
  if ( g_faceGenManager && v1[0x36B] ) /*0x55196c*/
    return sub_5517F0(v1[0x36B], a1); /*0x551980*/
  else
    return 0; /*0x551969*/
}
