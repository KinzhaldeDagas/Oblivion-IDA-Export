int __thiscall sub_8C6560(void *this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // esi
  char v6; // [esp+Bh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v6); /*0x8c6573*/
  result = 0; /*0x8c6575*/
  if ( v3 ) /*0x8c6579*/
  {
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x68))(this); /*0x8c6584*/
    if ( *(_DWORD *)(a2 + 4) < 4u ) /*0x8c658e*/
      v5 -= 0x10; /*0x8c6590*/
    (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))( /*0x8c65a3*/
      *(_DWORD *)(a2 + 0x21C),
      v3,
      v5,
      0,
      0);
    return v5; /*0x8c65a8*/
  }
  return result; /*0x8c65aa*/
}
