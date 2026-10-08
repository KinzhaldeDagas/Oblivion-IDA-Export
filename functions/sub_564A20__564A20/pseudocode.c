char __thiscall sub_564A20(NiNode **this, BSShaderProperty *a2)
{
  NiNode *v3; // ecx
  BSShaderProperty *v4; // edi
  NiProperty *NiPropertyByID; // eax

  v3 = *(this + 0x3A); /*0x564a23*/
  if ( v3 ) /*0x564a2c*/
  {
    v4 = a2; /*0x564a2e*/
    if ( a2 ) /*0x564a34*/
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(v3, 6); /*0x564a38*/
      if ( !NiPropertyByID ) /*0x564a3f*/
      {
LABEL_6:
        sub_405680(*(this + 0x3A), v4); /*0x564a60*/
        return 1; /*0x564a70*/
      }
      if ( NiPropertyByID != (NiProperty *)v4 ) /*0x564a43*/
      {
        sub_708560((int ***)*(this + 0x3A), (volatile LONG **)&a2, 6); /*0x564a52*/
        NiPointerSlot_Release((NiD3DVertexShader *)&a2); /*0x564a5b*/
        goto LABEL_6; /*0x564a5b*/
      }
    }
  }
  return 0; /*0x564a6c*/
}
