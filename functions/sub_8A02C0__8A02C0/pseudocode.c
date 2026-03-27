int __thiscall sub_8A02C0(void *this, int a2)
{
  int v3; // eax
  int *v4; // esi
  int v5; // edx
  char v7; // [esp+Bh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v7);
  if ( v3 )
    v4 = (int *)(v3 - 4);
  else
    v4 = 0;
  v5 = *v4;
  if ( *(_DWORD *)(a2 + 4) >= 6u )
    (*(void (__thiscall **)(int *, int))(v5 + 4))(v4, a2);
  else
    (*(void (__thiscall **)(int *, int, _DWORD))(v5 + 0xC))(v4, a2, 0);
  *(_DWORD *)(v4[1] + 8) = 0;
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x68))(this);
}
