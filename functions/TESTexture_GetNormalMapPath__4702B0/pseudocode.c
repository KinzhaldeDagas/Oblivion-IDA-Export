char *__thiscall TESTexture_GetNormalMapPath(char **this, BSStringT *a2)
{
  char *v2; // eax

  v2 = *(this + 1); /*0x4702b0*/
  if ( !v2 ) /*0x4702b5*/
    v2 = EmptyString; /*0x4702b7*/
  return sub_46FF20(a2, v2); /*0x4702ca*/
}
