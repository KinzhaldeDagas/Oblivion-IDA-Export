//
//
// [2026-10-03 frond completion] Verified scene application: alpha255 sets NiAVObject WORD flags+18 bit0; visible alpha clears bit0 and writes NiAlphaProperty byte+1A via GetProperty(type0) 0x707530. Fallout 0x8246DDF8 corroborates semantics but has different object flag offsets. Each plugin frond alpha property is separately allocated by 0x561030; runtime fade updates are per shape.
char __thiscall OB_BSTreeNode_SetLeafLodAlphaThreshold_010201A0(
        void *treeNode,
        int leafLodIndex,
        unsigned __int8 alphaTestReference)
{
  int v3; // eax
  NiProperty *NiPropertyByID; // eax

  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)treeNode + 0xB0))(treeNode, leafLodIndex); /*0x563ded*/
  if ( !v3 ) /*0x563df1*/
    return 0; /*0x563df3*/
  if ( alphaTestReference == 0xFF ) /*0x563e00*/
  {
    *(_WORD *)(v3 + 0x18) |= 1u; /*0x563e02*/
    return 1; /*0x563e07*/
  }
  else
  {
    *(_WORD *)(v3 + 0x18) &= ~1u; /*0x563e0d*/
    NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v3, 0); /*0x563e17*/
    if ( NiPropertyByID ) /*0x563e1e*/
      BYTE2(NiPropertyByID[1].vtbl) = alphaTestReference;// Runtime leaf alpha reference accepts 0..254 and is applied at draw time; 255 hides the LOD shape instead of becoming ALPHAREF. /*0x563e20*/
    return 1; /*0x563e23*/
  }
}
