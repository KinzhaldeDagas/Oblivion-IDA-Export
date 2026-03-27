int __thiscall sub_8C36E0(_DWORD *this, signed int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD *, int *))(*this + 0x74))(this, &v5);
  result = sub_8B03A0(this, a2);
  if ( v3 )
  {
    sub_8E8270(a2, *(_DWORD *)(v3 + 8));
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x64))(this, v5);
  }
  return result;
}
