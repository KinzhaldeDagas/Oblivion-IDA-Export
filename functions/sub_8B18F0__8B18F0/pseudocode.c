char *__cdecl sub_8B18F0(const char *a1)
{
  char *result; // eax

  result = (char *)(**(int (__thiscall ***)(int, unsigned int, int))unk_BA7D98)(unk_BA7D98, strlen(a1) + 1, 0x13); /*0x8b1915*/
  strcpy(result, a1); /*0x8b1919*/
  return result; /*0x8b192a*/
}
