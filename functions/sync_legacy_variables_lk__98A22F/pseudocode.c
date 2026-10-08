int sync_legacy_variables_lk()
{
  int result; // eax

  dword_BA9E10[0x20A] = *((_DWORD *)off_B31998 + 1); /*0x98a237*/
  dword_BA9E10[0x20B] = *((_DWORD *)off_B31998 + 2); /*0x98a240*/
  dword_B3199C = *((_DWORD *)off_B31998 + 0x2A); /*0x98a24c*/
  off_B31FA8 = *((_UNKNOWN ****)off_B31998 + 0x35); /*0x98a258*/
  off_B30DE4 = *((_UNKNOWN ***)off_B31998 + 0x2F); /*0x98a264*/
  off_B30DF0 = *((wchar_t **)off_B31998 + 0x32); /*0x98a270*/
  result = *((_DWORD *)off_B31998 + 0x2B); /*0x98a276*/
  dword_B31FAC = result; /*0x98a27c*/
  return result; /*0x98a281*/
}
