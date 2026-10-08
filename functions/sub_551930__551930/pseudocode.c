char __cdecl sub_551930(unsigned int **a1)
{
  char **v1; // eax

  v1 = (char **)g_faceGenManager; /*0x551930*/
  if ( g_faceGenManager && v1[0x36B] ) /*0x55193c*/
    return sub_5516B0(v1[0x36B], a1); /*0x551950*/
  else
    return 0; /*0x551939*/
}
