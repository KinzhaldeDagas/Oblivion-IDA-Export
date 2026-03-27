char __thiscall sub_564A20(NiNode **this, BoltShaderProperty *a2)
{
  NiNode *v3; // ecx
  BSShaderProperty *v4; // edi
  NiProperty *NiPropertyByID; // eax

  v3 = *(this + 0x3A);
  if ( v3 )
  {
    v4 = (BSShaderProperty *)a2;
    if ( a2 )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(v3, 6);
      if ( !NiPropertyByID )
      {
LABEL_6:
        sub_405680(*(this + 0x3A), v4);
        return 1;
      }
      if ( NiPropertyByID != (NiProperty *)v4 )
      {
        sub_708560(*(this + 0x3A), (volatile LONG **)&a2, 6);
        sub_7016A0((NiD3DVertexShader *)&a2);
        goto LABEL_6;
      }
    }
  }
  return 0;
}
