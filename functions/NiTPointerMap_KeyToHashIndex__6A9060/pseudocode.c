unsigned int __thiscall NiTPointerMap_KeyToHashIndex(_DWORD *this, unsigned int a2)
{
  return a2 % *(this + 1);
}
