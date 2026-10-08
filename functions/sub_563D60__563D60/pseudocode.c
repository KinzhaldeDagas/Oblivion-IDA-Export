//
// [2026-10-06 directional billboard] Verified: toggles AppCulled on child slot 2, not the shared geometry. Fallout named equivalent 0x8246DD80.
char __thiscall OB_BSTreeNode_SetVisibilityForBillboards_010201A0(void *this, char a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xA8))(this); /*0x563d68*/
  if ( !v2 ) /*0x563d6c*/
    return 0; /*0x563d6e*/
  if ( a2 ) /*0x563d78*/
    *(_WORD *)(v2 + 0x18) &= ~1u; /*0x563d84*/
  else
    *(_WORD *)(v2 + 0x18) |= 1u; /*0x563d7a*/
  return 1; /*0x563d70*/
}
