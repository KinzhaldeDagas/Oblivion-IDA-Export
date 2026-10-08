int __cdecl Magic_GetMagicTypeName(int a1)
{
  int v1; // eax

  v1 = (int)*(&Magic_TypeNameArray + a1); /*0x41b9e4*/
  if ( v1 ) /*0x41b9ed*/
    return *(_DWORD *)v1; /*0x41b9ef*/
  else
    return 0; /*0x41b9f2*/
}
