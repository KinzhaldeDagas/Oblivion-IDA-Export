// BSTreeNode leaf child getter: returns leaf LOD node pointer from +0x39 array.
int __thiscall sub_563CC0(_DWORD *this, unsigned __int16 a2)
{
  const void *v3; // ecx

  v3 = (const void *)*(this + 0x37); /*0x563cc3*/
  if ( v3 && *(this + 0x39) && a2 < BSTreeModel_GetNumLeafLODLevels(v3) ) /*0x563ce3*/
    return *(_DWORD *)(*(this + 0x39) + 4 * a2); /*0x563cee*/
  else
    return 0; /*0x563cf5*/
}
