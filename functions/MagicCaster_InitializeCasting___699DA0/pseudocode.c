int __thiscall MagicCaster_InitializeCasting___(char *this)
{
  int v2; // eax
  char *v3; // eax
  char v4; // bl
  int v5; // eax

  v2 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x20))(this);
  if ( v2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 0x190))(v2) )
    v3 = this + 0xFFFFFFA4;
  else
    v3 = 0;
  v4 = 0;
  if ( !v3 )
    return MagicCaster_InitializeCasting____::GetMagicItem(0, this);
  v5 = (*(int (__thiscall **)(char *))(*((_DWORD *)v3 + 0x17) + 0x24))(v3 + 0x5C);
  if ( v5 )
  {
    if ( *(_WORD *)(v5 + 0xB8) )
    {
      v4 = 1;
      sub_477EF0((_WORD *)(v5 + 0xAC));
    }
  }
  return MagicCaster_InitializeCasting____::CleanupCastingVFX((int)this, v4);
}
