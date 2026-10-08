int __thiscall Actor_MagicCaster_SetCastingTarget(_DWORD *this, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 0xFFFFFFFF); /*0x5e5460*/
  if ( v2 ) /*0x5e5465*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x2B4))(v2, a2); /*0x5e546f*/
  return result; /*0x5e5471*/
}
