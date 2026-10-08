int __thiscall Actor_MagicCaster_SetActiveMagicItem(_DWORD *this, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 0xFFFFFFFF); /*0x5e5420*/
  if ( v2 ) /*0x5e5425*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x2AC))(v2, a2); /*0x5e542f*/
  return result; /*0x5e5431*/
}
