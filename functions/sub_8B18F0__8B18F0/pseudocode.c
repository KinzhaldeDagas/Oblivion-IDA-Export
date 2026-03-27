char *__cdecl sub_8B18F0(const char *a1)
{
  char *result; // eax

  result = (char *)(**(int (__thiscall ***)(int, unsigned int, int))dword_BA7D98)(dword_BA7D98, strlen(a1) + 1, 0x13);
  strcpy(result, a1);
  return result;
}
