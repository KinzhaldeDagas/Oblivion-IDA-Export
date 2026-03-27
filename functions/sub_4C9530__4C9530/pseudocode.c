char __thiscall sub_4C9530(const char **this)
{
  const char *v1; // eax
  char Str1[260]; // [esp+0h] [ebp-20Ch] BYREF
  char v4[260]; // [esp+104h] [ebp-108h] BYREF

  v1 = *(this + 7);
  if ( !v1 )
    v1 = EmptyString;
  _sprintf(Str1, "%s\\Landscape\\%s", "Textures", v1);
  sub_47D8F0(Str1, v4);
  return sub_43B0D0(v4, 5u, 0);
}
