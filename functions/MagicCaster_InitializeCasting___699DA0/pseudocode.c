int __thiscall MagicCaster_InitializeCasting___(char *this)
{
  int v2; // eax
  char *v3; // eax
  char v4; // bl
  int v5; // eax

  v2 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x20))(this); /*0x699daa*/
  if ( v2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 0x190))(v2) ) /*0x699dba*/
    v3 = this + 0xFFFFFFA4; /*0x699dc0*/
  else
    v3 = 0; /*0x699dc5*/
  v4 = 0; /*0x699dc7*/
  if ( !v3 ) /*0x699dcb*/
    return MagicCaster_InitializeCasting____::GetMagicItem(0, this); /*0x699dcb*/
  v5 = (*(int (__thiscall **)(char *))(*((_DWORD *)v3 + 0x17) + 0x24))(v3 + 0x5C); /*0x699dd6*/
  if ( v5 ) /*0x699dda*/
  {
    if ( *(_WORD *)(v5 + 0xB8) ) /*0x699ddc*/
    {
      v4 = 1; /*0x699dec*/
      NiTObjectArray_ClearAndRelease((void *)(v5 + 0xAC)); /*0x699dee*/
    }
  }
  return MagicCaster_InitializeCasting____::CleanupCastingVFX(this, v4);
}
