int __cdecl __BuildCatchObject(int a1, int *a2, int *a3, int a4)
{
  int v4; // ebx
  int v5; // eax
  int result; // eax

  if ( *a3 >= 0 )
    v4 = (int)a2 + a3[2] + 0xC;
  else
    v4 = (int)a2;
  v5 = __BuildCatchObjectHelper(a1, a2, a3, a4) - 1;
  if ( v5 )
  {
    result = v5 - 1;
    if ( !result )
    {
      __AdjustPointer(*(_DWORD *)(a1 + 0x18), (_DWORD *)(a4 + 8));
      return sub_980E4B(v4, *(_DWORD *)(a4 + 0x18));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 0x18), (_DWORD *)(a4 + 8));
    return sub_980E4B(v4, *(_DWORD *)(a4 + 0x18));
  }
  return result;
}
