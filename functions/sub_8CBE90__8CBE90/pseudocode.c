int __cdecl sub_8CBE90(int a1, int a2)
{
  int v2; // esi
  int result; // eax

  v2 = *(_DWORD *)(a2 + 0x54); /*0x8cbe95*/
  *(_DWORD *)(a2 + 8) = 0; /*0x8cbe9b*/
  result = sub_8DDC20((_DWORD *)v2, a2); /*0x8cbea2*/
  if ( *(_WORD *)(v2 + 0x20) != 0xFFFF ) /*0x8cbead*/
  {
    result = *(_DWORD *)(v2 + 0x38); /*0x8cbeaf*/
    if ( !result ) /*0x8cbeb4*/
    {
      result = a1; /*0x8cbeb6*/
      if ( *(_BYTE *)(a1 + 0xA4) ) /*0x8cbeba*/
      {
        sub_8CB820((_DWORD *)a1, v2); /*0x8cbec6*/
        return (**(int (__thiscall ***)(int, int))v2)(v2, 1); /*0x8cbed4*/
      }
    }
  }
  return result; /*0x8cbed6*/
}
