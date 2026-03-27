int __stdcall sub_77C120(_DWORD **a1)
{
  int result; // eax
  int v2; // eax

  result = sub_77EAE0();
  if ( result )
  {
    v2 = (int)*a1;
    if ( *a1 )
    {
      *a1 = *(_DWORD **)v2;
      return *(_DWORD *)(v2 + 8);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
