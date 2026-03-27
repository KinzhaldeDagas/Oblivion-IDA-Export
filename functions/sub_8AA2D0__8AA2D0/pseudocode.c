_WORD *__cdecl sub_8AA2D0(_WORD *a1)
{
  _WORD *result; // eax

  if ( a1 )
  {
    result = sub_8A6740(a1, 1);
    *(_DWORD *)a1 = &off_A97A98;
  }
  return result;
}
