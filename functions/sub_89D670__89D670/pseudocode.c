int __thiscall sub_89D670(void *this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // esi
  char v6; // [esp+Bh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v6); /*0x89d683*/
  result = 0; /*0x89d685*/
  if ( v3 ) /*0x89d689*/
  {
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x68))(this); /*0x89d696*/
    (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))( /*0x89d6aa*/
      *(_DWORD *)(a2 + 0x21C),
      v3,
      v5,
      0,
      0);
    return v5; /*0x89d6af*/
  }
  return result; /*0x89d6b1*/
}
