bool __thiscall sub_482050(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2 - *(this + 1);
  v4 = a3 - *(this + 2);
  (*(void (__stdcall **)(int, int))(*this + 0x14))(v3, v4);
  return v3 || v4;
}
