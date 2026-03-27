int __thiscall Actor_MagicCaster_GetCastingTarget(int *this)
{
  int v1; // ecx

  v1 = *(this + 0xFFFFFFFF);
  if ( v1 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x2B0))(v1);
  else
    return 0;
}
