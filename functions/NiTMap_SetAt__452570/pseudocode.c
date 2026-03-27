int __thiscall NiTMap_SetAt(_DWORD *this, int a2, int a3)
{
  if ( *(_DWORD *)(*(this + 2) + 4 * (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2)) )
    return NiTMap_SetAt_::BucketLoop(a2, a3);
  else
    return NiTMap_SetAt_::InsertNode(a2, a3);
}
