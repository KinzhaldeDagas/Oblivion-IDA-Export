int sync_legacy_variables_lk()
{
  int result; // eax

  dword_BAA638 = *((_DWORD *)off_B31998 + 1);
  dword_BAA63C = *((_DWORD *)off_B31998 + 2);
  dword_B3199C = *((_DWORD *)off_B31998 + 0x2A);
  off_B31FA8 = *((_UNKNOWN ****)off_B31998 + 0x35);
  off_B30DE4 = *((_UNKNOWN ***)off_B31998 + 0x2F);
  off_B30DF0 = *((wchar_t **)off_B31998 + 0x32);
  result = *((_DWORD *)off_B31998 + 0x2B);
  dword_B31FAC = result;
  return result;
}
