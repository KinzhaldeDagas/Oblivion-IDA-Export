// Pass227: Clears NiScreenSpaceCamera +0x134 texture array and releases live NiScreenTexture pointers.
int __thiscall sub_739670(_WORD *this)
{
  int result; // eax
  unsigned __int16 i; // bx
  int v4; // edx
  int v5; // esi
  _DWORD *v6; // ebp

  result = 0; /*0x739697*/
  for ( i = 0; i < *(this + 5); ++i ) /*0x73969b*/
  {
    v4 = *((_DWORD *)this + 1); /*0x7396a5*/
    v5 = *(_DWORD *)(v4 + 4 * i); /*0x7396ab*/
    v6 = (_DWORD *)(v4 + 4 * i); /*0x7396b0*/
    if ( v5 ) /*0x7396b7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7396bd*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7396d3*/
      *v6 = 0; /*0x7396d5*/
      result = 0; /*0x7396dc*/
    }
  }
  *(this + 6) = 0; /*0x7396ef*/
  *(this + 5) = 0; /*0x7396f3*/
  return result; /*0x7396f7*/
}
