int __thiscall sub_71FD00(int this, _WORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int result; // eax

  *a2 = *(_WORD *)(this + 0x40); /*0x71fd08*/
  *a3 = 0; /*0x71fd0f*/
  *a4 = *(_DWORD *)(this + 0x48); /*0x71fd1c*/
  result = *(unsigned __int16 *)(this + 0x40); /*0x71fd1e*/
  *a5 = 3 * result; /*0x71fd29*/
  return result; /*0x71fd2b*/
}
