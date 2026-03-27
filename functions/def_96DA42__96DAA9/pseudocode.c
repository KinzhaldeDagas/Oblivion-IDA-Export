// positive sp value has been detected, the output may be wrong!
char *__userpurge def_96DA42@<eax>(va_list a1@<edi>, char *a2@<esi>, int a3, int a4)
{
  char *v5; // [esp-Ch] [ebp-10h]

  sub_6C5D40(a1, a2, __PAIR64__("%s = UNKNOWN!!!", (unsigned int)a1), v5);
  return a2;
}
