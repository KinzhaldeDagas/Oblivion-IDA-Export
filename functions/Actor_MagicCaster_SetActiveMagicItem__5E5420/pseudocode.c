int __thiscall Actor_MagicCaster_SetActiveMagicItem(_DWORD *this, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 0xFFFFFFFF);
  if ( v2 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x2AC))(v2, a2);
  return result;
}
