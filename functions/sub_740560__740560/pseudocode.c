int __thiscall sub_740560(NiTriBasedGeomData *this, _DWORD *a2)
{
  sub_73F950(this, a2);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x2C))(a2, *((_DWORD *)this + 0x17));
}
