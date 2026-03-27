int __fastcall sub_4EF1B0(int a1)
{
  int i; // eax

  for ( i = *(_DWORD *)(a1 + 0x7C); i; i = *(_DWORD *)(i + 0x7C) )
    a1 = i;
  return a1 + 0x84;
}
