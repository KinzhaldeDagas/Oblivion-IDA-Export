_WORD *__cdecl sub_92AA70(_WORD *a1)
{
  _WORD *result; // eax

  if ( a1 )
  {
    result = sub_9156C0(a1);
    *(_DWORD *)a1 = &off_AA1B70;
  }
  return result;
}
