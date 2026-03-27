_DWORD *__userpurge sub_60A210@<eax>(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, char a5)
{
  sub_608B60(a1, a2, a3, a4);
  if ( (a5 & 1) != 0 )
    FormHeapFree((unsigned int)a1);
  return a1;
}
