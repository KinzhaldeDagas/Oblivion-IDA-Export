void __thiscall sub_43DD80(volatile LONG *this)
{
  int v2; // eax
  void *v3; // edi

  v2 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 8) + 0x170))(*((_DWORD *)this + 8)); /*0x43dd8f*/
  if ( v2 ) /*0x43dd93*/
    v3 = (void *)(v2 + 0xAC); /*0x43dd95*/
  else
    v3 = 0; /*0x43dd9d*/
  sub_43D000((int *)MEMORY[0xB33A1C], v3, BYTE2(*((_DWORD *)this + 4)), this, *((_DWORD *)this + 8), 1, 0); /*0x43ddc0*/
  sub_43CDE0((int *)MEMORY[0xB33A1C], v3, BYTE2(*((_DWORD *)this + 4)), this, *((TESObjectREFR **)this + 8)); /*0x43dde2*/
  sub_5E4DD0(*((Actor **)this + 8)); /*0x43ddea*/
  sub_43C9B0((_DWORD **)this); /*0x43ddf3*/
}
