// BSTreeNode leaf group visibility toggle. Shows child 1/Leaves when flag is true; hides it when false.
char __thiscall sub_563D30(void *this, char a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xA4))(this); /*0x563d38*/
  if ( !v2 ) /*0x563d3c*/
    return 0; /*0x563d3e*/
  if ( a2 ) /*0x563d48*/
    *(_WORD *)(v2 + 0x18) &= ~1u; /*0x563d54*/
  else
    *(_WORD *)(v2 + 0x18) |= 1u; /*0x563d4a*/
  return 1; /*0x563d40*/
}
