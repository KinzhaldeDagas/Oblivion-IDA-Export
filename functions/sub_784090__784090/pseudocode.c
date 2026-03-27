int __cdecl sub_784090(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 0x2D); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
