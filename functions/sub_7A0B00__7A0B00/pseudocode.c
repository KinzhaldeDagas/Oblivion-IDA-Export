void __stdcall sub_7A0B00(int a1)
{
  _DWORD *v1; // eax

  v1 = *(_DWORD **)(a1 + 4);
  if ( v1 )
  {
    sub_79E150(v1, *(_DWORD **)(a1 + 8));
    FormHeapFree(*(_DWORD *)(a1 + 4));
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 0xC) = 0;
}
