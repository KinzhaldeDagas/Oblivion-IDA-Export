int __thiscall sub_8C36E0(_DWORD *this, signed int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD *, int *))(*this + 0x74))(this, &v5); /*0x8c36fb*/
  result = sub_8B03A0(this, a2); /*0x8c36fd*/
  if ( v3 ) /*0x8c3704*/
  {
    sub_8E8270(a2, *(_DWORD *)(v3 + 8)); /*0x8c370b*/
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x64))(this, v5); /*0x8c371f*/
  }
  return result; /*0x8c3721*/
}
