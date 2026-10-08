// HairShader vtable +0x18 node preparation. Ensures property kind 4 has subtype 6: accepts an existing subtype-6 property, otherwise removes it, allocates/constructs HairShaderProperty, attaches it, performs virtual setup/validation, and returns success. This ties HairShader's concrete consumer to HairShaderProperty's producer.
bool __stdcall HairShader_EnsureSubtype6PropertyOnNode(NiNode *node)
{
  NiNode *v1; // edi
  NiProperty *NiPropertyByID; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiNode *v4; // esi
  HairShaderProperty *v5; // eax
  BSShaderProperty *v6; // esi
  void **vtlb; // esi

  v1 = node; /*0x80dc64*/
  NiPropertyByID = NiNode_GetNiPropertyByID(node, 4); /*0x80dc6c*/
  v3 = InterlockedDecrement; /*0x80dc73*/
  if ( NiPropertyByID ) /*0x80dc79*/
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 6 ) /*0x80dc90*/
      return 1; /*0x80dc90*/
    sub_708560((int ***)v1, (volatile LONG **)&node, 4); /*0x80dc9f*/
    if ( node ) /*0x80dcaa*/
    {
      v4 = node; /*0x80dcac*/
      if ( !v3((volatile LONG *)&node->members) ) /*0x80dcb2*/
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x80dcc4*/
    }
  }
  v5 = (HairShaderProperty *)FormHeapAlloc(0x170u); /*0x80dccb*/
  if ( v5 ) /*0x80dce1*/
    v6 = (BSShaderProperty *)HairShaderProperty::HairShaderProperty(v5); /*0x80dcea*/
  else
    v6 = 0; /*0x80dcee*/
  sub_405680(v1, v6); /*0x80dcfb*/
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, NiNode *))v6->vtbl + 0x16))(v6, v1) ) /*0x80dd08*/
  {
    sub_4A1220((int ***)v1, (int)v6); /*0x80dd11*/
    vtlb = v1->members.effects.vtlb; /*0x80dd16*/
    if ( vtlb ) /*0x80dd1e*/
    {
      if ( !v3((volatile LONG *)vtlb + 1) ) /*0x80dd24*/
        (*(void (__thiscall **)(void **, int))*vtlb)(vtlb, 1); /*0x80dd36*/
      v1->members.effects.vtlb = 0; /*0x80dd38*/
    }
    return 0; /*0x80dd38*/
  }
  return (*((int (__thiscall **)(BSShaderProperty *, _DWORD))v6->vtbl + 0x23))(v6, 0) != 0; /*0x80dd65*/
}
