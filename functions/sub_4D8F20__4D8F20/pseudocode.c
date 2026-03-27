char __thiscall sub_4D8F20(void *this, _WORD *a2)
{
  bool v2; // bl
  int v4; // eax
  bool v5; // zf

  v2 = 0;
  if ( !a2
    || !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this)
    || *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x18 )
  {
    return 0;
  }
  v4 = sub_6FA970(a2);
  if ( v4 )
    v2 = (*(_DWORD *)(v4 + 0xC) & 8) != 0;
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x1C )
    v5 = sub_5368B0((int)a2) == 0;
  else
    v5 = !v2;
  if ( v5 )
    return 0;
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x48))(this, 8);
  return 1;
}
