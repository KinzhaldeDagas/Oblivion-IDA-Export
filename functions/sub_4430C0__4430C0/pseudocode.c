volatile LONG *__stdcall sub_4430C0(void *a1, int a2)
{
  volatile LONG *result; // eax
  volatile LONG *v3; // esi

  result = 0;
  if ( a1 )
  {
    v3 = (volatile LONG *)sub_700610(a1, a2);
    sub_442F70(v3);
    return v3;
  }
  return result;
}
