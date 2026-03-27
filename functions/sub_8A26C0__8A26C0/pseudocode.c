int __fastcall sub_8A26C0(_DWORD *a1, int a2, char a3)
{
  int v3; // eax

  if ( a1 )
  {
    v3 = a1[2];
    if ( v3 )
      *(_DWORD *)(v3 + 8) = a3 != 0 ? a1 : 0;
  }
  return sub_89D430(a1, a3);
}
