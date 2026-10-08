char __stdcall sub_7EF870(int ***a1)
{
  int ***v1; // edi
  NiProperty *NiPropertyByID; // esi
  NiNode *v3; // esi
  BSShaderProperty *v4; // eax
  BSShaderProperty *v5; // esi

  v1 = a1; /*0x7ef893*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a1, 4); /*0x7ef8a0*/
  if ( NiPropertyByID ) /*0x7ef8a4*/
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xF ) /*0x7ef8bb*/
    {
      (*((void (__thiscall **)(NiProperty *, int ***))NiPropertyByID->vtbl + 0x16))(NiPropertyByID, v1); /*0x7ef961*/
      return 1; /*0x7ef961*/
    }
    sub_708560(v1, (volatile LONG **)&a1, 4); /*0x7ef8ca*/
    v3 = (NiNode *)a1; /*0x7ef8cf*/
    if ( a1 ) /*0x7ef8d5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)a1 + 1) ) /*0x7ef8db*/
      {
        if ( v3 ) /*0x7ef8e7*/
          v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1); /*0x7ef8f1*/
      }
    }
  }
  v4 = (BSShaderProperty *)FormHeapAlloc(0xACu); /*0x7ef8f8*/
  if ( v4 ) /*0x7ef90e*/
    v5 = sub_7EFA10(v4); /*0x7ef917*/
  else
    v5 = 0; /*0x7ef91b*/
  sub_405680((NiNode *)v1, v5); /*0x7ef928*/
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, int ***))v5->vtbl + 0x16))(v5, v1) ) /*0x7ef935*/
  {
    sub_4A1220(v1, (int)v5); /*0x7ef93e*/
    return 0; /*0x7ef956*/
  }
  return 1; /*0x7ef945*/
}
