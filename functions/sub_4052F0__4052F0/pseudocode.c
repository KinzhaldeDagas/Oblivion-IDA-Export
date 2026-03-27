void __thiscall sub_4052F0(int this)
{
  CHAR Text[512]; // [esp+0h] [ebp-204h] BYREF

  if ( !CreateWindowAndInitialize(*(HWND *)(this + 8), *(HINSTANCE *)(this + 0xC)) )
  {
    _sprintf(Text, "Failed to initialize renderer.\n%s", byte_B34FC8);
    MessageBoxA(0, Text, "Oblivion", 0);
    ExitProcess(0);
  }
}
