char __fastcall sub_6B6AF0(int a1)
{
  int v2; // [esp+8h] [ebp-4h] BYREF

  v2 = a1; /*0x6b6af0*/
  if ( !*(_DWORD *)(a1 + 0x50) ) /*0x6b6af1*/
    return 0; /*0x6b6b0d*/
  (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 0x50) + 0x24))(*(_DWORD *)(a1 + 0x50), &v2); /*0x6b6b04*/
  return v2 & 1; /*0x6b6b0c*/
}
