_WORD *__thiscall sub_8E0300(_WORD *this, int a2)
{
  void (__stdcall *v3)(LPCRITICAL_SECTION, DWORD); // ebx

  sub_8D3330(this, 0); /*0x8e0309*/
  *(_DWORD *)this = &off_A9A5A8; /*0x8e030e*/
  *((_DWORD *)this + 0xD) = 0; /*0x8e0314*/
  *((_DWORD *)this + 0xB) = &off_A9A588; /*0x8e0317*/
  *(this + 0x19) = 1; /*0x8e0326*/
  *(this + 0x1F) = 1; /*0x8e032d*/
  *((_DWORD *)this + 0x10) = 0; /*0x8e0331*/
  *((_DWORD *)this + 0xE) = &off_A9A598; /*0x8e0334*/
  *((_DWORD *)this + 0x12) = 0; /*0x8e0342*/
  *((_DWORD *)this + 0x13) = 0; /*0x8e0345*/
  v3 = (void (__stdcall *)(LPCRITICAL_SECTION, DWORD))InitializeCriticalSectionAndSpinCount; /*0x8e0348*/
  *((_DWORD *)this + 0x14) = 0x80000000; /*0x8e034f*/
  v3((LPCRITICAL_SECTION)(this + 0x2A), 0xFA0u); /*0x8e0356*/
  *((_DWORD *)this + 0x1B) = 0; /*0x8e0363*/
  *((_DWORD *)this + 0x1C) = 0; /*0x8e0366*/
  *((_DWORD *)this + 0x1D) = 0x80000000; /*0x8e0369*/
  v3((LPCRITICAL_SECTION)(this + 0x3C), 0xFA0u); /*0x8e0370*/
  sub_926390((LPCRITICAL_SECTION)this + 6); /*0x8e0378*/
  v3((LPCRITICAL_SECTION)this + 0xA, 0xFA0u); /*0x8e0389*/
  v3((LPCRITICAL_SECTION)this + 0xC, 0x186A0u); /*0x8e0397*/
  v3((LPCRITICAL_SECTION)this + 0xE, 0xFA0u); /*0x8e03a5*/
  *((_DWORD *)this + 0xA) = a2; /*0x8e03ab*/
  *((_DWORD *)this + 0x24) = 0; /*0x8e03ae*/
  *((_BYTE *)this + 0x44) = 0; /*0x8e03b8*/
  *((_DWORD *)this + 0xD) = this; /*0x8e03bc*/
  *((_DWORD *)this + 0x10) = this + 0xE0; /*0x8e03c5*/
  *(_DWORD *)(*(_DWORD *)(a2 + 0x68) + 0x24) = this + 0x16; /*0x8e03cb*/
  *(_DWORD *)(*(_DWORD *)(a2 + 0x68) + 0x44) = this + 0x1C; /*0x8e03d1*/
  *(_DWORD *)(*(_DWORD *)(a2 + 0x68) + 0x28) = this + 0x1C; /*0x8e03d7*/
  *(_DWORD *)(*(_DWORD *)(a2 + 0x68) + 0x48) = this + 0x1C; /*0x8e03dd*/
  return this; /*0x8e03e0*/
}
