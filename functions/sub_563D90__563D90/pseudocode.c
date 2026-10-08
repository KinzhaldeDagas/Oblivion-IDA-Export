// BSTreeNode per-branch LOD alpha/visibility setter. 0xFF hides selected branch shape; otherwise shows it and writes alpha-property byte.
char __thiscall sub_563D90(void *this, int a2, char a3)
{
  int v3; // eax
  NiProperty *NiPropertyByID; // eax

  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xAC))(this, a2); /*0x563d9d*/
  if ( !v3 ) /*0x563da1*/
    return 0; /*0x563da3*/
  if ( a3 == (char)0xFF ) /*0x563db0*/
  {
    *(_WORD *)(v3 + 0x18) |= 1u; /*0x563db2*/
    return 1; /*0x563db7*/
  }
  else
  {
    *(_WORD *)(v3 + 0x18) &= ~1u; /*0x563dbd*/
    NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v3, 0); /*0x563dc7*/
    if ( NiPropertyByID ) /*0x563dce*/
      BYTE2(NiPropertyByID[1].vtbl) = a3; /*0x563dd0*/
    return 1; /*0x563dd3*/
  }
}
