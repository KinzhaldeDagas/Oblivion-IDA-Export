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

  (*(void (__thiscall **)(_DWORD *, int *))(*this + 0x74))(this, &v12); /*0x8c5874*/
  v3 = (_DWORD *)a2; /*0x8c5876*/
  v4 = *(this + 2); /*0x8c587a*/
  sub_8A2610(this, a2); /*0x8c5880*/
  v5 = v3[0x88]; /*0x8c5888*/
  v11 = *(float *)(v4 + 0x30); /*0x8c588e*/
  v10 = v5; /*0x8c58a0*/
  v6 = *(void (__cdecl **)(int, float *, int, signed int *, int))(v5 + 8); /*0x8c58a1*/
  a2 = 4; /*0x8c58a4*/
  v6(v10, &v11, 4, &a2, 1); /*0x8c58ac*/
  v9 = v3[0x88]; /*0x8c58c1*/
  v7 = *(void (__cdecl **)(int, int, int, signed int *, int))(v9 + 8); /*0x8c58c2*/
  a2 = 0x10; /*0x8c58c5*/
  v7(v9, v4 + 0x20, 0x10, &a2, 1); /*0x8c58cd*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v3 + 0x2C))(v3, *(_DWORD *)(v4 + 0x10)); /*0x8c58dd*/
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x64))(this, v12); /*0x8c58ed*/
}
