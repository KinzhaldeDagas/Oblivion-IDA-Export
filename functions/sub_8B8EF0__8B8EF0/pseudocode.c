int __thiscall sub_8B8EF0(int *this, signed int a2)
{
  int v3; // eax
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v3 = (*(int (__thiscall **)(int *, int *))(*this + 0x74))(this, &v5);
  if ( v3 )
  {
    *(_OWORD *)(v3 + 0x30) = *((_OWORD *)this + 3);
    *(_OWORD *)(v3 + 0x40) = *((_OWORD *)this + 2);
  }
  sub_8A5120(this, a2);
  return (*(int (__thiscall **)(int *, int))(*this + 0x64))(this, v5);
}
