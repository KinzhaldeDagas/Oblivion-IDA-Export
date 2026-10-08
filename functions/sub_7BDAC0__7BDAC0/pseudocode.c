char __stdcall sub_7BDAC0(int ***a1)
{
  int ***v1; // edi
  NiProperty *NiPropertyByID; // esi
  NiNode *v3; // esi
  SkyShaderProperty *v4; // eax
  BSShaderProperty *v5; // esi

  v1 = a1; /*0x7bdae3*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a1, 4); /*0x7bdaf0*/
  if ( NiPropertyByID ) /*0x7bdaf4*/
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB ) /*0x7bdb0b*/
    {
      (*((void (__thiscall **)(NiProperty *, int ***))NiPropertyByID->vtbl + 0x16))(NiPropertyByID, v1); /*0x7bdbb1*/
      return 1; /*0x7bdbb1*/
    }
    sub_708560(v1, (volatile LONG **)&a1, 4); /*0x7bdb1a*/
    v3 = (NiNode *)a1; /*0x7bdb1f*/
    if ( a1 ) /*0x7bdb25*/
    {
      if ( !InterlockedDecrement((volatile LONG *)a1 + 1) ) /*0x7bdb2b*/
      {
        if ( v3 ) /*0x7bdb37*/
          v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1); /*0x7bdb41*/
      }
    }
  }
  v4 = (SkyShaderProperty *)FormHeapAlloc(0x8Cu); /*0x7bdb48*/
  if ( v4 ) /*0x7bdb5e*/
    v5 = (BSShaderProperty *)SkyShaderProperty::SkyShaderProperty(v4); /*0x7bdb67*/
  else
    v5 = 0; /*0x7bdb6b*/
  sub_405680((NiNode *)v1, v5); /*0x7bdb78*/
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, int ***))v5->vtbl + 0x16))(v5, v1) ) /*0x7bdb85*/
  {
    sub_4A1220(v1, (int)v5); /*0x7bdb8e*/
    return 0; /*0x7bdba6*/
  }
  return 1; /*0x7bdb95*/
}
