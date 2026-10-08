int __thiscall sub_459080(_DWORD *this, void (__thiscall *a2)(NiRefObject *this, bool freeThis), int a3)
{
  int v4; // ebp
  unsigned __int8 *bufferCursor; // eax
  unsigned __int16 v6; // bx
  int result; // eax

  v4 = *(this + 5); /*0x459085*/
  *(this + 5) = a3; /*0x45908d*/
  bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x459096*/
  v6 = *(_WORD *)bufferCursor; /*0x459099*/
  g_TESSaveLoadGame->bufferCursor = bufferCursor + 2; /*0x45909f*/
  sub_4E2F70(a2, 0); /*0x4590a8*/
  result = v6; /*0x4590ad*/
  if ( v6 + a3 + 2 != *(this + 5) ) /*0x4590b7*/
    result = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x4590c9*/
               *(_DWORD *)&MEMORY[0xB33E90][0xF00],
               "LoadAttachedAnimations() call did not properly empty buffer.");
  *(this + 5) = v4; /*0x4590cc*/
  return result; /*0x4590cb*/
}
