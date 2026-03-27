char __stdcall sub_7DD370(WaterShader *a1)
{
  int **v1; // edi
  NiProperty *NiPropertyByID; // eax
  WaterShader *v3; // esi
  BSShaderProperty *v4; // eax
  BSShaderProperty *v5; // esi
  NiProperty *v6; // eax
  char *m_pcName; // eax

  v1 = (int **)a1;
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a1, 4);
  if ( NiPropertyByID )
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xC )
      return 1;
    sub_708560(v1, (volatile LONG **)&a1, 4);
    v3 = a1;
    if ( a1 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&a1->super.member) )
      {
        if ( v3 )
          v3->super.__vftable->super.super.super.super.Destructor((NiRefObject *)v3, 1);
      }
    }
  }
  v4 = (BSShaderProperty *)FormHeapAlloc(0x88u);
  if ( v4 )
    v5 = sub_85BBE0(v4);
  else
    v5 = 0;
  v6 = NiNode_GetNiPropertyByID((NiNode *)v1, 2);
  if ( v6 )
  {
    m_pcName = (char *)v6->members.m_pcName;
    if ( m_pcName )
    {
      if ( !_strcmp(m_pcName, "lava") )
        isLava = 1;
    }
  }
  sub_405680((NiNode *)v1, v5);
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, int **))v5->vtbl + 0x16))(v5, v1) )
  {
    sub_4A1220(v1, (int)v5);
    return 0;
  }
  return 1;
}
