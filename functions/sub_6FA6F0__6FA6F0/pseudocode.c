BOOL __cdecl sub_6FA6F0(char *FullPath, char *a2)
{
  char C[260]; // [esp+4h] [ebp-20Ch] BYREF
  char v4[260]; // [esp+108h] [ebp-108h] BYREF

  sub_6FA600((int)v4, FullPath);
  sub_6FA600((int)C, a2);
  return sub_6FA410(v4, C) == 1;
}
