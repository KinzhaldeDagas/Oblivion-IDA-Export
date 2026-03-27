_DWORD *__cdecl sub_8B88F0(_DWORD *a1)
{
  _DWORD *result; // eax

  if ( a1 )
  {
    result = sub_8F5750(a1, 0, 0);
    *a1 = &off_A98060;
  }
  return result;
}
