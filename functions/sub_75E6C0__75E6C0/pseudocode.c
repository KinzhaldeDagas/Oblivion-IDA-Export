void __thiscall sub_75E6C0(int *this, int a2)
{
  int v3; // ecx
  char v4; // al

  nullsub_returnvVoid_1arg(a2);
  v3 = *(this + 0xC);
  if ( v3 )
  {
    v4 = NiTMap_GetAt((_DWORD *)(v3 + 0xD4), *(this + 0x10), &a2);
    *(this + 0x11) = v4 != 0 ? a2 : 0;
  }
}
