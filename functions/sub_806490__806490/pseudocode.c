char __stdcall sub_806490(NiNode *a1)
{
  int **v1; // edi
  NiProperty *NiPropertyByID; // eax
  NiNode *v3; // esi
  BSShaderLightingProperty *v4; // eax
  BSShaderProperty *v5; // esi

  v1 = (int **)a1;
  NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
  if ( NiPropertyByID )
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 3 )
      return 1;
    sub_708560(v1, (volatile LONG **)&a1, 4);
    v3 = a1;
    if ( a1 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&a1->members) )
      {
        if ( v3 )
          v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1);
      }
    }
  }
  v4 = (BSShaderLightingProperty *)FormHeapAlloc(0x9Cu);
  if ( v4 )
    v5 = (BSShaderProperty *)sub_864750(v4);
  else
    v5 = 0;
  sub_405680((NiNode *)v1, v5);
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, int **))v5->vtbl + 0x16))(v5, v1) )
  {
    sub_4A1220(v1, (int)v5);
    return 0;
  }
  return 1;
}
