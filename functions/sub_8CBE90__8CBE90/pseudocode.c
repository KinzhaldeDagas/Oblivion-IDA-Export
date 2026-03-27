int __cdecl sub_8CBE90(int a1, int a2)
{
  int v2; // esi
  int result; // eax

  v2 = *(_DWORD *)(a2 + 0x54);
  *(_DWORD *)(a2 + 8) = 0;
  result = sub_8DDC20((_DWORD *)v2, a2);
  if ( *(_WORD *)(v2 + 0x20) != 0xFFFF )
  {
    result = *(_DWORD *)(v2 + 0x38);
    if ( !result )
    {
      result = a1;
      if ( *(_BYTE *)(a1 + 0xA4) )
      {
        sub_8CB820((_DWORD *)a1, v2);
        return (**(int (__thiscall ***)(int, int))v2)(v2, 1);
      }
    }
  }
  return result;
}
