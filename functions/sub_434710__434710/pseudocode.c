unsigned int __stdcall sub_434710(char *Str1, char *a2)
{
  unsigned int v2; // eax
  unsigned int result; // eax
  char *v4; // ecx
  size_t v5; // [esp-4h] [ebp-Ch]

  v2 = strlen(Str1);
  if ( v2 > 3 && !_strcmp(&Str1[v2 - 3], off_A366CC) )
  {
    strcpy(a2, "Trees");
    result = strlen(Str1) + 1;
    v4 = &a2[strlen(a2)];
LABEL_6:
    qmemcpy(v4, Str1, result);
    return result;
  }
  LODWORD(v5) = 7;
  if ( _strnicmp(Str1, "Meshes\\", v5) )
  {
    strcpy(a2, "Meshes\\");
    result = strlen(Str1) + 1;
    v4 = &a2[strlen(a2)];
    goto LABEL_6;
  }
  strcpy(a2, Str1);
  return result;
}
