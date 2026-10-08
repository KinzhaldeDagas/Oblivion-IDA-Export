char __thiscall sub_7F4C90(BoltShader *this, NiNode *a2)
{
  NiProperty *NiPropertyByID; // eax
  BSShaderProperty *v4; // esi
  NiRTTI *v5; // eax
  BoltShaderProperty *v6; // eax

  NiPropertyByID = NiNode_GetNiPropertyByID(a2, 4); /*0x7f4cbd*/
  v4 = 0; /*0x7f4cc2*/
  if ( NiPropertyByID /*0x7f4cd3*/
    && (v5 = (NiRTTI *)(*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 1))(NiPropertyByID)) != 0 )
  {
    while ( v5 != &stru_B468EC ) /*0x7f4cda*/
    {
      v5 = v5->parent; /*0x7f4cdc*/
      if ( !v5 ) /*0x7f4ce1*/
        goto LABEL_5; /*0x7f4ce1*/
    }
  }
  else
  {
LABEL_5:
    v6 = (BoltShaderProperty *)FormHeapAlloc(0x19Cu); /*0x7f4ce3*/
    if ( v6 ) /*0x7f4cfa*/
      v4 = (BSShaderProperty *)BoltShaderProperty::BoltShaderProperty(v6); /*0x7f4d03*/
    sub_405680(a2, v4); /*0x7f4d10*/
    if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, NiNode *))v4->vtbl + 0x16))(v4, a2) ) /*0x7f4d1d*/
    {
      sub_4A1220((int ***)a2, (int)v4); /*0x7f4d26*/
      return 0; /*0x7f4d3f*/
    }
  }
  return sub_77AA60((NiD3DShader *)this, (NiObjectNET *)a2); /*0x7f4d2d*/
}
