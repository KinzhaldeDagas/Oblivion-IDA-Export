void __thiscall sub_4052F0(int this)
{
  CHAR Text[512]; // [esp+0h] [ebp-204h] BYREF

  if ( !CreateWindowAndInitialize(*(HWND *)(this + 8), *(HINSTANCE *)(this + 0xC)) ) /*0x40530e*/
  {
    _sprintf(Text, "Failed to initialize renderer.\n%s", &MEMORY[0xB33E90][0x1138]); /*0x405329*/
    MessageBoxA(0, Text, "Oblivion", 0); /*0x40533f*/
    ExitProcess(0); /*0x405347*/
  }
}
