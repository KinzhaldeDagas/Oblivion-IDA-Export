bool __thiscall sub_482050(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2 - *(this + 1); /*0x48205a*/
  v4 = a3 - *(this + 2); /*0x482062*/
  (*(void (__stdcall **)(int, int))(*this + 0x14))(v3, v4); /*0x482067*/
  return v3 || v4; /*0x482071*/
}
