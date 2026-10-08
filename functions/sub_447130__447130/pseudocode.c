char __thiscall sub_447130(char *this)
{
  char *v1; // esi
  char result; // al

  v1 = this + 0x8C8; /*0x447131*/
  if ( this != (char *)0xFFFFF738 ) /*0x447139*/
  {
    do /*0x447150*/
    {
      if ( !*(_DWORD *)v1 ) /*0x447140*/
        break; /*0x447144*/
      result = TESFile_Close(*(Data **)v1); /*0x447146*/
      v1 = *((char **)v1 + 1); /*0x44714b*/
    }
    while ( v1 ); /*0x447150*/
  }
  return result; /*0x447152*/
}
