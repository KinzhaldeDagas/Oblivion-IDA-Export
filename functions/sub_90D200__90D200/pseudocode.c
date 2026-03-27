int __fastcall sub_90D200(int a1)
{
  int result; // eax

  for ( result = 0; a1; ++result )
    a1 = *(_DWORD *)(a1 + 4);
  return result;
}
