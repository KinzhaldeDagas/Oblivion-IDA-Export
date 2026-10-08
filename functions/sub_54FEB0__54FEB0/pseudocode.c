char *__cdecl sub_54FEB0(BSStringT *a1, char *arg4)
{
  char *v2; // eax
  char v4; // cl
  char *v5; // eax
  char Str[260]; // [esp+4h] [ebp-20Ch] BYREF
  char a2[260]; // [esp+108h] [ebp-108h] BYREF

  v2 = arg4; /*0x54fec4*/
  if ( !arg4 ) /*0x54fed5*/
    return 0; /*0x54fed5*/
  do /*0x54feff*/
  {
    v4 = *v2; /*0x54fef5*/
    v2[Str - arg4] = *v2; /*0x54fef7*/
    ++v2; /*0x54fefa*/
  }
  while ( v4 ); /*0x54feff*/
  v5 = strrchr(Str, 0x2E); /*0x54ff08*/
  if ( !v5 ) /*0x54ff12*/
    return 0; /*0x54fed7*/
  *v5 = 0; /*0x54ff26*/
  _sprintf(a2, "%s.egm", Str); /*0x54ff29*/
  BSStringT_Set(a1, a2, 0); /*0x54ff3d*/
  return a1->m_data; /*0x54fed9*/
}
