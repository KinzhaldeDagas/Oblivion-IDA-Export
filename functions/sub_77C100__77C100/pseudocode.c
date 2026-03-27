int __stdcall sub_77C100(_DWORD *a1)
{
  int result; // eax
  _DWORD *v2; // eax

  result = sub_77EAE0();
  if ( result )
  {
    v2 = *(_DWORD **)(result + 0xC);
    *a1 = v2;
    if ( v2 )
    {
      *a1 = *v2;
      return v2[2];
    }
    else
    {
      return 0;
    }
  }
  return result;
}
