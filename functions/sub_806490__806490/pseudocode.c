char __stdcall sub_806490(int ***a1)
{
  int ***v1; // edi
  NiProperty *NiPropertyByID; // eax
  NiNode *v3; // esi
  BSShaderLightingPropertyLayout_t *v4; // eax
  BSShaderLightingPropertyLayout_t *v5; // esi

  v1 = a1; /*0x8064b3*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a1, 4); /*0x8064bb*/
  if ( NiPropertyByID ) /*0x8064c2*/
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 3 ) /*0x8064d9*/
      return 1; /*0x8064d9*/
    sub_708560(v1, (volatile LONG **)&a1, 4); /*0x8064e8*/
    v3 = (NiNode *)a1; /*0x8064ed*/
    if ( a1 ) /*0x8064f3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)a1 + 1) ) /*0x8064f9*/
      {
        if ( v3 ) /*0x806505*/
          v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1); /*0x80650f*/
      }
    }
  }
  v4 = (BSShaderLightingPropertyLayout_t *)FormHeapAlloc(0x9Cu); /*0x806516*/
  if ( v4 ) /*0x80652c*/
    v5 = GeometryDecalShaderProperty_Ctor(v4); /*0x806535*/
  else
    v5 = 0; /*0x806539*/
  sub_405680((NiNode *)v1, &v5->base); /*0x806546*/
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderLightingPropertyLayout_t *, int ***))v5->base.vtbl + 0x16))(v5, v1) ) /*0x806553*/
  {
    sub_4A1220(v1, (int)v5); /*0x80655c*/
    return 0; /*0x806574*/
  }
  return 1; /*0x806563*/
}
