_WORD *__cdecl sub_92A630(_WORD *a1)
{
  _WORD *result; // eax

  if ( a1 )
  {
    result = sub_929DD0(a1, 1);
    *(_DWORD *)a1 = &off_AA1AF4;
  }
  return result;
}
