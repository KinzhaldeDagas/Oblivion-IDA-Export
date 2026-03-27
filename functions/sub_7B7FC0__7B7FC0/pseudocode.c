char __cdecl sub_7B7FC0(NiNode *arg0, unsigned int a1, int a3, int a4, const char *a5)
{
  char v5; // bl
  char result; // al
  NiProperty *NiPropertyByID; // eax
  void **vtlb; // ebp
  NiProperty *v9; // edi
  void **v10; // eax
  unsigned int v11; // eax
  ShaderDefinition *ShaderDefinition; // eax
  ShaderDefinition *v13; // edi
  NiProperty *v14; // eax
  unsigned int i; // edi
  NiNode *v16; // eax

  v5 = 0;
  if ( !ShaderPackage )
    return 0;
  if ( arg0 )
  {
    if ( arg0->vtbl->super.super.Unk_03((NiObject *)arg0) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(arg0, 4);
      vtlb = arg0->members.effects.vtlb;
      if ( NiPropertyByID )
        v9 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) != 0xFFFFFFFF
           ? NiPropertyByID
           : 0;
      else
        v9 = 0;
      if ( vtlb )
        v10 = (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) != 0xFFFFFFFF ? vtlb : 0;
      else
        v10 = 0;
      if ( v9 && vtlb )
      {
        result = (*((int (__thiscall **)(void **, NiNode *))*v10 + 6))(v10, arg0);
        v9[4].members.m_pcName = a5;
        return result;
      }
      v11 = a1;
      if ( a1 > 0x1C )
      {
        if ( dword_B42E8C )
          dword_B42E8C("Object prepared with invalid shader index", 0);
        v11 = 1;
      }
      if ( a1 == 1 )
        v11 = sub_7D1920((NiAVObject *)arg0, a3);
      if ( !v11 )
        return 0;
      ShaderDefinition = GetShaderDefinition(v11);
      v13 = ShaderDefinition;
      if ( !ShaderDefinition )
        return 0;
      sub_4EC910((NiGeometry *)arg0, ShaderDefinition->shader);
      v5 = v13->shader->__vftable->super.super.super.UpdateInternalVars((NiShader *)v13->shader, arg0);
      v14 = NiNode_GetNiPropertyByID(arg0, 4);
      if ( v14 )
      {
        v14[4].members.m_pcName = a5;
        return v5;
      }
    }
    else if ( arg0->vtbl->super.super.Unk_02(arg0) )
    {
      for ( i = 0; arg0->members.children.end > i; ++i )
      {
        v16 = *((NiNode **)&arg0->members.children.data->vtbl + i);
        if ( v16 )
          v5 |= sub_7B7FC0(v16, a1, a3, a4, a5);
      }
    }
  }
  return v5;
}
