bool __stdcall sub_7FF350(NiNode *a1)
{
  int v1; // edi
  NiProperty *NiPropertyByID; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiNode *v4; // esi
  BSShaderPPLightingProperty *v5; // eax
  BSShaderPPLightingProperty *v6; // esi
  int v7; // esi

  v1 = (int)a1;
  NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
  v3 = InterlockedDecrement;
  if ( NiPropertyByID )
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xA )
      return 1;
    sub_708560((int **)v1, (volatile LONG **)&a1, 4);
    if ( a1 )
    {
      v4 = a1;
      if ( !v3((volatile LONG *)&a1->members) )
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1);
    }
  }
  v5 = (BSShaderPPLightingProperty *)FormHeapAlloc(0x108u);
  if ( v5 )
    v6 = sub_863430(v5);
  else
    v6 = 0;
  sub_405680((NiNode *)v1, (BSShaderProperty *)v6);
  if ( !(*(unsigned __int8 (__thiscall **)(BSShaderPPLightingProperty *, int))(*(_DWORD *)v6 + 0x58))(v6, v1) )
  {
    sub_4A1220((int **)v1, (int)v6);
    v7 = *(_DWORD *)(v1 + 0xBC);
    if ( v7 )
    {
      if ( !v3((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      *(_DWORD *)(v1 + 0xBC) = 0;
    }
    return 0;
  }
  return (*(int (__thiscall **)(BSShaderPPLightingProperty *, _DWORD))(*(_DWORD *)v6 + 0x8C))(v6, 0) != 0;
}
