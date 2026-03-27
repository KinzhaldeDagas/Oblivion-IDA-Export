int __thiscall sub_51C7B0(int this)
{
  void (__thiscall ***v2)(_DWORD); // ecx
  void (__thiscall *v3)(_DWORD); // edx
  void (__thiscall *v4)(int, int); // edx
  int (__thiscall *v5)(int, int); // edx
  int result; // eax

  *(float *)(this + 0x10C) = 0.0;
  v2 = (void (__thiscall ***)(_DWORD))(this + 0x11C);
  *(float *)(this + 0x110) = *(float *)&dword_A46C30;
  *(_BYTE *)(this + 0x104) = 0;
  *(_DWORD *)(this + 0x100) = 0;
  *(_DWORD *)(this + 0x118) = 0;
  *(float *)(this + 0x114) = 1.0;
  v3 = **v2;
  *(_WORD *)(this + 0x108) = 3;
  *(_BYTE *)(this + 0x105) = 0x32;
  *(_BYTE *)(this + 0x106) = 0x32;
  *(_BYTE *)(this + 0x107) = 0x32;
  *(_BYTE *)(this + 0x10A) = 0x20;
  v3(v2);
  (**(void (__thiscall ***)(int))(this + 0x134))(this + 0x134);
  j_TESForm_InitializeComponents((TESForm *)this);
  v4 = *(void (__thiscall **)(int, int))(*(_DWORD *)(this + 0x24) + 0x50);
  *(_DWORD *)(this + 0x28) |= 0x40u;
  v4(this + 0x24, 0x10);
  v5 = *(int (__thiscall **)(int, int))(*(_DWORD *)(this + 0x24) + 0x50);
  *(_DWORD *)(this + 0x28) |= 0x200u;
  result = v5(this + 0x24, 0x10);
  *(_DWORD *)(this + 0x84) = 0x32;
  return result;
}
