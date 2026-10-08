int __thiscall sub_4943B0(void *this, int a2)
{
  int result; // eax

  MEMORY[0xB33E90][0xEF5] = 1; /*0x4943b9*/
  result = (*(int (__thiscall **)(void *, int, const char *, int))(*(_DWORD *)this + 0x24))(this, a2, "Confirm", 0x2034); /*0x4943cb*/
  MEMORY[0xB33E90][0xEF5] = 0; /*0x4943cd*/
  return result; /*0x4943d4*/
}
