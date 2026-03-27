bool __stdcall sub_80B190(NiNode *a1)
{
  int v1; // edi
  NiProperty *NiPropertyByID; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiProperty *v4; // esi
  NiNode *v5; // esi
  BSShaderPPLightingProperty *v6; // eax
  BSShaderProperty *v7; // esi
  int v8; // esi

  v1 = (int)a1;
  NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
  v3 = InterlockedDecrement;
  v4 = NiPropertyByID;
  if ( NiPropertyByID )
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
      && (*((int (__thiscall **)(NiProperty *))v4->vtbl + 0x15))(v4) <= 0xA )
    {
      return 1;
    }
    sub_708560((int **)v1, (volatile LONG **)&a1, 4);
    if ( a1 )
    {
      v5 = a1;
      if ( !v3((volatile LONG *)&a1->members) )
        v5->vtbl->super.super.super.Destructor((NiRefObject *)v5, 1);
    }
  }
  v6 = (BSShaderPPLightingProperty *)FormHeapAlloc(0xF0u);
  if ( v6 )
    v7 = (BSShaderProperty *)BSShaderPPLightingProperty::BSShaderPPLightingProperty(v6);
  else
    v7 = 0;
  sub_405680((NiNode *)v1, v7);
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, int))v7->vtbl + 0x16))(v7, v1) )
  {
    sub_4A1220((int **)v1, (int)v7);
    v8 = *(_DWORD *)(v1 + 0xBC);
    if ( v8 )
    {
      if ( !v3((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      *(_DWORD *)(v1 + 0xBC) = 0;
    }
    return 0;
  }
  return (*((int (__thiscall **)(BSShaderProperty *, _DWORD))v7->vtbl + 0x23))(v7, 0) != 0;
}
