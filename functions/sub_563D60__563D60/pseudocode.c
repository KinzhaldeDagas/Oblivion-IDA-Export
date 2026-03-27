char __thiscall sub_563D60(void *this, char a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xA8))(this);
  if ( !v2 )
    return 0;
  if ( a2 )
    *(_WORD *)(v2 + 0x18) &= ~1u;
  else
    *(_WORD *)(v2 + 0x18) |= 1u;
  return 1;
}
