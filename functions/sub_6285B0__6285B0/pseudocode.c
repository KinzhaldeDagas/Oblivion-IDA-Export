char __thiscall sub_6285B0(void *this, int a2, int a3)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x3B0))(this, a3);
  if ( v3 )
    return *(_BYTE *)(v3 + 8);
  else
    return 0;
}
