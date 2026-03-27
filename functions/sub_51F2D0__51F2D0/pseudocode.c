void __thiscall sub_51F2D0(int this)
{
  TESTexture_destr((_DWORD *)(this + 0x10));
  FormHeapFree(*(_DWORD *)(this + 8));
  *(_DWORD *)(this + 8) = 0;
  *(_WORD *)(this + 0xE) = 0;
  *(_WORD *)(this + 0xC) = 0;
  FormHeapFree(*(_DWORD *)this);
  *(_DWORD *)this = 0;
  *(_WORD *)(this + 6) = 0;
  *(_WORD *)(this + 4) = 0;
}
