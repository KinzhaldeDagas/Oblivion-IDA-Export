int __thiscall Actor_MagicTarget_GetActiveEffectList(int *this)
{
  int v1; // ecx

  v1 = *(this + 0xFFFFFFFC); /*0x5e5220*/
  if ( v1 ) /*0x5e5225*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x298))(v1); /*0x5e522f*/
  else
    return 0; /*0x5e5231*/
}
