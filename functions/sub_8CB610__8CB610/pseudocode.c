unsigned __int16 __cdecl sub_8CB610(int a1, int a2)
{
  unsigned __int16 result; // ax

  result = *(_WORD *)(a2 + 0x22);
  if ( result != 0xFFFF )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 0x50) + 4 * result) = 0;
    *(_WORD *)(a2 + 0x22) = 0xFFFF;
  }
  return result;
}
