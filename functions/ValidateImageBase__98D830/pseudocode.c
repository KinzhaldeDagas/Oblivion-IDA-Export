BOOL __cdecl _ValidateImageBase(int a1)
{
  int v2; // eax

  if ( *(_WORD *)a1 == 0x5A4D && (v2 = a1 + *(_DWORD *)(a1 + 0x3C), *(_DWORD *)v2 == 0x4550) )
    return *(_WORD *)(v2 + 0x18) == 0x10B;
  else
    return 0;
}
