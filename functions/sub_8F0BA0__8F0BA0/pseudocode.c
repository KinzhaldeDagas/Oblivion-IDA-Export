_WORD *__cdecl sub_8F0BA0(_WORD *a1)
{
  _WORD *result; // eax

  if ( a1 )
  {
    result = sub_9156C0(a1);
    *(_DWORD *)a1 = &off_A9B198;
  }
  return result;
}
