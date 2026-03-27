char __stdcall sub_6C4000(int a1, _DWORD *a2, float a3, int a4, char a5, float a6, int a7)
{
  if ( !*(_DWORD *)(a1 + 0x44) || a2[0x11] )
    return 0;
  sub_6C9CB0(a1, a3, 0);
  return sub_6C9BA0(a2, a4, a5, a6, a3, a7, 0);
}
