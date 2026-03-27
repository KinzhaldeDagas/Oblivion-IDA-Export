int sub_4971E0()
{
  int result; // eax

  result = FormHeapAlloc(0x10u);
  if ( result )
  {
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 0xC) = 0;
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 0xC) = 0;
  }
  else
  {
    *(_DWORD *)8 = 0;
    *(_DWORD *)0xC = 0;
    return 0;
  }
  return result;
}
