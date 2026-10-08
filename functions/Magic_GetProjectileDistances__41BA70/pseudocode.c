int __cdecl Magic_GetProjectileDistances(int a1, float *a2, float *a3)
{
  int result; // eax

  *a2 = 1000.0; /*0x41ba7e*/
  result = a1 - 1; /*0x41ba80*/
  *a3 = 2000.0; /*0x41ba8d*/
  if ( a1 == 1 ) /*0x41ba8f*/
  {
    *a2 = MEMORY[0xB3369C][0]; /*0x41bad4*/
    *a3 = MEMORY[0xB336A4][0]; /*0x41badc*/
  }
  else
  {
    result = a1 - 2; /*0x41ba91*/
    if ( a1 == 2 ) /*0x41ba94*/
    {
      *a2 = MEMORY[0xB336AC][0]; /*0x41bac3*/
      *a3 = MEMORY[0xB336B4][0]; /*0x41bacb*/
    }
    else
    {
      result = a1 - 3; /*0x41ba96*/
      if ( a1 == 3 ) /*0x41ba99*/
      {
        *a2 = MEMORY[0xB336BC][0]; /*0x41bab2*/
        *a3 = MEMORY[0xB336C4][0]; /*0x41baba*/
      }
      else
      {
        *a2 = MEMORY[0xB3368C][0]; /*0x41baa1*/
        *a3 = MEMORY[0xB33694][0]; /*0x41baa9*/
      }
    }
  }
  return result; /*0x41baab*/
}
