char __thiscall sub_6285B0(void *this, int a2, int a3)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x3B0))(this, a3); /*0x6285bd*/
  if ( v3 ) /*0x6285c3*/
    return *(_BYTE *)(v3 + 8); /*0x6285c5*/
  else
    return 0; /*0x6285cb*/
}
