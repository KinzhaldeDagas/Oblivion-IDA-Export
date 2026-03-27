int BSStringT_Static_Format(BSStringT *a1, char *Format, ...)
{
  va_list ArgList; // [esp+Ch] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  return BSStringT_Format(a1, Format, ArgList);
}
