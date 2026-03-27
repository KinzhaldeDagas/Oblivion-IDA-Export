char __thiscall sub_6A1EE0(void *this, int a2)
{
  int *v2; // esi
  int v3; // edi

  v2 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  if ( v2 )
  {
    while ( v2[1] || *v2 )
    {
      v3 = *v2;
      if ( *v2 && EffectItem_IsHostile(*(_DWORD **)(v3 + 0xC)) && *(_DWORD *)(v3 + 0x24) == a2 )
        return 1;
      v2 = (int *)v2[1];
      if ( !v2 )
        return 0;
    }
  }
  return 0;
}
