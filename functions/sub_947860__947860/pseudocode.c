char *sub_947860()
{
  int v0; // eax
  char *v1; // eax

  v0 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x24, 0x32);
  *(_WORD *)(v0 + 4) = 0x24;
  v1 = sub_9477C0((char *)v0);
  if ( v1 )
    return v1 + 8;
  else
    return 0;
}
