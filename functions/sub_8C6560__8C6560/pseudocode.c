int __thiscall sub_8C6560(void *this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // esi
  char v6; // [esp+Bh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v6);
  result = 0;
  if ( v3 )
  {
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x68))(this);
    if ( *(_DWORD *)(a2 + 4) < 4u )
      v5 -= 0x10;
    (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))(
      *(_DWORD *)(a2 + 0x21C),
      v3,
      v5,
      0,
      0);
    return v5;
  }
  return result;
}
