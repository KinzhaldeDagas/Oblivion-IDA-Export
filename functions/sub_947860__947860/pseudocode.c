char *sub_947860()
{
  int v0; // eax
  char *v1; // eax

  v0 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x24, 0x32); /*0x94786c*/
  *(_WORD *)(v0 + 4) = 0x24; /*0x947871*/
  v1 = sub_9477C0((char *)v0); /*0x947877*/
  if ( v1 ) /*0x94787e*/
    return v1 + 8; /*0x947880*/
  else
    return 0; /*0x947884*/
}
