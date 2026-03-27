int __thiscall sub_8C5860(_DWORD *this, signed int a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // eax
  void (__cdecl *v6)(int, float *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, int, int, signed int *, int); // eax
  int v9; // [esp-28h] [ebp-3Ch]
  int v10; // [esp-14h] [ebp-28h]
  float v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *, int *))(*this + 0x74))(this, &v12);
  v3 = (_DWORD *)a2;
  v4 = *(this + 2);
  sub_8A2610(this, a2);
  v5 = v3[0x88];
  v11 = *(float *)(v4 + 0x30);
  v10 = v5;
  v6 = *(void (__cdecl **)(int, float *, int, signed int *, int))(v5 + 8);
  a2 = 4;
  v6(v10, &v11, 4, &a2, 1);
  v9 = v3[0x88];
  v7 = *(void (__cdecl **)(int, int, int, signed int *, int))(v9 + 8);
  a2 = 0x10;
  v7(v9, v4 + 0x20, 0x10, &a2, 1);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v3 + 0x2C))(v3, *(_DWORD *)(v4 + 0x10));
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x64))(this, v12);
}
