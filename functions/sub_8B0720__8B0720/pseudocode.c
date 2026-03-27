int __thiscall sub_8B0720(_DWORD *this, int a2, _DWORD **a3)
{
  char v5; // [esp+7h] [ebp-1h] BYREF

  (*(void (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v5);
  return sub_8B02B0(this, a2, a3);
}
