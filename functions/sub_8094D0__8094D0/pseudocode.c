bool __stdcall sub_8094D0(NiNode *a1)
{
  NiNode *v1; // edi
  NiProperty *NiPropertyByID; // esi
  NiNode *v3; // esi
  NiNode *v4; // eax
  BSShaderProperty *v5; // esi
  volatile LONG *v6; // ebx
  void **vtlb; // esi
  volatile LONG *v9; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v1 = a1; /*0x8094f4*/
  NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4); /*0x809501*/
  if ( NiPropertyByID ) /*0x809505*/
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5 /*0x809521*/
      && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA )
    {
      return 1; /*0x809521*/
    }
    sub_708560((int ***)v1, (volatile LONG **)&a1, 4); /*0x809530*/
    if ( a1 ) /*0x80953b*/
    {
      v3 = a1; /*0x80953d*/
      if ( !InterlockedDecrement((volatile LONG *)&a1->members) ) /*0x809543*/
        v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1); /*0x809559*/
    }
  }
  v4 = (NiNode *)FormHeapAlloc(0xF0u); /*0x809560*/
  a1 = v4; /*0x809568*/
  v10 = 0; /*0x80956e*/
  if ( v4 ) /*0x809576*/
    v5 = (BSShaderProperty *)BSShaderPPLightingProperty::BSShaderPPLightingProperty((BSShaderPPLightingProperty *)v4); /*0x80957f*/
  else
    v5 = 0; /*0x809583*/
  v10 = 0xFFFFFFFF; /*0x809588*/
  sub_405680(v1, v5); /*0x809590*/
  v5->member.passInfo |= 0x800u; /*0x809595*/
  v5->member.lastRenderPassState = 0; /*0x8095a5*/
  sub_708560((int ***)v1, &v9, 0); /*0x8095ac*/
  if ( v9 ) /*0x8095b7*/
  {
    v6 = v9; /*0x8095b9*/
    if ( !InterlockedDecrement(v9 + 1) ) /*0x8095bf*/
      (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x8095d5*/
  }
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, NiNode *))v5->vtbl + 0x16))(v5, v1) ) /*0x8095df*/
  {
    sub_4A1220((int ***)v1, (int)v5); /*0x8095e8*/
    vtlb = v1->members.effects.vtlb; /*0x8095ed*/
    if ( vtlb ) /*0x8095f5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)vtlb + 1) ) /*0x8095fb*/
        (*(void (__thiscall **)(void **, int))*vtlb)(vtlb, 1); /*0x809611*/
      v1->members.effects.vtlb = 0; /*0x809613*/
    }
    return 0; /*0x809613*/
  }
  return (*((int (__thiscall **)(BSShaderProperty *, _DWORD))v5->vtbl + 0x23))(v5, 0) != 0; /*0x809640*/
}
