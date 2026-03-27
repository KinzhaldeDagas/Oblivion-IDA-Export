int __thiscall sub_8A2610(_DWORD *this, signed int a2)
{
  int v4; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 0x74))(this, &v4) = *(this + 4);
  sub_89D7B0(this, a2);
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x64))(this, v4);
}
