const void *__thiscall sub_91CCA0(char *this, const void **a2)
{
  char *v3; // eax
  char *v4; // eax
  const void *result; // eax
  int v6; // esi
  char *v7; // ebx

  if ( this ) /*0x91cca7*/
    v3 = this + 0x28; /*0x91cca9*/
  else
    v3 = 0; /*0x91ccae*/
  sub_899CE0(a2, (int)v3); /*0x91ccb7*/
  if ( this ) /*0x91ccbe*/
    v4 = this + 0x2C; /*0x91ccc0*/
  else
    v4 = 0; /*0x91ccc5*/
  sub_899D20(a2, (int)v4); /*0x91ccca*/
  result = a2[0x2F]; /*0x91cccf*/
  v6 = 0; /*0x91ccd5*/
  if ( (int)result > 0 ) /*0x91ccd9*/
  {
    v7 = this + 0x28; /*0x91ccdb*/
    do /*0x91ccfa*/
    {
      (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v7 + 4))(v7, *((_DWORD *)a2[0x2E] + v6)); /*0x91ccee*/
      result = a2[0x2F]; /*0x91ccf1*/
      ++v6; /*0x91ccf7*/
    }
    while ( v6 < (int)result ); /*0x91ccfa*/
  }
  return result; /*0x91ccfc*/
}
