int __thiscall sub_459370(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // ebp
  unsigned __int8 *bufferCursor; // eax
  unsigned __int16 v6; // bx
  int result; // eax

  v4 = *(this + 5); /*0x459375*/
  *(this + 5) = a3; /*0x45937d*/
  bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x459386*/
  v6 = *(_WORD *)bufferCursor; /*0x459389*/
  g_TESSaveLoadGame->bufferCursor = bufferCursor + 2; /*0x45938f*/
  result = sub_4E31E0(a2, a3, v6); /*0x4593a0*/
  if ( v6 + a3 + 2 != *(this + 5) ) /*0x4593af*/
    result = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x4593c1*/
               *(_DWORD *)&MEMORY[0xB33E90][0xF00],
               "LoadHavokData() call did not properly empty buffer.");
  *(this + 5) = v4; /*0x4593c4*/
  return result; /*0x4593c3*/
}
