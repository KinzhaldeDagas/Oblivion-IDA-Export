int __thiscall Actor_MagicCaster_GetActiveMagicItem(int *this)
{
  int v1; // ecx

  v1 = *(this + 0xFFFFFFFF);
  if ( v1 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x2A8))(v1);
  else
    return 0;
}
