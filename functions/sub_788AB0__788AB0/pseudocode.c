char *__cdecl sub_788AB0(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  char *v4; // edi

  for ( result = a1; result != a2; result += 0x1C )
  {
    v4 = result;
    qmemcpy(v4, a3, 0x1Cu);
  }
  return result;
}
