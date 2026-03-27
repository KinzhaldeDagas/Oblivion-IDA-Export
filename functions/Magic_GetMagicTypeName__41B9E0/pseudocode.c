int __cdecl Magic_GetMagicTypeName(int a1)
{
  int v1; // eax

  v1 = (int)*(&Magic_TypeNameArray + a1);
  if ( v1 )
    return *(_DWORD *)v1;
  else
    return 0;
}
