int __cdecl TESDescription_Load(int a1, int a2)
{
  int result; // eax

  if ( a1 )
  {
    result = a2;
    if ( a2 )
    {
      result = *(_DWORD *)(a2 + 0x25C);
      *(_DWORD *)(a1 + 4) = result;
    }
  }
  return result;
}
