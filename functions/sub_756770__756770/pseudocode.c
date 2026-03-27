bool __thiscall sub_756770(int *this, int a2)
{
  int v2; // edi

  v2 = a2;
  return sub_75E600(this, a2) && NiTMap_GetAt((_DWORD *)(v2 + 0xD4), *(this + 0x10), &a2) && a2;
}
