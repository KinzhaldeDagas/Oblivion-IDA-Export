unsigned int __thiscall sub_8C53F0(void *this, int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x68))(this);
  v3 = FormHeapAlloc(v2);
  (*(void (__cdecl **)(_DWORD, unsigned int, unsigned int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))(
    *(_DWORD *)(a2 + 0x21C),
    v3,
    v2,
    0,
    0);
  FormHeapFree(v3);
  return v2;
}
