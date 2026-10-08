bool __stdcall sub_80B190(NiNode *a1)
{
  NiNode *v1; // edi
  NiProperty *NiPropertyByID; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiProperty *v4; // esi
  NiNode *v5; // esi
  BSShaderPPLightingProperty *v6; // eax
  BSShaderProperty *v7; // esi
  void **vtlb; // esi

  v1 = a1; /*0x80b1b4*/
  NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4); /*0x80b1bc*/
  v3 = InterlockedDecrement; /*0x80b1c1*/
  v4 = NiPropertyByID; /*0x80b1c7*/
  if ( NiPropertyByID ) /*0x80b1cb*/
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5 /*0x80b1e7*/
      && (*((int (__thiscall **)(NiProperty *))v4->vtbl + 0x15))(v4) <= 0xA )
    {
      return 1; /*0x80b1e7*/
    }
    sub_708560((int ***)v1, (volatile LONG **)&a1, 4); /*0x80b1f6*/
    if ( a1 ) /*0x80b201*/
    {
      v5 = a1; /*0x80b203*/
      if ( !v3((volatile LONG *)&a1->members) ) /*0x80b209*/
        v5->vtbl->super.super.super.Destructor((NiRefObject *)v5, 1); /*0x80b21b*/
    }
  }
  v6 = (BSShaderPPLightingProperty *)FormHeapAlloc(0xF0u); /*0x80b222*/
  if ( v6 ) /*0x80b238*/
    v7 = (BSShaderProperty *)BSShaderPPLightingProperty::BSShaderPPLightingProperty(v6); /*0x80b241*/
  else
    v7 = 0; /*0x80b245*/
  sub_405680(v1, v7); /*0x80b252*/
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, NiNode *))v7->vtbl + 0x16))(v7, v1) ) /*0x80b25f*/
  {
    sub_4A1220((int ***)v1, (int)v7); /*0x80b268*/
    vtlb = v1->members.effects.vtlb; /*0x80b26d*/
    if ( vtlb ) /*0x80b275*/
    {
      if ( !v3((volatile LONG *)vtlb + 1) ) /*0x80b27b*/
        (*(void (__thiscall **)(void **, int))*vtlb)(vtlb, 1); /*0x80b28d*/
      v1->members.effects.vtlb = 0; /*0x80b28f*/
    }
    return 0; /*0x80b28f*/
  }
  return (*((int (__thiscall **)(BSShaderProperty *, _DWORD))v7->vtbl + 0x23))(v7, 0) != 0; /*0x80b2bc*/
}
