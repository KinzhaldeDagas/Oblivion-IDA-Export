unsigned int __stdcall sub_434710(char *Str1, char *a2)
{
  unsigned int v2; // eax
  unsigned int result; // eax
  char *v4; // ecx
  size_t v5; // [esp-4h] [ebp-Ch]

  v2 = strlen(Str1); /*0x434718*/
  if ( v2 > 3 && !CRT_StricmpLocaleDispatch(&Str1[v2 - 3], off_A366CC) ) /*0x43473a*/
  {
    strcpy(a2, "Trees"); /*0x434750*/
    result = strlen(Str1) + 1; /*0x434767*/
    v4 = &a2[strlen(a2)]; /*0x43476b*/
LABEL_6:
    qmemcpy(v4, Str1, result); /*0x4347be*/
    return result; /*0x4347cc*/
  }
  LODWORD(v5) = 7; /*0x43477c*/
  if ( _strnicmp(Str1, "Meshes\\", v5) ) /*0x434784*/
  {
    strcpy(a2, "Meshes\\"); /*0x43479a*/
    result = strlen(Str1) + 1; /*0x4347ad*/
    v4 = &a2[strlen(a2)]; /*0x4347b1*/
    goto LABEL_6; /*0x4347b1*/
  }
  strcpy(a2, Str1); /*0x4347d7*/
  return result; /*0x4347ce*/
}
