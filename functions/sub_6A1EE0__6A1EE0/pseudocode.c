char __thiscall sub_6A1EE0(void *this, int a2)
{
  int *v2; // esi
  int v3; // edi

  v2 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this); /*0x6a1eea*/
  if ( v2 ) /*0x6a1eee*/
  {
    while ( v2[1] || *v2 ) /*0x6a1efd*/
    {
      v3 = *v2; /*0x6a1eff*/
      if ( *v2 && EffectItem_IsHostile(*(_DWORD **)(v3 + 0xC)) && *(_DWORD *)(v3 + 0x24) == a2 ) /*0x6a1f14*/
        return 1; /*0x6a1f27*/
      v2 = (int *)v2[1]; /*0x6a1f16*/
      if ( !v2 ) /*0x6a1f1b*/
        return 0; /*0x6a1f1b*/
    }
  }
  return 0; /*0x6a1f1d*/
}
