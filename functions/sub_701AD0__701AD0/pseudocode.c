int sub_701AD0()
{
  int result; // eax

  if ( dword_B3F940 )
  {
    result = (*(int (__stdcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)dword_B3F940 + 0x60))(
               1,
               dword_B3F940 + 0x19C,
               0,
               0);
    *(_BYTE *)(dword_B3F940 + 0x1B0) = 0;
  }
  return result;
}
