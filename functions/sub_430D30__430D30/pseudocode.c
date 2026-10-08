char __thiscall sub_430D30(char *this, int a2, int a3)
{
  char *v4; // eax
  char v5; // dl

  if ( *((_DWORD *)this + 1) ) /*0x430d30*/
    return 0; /*0x430d36*/
  v4 = this + 8; /*0x430d40*/
  do /*0x430d4f*/
  {
    v5 = *v4; /*0x430d45*/
    v4[a2 - (_DWORD)(this + 8)] = *v4; /*0x430d47*/
    ++v4; /*0x430d4a*/
  }
  while ( v5 ); /*0x430d4f*/
  ++*((_DWORD *)this + 1); /*0x430d51*/
  return 1; /*0x430d38*/
}
