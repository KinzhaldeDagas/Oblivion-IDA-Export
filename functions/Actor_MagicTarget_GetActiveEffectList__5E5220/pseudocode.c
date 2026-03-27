int __thiscall Actor_MagicTarget_GetActiveEffectList(int *this)
{
  int v1; // ecx

  v1 = *(this + 0xFFFFFFFC);
  if ( v1 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x298))(v1);
  else
    return 0;
}
