// positive sp value has been detected, the output may be wrong!
char *__usercall def_6C6172@<eax>(const char *a1@<edi>, char *a2@<esi>, int a3, const char *a4)
{
  _sprintf(a2, "%s = %s", a1, a4);
  return a2;
}
