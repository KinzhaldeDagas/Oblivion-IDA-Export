bool __thiscall sub_6456F0(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 2);
  return v1 && *(_DWORD *)(*(_DWORD *)(4 * *(_DWORD *)(v1 + 0x18) + 0xB152B0) + 4 * *(this + 1)) == 1;
}
