int __thiscall ReadFile__(int (__cdecl **this)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int a2, int a3)
{
  int (__cdecl *v3)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // ecx
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)this;
  v3 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(this + 1);
  v6 = 1;
  return v3(this, a2, a3, &v6, 1);
}
