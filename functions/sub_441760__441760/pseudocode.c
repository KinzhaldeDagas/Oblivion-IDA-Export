// ODismemberment: TES cached-model lookup used by BSTempEffectParticle when useTESCachedInstance is true.
int __thiscall TES_GetCachedModelClone(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edx
  _DWORD *v4; // ecx
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // eax
  int i; // ecx

  v2 = this + 0x28; /*0x441760*/
  v3 = 0; /*0x441766*/
  if ( this == (_DWORD *)0xFFFFFF60 ) /*0x44176b*/
    return 0; /*0x44176b*/
  while ( !v3 ) /*0x441773*/
  {
    v4 = (_DWORD *)v2[1]; /*0x441775*/
    if ( !v4 && !*v2 ) /*0x44177e*/
      return 0; /*0x44177e*/
    v5 = (_DWORD *)*v2; /*0x441780*/
    if ( v5 ) /*0x441784*/
    {
      if ( *v5 == a2 ) /*0x441788*/
        v3 = v5; /*0x44178a*/
    }
    v2 = v4; /*0x44178c*/
    if ( !v4 ) /*0x441790*/
    {
      if ( !v3 ) /*0x441794*/
        return 0; /*0x441794*/
      break; /*0x441794*/
    }
  }
  v6 = v3[1]; /*0x441796*/
  if ( !v6 ) /*0x44179b*/
    return 0; /*0x4417b8*/
  v7 = 0; /*0x44179d*/
  for ( i = v3[1]; !*(_DWORD *)i || *(_DWORD *)(*(_DWORD *)i + 4) != 1; i += 4 ) /*0x44179f*/
  {
    if ( ++v7 >= 5 ) /*0x4417b6*/
      return 0; /*0x4417b6*/
  }
  return *(_DWORD *)(v6 + 4 * v7); /*0x4417ba*/
}
