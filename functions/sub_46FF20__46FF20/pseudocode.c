char *__cdecl sub_46FF20(BSStringT *a1, char *arg4)
{
  char *v2; // eax
  char v4; // cl
  char *v5; // eax
  char Str[260]; // [esp+4h] [ebp-20Ch] BYREF
  char a2[260]; // [esp+108h] [ebp-108h] BYREF

  v2 = arg4; /*0x46ff34*/
  if ( !arg4 ) /*0x46ff45*/
    return 0; /*0x46ff45*/
  do /*0x46ff6f*/
  {
    v4 = *v2; /*0x46ff65*/
    v2[Str - arg4] = *v2; /*0x46ff67*/
    ++v2; /*0x46ff6a*/
  }
  while ( v4 ); /*0x46ff6f*/
  v5 = strrchr(Str, 0x2E); /*0x46ff78*/
  if ( !v5 ) /*0x46ff82*/
    return 0; /*0x46ff47*/
  *v5 = 0; /*0x46ff96*/
  _sprintf(a2, "%s_n.dds", Str); /*0x46ff99*/
  BSStringT_Set(a1, a2, 0); /*0x46ffad*/
  return a1->m_data; /*0x46ff49*/
}
