char __thiscall sub_7F4C90(BoltShader *this, NiNode *a2)
{
  NiProperty *NiPropertyByID; // eax
  BSShaderProperty *v4; // esi
  int v5; // eax
  BoltShaderProperty *v6; // eax

  NiPropertyByID = NiNode_GetNiPropertyByID(a2, 4);
  v4 = 0;
  if ( NiPropertyByID && (v5 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 1))(NiPropertyByID)) != 0 )
  {
    while ( (char *)v5 != dword_B468EC )
    {
      v5 = *(_DWORD *)(v5 + 4);
      if ( !v5 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v6 = (BoltShaderProperty *)FormHeapAlloc(0x19Cu);
    if ( v6 )
      v4 = (BSShaderProperty *)BoltShaderProperty::BoltShaderProperty(v6);
    sub_405680(a2, v4);
    if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, NiNode *))v4->vtbl + 0x16))(v4, a2) )
    {
      sub_4A1220((int **)a2, (int)v4);
      return 0;
    }
  }
  return sub_77AA60((NiD3DShader *)this, (NiObjectNET *)a2);
}
