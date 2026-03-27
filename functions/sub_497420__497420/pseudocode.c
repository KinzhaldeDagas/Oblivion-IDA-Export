int __cdecl sub_497420(int a1)
{
  int result; // eax
  int v2; // esi
  int v3; // eax

  result = sub_47FAC0(a1);
  v2 = result;
  if ( result )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)result + 4))(result);
    if ( v3 )
    {
      while ( (char *)v3 != dword_BA7A20 )
      {
        v3 = *(_DWORD *)(v3 + 4);
        if ( !v3 )
          return 0;
      }
      return v2;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
