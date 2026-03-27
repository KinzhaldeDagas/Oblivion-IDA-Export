int __thiscall sub_701640(void *this)
{
  int v1; // eax
  int v3; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x7C))(this);
  if ( v1 && (v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 0x70))(v1, 0)) != 0 )
    return *(_DWORD *)(v3 + 8);
  else
    return 0;
}
