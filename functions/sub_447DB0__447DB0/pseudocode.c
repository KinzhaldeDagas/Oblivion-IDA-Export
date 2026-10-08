void __thiscall sub_447DB0(char *this, int a2)
{
  char *v2; // esi
  Data *v3; // edi

  v2 = this + 0x8C8; /*0x447db1*/
  if ( this != (char *)0xFFFFF738 ) /*0x447db9*/
  {
    do /*0x447ddf*/
    {
      v3 = *(Data **)v2; /*0x447dc1*/
      if ( !*(_DWORD *)v2 ) /*0x447dc1*/
        break; /*0x447dc5*/
      if ( TESFile_GetIsMaster(*(Data **)v2) ) /*0x447dc9*/
        sub_44FBB0(v3, a2); /*0x447dd5*/
      v2 = *((char **)v2 + 1); /*0x447dda*/
    }
    while ( v2 ); /*0x447ddf*/
  }
}
