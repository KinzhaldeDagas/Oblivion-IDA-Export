char __fastcall sub_6B6AF0(int a1)
{
  int v2; // [esp+8h] [ebp-4h] BYREF

  v2 = a1;
  if ( !*(_DWORD *)(a1 + 0x50) )
    return 0;
  (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 0x50) + 0x24))(*(_DWORD *)(a1 + 0x50), &v2);
  return v2 & 1;
}
