int __thiscall sub_8B8EF0(int *this, signed int a2)
{
  int v3; // eax
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v3 = (*(int (__thiscall **)(int *, int *))(*this + 0x74))(this, &v5); /*0x8b8f08*/
  if ( v3 ) /*0x8b8f0c*/
  {
    *(_OWORD *)(v3 + 0x30) = *((_OWORD *)this + 3); /*0x8b8f12*/
    *(_OWORD *)(v3 + 0x40) = *((_OWORD *)this + 2); /*0x8b8f1a*/
  }
  sub_8A5120((NodeVoid *)this, a2); /*0x8b8f24*/
  return (*(int (__thiscall **)(int *, int))(*this + 0x64))(this, v5); /*0x8b8f37*/
}
