char *__cdecl sub_54FF60(BSStringT *a1, char *arg4)
{
  char *v2; // eax
  char v4; // cl
  char *v5; // eax
  char Str[260]; // [esp+4h] [ebp-20Ch] BYREF
  char a2[260]; // [esp+108h] [ebp-108h] BYREF

  v2 = arg4; /*0x54ff74*/
  if ( !arg4 ) /*0x54ff85*/
    return 0; /*0x54ff85*/
  do /*0x54ffaf*/
  {
    v4 = *v2; /*0x54ffa5*/
    v2[Str - arg4] = *v2; /*0x54ffa7*/
    ++v2; /*0x54ffaa*/
  }
  while ( v4 ); /*0x54ffaf*/
  v5 = strrchr(Str, 0x2E); /*0x54ffb8*/
  if ( !v5 ) /*0x54ffc2*/
    return 0; /*0x54ff87*/
  *v5 = 0; /*0x54ffd6*/
  _sprintf(a2, "%s.nif", Str); /*0x54ffd9*/
  BSStringT_Set(a1, a2, 0); /*0x54ffed*/
  return a1->m_data; /*0x54ff89*/
}
