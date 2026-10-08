// BSTreeNode branch group visibility toggle. Shows child 0/Branches when flag is true; hides it when false.
char __thiscall sub_563D00(void *this, char a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xA0))(this); /*0x563d08*/
  if ( !v2 ) /*0x563d0c*/
    return 0; /*0x563d0e*/
  if ( a2 ) /*0x563d18*/
    *(_WORD *)(v2 + 0x18) &= ~1u; /*0x563d24*/
  else
    *(_WORD *)(v2 + 0x18) |= 1u; /*0x563d1a*/
  return 1; /*0x563d10*/
}
