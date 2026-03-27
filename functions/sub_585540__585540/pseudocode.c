void *__thiscall sub_585540(_DWORD *this)
{
  void *v2; // eax
  void *result; // eax

  v2 = (void *)FormHeapAlloc(1u);
  if ( v2 )
  {
    result = sub_4FCCE0(v2);
    *this = result;
  }
  else
  {
    *this = 0;
    return 0;
  }
  return result;
}
