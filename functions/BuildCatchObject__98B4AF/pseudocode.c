int __cdecl __BuildCatchObject(int a1, int *a2, int *a3, int a4)
{
  int *v4; // ebx
  int v5; // eax
  int result; // eax

  if ( *a3 >= 0 ) /*0x98b4c4*/
    v4 = (int *)((char *)a2 + a3[2] + 0xC); /*0x98b4d1*/
  else
    v4 = a2; /*0x98b4c6*/
  v5 = __BuildCatchObjectHelper(a1, a2, a3, a4) - 1; /*0x98b4ed*/
  if ( v5 ) /*0x98b4ee*/
  {
    result = v5 - 1; /*0x98b4f0*/
    if ( !result ) /*0x98b4f1*/
    {
      __AdjustPointer(*(_DWORD *)(a1 + 0x18), (_DWORD *)(a4 + 8)); /*0x98b4fc*/
      return sub_980E4B((int)v4, *(_DWORD *)(a4 + 0x18)); /*0x98b508*/
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 0x18), (_DWORD *)(a4 + 8)); /*0x98b516*/
    return sub_980E4B((int)v4, *(_DWORD *)(a4 + 0x18)); /*0x98b522*/
  }
  return result; /*0x98b52e*/
}
