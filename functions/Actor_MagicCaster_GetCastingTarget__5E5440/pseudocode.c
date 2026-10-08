int __thiscall Actor_MagicCaster_GetCastingTarget(int *this)
{
  int v1; // ecx

  v1 = *(this + 0xFFFFFFFF); /*0x5e5440*/
  if ( v1 ) /*0x5e5445*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x2B0))(v1); /*0x5e544f*/
  else
    return 0; /*0x5e5451*/
}
