int __thiscall sub_4943B0(void *this, int a2)
{
  int result; // eax

  byte_B34D85 = 1;
  result = (*(int (__thiscall **)(void *, int, const char *, int))(*(_DWORD *)this + 0x24))(this, a2, "Confirm", 0x2034);
  byte_B34D85 = 0;
  return result;
}
