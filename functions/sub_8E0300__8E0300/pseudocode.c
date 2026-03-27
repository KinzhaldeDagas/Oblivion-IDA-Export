_WORD *__thiscall sub_8E0300(_WORD *this, int a2)
{
  void (__stdcall *v3)(LPCRITICAL_SECTION, DWORD); // ebx

  sub_8D3330(this, 0);
  *(_DWORD *)this = &off_A9A5A8;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xB) = &off_A9A588;
  *(this + 0x19) = 1;
  *(this + 0x1F) = 1;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0xE) = &off_A9A598;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  v3 = (void (__stdcall *)(LPCRITICAL_SECTION, DWORD))InitializeCriticalSectionAndSpinCount;
  *((_DWORD *)this + 0x14) = 0x80000000;
  v3((LPCRITICAL_SECTION)(this + 0x2A), 0xFA0u);
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1D) = 0x80000000;
  v3((LPCRITICAL_SECTION)(this + 0x3C), 0xFA0u);
  sub_926390((LPCRITICAL_SECTION)this + 6);
  v3((LPCRITICAL_SECTION)this + 0xA, 0xFA0u);
  v3((LPCRITICAL_SECTION)this + 0xC, 0x186A0u);
  v3((LPCRITICAL_SECTION)this + 0xE, 0xFA0u);
  *((_DWORD *)this + 0xA) = a2;
  *((_DWORD *)this + 0x24) = 0;
  *((_BYTE *)this + 0x44) = 0;
  *((_DWORD *)this + 0xD) = this;
  *((_DWORD *)this + 0x10) = this + 0xE0;
  *(_DWORD *)(*(_DWORD *)(a2 + 0x68) + 0x24) = this + 0x16;
  *(_DWORD *)(*(_DWORD *)(a2 + 0x68) + 0x44) = this + 0x1C;
  *(_DWORD *)(*(_DWORD *)(a2 + 0x68) + 0x28) = this + 0x1C;
  *(_DWORD *)(*(_DWORD *)(a2 + 0x68) + 0x48) = this + 0x1C;
  return this;
}
