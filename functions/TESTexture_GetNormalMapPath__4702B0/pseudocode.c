char *__thiscall TESTexture_GetNormalMapPath(char **this, BSStringT *a2)
{
  char *v2; // eax

  v2 = *(this + 1);
  if ( !v2 )
    v2 = EmptyString;
  return sub_46FF20(a2, v2);
}
