char __thiscall sub_7E44E0(NiD3DShader *this, NiNode *a2)
{
  NiObjectNET *v3; // edi
  NiProperty *NiPropertyByID; // eax
  NiNode *v5; // esi
  ParticleShaderProperty *v6; // eax
  BSShaderProperty *v7; // esi

  v3 = (NiObjectNET *)a2;
  NiPropertyByID = NiNode_GetNiPropertyByID(a2, 4);
  if ( NiPropertyByID )
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xE )
      return sub_77AA60(this, v3);
    sub_708560((int **)v3, (volatile LONG **)&a2, 4);
    if ( a2 )
    {
      v5 = a2;
      if ( !InterlockedDecrement((volatile LONG *)&a2->members) )
        v5->vtbl->super.super.super.Destructor((NiRefObject *)v5, 1);
    }
  }
  v6 = (ParticleShaderProperty *)FormHeapAlloc(0x128u);
  if ( v6 )
    v7 = (BSShaderProperty *)ParticleShaderProperty::ParticleShaderProperty(v6);
  else
    v7 = 0;
  sub_405680((NiNode *)v3, v7);
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, NiObjectNET *))v7->vtbl + 0x16))(v7, v3) )
  {
    sub_4A1220((int **)v3, (int)v7);
    return 0;
  }
  return sub_77AA60(this, v3);
}
