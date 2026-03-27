int __thiscall sub_4363E0(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // esi
  int (__cdecl *v5)(int, int *, int, signed int *, int); // edx
  int v7; // [esp+4h] [ebp-4h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD *, signed int))(*this + 0x28))(this, a2);
  v4 = *(this + 0x88);
  v7 = v3;
  v5 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v4 + 8);
  a2 = 4;
  return v5(v4, &v7, 4, &a2, 1);
}
